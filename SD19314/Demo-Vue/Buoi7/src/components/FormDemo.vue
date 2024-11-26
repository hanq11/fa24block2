<script setup>
    defineModel("xeMayForm", {
        default: {
            "ma": "",
            "ten": "",
            "gia": ""
        }
    }
    )
</script>

<template>
    <span>Ma: </span> <input type="text" v-model="xeMayForm.ma"> <br>
    <span>Ten: </span> <input type="text" v-model="xeMayForm.ten"> <br>
    <span>Gia: </span> <input type="text" v-model="xeMayForm.gia"> <br>
</template>