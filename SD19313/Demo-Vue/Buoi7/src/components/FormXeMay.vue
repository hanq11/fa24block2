<script setup>
    defineModel('xeMayForm', {
        default: {
          "ma": "",
          "ten": "",
          "gia": ""  
        }
    })
</script>
<template>
    Ma <input type="text" v-model="xeMayForm.ma"> <br>
    Ten <input type="text" v-model="xeMayForm.ten"> <br>
    Gia: <input type="text" v-model="xeMayForm.gia"> <br>
</template>
