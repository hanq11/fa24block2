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

    public BacSi getOne(Integer id) {
        return s.find(BacSi.class, id);
    }

    public void add(BacSi bacSi) {
        try {
            s.getTransaction().begin();
            s.save(bacSi);
            s.getTransaction().commit();
        } catch (Exception e) {
            s.getTransaction().rollback();
            e.printStackTrace();
        }
    }

    public void update(BacSi bacSi) {
        try {
            s.getTransaction().begin();
            s.merge(bacSi);
            s.getTransaction().commit();
        } catch (Exception e) {
            s.getTransaction().rollback();
            e.printStackTrace();
        }
    }

    public void delete(Integer id) {
        try {
            s.getTransaction().begin();
            s.delete(this.getOne(id));
            s.getTransaction().commit();
        } catch (Exception e) {
            s.getTransaction().rollback();
            e.printStackTrace();
        }
    }
}
