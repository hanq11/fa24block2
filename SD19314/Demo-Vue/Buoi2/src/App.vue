// setup - Su dung composition api
// Khong co chu setup - Su dung option api
<script setup>
  const helloWorld = "Hello world"
  const phuongThuc = () => { // es6, arrow function
    return "Phuong thuc"
  }
  const firstButton = "<button class='btn bg-success'>Nut</button>";
  const btnClass = "btn bg-success"
  const btnId = "id"

  const canhBao = () => {
    alert("Ban vua nhan vao button nay")
  }
</script>
<template>
  <p>{{ helloWorld + " SD19314" }}</p>
  <p>{{ phuongThuc() }}</p>
  <div>{{ firstButton }}</div>
  <div v-html="firstButton" :class="btnClass" :id="btnId"></div>
  <button @click="canhBao()">Thong bao</button>
</template>