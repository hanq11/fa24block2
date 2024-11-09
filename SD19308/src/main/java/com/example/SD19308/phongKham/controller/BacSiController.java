package com.example.SD19308.phongKham.controller;

import com.example.SD19308.phongKham.repository.BacSiRepository;
import com.example.SD19308.phongKham.repository.PhongKhamRepository;
import jakarta.servlet.ServletException;
import jakarta.servlet.annotation.WebServlet;
import jakarta.servlet.http.HttpServlet;
import jakarta.servlet.http.HttpServletRequest;
import jakarta.servlet.http.HttpServletResponse;

import java.io.IOException;

@WebServlet(name = "BacSiController", value = {
        "/bac-si/hien-thi"
})
public class BacSiController extends HttpServlet {
    BacSiRepository bacSiRepository = new BacSiRepository();
    PhongKhamRepository phongKhamRepository = new PhongKhamRepository();

    @Override
    protected void doGet(HttpServletRequest req, HttpServletResponse resp) throws ServletException, IOException {
        String uri = req.getRequestURI();
        if(uri.contains("hien-thi")) {
            hienThi(req, resp);
        }
    }

    private void hienThi(HttpServletRequest req, HttpServletResponse resp) throws ServletException, IOException {
        req.setAttribute("listPhongKham", phongKhamRepository.getAll());
        req.setAttribute("listBacSi", bacSiRepository.getAll());
        req.getRequestDispatcher("/bac-si/hien-thi.jsp").forward(req, resp);
    }
}
