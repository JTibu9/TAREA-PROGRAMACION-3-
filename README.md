# 🖥️ TAREA DE PROGRAMACIÓN EN C

<div align="center">

![C](https://img.shields.io/badge/Language-C-blue.svg?style=for-the-badge&logo=c)
![License](https://img.shields.io/badge/License-MIT-green.svg?style=for-the-badge)
![Status](https://img.shields.io/badge/Status-Complete-success.svg?style=for-the-badge)

*Una colección de ejercicios prácticos de programación en lenguaje C*

```
   ╔══════════════════════════════════════════════════════════════╗
   ║                    EJERCICIOS DE PROGRAMACIÓN                ║
   ║                           EN C                               ║
   ║                                                              ║
   ║    🔧 Ingeniería Electrónica    💻 Programación             ║
   ║    ⚡ Control de Sistemas       📊 Análisis de Datos        ║
   ╚══════════════════════════════════════════════════════════════╝
```

</div>

## 📋 Tabla de Contenidos

- [📖 Descripción](#-descripción)
- [🚀 Ejercicios Incluidos](#-ejercicios-incluidos)
- [⚡ Inicio Rápido](#-inicio-rápido)
- [🔧 Compilación](#-compilación)
- [📊 Ejemplos de Uso](#-ejemplos-de-uso)
- [🤝 Contribuir](#-contribuir)
- [📄 Licencia](#-licencia)

## 📖 Descripción

Este repositorio contiene una serie de **9 ejercicios prácticos** de programación en C, enfocados en aplicaciones de **ingeniería electrónica** y **sistemas de control**. Cada ejercicio aborda un problema específico con casos de prueba incluidos.

### 🎯 Objetivos de Aprendizaje

- ✅ Programación en C para aplicaciones de ingeniería
- ✅ Manejo de arrays y funciones
- ✅ Implementación de algoritmos de control
- ✅ Procesamiento de señales digitales
- ✅ Análisis de datos de sensores

## 🚀 Ejercicios Incluidos

| # | Ejercicio | Descripción | Tema |
|---|-----------|-------------|------|
| 1️⃣ | **Conversión RPM → rad/s** | Convierte revoluciones por minuto a radianes por segundo | ⚙️ Mecánica |
| 2️⃣ | **Celsius → Kelvin** | Conversión de temperatura | 🌡️ Termometría |
| 3️⃣ | **Cálculo de Potencia** | P = V × I (Ley de Ohm) | ⚡ Electricidad |
| 4️⃣ | **Validación de Rango** | Verifica si un valor está en rango | 📊 Validación |
| 5️⃣ | **Control de Calefacción** | Sistema de control ON/OFF | 🏠 Automatización |
| 6️⃣ | **Contador de Pulsos** | Cuenta señales digitales | 📡 Señales |
| 7️⃣ | **Promedio de Sensores** | Calcula promedio de lecturas | 📈 Estadística |
| 8️⃣ | **Generador PWM** | Genera señales PWM digitales | 🔄 Control |
| 9️⃣ | **Detector de Sobrecarga** | Detecta condiciones de sobrecarga | ⚠️ Seguridad |

## ⚡ Inicio Rápido

### Prerrequisitos

```bash
# Asegúrate de tener instalado:
gcc --version  # Compilador de C
```

### Clonación

```bash
git clone https://github.com/JTibu9/TAREA-PROGRAMACION-3-.git
cd TAREA-PROGRAMACION-3-
```

## 🔧 Compilación

### Compilación con Makefile (Recomendado)

```bash
# Compilar todos los ejercicios
make all

# Compilar y ejecutar todos
make run-all

# Compilar ejercicio específico
make ejercicio1

# Ejecutar ejercicio específico
make run-1

# Limpiar archivos compilados
make clean

# Ver ayuda completa
make help
```

### Compilación Individual

```bash
# Compilar un ejercicio específico manualmente
gcc -Wall -Wextra -std=c99 -O2 -o ejercicio1 "EJERCICIO 1.c"
./ejercicio1
```

## 📊 Ejemplos de Uso

### 🔄 Ejercicio 1: Conversión RPM → rad/s

```c
float rpm_to_rad_per_sec(int rpm);
```

**Ejemplo:**
```bash
$ ./ejercicio1
Test 1: rpm_to_rad_per_sec(1500) = 157.00 (esperado: 157.08)
Test 2: rpm_to_rad_per_sec(0) = 0.00 (esperado: 0.00)
Test 3: rpm_to_rad_per_sec(3000) = 314.00 (esperado: 314.16)
```

### ⚡ Ejercicio 3: Cálculo de Potencia

```c
float calculate_power(float voltage, float current);
```

**Aplicación:** Cálculo de potencia eléctrica en circuitos

### 🔄 Ejercicio 8: Generador PWM

```c
void generate_pwm(int output[], int size, int duty_cycle);
```

**Aplicación:** Control de velocidad de motores DC

## 🛠️ Estructura del Proyecto

```
TAREA-PROGRAMACION-3-/
├── 📁 Archivos fuente/
│   ├── EJERCICIO 1.c    # Conversión RPM → rad/s
│   ├── EJERCICIO 2.c    # Conversión Celsius → Kelvin
│   ├── EJERCICIO 3.c    # Cálculo de Potencia
│   ├── EJERCICIO 4.c    # Validación de Rango
│   ├── EJERCICIO 5.c    # Control de Calefacción
│   ├── EJERCICIO 6.c    # Contador de Pulsos
│   ├── EJERCICIO 7.c    # Promedio de Sensores
│   ├── EJERCICIO 8.c    # Generador PWM
│   └── EJERCICIO 9.c    # Detector de Sobrecarga
├── 📁 Sistema de build/
│   └── Makefile         # Sistema de compilación automatizado
├── 📁 Documentación/
│   ├── README.md        # Este archivo
│   ├── CONTRIBUTING.md  # Guía de contribución
│   └── LICENSE          # Licencia MIT
├── 📁 Configuración/
│   └── .gitignore       # Archivos a ignorar en git
└── 📁 Ejecutables/ (generado al compilar)
    └── bin/             # Ejercicios compilados
```

## 🤝 Contribuir

¡Las contribuciones son bienvenidas! Si encuentras algún error o tienes sugerencias:

1. 🍴 Fork el proyecto
2. 🌱 Crea una rama para tu feature (`git checkout -b feature/AmazingFeature`)
3. 📝 Commit tus cambios (`git commit -m 'Add some AmazingFeature'`)
4. 📤 Push a la rama (`git push origin feature/AmazingFeature`)
5. 🔁 Abre un Pull Request

## 📄 Licencia

Este proyecto está bajo la Licencia MIT. Ver el archivo `LICENSE` para más detalles.

---

<div align="center">

**🎯 Desarrollado con ❤️ para el aprendizaje de programación en C**

*Si este proyecto te ayudó, ¡deja una ⭐!*

</div>
