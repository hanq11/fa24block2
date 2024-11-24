<script setup>
    import { ref } from 'vue';

    let danhSach = ref([
        {
            mssv: 123,
            ten: "ABC",
            tuoi: 8
        },
        {
            mssv: 124,
            ten: "BCD",
            tuoi: 10
        },
    ])
</script>

<template>
    <table>
        <thead>
            <tr>
                <td>STT</td>
                <td>MSSV</td>
                <td>Ten</td>
                <td>Tuoi</td>
            </tr>
        </thead>
        <tbody>
            <template v-for="(sv, index) in danhSach" :key="sv.mssv">
                <tr>
                    <td>{{ index + 1 }}</td>
                    <td>{{ sv.mssv }}</td>
                    <td>{{ sv.ten }}</td>
                    <td>{{ sv.tuoi }}</td>
                </tr>
            </template>
        </tbody>
    </table>
</template>