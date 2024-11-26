<script setup>
    import { ref } from 'vue';
    import FormDemo from '@/components/FormDemo.vue';

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
        emptyForm()
    }

    const xoaXeMay = (index) => {
        danhSach.value.splice(index, 1);
    }

    let updateIndex

    const detailXeMay = (index) => {
        xeMay.value = {
            ...danhSach.value[index]
        }
        isUpdate.value = true
        updateIndex = index
    }

    const suaXeMay = () => {
        danhSach.value[updateIndex] = {
            ...xeMay.value
        }
        isUpdate.value = false
        emptyForm()
    }

    const emptyForm = () => {
        xeMay.value = {
            "ma": "",
            "ten": "",
            "gia": ""
        }
    }
</script>

<template>
    <FormDemo v-model:xeMayForm="xeMay"/>
    <button @click="themXeMay()" v-if="!isUpdate">Them xe may</button>
    <button v-if="isUpdate" @click="suaXeMay()">Sua xe may</button>
    <table class="table">
        <thead>
            <tr>
                <th scope="col">STT</th>
                <th scope="col">Ma</th>
                <th scope="col">Ten</th>
                <th scope="col">Gia</th>
                <th scope="col" colspan="2">Chuc nang</th>
            </tr>
        </thead>
        <tbody>
            <template v-for="(xm, index) in danhSach" :key="xm.ma">
                <tr>
                    <th scope="row">{{ index + 1 }}</th>
                    <td>{{ xm.ma }}</td>
                    <td>{{ xm.ten }}</td>
                    <td>{{ xm.gia }}</td>
                    <td>
                        <button class="btn btn-success" @click="xoaXeMay(index)">Xoa</button>
                        <button class="btn btn-warning mx-2" @click="detailXeMay(index)">Detail</button>
                    </td>
                </tr>
            </template>
        </tbody>
    </table>
</template>