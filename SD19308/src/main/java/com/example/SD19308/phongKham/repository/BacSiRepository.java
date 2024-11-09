package com.example.SD19308.phongKham.repository;

import com.example.SD19308.phongKham.model.BacSi;

import com.example.SD19308.phongKham.util.HibernateConfig;
import org.hibernate.Session;

import java.util.List;

public class BacSiRepository {
    private Session s;

    public BacSiRepository() {
        s = HibernateConfig.getFACTORY().openSession();
    }

    public List<BacSi> getAll() {
        return s.createQuery("FROM BacSi").list();
    }
}
