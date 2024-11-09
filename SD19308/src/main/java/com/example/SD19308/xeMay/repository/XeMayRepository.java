package com.example.SD19308.xeMay.repository;

import com.example.SD19308.xeMay.model.XeMay;
import com.example.SD19308.xeMay.util.HibernateConfig;
import org.hibernate.Session;

import java.util.List;

public class XeMayRepository {
    Session s = null;

    public XeMayRepository() {
        s = HibernateConfig.getFACTORY().openSession();
    }

    public List<XeMay> getAll() {
        return s.createQuery("FROM XeMay").list();
    }
}
