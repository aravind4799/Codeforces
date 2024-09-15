import os
import shutil

# Create 'bin' folder if it doesn't exist
bin_folder = 'bin'
if not os.path.exists(bin_folder):
    os.makedirs(bin_folder)

# Locate and move all .exe files in the current directory
exe_files = []
for file in os.listdir('.'):  # Iterating through current directory
    if file.endswith('.exe') and os.path.isfile(file):
        exe_files.append(file)
        shutil.move(file, bin_folder)  # Move .exe files to 'bin' folder

print(f"Moved {len(exe_files)} .exe files to the 'bin' folder:")
for file in exe_files:
    print(f"- {file}")