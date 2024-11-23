// import './assets/main.css'

import { createApp } from 'vue'
import App from './App.vue'
import GlobalComponent from './components/GlobalComponent.vue'
// import router from './router'

const app = createApp(App)

// app.use(router)
app.component("Global", GlobalComponent)
app.mount('#app')
