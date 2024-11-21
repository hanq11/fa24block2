<script setup>
  import { ref } from 'vue';

  let trangThaiDangNhap = ref(true);

  const toggleLogin = () => {
    trangThaiDangNhap.value = !trangThaiDangNhap.value;
  }

  let step = ref(1)

  const thayDoiStep = () => {
    if(step.value == 1) {
      step.value = 2;
    } else if(step.value == 2) {
      step.value = 3;
    } else {
      step.value = 1;
    }
  }

  let trangThaiHienThi = ref(false)

  const hienThi = () => {
    trangThaiHienThi.value = !trangThaiHienThi.value
  }

  let ten = ref('')
  let a = ref(0)
  let b = ref(0)
  let dapAn = ref(0)

  const tinhToan = () => {
    dapAn.value = Number(a.value) + Number(b.value);
  }

  let gioiTinh = ref('')
</script>

<template>
  <div>
    <h3>Su dung v-if</h3>
    <h3 v-if="trangThaiDangNhap">Ban da dang nhap</h3>
    <h3 v-else>Ban chua dang nhap</h3>
    
    <h3>Su dung toan tu ba ngoi</h3>
    <h3> {{ trangThaiDangNhap ? "Ban da dang nhap" : "Ban chua dang nhap" }} </h3>
    <button @click="toggleLogin()">{{ trangThaiDangNhap ? "Dang Xuat" : "Dang nhap" }}</button>

    <h3>Su dung v-if v-else-if</h3>
    <h3 v-if="step == 1">Gioi thieu</h3>
    <h3 v-else-if="step == 2">Cai dat</h3>
    <h3 v-else>Hoan thanh</h3>
    <h3>Su dung toan tu ba ngoi</h3>
    <h3>{{ step == 1 ? "Gioi thieu" : step == 2 ? "Cai dat" : "Hoan thanh" }}</h3>
    <button @click="thayDoiStep()">Thay doi</button> <br>
    <button @click="hienThi()">Hien thi v-show</button>
    <h3 v-show="trangThaiHienThi">The h3 nay su dung v-show</h3>
    <h3 v-if="trangThaiHienThi">The h3 nay su dung v-if</h3>
    
    <h3>Demo form</h3>
    <input type="text" v-model="ten"> <br>
    <h3>Ten cua ban la: {{ ten }}</h3>
    <h3>Nhap vao so a: </h3>
    <input type="text" v-model="a">
    <h3>Nhap vao so b: </h3>
    <input type="text" v-model="b"> <br>
    <h3>Dap an la: {{ dapAn }}</h3>
    <button @click="tinhToan">Tinh toan</button> <br>
    Nam <input type="radio" name="gt" v-model="gioiTinh" value="Nam">
    Nu <input type="radio" name="gt" v-model="gioiTinh" value="Nu"> <br>
    <p>Gioi tinh cua ban la: {{ gioiTinh }}</p>

  </div>
</template>