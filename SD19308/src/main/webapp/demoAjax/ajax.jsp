<%--
  Created by IntelliJ IDEA.
  User: syn
  Date: 23/11/2024
  Time: 12:31
  To change this template use File | Settings | File Templates.
--%>
<%@ page contentType="text/html;charset=UTF-8" language="java" %>
<html>
<head>
    <title>Title</title>
    <script src="https://ajax.googleapis.com/ajax/libs/jquery/3.7.1/jquery.min.js"></script>
    <script>
        function getData() {
            $.ajax({
                url: "/api/ajax/demo",
                type: "get",
                dataType: "json",
                success: function(response) {
                    console.log(response)
                    document.getElementById("data").innerHTML
                        = "MSSV: " + response.mssv + " Ten: " + response.ten
                        + " Tuoi: " + response.tuoi
                },
                error: function() {
                    console.log("loi")
                    document.getElementById("data").innerHTML = "loi"
                }
            })
        }
    </script>
</head>
<body>
    <h1>Demo AJAX</h1>
    <button onclick="getData()">Get data</button>
    <div id="data"></div>
</body>
</html>
