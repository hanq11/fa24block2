<%--
  Created by IntelliJ IDEA.
  User: syn
  Date: 19/11/2024
  Time: 13:20
  To change this template use File | Settings | File Templates.
--%>
<%@ page contentType="text/html;charset=UTF-8" language="java" %>
<html>
<head>
    <title>Title</title>
</head>
<%
    pageContext.setAttribute("pageMessage", "From JSP");
    String pageMessage = (String) pageContext.getAttribute("pageMessage");
%>
<body>
    Message lay tu req la: ${name} <br>
    Message lay tu session la: ${sessionScope.sessionMessage} <br>
    Message lay tu application la: ${applicationScope.applicationMessage} <br>
    Message lay tu page la: ${pageMessage}
</body>
</html>
