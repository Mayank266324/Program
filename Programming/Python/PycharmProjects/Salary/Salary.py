from database import *
import tkinter as tk
from tkinter import messagebox

# Function to add a new employee
def add_employee():
    name = name_entry.get()
    position = position_entry.get()
    if name and position:
        conn = sqlite3.connect('salary_management.db')
        c = conn.cursor()
        c.execute("INSERT INTO employees (name, position) VALUES (?, ?)", (name, position))
        conn.commit()
        conn.close()
        name_entry.delete(0, tk.END)
        position_entry.delete(0, tk.END)
        messagebox.showinfo("Success", "Employee added successfully!")
    else:
        messagebox.showerror("Error", "Please enter all details.")

# Function to add a new salary
def add_salary():
    employee_id = emp_id_entry.get()
    salary = salary_entry.get()
    if employee_id and salary:
        conn = sqlite3.connect('salary_management.db')
        c = conn.cursor()
        c.execute("INSERT INTO salaries (employee_id, salary) VALUES (?, ?)", (employee_id, salary))
        conn.commit()
        conn.close()
        emp_id_entry.delete(0, tk.END)
        salary_entry.delete(0, tk.END)
        messagebox.showinfo("Success", "Salary added successfully!")
    else:
        messagebox.showerror("Error", "Please enter all details.")

# Main application window
root = tk.Tk()
root.title("Salary Management System")

# Employee Management Frame
emp_frame = tk.Frame(root)
emp_frame.pack(pady=10)

tk.Label(emp_frame, text="Name:").grid(row=0, column=0, padx=5, pady=5)
name_entry = tk.Entry(emp_frame)
name_entry.grid(row=0, column=1, padx=5, pady=5)

tk.Label(emp_frame, text="Position:").grid(row=1, column=0, padx=5, pady=5)
position_entry = tk.Entry(emp_frame)
position_entry.grid(row=1, column=1, padx=5, pady=5)

add_emp_button = tk.Button(emp_frame, text="Add Employee", command=add_employee)
add_emp_button.grid(row=2, columnspan=2, pady=10)

# Salary Management Frame
salary_frame = tk.Frame(root)
salary_frame.pack(pady=10)

tk.Label(salary_frame, text="Employee ID:").grid(row=0, column=0, padx=5, pady=5)
emp_id_entry = tk.Entry(salary_frame)
emp_id_entry.grid(row=0, column=1, padx=5, pady=5)

tk.Label(salary_frame, text="Salary:").grid(row=1, column=0, padx=5, pady=5)
salary_entry = tk.Entry(salary_frame)
salary_entry.grid(row=1, column=1, padx=5, pady=5)

add_salary_button = tk.Button(salary_frame, text="Add Salary", command=add_salary)
add_salary_button.grid(row=2, columnspan=2, pady=10)


root.mainloop()
