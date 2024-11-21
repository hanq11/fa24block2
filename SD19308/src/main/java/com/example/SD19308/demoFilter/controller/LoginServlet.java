package com.example.SD19308.demoFilter.controller;

import jakarta.servlet.ServletException;
import jakarta.servlet.annotation.WebServlet;
import jakarta.servlet.http.HttpServlet;
import jakarta.servlet.http.HttpServletRequest;
import jakarta.servlet.http.HttpServletResponse;
import jakarta.servlet.http.HttpSession;

import java.io.IOException;

@WebServlet(name = "LoginServlet", value = {
        "/demo-filter/login",
        "/demo-filter/logout"
})
public class LoginServlet extends HttpServlet {
    @Override
    protected void doGet(HttpServletRequest req, HttpServletResponse resp) throws ServletException, IOException {
        String uri = req.getRequestURI();
        if(uri.contains("login")) {
            req.getRequestDispatcher("/demo-filter/login.jsp").forward(req, resp);
        } else {
            HttpSession session = req.getSession();
            // Huy tat ca du lieu trong session
            session.invalidate();
            resp.sendRedirect("/demo-filter/login");
        }
    }

    @Override
    protected void doPost(HttpServletRequest req, HttpServletResponse resp) throws ServletException, IOException {
        HttpSession session = req.getSession();
        String username = req.getParameter("username");
        String password = req.getParameter("password");
        if(
                (username.equals("nv") && password.equals("nv"))
                || (username.equals("ql") && password.equals("ql"))
        ) {
                session.setAttribute("taiKhoan", username);
                if(username.equals("nv")) {
                    session.setAttribute("chucVu", "nv");
                    resp.sendRedirect("/nhan-vien/hien-thi");
                } else if(username.equals("ql")) {
                    session.setAttribute("chucVu", "ql");
                    resp.sendRedirect("/quan-ly/hien-thi");
                }

        } else {
            req.setAttribute("message", "Sai thong tin dang nhap");
            req.getRequestDispatcher("/demo-filter/login.jsp").forward(req, resp);
        }
    }
}
