
#Exemplo mais completo de um Makefile
#Algumas variaveis sao usadas com significado especial:
#$@ nome do alvo (target)
#$^ lista com os nomes de todos os pre-requisitos sem duplicatas
#$< nome do primeiro pre-requisito
# Comandos do sistema operacional
# Linux: rm -rf
# Windows: cmd //C del
RM = rm -rf
# Compilador
CC=g++
# Variaveis para os subdiretorios
LIB_DIR=./lib
INC_DIR=./include
SRC_DIR=./src
OBJ_DIR=./build
BIN_DIR=./bin
DOC_DIR=./doc
TEST_DIR=./test
# Outras variaveis
# Opcoes de compilacao
CFLAGS = -Wall -pedantic -ansi -std=c++11 -I. -I$(INC_DIR)
# Garante que os alvos desta lista nao sejam confundidos com arquivos de mesmo nome
.PHONY: all clean distclean doxy
# Define o alvo (target) para a compilacao completa.
# Define os alvos questao01, questao02 e questao03 como dependencias.
# Ao final da compilacao, remove os arquivos objeto.
all: questao01 questao02
debug: CFLAGS += -g -O0
debug: questao01 questao02
# Alvo (target) para a construcao do executavel questao01
# Define os arquivos classe11.o, classe12.o e main1.o como dependencias

questao01: $(OBJ_DIR)/main.o $(OBJ_DIR)/calcula.o $(OBJ_DIR)/area.o $(OBJ_DIR)/perimetro.o $(OBJ_DIR)/volume.o
	@echo "==================================================="
	@echo "Ligando o alvo $@"
	@echo "==================================================="
	$(CC) $(CFLAGS) -o $(BIN_DIR)/$@ $^
	@echo "===================================================================="
	@echo " EXECUTAVEL DE NOME 'questao01' FOI CRIADO NO DIRETORIO $(BIN_DIR)] "
	@echo "===================================================================="

$(OBJ_DIR)/area.o: $(SRC_DIR)/Q1/area.cpp
	$(CC) -c $(CFLAGS) -o $@ $<

$(OBJ_DIR)/perimetro.o: $(SRC_DIR)/Q1/perimetro.cpp
	$(CC) -c $(CFLAGS) -o $@ $<

$(OBJ_DIR)/volume.o: $(SRC_DIR)/Q1/volume.cpp
	$(CC) -c $(CFLAGS) -o $@ $<

$(OBJ_DIR)/calcula.o: $(SRC_DIR)/Q1/calcula.cpp
	$(CC) -c $(CFLAGS) -o $@ $<

$(OBJ_DIR)/main.o: $(SRC_DIR)/Q1/main.cpp
	$(CC) -c $(CFLAGS) -o $@ $<

questao02: $(OBJ_DIR)/anterior.o $(OBJ_DIR)/primalidade.o $(OBJ_DIR)/fatorial.o
	@echo "==================================================="
	@echo "Ligando o alvo $@"
	@echo "==================================================="
	$(CC) $(CFLAGS) -o $(BIN_DIR)/$@ $^
	@echo "===================================================================="
	@echo " EXECUTAVEL DE NOME 'questao02' FOI CRIADO NO DIRETORIO $(BIN_DIR)] "
	@echo "===================================================================="

$(OBJ_DIR)/fatorial.o: $(SRC_DIR)/Q2/fatorial.cpp
	$(CC) -c $(CFLAGS) -o $@ $<

$(OBJ_DIR)/primalidade.o: $(SRC_DIR)/Q2/primalidade.cpp
	$(CC) -c $(CFLAGS) -o $@ $<

$(OBJ_DIR)/anterior.o: $(SRC_DIR)/Q2/anterior.cpp
	$(CC) -c $(CFLAGS) -o $@ $<

doxy:
	$(RM) $(DOC_DIR)/*
	doxygen Doxyfile
# Alvo (target) usado para limpar os arquivos temporarios (objeto)
# gerados durante a compilacao, assim como os arquivos binarios/executaveis.
clean:
	$(RM) $(BIN_DIR)/*
	$(RM) $(OBJ_DIR)/*
# FIM do Makefile
