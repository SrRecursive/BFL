/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bfl.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ribana-b <ribana-b@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 11:10:14 by ribana-b          #+#    #+#             */
/*   Updated: 2023/11/16 17:11:08 by ribana-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BFL_H
# define BFL_H

/* <--Defines Section--> */

/* <--Libraries Section--> */
# include <unistd.h>
# include <stdlib.h>

/* <--Functions Section--> */
/* ========================================================================= */
/* Bool */

/**
 * @brief Checks if a character is valid alphanumeric character.
 * 
 * @details This function checks whether the given integer corresponds to a
 * valid alphanumeric character. Alphanumeric characters have integer values
 * between 48 and 57 (inclusive), 65 and 90 (inclusive) or 97 and 122
 * (inclusive).
 * 
 * @param character The integer value to be checked for alphanumeric validity.
 * 
 * @retval - 1 if the character is a valid alphanumeric character.
 * @retval - 0 otherwise.
*/
unsigned int	ft_isalnum(int character);

/**
 * @brief Checks if a character is valid alphabetic character.
 * 
 * @details This function checks whether the given integer corresponds to a
 * valid alphabet character.
 * 
 * @param character The integer value to be checked for alphabet validity.
 * 
 * @retval - 1 if the character is a valid alphabet character.
 * @retval - 0 otherwise.
*/
unsigned int	ft_isalpha(int character);

/**
 * @brief Checks if a character is valid alpha character.
 * 
 * @details This function checks whether the given integer corresponds to a
 * valid alpha character. Alpha characters have integer values between 65 and
 * 90 (inclusive) or 97 and 122.
 * 
 * @param character The integer value to be checked for alpha validity.
 * 
 * @retval - 1 if the character is a valid alpha character.
 * @retval - 0 otherwise.
*/
unsigned int	ft_isascii(int character);

/**
 * @brief Checks if a character is valid blank character.
 * 
 * @details This function checks whether the given integer corresponds to a
 * valid blank character. Blank characters have integer values of 9 and 32.
 * 
 * @param character The integer value to be checked for blank validity.
 * 
 * @retval - 1 if the character is a valid blank character.
 * @retval - 0 otherwise.
*/
unsigned int	ft_isblank(int character);

/**
 * @brief Checks if a character is valid digit character.
 * 
 * @details This function checks whether the given integer corresponds to a
 * valid digit character. Digit characters have integer values between
 * 48 and 57.
 * 
 * @param character The integer value to be checked for digit validity.
 * 
 * @retval - 1 if the character is a valid digit character.
 * @retval - 0 otherwise.
*/
unsigned int	ft_isdigit(int character);

/**
 * @brief Checks if a character is a valid lowercase alphabetic character.
 * 
 * @details This function checks whether the given integer corresponds to a
 * valid lowercase alphabetic character. Lowercase letters have integer
 * values between 97 and 122 (inclusive).
 * 
 * @param character The integer value to be checked for lowercase alphabetic
 * validity.
 * 
 * @retval - 1 if the character is a valid lowercase alphabetic character
 * @retval - 0 otherwise.
*/
unsigned int	ft_islower(int character);

/**
 * @brief Checks if a character is a printable character.
 * 
 * @details This function checks whether the given integer corresponds to a
 * printable character, which includes alphanumeric characters and special
 * symbols having integer values between 32 and 126 (inclusive).
 * 
 * @param character The integer value to be checked for printable character
 * validity.
 * 
 * @retval - 1 if the character is a printable character.
 * @retval - 0 otherwise.
*/
unsigned int	ft_isprint(int character);

/**
 * @brief Checks if a character is a valid uppercase alphabetic character.
 * 
 * @details This function checks whether the given integer corresponds to a
 * valid uppercase alphabetic character. Uppercase letters have integer
 * values between 65 and 90 (inclusive).
 * 
 * @param character The integer value to be checked for uppercase alphabetic
 * validity.
 * 
 * @retval - 1 if the character is a valid uppercase alphabetic character.
 * @retval - 0 otherwise.
*/
unsigned int	ft_isupper(int character);

/**
 * @brief Checks if a character is a valid hexadecimal digit.
 * 
 * @details This function checks whether the given integer corresponds to a
 * valid hexadecimal digit. Hexadecimal digits include 0-9 and A-F (or a-f)
 * and have integer values between 48 and 57, and 65 to 70 (or 97 to 102)
 * inclusive.
 * 
 * @param character The integer value to be checked for hexadecimal digit
 * validity.
 * 
 * @retval - 1 if the character is a valid hexadecimal digit.
 * @retval - 0 otherwise.
*/
unsigned int	ft_isxdigit(int character);
/* ========================================================================= */

/* ========================================================================= */
/* Char */

/**
 * @brief Converts an uppercase alphabetic character to lowercase.
 * 
 * @details This function checks whether the given integer corresponds to an
 * uppercase character, and then converts it to lowercase.
 * 
 * @param character The integer value to be checked for uppercase character
 * validity.
 * 
 * @retval - character lowercased.
 * @retval - character unmodified.
*/
int				ft_tolower(int character);

/**
 * @brief Converts an lowercase alphabetic character to uppercase.
 * 
 * @details This function checks whether the given integer corresponds to a
 * lowercase character, and then converts it to uppercase.
 * 
 * @param character The integer value to be checked for lowercase character
 * validity.
 * 
 * @retval - character uppercased.
 * @retval - character unmodified.
*/
int				ft_toupper(int character);
/* ========================================================================= */

/* ========================================================================= */
/* Fd */

/**
 * @brief Puts a character into a file descriptor.
 * 
 * @details This function writes a character in a given file descriptor.
 * 
 * @param character The character to be put in the file descriptor.
 * @param fd The file descriptor where the character is going to be put.
 * 
 * @retval - 1 if it writes the character correctly.
 * @retval - -1 if there's an error writing the character.
*/
int				ft_putchar_fd(char character, int fd);

/**
 * @brief Puts a string into a file descriptor.
 * 
 * @details This function writes a string in a given file descriptor.
 * 
 * @param str The string to be put in the file descriptor.
 * @param fd The file descriptor where the character is going to be put.
 * 
 * @retval - 1 if it writes the string correctly.
 * @retval - -1 if there's an error writing the string.
*/
int				ft_putstr_fd(const char *str, int fd);

/**
 * @brief Puts a string with a newline into a file descriptor.
 * 
 * @details This function writes a string with a newline at the end
 * of the string in a given file descriptor.
 * 
 * @param str The string to be put in the file descriptor.
 * @param fd The file descriptor where the character is going to be put.
 * 
 * @retval - 1 if it writes the string correctly.
 * @retval - -1 if there's an error writing the string.
*/
int				ft_putendl_fd(const char *str, int fd);

/**
 * @brief Write an integer to a file descriptor.
 *
 * @details This function writes an integer in a given file descriptor.
 *
 * @param number The integer to be written.
 * @param fd The file descriptor where the integer will be written.
 *
 * @retval - The number of bytes written on success.
 * @retval - -1 if the file descriptor is invalid or if there are
 * memory allocation or writing errors.
*/
int				ft_putnbr_fd(int number, int fd);
/* ==========================================================================*/

/* ==========================================================================*/
/* Memory */

/**
 * @brief Sets the pointer with character an n-bytes amount.
 * 
 * @details This function sets in the memory of a pointer, a character
 * an n-bytes amount.
 * 
 * @param ptr The pointer that will be set by character an n-bytes amount.
 * @param character The character that will be set in ptr.
 * @param bytes The amount of bytes that character will be set in ptr.
 *
 * @note If ptr is NULL doesn't do anything.
*/
void			ft_memset(void *ptr, int character, size_t bytes);

/**
 * @brief Sets the pointer with null character an n-bytes amount.
 * 
 * @details This function sets in the memory of a pointer, a null character
 * an n-bytes amount.
 * 
 * @param ptr The pointer that will be set by character an n-bytes amount.
 * @param bytes The amount of bytes that character will be set in ptr.
 *
 * @note If ptr is NULL doesn't do anything.
*/
void			ft_bzero(void *ptr, size_t bytes);

/**
 * @brief Allocates memory for a pointer and initializes them with
 * null characters.
 * 
 * @details This function allocates n-bytes of memory, each with sizetype
 * size and initializes them with null characters.
 * 
 * @param bytes The total number of bytes to allocate memory for.
 * @param sizetype The size (in bytes) of each element.
 * 
 * @retval - A pointer with memory allocated and set with null characters if
 * successful.
 * @retval - A NULL pointer if the allocation fails.
 *
 * @note The caller is responsible for freeing the memory allocated.
*/
void			*ft_calloc(size_t bytes, size_t sizetype);

/**
 * @brief Locate a byte in a memory block.
 *
 * @details This function searches the first bytes of the memory block
 * pointed to by ptr for the first ocurrence of the byte character.
 *
 * @param ptr Pointer to the memory block to be searched.
 * @param character Value of the byte to be located (as an integer).
 * @param bytes Number of bytes to be searched.
 *
 * @retval - A pointer to the first ocurrence of character in the memory block
 * @retval - NULL if c is not found or ptr is NULL.
*/
void			*ft_memchr(const void *ptr, int character, size_t bytes);

/**
 * @brief Copy memory from one location to another.
 *
 * @details This function copies bytes of memory from str2 to str. The memory
 * blocks must not overlap.
 *
 * @param str Pointer to the destination memory block.
 * @param str2 Pointer to the source memory block.
 * @param bytes Number of bytes to copy.
 *
 * @retval - A pointer to the destination memory block str after copying.
 * @reval - NULL if either str or str2 is NULL.
 *
*/
void			*ft_memcpy(void *str, const void *str2, size_t bytes);

/**
 * @brief Copy memory from one location to another, handling overlapping
 * regions.
 *
 * @details This function copies bytes of memory from str2 to str. Unlike
 * ft_memcpy, this function handles overlapping memory regions correctly.
 *
 * @param str Pointer to the destination memory block.
 * @param str2 Pointer to the source memory block.
 * @param bytes Number of bytes to copy.
 *
 * @retval - A pointer to the destination memory block (str) after copying.
 * @retval - NULL if either str or str2 is NULL.
 *
 * @note If there is an overlap between the source and destination memory
 * blocks, the function uses a byte-by-byte copy to ensure correct results.
 * @note If bytes is zero, the function does nothing and returns str.
*/
void			*ft_memmove(void *str, const void *str2, size_t bytes);

/**
 * @brief Compare memory blocks up to a specified number of bytes.
 *
 * @details This function compares the first bytes of str and str2.
 * The comparison is case-sensitive, and the result is based on the
 * difference between the unsigned char values at corresponding
 * positions in the memory blocks.
 *
 * @param str Pointer to the first memory block to be compared.
 * @param str2 Pointer to the second memory block to be compared.
 * @param bytes Number of bytes to compare.
 *
 * @retval - An integer greater than, equal to, or less than 0
 * if the first bytes of str are greater than, equal to, or
 * less than the first bytes of str2 respectively
*/
int				ft_memcmp(const void *str, const void *str2, size_t bytes);
/* ==========================================================================*/

/* ==========================================================================*/
/* String */

/**
 * @brief Calculates the length of a string.
 * 
 * @details This function calculates the length of the string.
 * 
 * @param str The string that will be used to calculate the length.
 * 
 * @retval - The length of the string.
 * @retval - 0 if str is empty or NULL.
*/
size_t			ft_strlen(const char *str);

/**
 * @brief Joins two strings in a single one.
 * 
 * @details This function creates a new string from joining two strings.
 * 
 * @param str The first string that will be used to create the new string.
 * @param str2 The string that will be used to calculate the length.
 * 
 * @retval - The new string created by joining str and str2.
 * @retval - NULL if fails allocating memory for the new string.
 *
 * @note The caller is responsible for freeing the memory allocated for
 * the new string.
*/
char			*ft_strjoin(const char *str, const char *str2);

/**
 * @brief Compare the first 'bytes' characters of two strings.
 *
 * @details This function compares the first bytes characters of the
 * strings str and str2. The comparison is case-sensitive, and the result
 * is based on the difference between the ASCII values of the characters
 * at the corresponding positions in the strings.
 *
 * @param str Pointer to the first string to be compared.
 * @param str2 Pointer to the second string to be compared.
 * @param bytes Number of characters to compare.
 *
 * @retval - An integer greater than, equal to, or less than 0 if the
 * first bytes characters of str2, respectively.
 * @retval - -1 if either str or str2 is NULL.
*/
int				ft_strncmp(const char *str, const char *str2, size_t bytes);

/**
 * @brief Convert a string to an integer.
 *
 * @details This function converts the initial portion of the string str
 * to its integer representation. The conversion stops when the first
 * non-digit character is encountered. Leading white-space characters
 * are skipped, and the sign of the number is determined by an optional '+'
 * or '-' prefix.
 *
 * @param str Pointer to the string to be converted.
 *
 * @retval - The converted integer value.
 *
 * @note If the string is not a valid integer representation, the behavior
 * is undefined.
*/
int				ft_atoi(const char *str);

/**
 * @brief Convert a string to an long integer.
 *  
 * @details This function converts the initial portion of the string str
 * to its integer representation. The conversion stops when the first
 * non-digit character is encountered. Leading white-space characters
 * are skipped, and the sign of the number is determined by an optional '+'
 * or '-' prefix.
 *
 * @param str Pointer to the string to be converted
 *
 * @retval - The converted long integer value.
 *
 * @note If the string is "-9223372036854775808", the function returns
 * -9223372036854775807LL - 1 to avoid an unsigned integer constant
 * warning.
 * @note If the string is not a valid long integer representation, the
 * behavior is undefined.
*/
long int		ft_atol(const char *str);

/**
 * @brief Duplicate a string.
 *
 * This function allocates memory for a new string and copies the content
 * of the input string str to the newly allocated memory.
 *
 * @param str Pointer to the string to be duplicated.
 *
 * @retval - A pointer to the newly allocated string with the same content
 * as str.
 * @retval - NULL if str is NULL or if memory allocation fails.
 *
 * @note The duplicated string is dynamically allocated and should be
 * freed by the caller when no longer needed.
*/
char			*ft_strdup(const char *str);

/**
 * @brief Copies up to bytes - 1 characters from the string str2 to str,
 * ensuring null-termination.
 *
 * @details This function copies characters from the string str2 to str,
 * ensuring null-termination. If str is large enough to accomodate bytes
 * characters, it returns the total lenght of the concatenated strings
 * str and str2. If str is not large enough, it returns the lenght of
 * str2 + bytes.
 *
 * @param str The destination string.
 * @param str2 The source string to be copied.
 * @param bytes The maximum number of characters to copy, including
 * the null-terminator.
 *
 * @retval - The total lenght of the concatenated strings str and str2
 * if successful.
 * @retval - The lenght of str2 + bytes if str is not large enough.
 * @retval - 0 if either str or str2 is NULL.
*/
size_t			ft_strlcpy(char *str, const char *str2, size_t bytes);

/**
 * @brief Concatenates two strings with a specified buffer size.
 *
 * @details This function appends the contents of the null -terminated
 * string str2 to the end of the null-terminated string str, ensuring
 * that the total lenght does not exceed the given buffer size. The
 * resulting string in str is null-terminated.
 *
 * @param str A pointer to the destination null-terminated string.
 * @param str2 A pointer to the source null-terminated string to
 * be appennded.
 * @param bytes The size of the buffer, indicating the maximum
 * allowed lenght for the resulting string in str.
 *
 * @retval - The total lenght of the concatenated strings (excluding
 * the null terminator) if the operation is successful.
 * @retval - 0 if either str or str is NULL.
*/
size_t			ft_strlcat(char *str, const char *str2, size_t bytes);

/**
 * @brief Locates the first occurrence of a substring within a given
 * number of bytes.
 *
 * @details This function searches for the first occurrence of the
 * substring str2 within the first bytes characters of the string
 * str. The comparison is case-sensitive.
 *
 * @param str The string to be searched.
 * @param str2 The substring to search for.
 * @param bytes The maximum number of bytes to search in the string.
 *
 * @retval - A pointer to the first occurrence of str2 in str within
 * the specified number of bytes.
 * @retval - NULL if str or str2 is NULL or if the substring is not
 * found.
 *
 * @note If str2 is an empty string, the function returns a pointer
 * to str.
*/
char			*ft_strnstr(const char *str, const char *str2, size_t bytes);

/**
 * @brief Locates the first occurrence of a character in a string.
 *
 * @details Locates the first occurrence of the specified character
 * (converted to unsigned char) in the given string. The search
 * includes the null terminating character.
 *
 * @param str The string to be searched.
 * @param character The character to be located.
 *
 * @retval - A pointer to the located character in the string.
 * @retval - NULL if the character is not found or if the input
 * string is NULL.
 *
*/
char			*ft_strchr(const char *str, int character);

/**
 * @brief Locates the last occurrence of a character in a string.
 *
 * @details This function searches the string pointed to by str for
 * the last occurrence of the specified character (converted to an
 * unsigned char) within the string, including the terminating
 * null character.
 *
 * @param str A pointer to the null-terminated string to be searched.
 * @param character The character to be located (as an integer).
 *
 * @retval - A pointer to the last occurrence of the character in
 * the string.
 * @retval - NULL if the character is not found or if str is NULL.
*/
char			*ft_strrchr(const char *str, int character);

/**
 * @brief Create a substring from a given string.
 *
 * @details This function creates a substring from the input string,
 * starting at the specified index and with the specified number of
 * bytes. The returned substring is allocated dynamically and should
 * be freed by the caller when no longer needed.
 *
 * @param str The input string.
 * @param start The starting index of the substring.
 * @param bytes The number of bytes in the substring.
 *
 * @retval - A dynamically allocated substring.
 * @retval - NULL if memory allocation fails or if the input is NULL.
 *
 * @note The substring is dynamically allocated and should be
 * freed by the caller when no longer needed.
*/
char			*ft_substr(const char *str, size_t start, size_t bytes);

/**
 * @brief Trim characters from the beginning and end of a string..
 *
 * @details This function trims characters from the beginning and
 * end of str based on the characters provided in the second string.
 *
 * @param str The input string.
 * @param str2 The characters to trim from the string.
 *
 * @retval - A dinamically allocated trimmed string.
 * @retval - NULL if memory allocation fails or if either str or
 * str2 is NULL.
 *
 * @note The trimmed string is dynamically allocated and should be
 * freed by the caller when no longer needed.
*/
char			*ft_strtrim(const char *str, const char *str2);

/**
 * @brief Applies a function to each character of a string , creating
 * a new string.
 *
 * @details This function applies the provided function f to each
 * character of the string str along with its index. The result
 * is a new dynamically allocated string that contains the modified
 * characters.
 *
 * @param str The input string.
 * @f A function taking an unsigned integer index and a character
 * as parameters, and returning a modified character.
 *
 * @retval - A dynamically allocated string with the modified
 * characters.
 * @retval - NULL if memory allocation fails or if the input string
 * or function is NULL.
 *
 * @note The resulting string is dynamically allocated and should
 * be freed by the caller when no longer needed.
*/
char			*ft_strmapi(const char *str, char (*f)(unsigned int, char));

/**
 * @brief Apply a function to each character of a string with its index.
 *
 * @details This function iterates through each character of str along
 * with its index and applies the provided function f. The index and a
 * pointer to the current character are passed as arguments to the function f.
 *
 * @param str The input string.
 * @param f A function taking an unsigned integer index and a pointer to a
 * character, and performing an operation on the character.
 *
 * @note If the input string or function pointer is NULL, the functions does
 * nothing.
*/
void			ft_striteri(char *str, void (*f)(unsigned int, char *));

/**
 * @brief Converts an integer to its string representation.
 *
 * @details This function converts the given integer to its string
 * representation and returns a dynamically allocated string.
 *
 * @param number The integer to convert.
 *
 * @retval - A dynamically allocated string representation of the
 * integer.
 * @retval - NULL if the memory allocation fails.
 *
 * @note The resulting string is dynamically allocated and should
 * be freed by the caller when no longer needed.
*/
char			*ft_itoa(int number);
/* ==========================================================================*/

#endif
