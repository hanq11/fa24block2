<script setup>
import { ref, reactive } from 'vue';

let count = ref(0);

const add = () => {
  count.value++
  console.log(count.value)
  nhanVien.tuoi++
  danhSach.value.push({
    mssv: "345",
    ten: "Pham van C",
    tuoi: 39
  })
}

let userName = ref("VueJS")

let nguoiDung = ref({
  name: "nguyen van a",
  age: 19
})
nguoiDung.value.name = "Tran Anh B"

let nhanVien = reactive({
  ten: "Nguyen Van B",
  tuoi: 20
})

let danhSach = ref([
  {
    mssv: "123",
    ten: "nguyen van a",
    tuoi: 19
  },
  {
    mssv: "234",
    ten: "Tran van B",
    tuoi: 27
  },
  {
    mssv: "345",
    ten: "Pham van C",
    tuoi: 39
  }
])

</script>

<template>
  <p>Count: {{ count }}</p> <br>
  <button @click="add()">Add</button> <br>
  <input type="text" v-model="userName"> <br>
  <p>Xin chao: {{ userName }}</p> <br>
  <p>Xin chao {{ nguoiDung.name }} co tuoi la: {{ nguoiDung.age }}</p> <br>
  <p>Xin chao {{ nhanVien.ten }} co tuoi la: {{ nhanVien.tuoi }}</p>
  <p>Danh sach</p>
  <ul>
    <li v-for="(sv, index) in danhSach" :key="sv.mssv">
     {{ index + 1 }} : {{ sv.mssv }} ten la: {{ sv.ten }} co tuoi la: {{ sv.tuoi }}
    </li>
  </ul>
  <p>Bang</p>
  <table>
    <thead>
      <tr>
        <th>STT</th>
        <th>MSSV</th>
        <th>Ten</th>
        <th>Tuoi</th>
      </tr>
    </thead>
    <tbody>
      <tr v-for="(sv, index) in danhSach" :key="sv.mssv">
        <td>{{ index+1 }}</td>
        <td>{{ sv.mssv }}</td>
        <td>{{ sv.ten }}</td>
        <td>{{ sv.tuoi }}</td>
      </tr>
    </tbody>
  </table>
</template>