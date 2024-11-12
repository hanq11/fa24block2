<%@ taglib prefix="c" uri="http://java.sun.com/jsp/jstl/core" %>
<%--
  Created by IntelliJ IDEA.
  User: syn
  Date: 12/11/2024
  Time: 13:01
  To change this template use File | Settings | File Templates.
--%>
<%@ page contentType="text/html;charset=UTF-8" language="java" %>
<html>
<head>
    <title>Title</title>
</head>
<body>
    <h2>Sua bac si</h2>
    <form action="/bac-si/update" method="post">
        Id: <input type="text" name="id" value="${bacSi.id}"> <br>
        Ten: <input type="text" name="ten" value="${bacSi.ten}"> <br>
        Dia chi: <input type="text" name="diaChi"  value="${bacSi.diaChi}"> <br>
        Luong: <input type="text" name="luong"  value="${bacSi.luong}"> <br>
        Phong kham:
        <select name="phongKham">
            <c:forEach items="${listPhongKham}" var="pk">
                <option value="${pk.id}" label="${pk.ten}" ${bacSi.phongKham.id == pk.id ? "selected" : ""}></option>
            </c:forEach>
        </select> <br>
        <button type="submit">Sua</button>
    </form>
</body>
</html>
