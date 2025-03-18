import sqlite3

# Connect to the database
conn = sqlite3.connect('salary_management.db')
c = conn.cursor()

# Create tables
c.execute('''
CREATE TABLE IF NOT EXISTS employees (
    id INTEGER PRIMARY KEY AUTOINCREMENT,
    name TEXT NOT NULL,
    position TEXT NOT NULL
)
''')

c.execute('''
CREATE TABLE IF NOT EXISTS salaries (
    id INTEGER PRIMARY KEY AUTOINCREMENT,
    employee_id INTEGER,
    salary REAL,
    FOREIGN KEY (employee_id) REFERENCES employees(id)
)
''')

# Commit and close the connection
conn.commit()
conn.close()
