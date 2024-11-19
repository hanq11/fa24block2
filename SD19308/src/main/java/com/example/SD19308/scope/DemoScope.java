package com.example.SD19308.scope;

import jakarta.servlet.Servlet;
import jakarta.servlet.ServletContext;
import jakarta.servlet.ServletException;
import jakarta.servlet.annotation.WebServlet;
import jakarta.servlet.http.HttpServlet;
import jakarta.servlet.http.HttpServletRequest;
import jakarta.servlet.http.HttpServletResponse;
import jakarta.servlet.http.HttpSession;

import java.io.IOException;

@WebServlet(name = "DemoScope", value = {
        "/demo-scope"
})
public class DemoScope extends HttpServlet {
    @Override
    protected void doGet(HttpServletRequest req, HttpServletResponse resp) throws ServletException, IOException {
        // Request scope
        req.setAttribute("name", "From Demo Scope");
        // Session scope
        HttpSession session = req.getSession();
        session.setAttribute("sessionMessage", "From Session");
        // Application scope
        ServletContext application = getServletContext();
        application.setAttribute("applicationMessage", "From Demo scope");

        req.getRequestDispatcher("/demo-scope-2").forward(req, resp);
    }
}
