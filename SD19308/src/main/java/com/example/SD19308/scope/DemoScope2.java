package com.example.SD19308.scope;

import jakarta.servlet.ServletException;
import jakarta.servlet.annotation.WebServlet;
import jakarta.servlet.http.HttpServlet;
import jakarta.servlet.http.HttpServletRequest;
import jakarta.servlet.http.HttpServletResponse;
import jakarta.servlet.http.HttpSession;

import java.io.IOException;

@WebServlet(name = "DemoScope2", value = {
        "/demo-scope-2"
})
public class DemoScope2 extends HttpServlet {
    @Override
    protected void doGet(HttpServletRequest req, HttpServletResponse resp) throws ServletException, IOException {
        // Request scope
        String name = (String) req.getAttribute("name");
        System.out.println(name);
        // Session scope
        HttpSession session = req.getSession();
        String sessionMessage = (String) session.getAttribute("sessionMessage");
        req.setAttribute("sessionMessage", sessionMessage);

        req.getRequestDispatcher("/demo-scope/hien-thi.jsp").forward(req, resp);
    }
}
