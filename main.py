import sys
import os

# เพิ่มเส้นทางไปยังไดเรกทอรีของโมดูลที่สร้างขึ้น
sys.path.append(os.path.abspath("build"))

import text_processor  # โมดูลที่เราสร้าง
