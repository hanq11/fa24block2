// import './assets/main.css'

import { createApp } from 'vue'
import App from './App.vue'
import GlobalComponent from './components/GlobalComponent.vue'
// import router from './router'

const app = createApp(App)

// app.use(router)
app.component("Global", GlobalComponent)
app.mount('#app')

// Ôn tập table, v-for, v-if
// Tạo component và sử dụng trong App.vue
// Tạo Global component và sử dụng
// Truyền giá trị từ cha qua con bằng props (defineProps)
// Gọi event (emit event) tới component cha với defineEmits
// Data binding 2 chiều qua form, với form nằm trong 1 component khác, bằng v-model