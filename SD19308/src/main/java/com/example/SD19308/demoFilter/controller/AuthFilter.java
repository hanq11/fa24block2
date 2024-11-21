package com.example.SD19308.demoFilter.controller;

import jakarta.servlet.*;
import jakarta.servlet.annotation.WebFilter;
import jakarta.servlet.annotation.WebServlet;
import jakarta.servlet.http.HttpFilter;
import jakarta.servlet.http.HttpServletRequest;
import jakarta.servlet.http.HttpServletResponse;
import jakarta.servlet.http.HttpSession;

import java.io.IOException;

@WebFilter(filterName = "AuthFilter", value = {
        "/nhan-vien/*",
        "/quan-ly/*"
})
public class AuthFilter implements Filter {
    @Override
    public void init(FilterConfig filterConfig) throws ServletException {
        Filter.super.init(filterConfig);
    }

    @Override
    public void doFilter(ServletRequest request, ServletResponse response, FilterChain chain) throws IOException, ServletException {
        HttpServletRequest req = (HttpServletRequest) request;
        HttpServletResponse resp = (HttpServletResponse) response;
        HttpSession session = req.getSession();

        String taiKhoan = (String) session.getAttribute("taiKhoan");
        String chucVu = (String) session.getAttribute("chucVu");

        if(taiKhoan != null) {
            if(chucVu.equals("ql")) {
                chain.doFilter(req, resp);
            } else if(chucVu.equals("nv")) {
                String uri = req.getRequestURI();
                if(uri.contains("nhan-vien")) {
                    chain.doFilter(req, resp);
                } else {
                    req.getRequestDispatcher("/demo-filter/403.jsp").forward(req, resp);
                }
            }
        } else {
            resp.sendRedirect("/demo-filter/login");
        }
    }

    @Override
    public void destroy() {
        Filter.super.destroy();
    }
}
