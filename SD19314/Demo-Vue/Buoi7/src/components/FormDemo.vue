<script setup>
    defineModel("xeMayForm", {
        default: {
            "ma": "",
            "ten": "",
            "gia": "",
            "hang": "",
            "gioiTinh": ""
        }
    }
    )
</script>

<template>
    <span>Ma: </span> <input type="text" v-model="xeMayForm.ma"> <br>
    <span>Ten: </span> <input type="text" v-model="xeMayForm.ten"> <br>
    <span>Gia: </span> <input type="text" v-model="xeMayForm.gia"> <br>
    <span>Hang</span> <select v-model="xeMayForm.hang">
        <option value="Samsung">Samsung</option>
        <option value="Apple">Apple</option>
        <option value="Oppo">Oppo</option>
    </select> <br>
    <span>Gioi tinh</span>
    Nam <input type="radio" v-model="xeMayForm.gioiTinh" value="Nam">
    Nu <input type="radio" v-model="xeMayForm.gioiTinh" value="Nu"> <br>
</template>