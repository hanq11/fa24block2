<script setup>
  import { ref } from 'vue';
  import DemoComponent from './components/DemoComponent.vue';
  import DemoVModel from './components/DemoVModel.vue';

  let danhSach = ref([
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
  
  let demoStringValue = ref("Gia tri String value")
  let demoNumberValue = ref(0)

  const changeDemoNumberValue = () => {
    demoNumberValue.value++;
  }

  let email = ref("")

  const thayDoiEmailTuCha = () => {
    email.value = "cha@gmail.com";
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
  <DemoComponent
    :demoString="demoStringValue"
    :demoNumber="demoNumberValue"
    @cong1="changeDemoNumberValue"
  />
  <Global/>
  <DemoVModel v-model:emailTuCha="email"/>
  <p>Email tu Component cha: {{ email }}</p>
  <button @click="thayDoiEmailTuCha">Thay doi tu cha</button>
</template>