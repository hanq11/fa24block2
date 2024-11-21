<%--
  Created by IntelliJ IDEA.
  User: syn
  Date: 21/11/2024
  Time: 12:47
  To change this template use File | Settings | File Templates.
--%>
<%@ page contentType="text/html;charset=UTF-8" language="java" %>
<html>
<head>
    <title>Title</title>
</head>
<body>
    ${message} <br>
    <form action="/demo-filter/login" method="post">
        Ten dang nhap: <input type="text" name="username"> <br>
        Mat khau: <input type="text" name="password"> <br>
        <button type="submit">Dang nhap</button>
    </form>
</body>
</html>
