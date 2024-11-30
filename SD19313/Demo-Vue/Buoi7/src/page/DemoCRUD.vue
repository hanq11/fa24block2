<script setup>
    import { ref } from 'vue';
    import FormXeMay from '@/components/FormXeMay.vue';
    let danhSach = ref([
        {
            "ma": "1",
            "ten": "ten 1",
            "gia": 95,
            "hang": "hang1",
            "gioiTinh": "true"
        },
        {
            "ma": "2",
            "ten": "ten 2",
            "gia": 52,
            "hang": "hang2",
            "gioiTinh": "false"
        },
        {
            "ma": "3",
            "ten": "ten 3",
            "gia": 74,
            "hang": "hang3",
            "gioiTinh": "true"
        }
    ])

    let xeMay = ref({
        "ma": "",
        "ten": "",
        "gia": "",
        "hang": "",
        "gioiTinh":""  
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
            "gia": "",
            "hang": "",
            "gioiTinh":""  
        }
    }
</script>

<template>
    <FormXeMay v-model:xeMayForm="xeMay"/>
    <button v-if="!isUpdate" @click="themXeMay()">Them xe may</button>
    <button v-if="isUpdate" @click="suaXeMay()">Sua xe may</button>
    <table class="table">
        <thead>
            <tr>    
                <th scope="col">ID</th>
                <th scope="col">Ma</th>
                <th scope="col">Ten</th>
                <th scope="col">Gia</th>
                <th scope="col">Hang</th>
                <th scope="col">GioiTinh</th>
                <th scope="col">Chuc nang</th>
            </tr>
        </thead>
        <tbody>
            <template v-for="(xm, index) in danhSach" :key="xm.ma">
                <tr>
                    <th scope="row">{{ index + 1 }}</th>
                    <td>{{ xm.ma }}</td>
                    <td>{{ xm.ten }}</td>
                    <td>{{ xm.gia }}</td>
                    <td>{{ xm.hang }}</td>
                    <td>{{ xm.gioiTinh == "true" ? "Nam" : "Nu"}}</td>
                    <td>
                        <button class="btn bg-success" @click="xoaXeMay(index)">Xoa</button>
                        <button class="btn bg-warning"@click="detailXeMay(index)">Detail</button>
                    </td>
                </tr>
            </template>
        </tbody>
    </table>
</template>