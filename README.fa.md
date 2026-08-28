# Nyrvox

> **یک پروژه‌ی زیرساختی بلندمدت برای ساخت یک AI شخصی و دست‌ساز.**  
> ساخته‌شده از صفر با تمرکز بر C++، Linux، معماری نرم‌افزار و مهندسی سیستم‌ها.

<p align="center">
  <a href="README.md">🇬🇧 English Version</a>
</p>

---

## 🧠 درباره پروژه

**Nyrvox** یک پروژه‌ی زیرساختی بلندمدت برای ساخت یک **AI شخصی و دست‌ساز** است که تمرکز آن بر ایجاد یک پایه‌ی توسعه‌پذیر، ماژولار و قابل نگهداری، پیش از پیاده‌سازی قابلیت‌های پیشرفته‌ی هوش مصنوعی است.

Nyrvox قرار نیست **صرفاً یک chatbot** باشد.

هدف بلندمدت پروژه، تکامل آن به یک سیستم هوش مصنوعی دست‌ساز با اجزای اختصاصی خودش است:

- 🧩 Core
- 🔌 Interfaces
- 🧠 Memory
- 🛠️ Tools
- ⚙️ Runtime
- 🤖 Intelligence & Agents

این پروژه از صفر و با تمرکز جدی بر **C++**، **Linux**، **معماری نرم‌افزار** و **مهندسی سیستم‌ها** توسعه داده می‌شود.

---

## 🚧 وضعیت فعلی

**نسخه:** `0.1`  
**مرحله:** `Foundation Complete` ✅

نسخه‌ی فعلی پایه‌ی اولیه‌ی برنامه را ایجاد کرده است:

- 📦 ساختار ماژولار پروژه
- 🔨 سیستم Build مبتنی بر CMake
- ⚙️ مدیریت Configuration
- 📝 سیستم Logging
- 🚀 فرآیند Bootstrap و راه‌اندازی اولیه
- 🔄 چرخه‌ی پایه‌ی اجرای برنامه

> قابلیت‌های پیشرفته‌ی AI عمداً **بخشی از Foundation فعلی نیستند**.

---

## 🏗️ معماری

Nyrvox بر پایه‌ی اجزای ماژولار با مسئولیت‌های مشخص و کمترین وابستگی ممکن طراحی شده است.

معماری بلندمدت پروژه قرار است حول یک Core مرکزی تکامل پیدا کند:

```text
┌──────────────────────┐
│      Interfaces      │
└──────────┬───────────┘
           ↓
┌──────────────────────┐
│  Adapters /          │
│  Translators         │
└──────────┬───────────┘
           ↓
┌──────────────────────┐
│    Nyrvox Core       │
└──────────┬───────────┘
           ↓
┌──────────────────────┐
│ Modules /            │
│ Capabilities         │
└──────────────────────┘
```

**Core باید مستقل از Interfaceهای مختلف باقی بماند.**

هر Interface، درخواست مخصوص به خود را به یک فرمت مشترک برای Core تبدیل می‌کند، آن را به Core می‌فرستد و سپس پاسخ Core را به فرمت مخصوص همان Interface برمی‌گرداند.

این ساختار امکان اضافه‌کردن Interfaceها و قابلیت‌های جدید را بدون ایجاد وابستگی شدید به Core فراهم می‌کند.

---

## 📁 ساختار پروژه

```text
Nyrvox/
├── app/            نقطه ورود برنامه
├── bootstrap/      راه‌اندازی و Initialization
├── core/           هسته‌ی سیستم
├── configs/        فایل‌های Configuration
├── docs/           مستندات پروژه
├── interfaces/     Interfaceهای خارجی
├── memory/         زیرسیستم Memory
├── modules/        ماژول‌های مستقل سیستم
├── python/         اجزای مرتبط با Python
├── skills/         Skills و قابلیت‌ها
├── system/         اجزای سطح سیستم
├── tests/          تست‌ها
├── third_party/    وابستگی‌های شخص ثالث
└── tools/          ابزارهای توسعه
```

> بعضی از این پوشه‌ها فعلاً به‌عنوان ساختار اولیه برای توسعه‌ی آینده وجود دارند و هنوز پیاده‌سازی نشده‌اند.

---

## 🔨 Build

Nyrvox از **CMake** استفاده می‌کند و به یک **Compiler سازگار با C++17** نیاز دارد.

### Configure

```bash
cmake -S . -B build
```

### Build

```bash
cmake --build build
```

### Run

```bash
./build/nyrvox
```

---

## 🧭 اصول مهندسی

Nyrvox در طول توسعه از اصول زیر پیروی می‌کند:

| اصل | توضیح |
|---|---|
| 🧩 **Modularity** | اجزا باید مسئولیت‌های مشخص داشته باشند. |
| 🔗 **Low Coupling** | اجزای Core نباید به Interface خاصی وابسته باشند. |
| 🎯 **Single Responsibility** | هر Module باید یک مسئولیت مشخص و متمرکز داشته باشد. |
| 📚 **Documentation First** | معماری و تصمیمات مهم باید مستند شوند. |
| 🟢 **Always Buildable** | پروژه باید در تمام مراحل توسعه قابل Build باقی بماند. |
| 🏷️ **Version Everything** | تغییرات مهم معماری باید از طریق Version History قابل پیگیری باشند. |

---

## 🗺️ نقشه راه

### v0.1 — Foundation

- [x] ساختار پروژه
- [x] سیستم Build با CMake
- [x] Configuration Module
- [x] Logger Module
- [x] Bootstrap Sequence
- [x] چرخه‌ی پایه‌ی اجرای برنامه

### v0.2 — Core & Interface Layer

تمرکز برنامه‌ریزی‌شده:

- [ ] Unified Core Request/Response Contract
- [ ] Interface Abstraction
- [ ] Interface Adapters / Translators
- [ ] CLI Interface
- [ ] اصلاح و تکمیل معماری Core

### 🔮 آینده

توسعه‌ی بلندمدت پروژه ممکن است شامل موارد زیر باشد:

- 🧠 Memory
- 🛠️ Tools
- 🧩 Skills
- 🔌 Interfaceهای مختلف
- 🤔 AI Reasoning
- 🧬 Model Integration
- 🤖 Agents
- 🖥️ System Integration
- 🔧 Interfaceهای Hardware و Embedded

> این موارد اهداف آینده‌ی پروژه هستند و **در حال حاضر پیاده‌سازی نشده‌اند**.

---

## 📜 License

اطلاعات مربوط به License با بالغ‌تر شدن پروژه اضافه خواهد شد.

---

<p align="center">
  <b>Built from scratch. Designed to evolve.</b><br>
  <sub>Nyrvox — ZRVAN8</sub>
</p>
