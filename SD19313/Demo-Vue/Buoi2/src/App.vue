// setup: composition API
// Khong co chu setup: option API
<script setup>
  const helloWorld = "Hello World"
  const testMethod = () => {
    return "Phuong thuc"
  }
  const helloButton = "<button class='btn btn-success'>Button</button>"
  const helloClass = "hello-world"
  const id = "hello-id"
  const thongBao = () => {
    alert("Ban vua an vao button")
  }
</script>

<template>
  <p>{{ helloWorld + " SOF308" }}</p>
  <p>{{ testMethod() }}</p>
  <div v-html="helloButton" :class="helloClass" :id="id"></div>
  <button @click="thongBao()">Thong bao</button>
</template>