import sys
import os

# เพิ่มเส้นทางไปยังโฟลเดอร์ Debug ถ้าจำเป็น
sys.path.append(os.path.join(os.path.dirname(__file__), 'build/Debug'))

import text_processor  # โมดูลที่เราสร้าง
