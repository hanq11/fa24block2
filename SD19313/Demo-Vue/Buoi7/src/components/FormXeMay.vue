<script setup>
    defineModel('xeMayForm', {
        default: {
          "ma": "",
          "ten": "",
          "gia": "",
          "hang": "",
          "gioiTinh":"" 
        }
    })
</script>
<template>
    Ma <input type="text" v-model="xeMayForm.ma"> <br>
    Ten <input type="text" v-model="xeMayForm.ten"> <br>
    Gia: <input type="text" v-model="xeMayForm.gia"> <br>
    Hang: <select v-model="xeMayForm.hang">
        <option value="hang1">Hang 1</option>
        <option value="hang2">Hang 2</option>
        <option value="hang3">Hang 3</option>
    </select> <br>
    Gioi tinh: Nam <input type="radio" v-model="xeMayForm.gioiTinh" value="true">
    Nu <input type="radio" v-model="xeMayForm.gioiTinh" value="false"> <br>
</template>
