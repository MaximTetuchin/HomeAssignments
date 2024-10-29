from PIL import Image
import numpy as np

# Параметры изображения
width, height = 736, 615  # Замените на реальные размеры изображения

# Чтение "сырого" файла
input_file_path = "ImageExample\output_image.raw"
with open(input_file_path, "rb") as f:
    raw_data = f.read()

# Преобразование байтов в массив пикселей
pixel_array = np.frombuffer(raw_data, dtype=np.uint8).reshape((height, width))

# Создание изображения из массива пикселей
image = Image.fromarray(pixel_array, mode='L')

# Отображение изображения
image.show()
