<script setup>
    let demoProps = defineProps({
        demoString: String,
        demoNumber: Number
    })
    
    let demoEmit = defineEmits("cong1")

    const tangGiaTri = () => {
        demoEmit("cong1")
    }
</script>

<template>
    <h1>Demo component</h1>
    <p>Gia tri String props component con: {{ demoProps.demoString }}</p>
    <p>Gia tri Number props component con: {{ demoProps.demoNumber }}</p>
    <button @click="tangGiaTri">Tang gia tri</button>
</template>