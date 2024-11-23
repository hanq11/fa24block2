<script setup>

    let email = defineModel("emailTuCha")
    const thayDoiEmailTuCon = () => {
        email.value = "con@gmail.com";
    }
</script>

<template>
    <span>Email: </span>
    <input type="text" v-model="email"> <br>
    <p>Email tu Component con: {{ email }}</p>
    <button @click="thayDoiEmailTuCon">Thay doi tu con</button>
</template>