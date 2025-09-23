# 🤝 Guía de Contribución

¡Gracias por tu interés en contribuir a este proyecto! Esta guía te ayudará a entender cómo puedes participar y mejorar los ejercicios de programación en C.

## 📋 Tabla de Contenidos

- [🎯 Cómo Contribuir](#-cómo-contribuir)
- [🐛 Reportar Errores](#-reportar-errores)
- [💡 Sugerir Mejoras](#-sugerir-mejoras)
- [🔧 Desarrollo Local](#-desarrollo-local)
- [📝 Estándares de Código](#-estándares-de-código)
- [🧪 Pruebas](#-pruebas)
- [📄 Documentación](#-documentación)

## 🎯 Cómo Contribuir

### Tipos de Contribuciones Bienvenidas

- 🐛 **Corrección de errores** en el código
- 📚 **Mejoras en la documentación**
- ✨ **Nuevos ejercicios** de programación
- 🔧 **Optimizaciones** de código existente
- 📝 **Mejores comentarios** y explicaciones
- 🧪 **Casos de prueba adicionales**

### Proceso de Contribución

1. **Fork** el repositorio
2. **Crea una rama** para tu contribución:
   ```bash
   git checkout -b feature/descripcion-breve
   ```
3. **Realiza tus cambios** siguiendo los estándares
4. **Prueba** que todo funcione correctamente
5. **Commit** con mensajes descriptivos
6. **Push** a tu fork
7. **Abre un Pull Request**

## 🐛 Reportar Errores

### Antes de Reportar

- Verifica que el error no haya sido reportado antes
- Asegúrate de que puedes reproducir el error
- Compila y ejecuta en un entorno limpio

### Información a Incluir

```markdown
**Descripción del Error:**
Descripción clara y concisa del problema.

**Pasos para Reproducir:**
1. Compilar ejercicio X
2. Ejecutar comando Y
3. Observar error Z

**Comportamiento Esperado:**
Descripción de lo que debería ocurrir.

**Entorno:**
- SO: [Windows/Linux/macOS]
- Compilador: gcc versión X.X.X
- Ejercicio afectado: EJERCICIO X.c
```

## 💡 Sugerir Mejoras

Para nuevas funcionalidades o ejercicios:

1. **Abre un Issue** describiendo la mejora
2. **Explica el beneficio** educativo
3. **Proporciona ejemplos** si es posible
4. **Considera la complejidad** apropiada

## 🔧 Desarrollo Local

### Configuración del Entorno

```bash
# Clonar el repositorio
git clone https://github.com/JTibu9/TAREA-PROGRAMACION-3-.git
cd TAREA-PROGRAMACION-3-

# Verificar que gcc está instalado
gcc --version

# Compilar todos los ejercicios
make all

# Ejecutar pruebas
make run-all
```

### Estructura de Archivos

```
TAREA-PROGRAMACION-3-/
├── EJERCICIO X.c     # Archivo fuente del ejercicio
├── Makefile          # Sistema de construcción
├── README.md         # Documentación principal
├── CONTRIBUTING.md   # Esta guía
├── LICENSE           # Licencia del proyecto
└── bin/              # Ejecutables compilados (generado)
```

## 📝 Estándares de Código

### Estilo de Programación en C

```c
// ✅ Bueno: Comentarios descriptivos
// Función para convertir RPM a radianes por segundo
float rpm_to_rad_per_sec(int rpm) {
    // Fórmula: (RPM * 2π) / 60
    return rpm * (2 * 3.14159) / 60;
}

// ❌ Evitar: Sin comentarios, nombres poco descriptivos
float f(int x) {
    return x * 0.10472;
}
```

### Convenciones

- **Nombres de funciones**: snake_case descriptivo
- **Variables**: nombres claros y descriptivos
- **Comentarios**: en español, explicando la lógica
- **Indentación**: 4 espacios
- **Líneas**: máximo 80 caracteres

### Estructura de Ejercicios

```c
// EJERCICIO X: Descripción breve del ejercicio

#include <stdio.h>

// Prototipo de función
tipo_retorno nombre_funcion(parametros);

// Test cases en main()
int main() {
    // Casos de prueba con valores esperados
    printf("Test 1: funcion(entrada) = resultado (esperado: valor)\n", ...);
    // ... más tests
    return 0;
}

// Implementación de la función
tipo_retorno nombre_funcion(parametros) {
    // Implementación con comentarios explicativos
    // ...
}
```

## 🧪 Pruebas

### Ejecutar Pruebas

```bash
# Compilar y ejecutar todos los ejercicios
make run-all

# Ejecutar ejercicio específico
make run-1

# Compilar en modo debug
make debug
```

### Validar Cambios

Antes de enviar un PR:

1. ✅ Todos los ejercicios compilan sin errores
2. ✅ Los tests existentes pasan
3. ✅ Se incluyen nuevos tests si es apropiado
4. ✅ El código sigue las convenciones de estilo
5. ✅ La documentación está actualizada

## 📄 Documentación

### Actualizar README

- Mantén la tabla de ejercicios actualizada
- Actualiza ejemplos si cambias la interfaz
- Agrega nuevos ejercicios a la lista

### Comentarios en Código

- Explica **por qué**, no solo **qué**
- Usa comentarios en español
- Documenta algoritmos complejos
- Incluye referencias a fórmulas si aplica

## 📬 Contacto

Si tienes preguntas sobre contribuciones:

- 🐛 **Issues**: Para errores y sugerencias
- 📧 **Discusiones**: Para preguntas generales
- 📝 **Pull Requests**: Para contribuciones de código

---

## 🙏 Agradecimientos

¡Gracias por contribuir a hacer este proyecto mejor para todos los estudiantes de programación en C!

### Tipos de Contribuciones Reconocidas

- 🐛 **Bug fixes**
- 📚 **Documentación**
- 💡 **Ideas y sugerencias**
- 🔧 **Código**
- 🧪 **Pruebas**
- 👀 **Revisiones**

*Todos los contribuidores serán reconocidos en el README principal.*