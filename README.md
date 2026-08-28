# Nyrvox

> **A long-term, self-built AI infrastructure project.**
> Built from the ground up with C++, Linux, software architecture, and systems engineering in mind.

<p align="center">
  <a href="README.fa.md">🇮🇷 نسخه فارسی</a>
</p>

---

## 🧠 About

**Nyrvox** is a long-term personal AI infrastructure project focused on building an extensible, modular, and maintainable foundation before implementing advanced intelligence capabilities.

Nyrvox is **not intended to be just a chatbot**.

The long-term goal is to evolve it into a self-built AI system with its own:

- 🧩 Core
- 🔌 Interfaces
- 🧠 Memory
- 🛠️ Tools
- ⚙️ Runtime
- 🤖 Intelligence & Agents

The project is being developed from scratch with a strong focus on **C++**, **Linux**, **software architecture**, and **systems engineering**.

---

## 🚧 Current Status

**Version:** `0.1`
**Stage:** `Foundation Complete` ✅

The current version establishes the initial application foundation:

- 📦 Modular project structure
- 🔨 CMake-based build system
- ⚙️ Configuration management
- 📝 Logging system
- 🚀 Bootstrap startup sequence
- 🔄 Basic application lifecycle

> Advanced AI capabilities are intentionally **not** part of the current foundation.

---

## 🏗️ Architecture

Nyrvox is designed around modular components with clear responsibilities and minimal coupling.

The long-term architecture is expected to evolve around a central Core:

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

The **Core should remain independent from individual interfaces**.

Each interface translates its native request format into a common Core request format, sends it to the Core, and translates the Core response back into the interface-specific format.

This makes it possible to add new interfaces and capabilities without tightly coupling them to the Core.

---

## 📁 Project Structure

```text
Nyrvox/
├── app/            Application entry point
├── bootstrap/      Startup and initialization
├── core/           Core system
├── configs/        Configuration files
├── docs/           Project documentation
├── interfaces/     External interfaces
├── memory/         Memory subsystem
├── modules/        Independent system modules
├── python/         Python-related components
├── skills/         Skills and capabilities
├── system/         System-level components
├── tests/          Tests
├── third_party/    Third-party dependencies
└── tools/          Development tools
```

> Some directories are currently placeholders for future development and are not yet implemented.

---

## 🔨 Build

Nyrvox uses **CMake** and requires a **C++17-compatible compiler**.

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

## 🧭 Engineering Principles

Nyrvox follows these principles throughout development:

| Principle | Description |
|---|---|
| 🧩 **Modularity** | Components should have clear responsibilities. |
| 🔗 **Low Coupling** | Core components should not depend on specific interfaces. |
| 🎯 **Single Responsibility** | Each module should solve a focused problem. |
| 📚 **Documentation First** | Architecture and important decisions should be documented. |
| 🟢 **Always Buildable** | The project should remain buildable throughout development. |
| 🏷️ **Version Everything** | Major architectural changes should be traceable through version history. |

---

## 🗺️ Roadmap

### v0.1 — Foundation

- [x] Project structure
- [x] CMake build system
- [x] Configuration module
- [x] Logger module
- [x] Bootstrap sequence
- [x] Basic application lifecycle

### v0.2 — Core & Interface Layer

Planned focus:

- [ ] Unified Core Request/Response Contract
- [ ] Interface abstraction
- [ ] Interface adapters / translators
- [ ] CLI interface
- [ ] Core architecture refinement

### 🔮 Future

Long-term development may include:

- 🧠 Memory
- 🛠️ Tools
- 🧩 Skills
- 🔌 Multiple interfaces
- 🤔 AI reasoning
- 🧬 Model integration
- 🤖 Agents
- 🖥️ System integration
- 🔧 Hardware & embedded interfaces

> These are future goals and are **not currently implemented**.

---

## 📜 License

License information will be added as the project matures.

---

<p align="center">
  <b>Built from scratch. Designed to evolve.</b><br>
  <sub>Nyrvox — ZRVAN8</sub>
</p>
