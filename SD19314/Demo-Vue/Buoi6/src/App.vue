<script setup>
  import { RouterView } from 'vue-router'
  import HeaderLayout from './layout/HeaderLayout.vue';
  import FooterLayout from './layout/FooterLayout.vue';
</script>

<template>
  <HeaderLayout/>
  <RouterView/>
  <FooterLayout/>
</template>
