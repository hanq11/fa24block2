<script setup>
    let email = defineModel("emailFromCha")
    const thayDoiEmailTuCon = () => {
        email.value = "thayTuCon@gmail.com"
    }
</script>

<template>
    Email: <input type="text" v-model="email"> <br>
    <p>Email tu con: {{ email }}</p>
    <button @click="thayDoiEmailTuCon">Thay tu con</button>
</template>