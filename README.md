# DRF By Building 🚀

This repository is a **hands-on learning playground** for **Django Rest Framework (DRF)**.

The goal of this project is simple:
> Learn DRF deeply by building real APIs step by step.

This repo is **not a tutorial clone** — it’s my personal journey of learning, experimenting, and understanding how DRF works internally.

---

## 📌 What This Repository Covers

I will gradually add implementations and examples for:

- Django Rest Framework basics
- Serializers & ModelSerializers
- Function-based vs Class-based views
- APIViews, Mixins & Generic Views
- ViewSets & Routers
- Authentication & Authorization
- Permissions & Throttling
- Pagination & Filtering
- Validation & Custom fields
- Nested & Writable serializers
- JWT Authentication
- API Versioning
- Testing DRF APIs
- Best practices & common mistakes

---

## 🛠 Tech Stack

- Python 🐍
- Django
- Django Rest Framework
- SQLite (for learning)
- Postman / cURL (for API testing)

---

## 📂 Project Structure (Will Evolve)

```text
drf-by-building/
│
├── core/                       # Django project settings
│   ├── __init__.py
│   ├── settings.py
│   ├── urls.py
│   ├── asgi.py
│   └── wsgi.py
│
├── apps/
│   ├── students/               # Example app (you can add more)
│   │   ├── migrations/
│   │   ├── __init__.py
│   │   ├── admin.py
│   │   ├── apps.py
│   │   ├── models.py
│   │   ├── serializers.py
│   │   ├── views.py
│   │   ├── urls.py
│   │   ├── permissions.py
│   │   ├── throttles.py
│   │   └── tests.py
│   │
│   └── accounts/               # Auth / JWT / Users (later)
│       ├── migrations/
│       ├── models.py
│       ├── serializers.py
│       ├── views.py
│       └── urls.py
│
├── common/                     # Reusable utilities
│   ├── pagination.py
│   ├── filters.py
│   ├── permissions.py
│   └── utils.py
│
├── requirements.txt
├── manage.py
├── README.md
└── .gitignore
