#! /bin/bash
echo "what is your name" 
read person 
echo "my name is , $person "
meow=23  
echo "my value is $meow"

# for meow in list; do
    # 
# done
i=0
while [ $i -lt $meow ]; do
        echo "meow"
        i=$((i+1))
done

meow1=(1 2 3 4)
for j in "${meow1[@]}"; do
    echo "Value: $j"
done
echo "meowmeowmoew"
for ((i=1; i<=10; i++)); do
    echo "Value: $i"
done


# Shell script example

# Variable declaration
name="John"
age=25
counter=0
array=("apple" "banana" "cherry")
associative_array=([key1]="value1" [key2]="value2")
is_valid=true

# Input and output
echo "Welcome to the shell script!"
echo "Please enter your name:"
read input_name
echo "Hello, $input_name! Nice to meet you."

# Conditional statement
if [ "$input_name" = "$name" ]; then
  echo "You have the same name as the author!"
else
  echo "You have a different name."
fi

# Loop
echo "Counting from 1 to 5:"
for i in {1..5}; do
  echo $i
done

# Nested loops
echo "Nested loops example:"
for ((i=1; i<=3; i++)); do
  echo "Outer loop iteration: $i"
  for ((j=1; j<=2; j++)); do
    echo "Inner loop iteration: $j"
  done
done

# Function definition
print_age() {
  echo "The age is: $1"
}

# Function call
print_age $age

# File manipulation
echo "Creating a new file..."
touch new_file.txt
echo "This is a test file." > new_file.txt
echo "File created successfully."

# Command substitution
file_size=$(wc -c < new_file.txt)
echo "The size of the file is: $file_size bytes."

# Command line arguments
echo "The script name is: $0"
echo "The number of arguments passed is: $#"
echo "The arguments are: $@"

# Additional variable declarations
random_number=$((RANDOM % 100))
multiline_string="This is a
multiline
string."

# Printing variables
echo "Random number: $random_number"
echo "Multiline string:"
echo "$multiline_string"

# Associative array iteration
echo "Associative array iteration:"
for key in "${!associative_array[@]}"; do
  echo "Key: $key, Value: ${associative_array[$key]}"
done

# While loop
echo "While loop example:"
while [ $counter -lt 5 ]; do
  echo "Counter value: $counter"
  counter=$((counter + 1))
done

# Until loop
echo "Until loop example:"
until [ $counter -eq 0 ]; do
  echo "Counter value: $counter"
  counter=$((counter - 1))
done
