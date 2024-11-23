<script setup>

const demoProps = defineProps({
    demoString: String,
    demoNumber: Number
})

const demoEvent = defineEmits("tang1")

const tang1DonVi = () => {
    demoEvent("tang1")
}
</script>

<template>
    <h1>Demo count component</h1>
    <p>Demo String: {{ demoProps.demoString }}</p>
    <p>Demo Number: {{ demoProps.demoNumber }}</p>
    <button @click="tang1DonVi">Tang 1 don vi</button>
</template>