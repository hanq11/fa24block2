package com.example.SD19308.xeMay.controller;

import com.example.SD19308.xeMay.repository.XeMayRepository;
import jakarta.servlet.ServletException;
import jakarta.servlet.annotation.WebServlet;
import jakarta.servlet.http.HttpServlet;
import jakarta.servlet.http.HttpServletRequest;
import jakarta.servlet.http.HttpServletResponse;

import java.io.IOException;

@WebServlet(name = "XeMayController", value = {
        "/xe-may/hien-thi"
})
public class XeMayController extends HttpServlet {
    XeMayRepository xeMayRepository = new XeMayRepository();

    @Override
    protected void doGet(HttpServletRequest req, HttpServletResponse resp) throws ServletException, IOException {
        String uri = req.getRequestURI();
        if(uri.contains("hien-thi")) {
            hienThi(req, resp);
        }

    }

    private void hienThi(HttpServletRequest req, HttpServletResponse resp) throws ServletException, IOException {
        req.setAttribute("danhSach", xeMayRepository.getAll());
        req.getRequestDispatcher("/xe-may/hien-thi.jsp").forward(req, resp);
    }
}
