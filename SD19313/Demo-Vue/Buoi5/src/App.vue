<script setup>
  import { ref } from 'vue';
  import DemoCount from './components/DemoCount.vue';
  import DemoVModel from './components/DemoVModel.vue';

  const danhSach = ref([
    {
        "mssv": "123",
        "ten": "Nguyen Van A",
        "tuoi": 19
    },
    {
        "mssv": "234",
        "ten": "Tran Van B",
        "tuoi": 29
    },
    {
        "mssv": "345",
        "ten": "Pham Van D",
        "tuoi": 39
    }
  ])

  let demoStringValue = ref("Chuoi truyen tu cha")
  let demoNumberValue = ref(0)

  const changeDemoNumberValue = () => {
    demoNumberValue.value++
  }

  let email = ref("cha@gmail.com")
  const thayDoiEmailTuCha = () => {
    email.value = "thayTuCha@gmail.com"
  }
</script>

<template>
  <tbody>
    <template v-for="(sv, index) in danhSach" :key="sv.mssv">
      <template v-if="sv.tuoi > 20">
        <tr>
          <td>{{ index + 1 }}</td>
          <td>{{ sv.mssv }}</td>
          <td>{{ sv.ten }}</td>
          <td>{{ sv.tuoi }}</td>
        </tr>
      </template>
    </template>
  </tbody>
  <Global/>
  <DemoCount
    :demoString="demoStringValue"
    :demoNumber="demoNumberValue"
    @tang1="changeDemoNumberValue"
  />
  <br>
  <DemoVModel v-model:emailFromCha="email"/>
  <button @click="thayDoiEmailTuCha">Thay doi email tu cha</button>
</template>

<!-- Ôn tập table, v-for, v-if
Tạo component và sử dụng trong App.vue
Tạo Global component và sử dụng
Truyền giá trị từ cha qua con bằng props (defineProps)
Gọi event (emit event) tới component cha với defineEmits
Data binding 2 chiều qua form, với form nằm trong 1 component khác, bằng v-model -->