<script setup>
    import { ref } from 'vue';
    import FormXeMay from '@/components/FormXeMay.vue';
    let danhSach = ref([
        {
            "ma": "XM001",
            "ten": "Yamaha",
            "gia": "123"  
        }, 
        {
            "ma": "XM002",
            "ten": "Yamaha",
            "gia": "123"  
        }, 
        {
            "ma": "XM003",
            "ten": "Yamaha",
            "gia": "123"  
        } 
    ])

    let xeMay = ref({
        "ma": "",
        "ten": "",
        "gia": ""  
    })

    let isUpdate = ref(false);

    const themXeMay = () => {
        danhSach.value.push({
            ...xeMay.value
        })
        resetForm()
    }

    const xoaXeMay = (index) => {
        danhSach.value.splice(index, 1);
    }

    let indexSua;

    const detailXeMay = (index) => {
        xeMay.value = {
            ...danhSach.value[index]
        }
        isUpdate.value = true
        indexSua = index;
    }

    const suaXeMay = () => {
        danhSach.value[indexSua] = {
            ...xeMay.value
        }
        isUpdate.value = false;
        resetForm()
    }

    const resetForm = () => {
        xeMay.value = {
            "ma": "",
            "ten": "",
            "gia": ""  
        }
    }
</script>

<template>
    <FormXeMay v-model:xeMayForm="xeMay"/>
    <button v-if="!isUpdate" @click="themXeMay()">Them xe may</button>
    <button v-if="isUpdate" @click="suaXeMay()">Sua xe may</button>
    <table>
        <thead>
            <tr>    
                <th>ID</th>
                <th>Ma</th>
                <th>Ten</th>
                <th>Gia</th>
            </tr>
        </thead>
        <tbody>
            <template v-for="(xm, index) in danhSach" :key="xm.ma">
                <tr>
                    <td>{{ index + 1 }}</td>
                    <td>{{ xm.ma }}</td>
                    <td>{{ xm.ten }}</td>
                    <td>{{ xm.gia }}</td>
                    <td><button @click="xoaXeMay(index)">Xoa</button></td>
                    <td><button @click="detailXeMay(index)">Detail</button></td>
                </tr>
            </template>
        </tbody>
    </table>
</template>