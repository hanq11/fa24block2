<script setup>
    import { ref } from 'vue';
    
    let trangThaiDangNhap = ref(false);

    const toggleLogin = () => {
        trangThaiDangNhap.value = !trangThaiDangNhap.value
    }

    let step = ref(1)
    const chuyenStep = () => {
        if(step.value == 1) {
            step.value = 2;
        } else if(step.value == 2) {
            step.value = 3;
        } else {
            step.value = 1;
        }
    }

    let hienThi = ref(true)
    const anHien = () => {
        hienThi.value = !hienThi.value;
    }

    let ten = ref('')

    let a = ref(0)
    let b = ref(0)
    let dapAn = ref(0)
    const tinhToan = () => {
        dapAn.value = Number(a.value) + Number(b.value)
    }

    let gioiTinh = ref("")
</script>

<template>
    <div>
        <h3>v-if v-else</h3>
        <h3 v-if="trangThaiDangNhap">Da dang nhap</h3>
        <h3 v-else>Chua dang nhap</h3> <br>
        
        <h3>Toan tu ba ngoi</h3>
        <h3>{{ trangThaiDangNhap ? "Da dang nhap" : "Chua dang nhap" }}</h3> <br>
        <button @click="toggleLogin()">{{ trangThaiDangNhap ? "Dang xuat" : "Dang nhap" }}</button>
        
        <h3>If else-if else</h3>
        <h3 v-if="step == 1">Gioi Thieu</h3>
        <h3 v-else-if="step == 2">Cai dat</h3>
        <h3 v-else>Hoan thanh</h3>

        <h3>Toan tu ba ngoi</h3>
        <h3>
            {{ 
                step == 1 ? "Gioi thieu" : step == 2 ? "Cai dat" : "Hoan thanh"
            }}
        </h3>
        <button @click="chuyenStep()">Chuyen step</button> <br>

        <button @click="anHien()">An hien</button> <br>
        <h3 v-show="hienThi">Lop hoc co n nguoi v-show</h3>
        <h3 v-if="hienThi">Lop hoc co n nguoi v-if</h3>

        <h3>Form</h3>
        <span>Nhap vao ten cua ban: </span>
        <input type="text" v-model="ten"> <br> 
        <span>Ten cua ban la: {{ ten }}</span> <br>

        <span>Gia tri a: </span>
        <input type="text" v-model="a"> <br>
        
        <span>Gia tri b: </span>
        <input type="text" v-model="b"> <br>

        <span>Dap an la: {{ dapAn }}</span> <br>
        <button @click="tinhToan()">Tinh toan</button><br>
        Nam <input type="radio" name="gender" v-model="gioiTinh" value="nam"> 
        Nu <input type="radio" name="gender" v-model="gioiTinh" value="nu"> <br>
        <span>Gioi tinh cua ban la: {{ gioiTinh }}</span>
    </div>
</template>