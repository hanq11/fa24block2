<script setup>
import { RouterView } from 'vue-router'
import FooterLayout from './layout/FooterLayout.vue';
import HeaderLayout from './layout/HeaderLayout.vue';
</script>

<template>
   <RouterView />
  <HeaderLayout/>
  <main>
   
  </main>
  <FooterLayout/>
</template>
