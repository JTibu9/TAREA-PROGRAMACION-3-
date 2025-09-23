# Makefile para compilar todos los ejercicios de programación en C
# Autor: JTibu9
# Descripción: Automatiza la compilación y ejecución de ejercicios

# Compilador y flags
CC = gcc
CFLAGS = -Wall -Wextra -std=c99 -O2
DEBUG_FLAGS = -g -DDEBUG

# Directorios
SRC_DIR = .
BUILD_DIR = build
BIN_DIR = bin

# Lista de ejercicios
EXERCISES = ejercicio1 ejercicio2 ejercicio3 ejercicio4 ejercicio5 \
            ejercicio6 ejercicio7 ejercicio8 ejercicio9

# Archivos fuente
SOURCES = $(wildcard EJERCICIO*.c)

# Colores para output
GREEN = \033[0;32m
YELLOW = \033[1;33m
RED = \033[0;31m
NC = \033[0m # No Color
BOLD = \033[1m

# Regla por defecto
.PHONY: all clean test help install run-all

all: banner create-dirs $(EXERCISES)
	@echo "$(GREEN)✅ Todos los ejercicios compilados exitosamente!$(NC)"
	@echo "$(YELLOW)💡 Usa 'make run-all' para ejecutar todos los ejercicios$(NC)"

# Banner de bienvenida
banner:
	@echo "$(BOLD)$(GREEN)"
	@echo "╔══════════════════════════════════════════════════════════════╗"
	@echo "║                    TAREA DE PROGRAMACIÓN                     ║"
	@echo "║                        EN LENGUAJE C                         ║"
	@echo "║                                                              ║"
	@echo "║    🔧 Compilando ejercicios de ingeniería electrónica       ║"
	@echo "╚══════════════════════════════════════════════════════════════╝"
	@echo "$(NC)"

# Crear directorios necesarios
create-dirs:
	@mkdir -p $(BUILD_DIR) $(BIN_DIR)

# Reglas para compilar cada ejercicio
ejercicio1:
	@echo "$(YELLOW)🔧 Compilando Ejercicio 1: Conversión RPM → rad/s...$(NC)"
	$(CC) $(CFLAGS) -o $(BIN_DIR)/$@ "EJERCICIO 1.c"
	@echo "$(GREEN)✅ Ejercicio 1 compilado$(NC)"

ejercicio2:
	@echo "$(YELLOW)🔧 Compilando Ejercicio 2: Celsius → Kelvin...$(NC)"
	$(CC) $(CFLAGS) -o $(BIN_DIR)/$@ "EJERCICIO 2.c"
	@echo "$(GREEN)✅ Ejercicio 2 compilado$(NC)"

ejercicio3:
	@echo "$(YELLOW)🔧 Compilando Ejercicio 3: Cálculo de Potencia...$(NC)"
	$(CC) $(CFLAGS) -o $(BIN_DIR)/$@ "EJERCICIO 3.c"
	@echo "$(GREEN)✅ Ejercicio 3 compilado$(NC)"

ejercicio4:
	@echo "$(YELLOW)🔧 Compilando Ejercicio 4: Validación de Rango...$(NC)"
	$(CC) $(CFLAGS) -o $(BIN_DIR)/$@ "EJERCICIO 4.c"
	@echo "$(GREEN)✅ Ejercicio 4 compilado$(NC)"

ejercicio5:
	@echo "$(YELLOW)🔧 Compilando Ejercicio 5: Control de Calefacción...$(NC)"
	$(CC) $(CFLAGS) -o $(BIN_DIR)/$@ "EJERCICIO 5.c"
	@echo "$(GREEN)✅ Ejercicio 5 compilado$(NC)"

ejercicio6:
	@echo "$(YELLOW)🔧 Compilando Ejercicio 6: Contador de Pulsos...$(NC)"
	$(CC) $(CFLAGS) -o $(BIN_DIR)/$@ "EJERCICIO 6.c"
	@echo "$(GREEN)✅ Ejercicio 6 compilado$(NC)"

ejercicio7:
	@echo "$(YELLOW)🔧 Compilando Ejercicio 7: Promedio de Sensores...$(NC)"
	$(CC) $(CFLAGS) -o $(BIN_DIR)/$@ "EJERCICIO 7.c"
	@echo "$(GREEN)✅ Ejercicio 7 compilado$(NC)"

ejercicio8:
	@echo "$(YELLOW)🔧 Compilando Ejercicio 8: Generador PWM...$(NC)"
	$(CC) $(CFLAGS) -o $(BIN_DIR)/$@ "EJERCICIO 8.c"
	@echo "$(GREEN)✅ Ejercicio 8 compilado$(NC)"

ejercicio9:
	@echo "$(YELLOW)🔧 Compilando Ejercicio 9: Detector de Sobrecarga...$(NC)"
	$(CC) $(CFLAGS) -o $(BIN_DIR)/$@ "EJERCICIO 9.c"
	@echo "$(GREEN)✅ Ejercicio 9 compilado$(NC)"

# Ejecutar todos los ejercicios
run-all: all
	@echo "$(BOLD)$(YELLOW)"
	@echo "╔══════════════════════════════════════════════════════════════╗"
	@echo "║                    EJECUTANDO EJERCICIOS                     ║"
	@echo "╚══════════════════════════════════════════════════════════════╝"
	@echo "$(NC)"
	@for i in 1 2 3 4 5 6 7 8 9; do \
		echo "$(BOLD)$(GREEN)🚀 Ejecutando Ejercicio $$i:$(NC)"; \
		./$(BIN_DIR)/ejercicio$$i; \
		echo "$(YELLOW)────────────────────────────────────────$(NC)"; \
	done
	@echo "$(GREEN)✅ Todos los ejercicios ejecutados!$(NC)"

# Compilar en modo debug
debug: CFLAGS += $(DEBUG_FLAGS)
debug: clean all
	@echo "$(YELLOW)🐛 Ejercicios compilados en modo DEBUG$(NC)"

# Ejecutar un ejercicio específico
run-%: ejercicio%
	@echo "$(GREEN)🚀 Ejecutando Ejercicio $*:$(NC)"
	@./$(BIN_DIR)/ejercicio$*

# Limpiar archivos compilados
clean:
	@echo "$(YELLOW)🧹 Limpiando archivos compilados...$(NC)"
	@rm -rf $(BUILD_DIR) $(BIN_DIR)
	@rm -f ejercicio* EJERCICIO*
	@echo "$(GREEN)✅ Limpieza completada$(NC)"

# Instalar dependencias (solo información)
install:
	@echo "$(YELLOW)📦 Dependencias requeridas:$(NC)"
	@echo "  - gcc (GNU Compiler Collection)"
	@echo "  - make"
	@echo ""
	@echo "$(YELLOW)🐧 Ubuntu/Debian:$(NC)"
	@echo "  sudo apt-get install build-essential"
	@echo ""
	@echo "$(YELLOW)🍎 macOS:$(NC)"
	@echo "  xcode-select --install"
	@echo ""
	@echo "$(YELLOW)🪟 Windows:$(NC)"
	@echo "  Instalar MinGW o usar WSL"

# Mostrar ayuda
help:
	@echo "$(BOLD)$(GREEN)📖 AYUDA - Makefile de Ejercicios de Programación$(NC)"
	@echo ""
	@echo "$(YELLOW)Comandos disponibles:$(NC)"
	@echo "  $(GREEN)make$(NC)          - Compilar todos los ejercicios"
	@echo "  $(GREEN)make all$(NC)      - Compilar todos los ejercicios"
	@echo "  $(GREEN)make clean$(NC)    - Limpiar archivos compilados"
	@echo "  $(GREEN)make run-all$(NC)  - Compilar y ejecutar todos los ejercicios"
	@echo "  $(GREEN)make run-N$(NC)    - Ejecutar ejercicio N (ej: make run-1)"
	@echo "  $(GREEN)make debug$(NC)    - Compilar en modo debug"
	@echo "  $(GREEN)make install$(NC)  - Mostrar información de instalación"
	@echo "  $(GREEN)make help$(NC)     - Mostrar esta ayuda"
	@echo ""
	@echo "$(YELLOW)Ejemplos:$(NC)"
	@echo "  make run-1    # Ejecutar solo el ejercicio 1"
	@echo "  make debug    # Compilar con símbolos de debug"
	@echo "  make clean && make all    # Limpiar y recompilar todo"

# Prevenir eliminación de archivos intermedios
.PRECIOUS: %.o