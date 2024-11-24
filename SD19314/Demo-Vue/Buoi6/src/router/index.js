import { createRouter, createWebHistory } from 'vue-router'
// import HomeView from '../views/HomeView.vue'
import Home from '@/page/Home.vue'
import About from '@/page/About.vue'
import SinhVien from '@/page/SinhVien.vue'
const router = createRouter({
  history: createWebHistory(),
  routes: [
    {
      path: '/',
      name: 'home',
      component: Home,
    },
    {
      path: '/about',
      name: 'about',
      component: About
    },
    {
      path: '/sinh-vien',
      name: 'sinhVien',
      component: SinhVien
    },
  ],
})
export default router
