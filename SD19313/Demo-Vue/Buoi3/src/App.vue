<script setup>
import { ref, reactive } from 'vue';

let count = ref(0);
const add = () => {
    count.value++;
    console.log(count.value);
    nguoiDung.chieuCao++
}

let userName = ref("VueJS")

let user = ref({
    name: "Nguyen Van A",
    tuoi: 19
})
user.value.name = "HOHO"

let nguoiDung = reactive({
    ten: "Tran Thi C",
    chieuCao: 190
})

let danhSach = [
    {
        "mssv": "123",
        "ten": "Nguyen Van A",
        "tuoi": 19
    },
    {
        "mssv": "234",
        "ten": "Tran Van B",
        "tuoi": 29
    },
    {
        "mssv": "345",
        "ten": "Pham Van D",
        "tuoi": 39
    }
]
</script>

<template>
    <h1>Count: {{ count }}</h1> <br>
    <button @click="add()">Add</button> <br>
    <input type="text" v-model="userName"> <br>
    <p>Xin chao: {{ userName }}</p>
    <p>Xin chao ref: {{ user.name }} co tuoi la {{ user.tuoi }}</p>
    <p>Xin chao {{ nguoiDung.ten }} co chieu cao la: {{ nguoiDung.chieuCao }}</p>
    <br>
    <h2>Danh sach</h2>
    <ul>
        <li v-for="(sv, index) in danhSach" :key="sv.mssv">
            {{ index + 1 }} {{ sv.ten }} co tuoi la: {{ sv.tuoi }}
        </li>
    </ul>
    <h1>Bang</h1>
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
                <td>{{ index + 1 }}</td>
                <td>{{ sv.mssv }}</td>
                <td>{{ sv.ten }}</td>
                <td>{{ sv.tuoi }}</td>
            </tr>
        </tbody>
    </table>

</template>