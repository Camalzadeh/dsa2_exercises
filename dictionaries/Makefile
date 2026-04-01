CC = gcc
CFLAGS = -Wall -g -std=c99 -Idict-students/dsa2-dict/students
LDFLAGS= -lm

LIB_DIR = dict-students/dsa2-dict/students
HELPERS = $(LIB_DIR)/lnode.o $(LIB_DIR)/list.o $(LIB_DIR)/bstree.o $(LIB_DIR)/key_value.o $(LIB_DIR)/main.o

TARGET1 = main_lnode
TARGET2 = main_bstree
TARGET3 = main_list
TARGETS = $(TARGET1) $(TARGET2) $(TARGET3)

all : $(TARGETS)

$(TARGET1) : dict_lnode.o $(HELPERS)
	@echo "Building $@"
	@$(CC) -o $@ dict_lnode.o $(HELPERS) $(LDFLAGS) $(CFLAGS)

$(TARGET2) : dict_bstree.o $(HELPERS)
	@echo "Building $@"
	@$(CC) -o $@ dict_bstree.o $(HELPERS) $(LDFLAGS) $(CFLAGS)

$(TARGET3) : dict_list.o  $(HELPERS)
	@echo "Building $@"
	@$(CC) -o $@ dict_list.o $(HELPERS) $(LDFLAGS) $(CFLAGS)

%.o : %.c
	@echo "Building $@"
	@$(CC) $(CFLAGS) -c $< -o $@

$(LIB_DIR)/%.o: $(LIB_DIR)/%.c
	@echo "Building $@"
	@$(CC) $(CFLAGS) -c $< -o $@

clean :
	@rm -f $(TARGETS) *.o $(LIB_DIR)/*.o *~
