package com.example.SD19308.demoAjax;

import com.google.gson.Gson;
import jakarta.servlet.ServletException;
import jakarta.servlet.annotation.WebServlet;
import jakarta.servlet.http.HttpServlet;
import jakarta.servlet.http.HttpServletRequest;
import jakarta.servlet.http.HttpServletResponse;

import java.io.IOException;
import java.io.PrintWriter;

@WebServlet(name = "AjaxController", value = {
        "/api/ajax/demo"
})
public class AjaxController extends HttpServlet {
    @Override
    protected void doGet(HttpServletRequest req, HttpServletResponse resp) throws ServletException, IOException {
        SinhVien sv = new SinhVien("PH0001", "Nguyen Van A", 20);
        // Chuyen Object sang string json
        Gson gson = new Gson();
        String data = gson.toJson(sv);
        // Chuyen doi kieu du lieu cua response
        resp.setContentType("application/json");
        // Hien thi len man hinh
        PrintWriter pw = resp.getWriter();
        pw.println(data);
        pw.flush();
    }
}
