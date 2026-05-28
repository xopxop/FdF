# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dthan <dthan@student.hive.fi>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/01/03 15:13:05 by dthan             #+#    #+#              #
#    Updated: 2026/05/28 17:02:01 by dthan            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

COMPILER = clang
PROGRAM_NAME = fdf
CFLAGS = #-Wall -Wextra -Werror
LDFLAGS = -framework OpenGL -framework AppKit
LIBFT_DIR := ./libft
LIBFT_FLAG := -L$(LIBFT_DIR)/ -lft
SOURCES_DIR := ./src
SOURCES_FILES := $(shell find $(SOURCES_DIR) -name '*.c')
BUILD_DIR := ./build
MATCHING_RULE := $(addprefix $(BUILD_DIR)/,$(notdir $(SOURCES_FILES:%.c=%.o)))

all: mkdirs lft $(PROGRAM_NAME)

mkdirs:
	@mkdir -p $(BUILD_DIR)

lft:
	@cd $(LIBFT_DIR) && $(MAKE)

$(BUILD_DIR)/%.o: $(SOURCES_DIR)/%.c
	$(COMPILER) $(CFLAGS) -c $< -o $@

$(PROGRAM_NAME): $(MATCHING_RULE)
	$(COMPILER) $(CFLAGS) $(LDFLAGS) $(LIBFT_FLAG) $^ -o $@

clean:
	@cd $(LIBFT_DIR) && $(MAKE) -s clean
	@rm -rf $(BUILD_DIR)

fclean: clean
	@cd $(LIBFT_DIR) && $(MAKE) -s fclean
	@rm -rf $(PROGRAM_NAME)

re: fclean all

.PHONY: all clean fclean re
