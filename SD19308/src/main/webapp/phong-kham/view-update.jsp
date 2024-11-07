<%--
  Created by IntelliJ IDEA.
  User: syn
  Date: 31/10/2024
  Time: 12:59
  To change this template use File | Settings | File Templates.
--%>
<%@ page contentType="text/html;charset=UTF-8" language="java" %>
<html>
<head>
    <title>Title</title>
</head>
<body>
    <form action="/phong-kham/update" method="post">
        Id: <input type="text" name="id" value="${phongKham.id}"> <br>
        Ten: <input type="text" name="ten" value="${phongKham.ten}"> <br>
        So nha: <input type="text" name="soNha" value="${phongKham.soNha}"> <br>
        <button type="submit">Update</button>
    </form>
</body>
</html>
