from PIL import Image
import os

def divide_intensity_and_color(input_image_path, output_image_path, interval):
    # Open the input image
    img = Image.open(input_image_path)

    # Convert the image to grayscale
    img_gray = img.convert('L')

    # Get the minimum and maximum intensity values
    min_intensity = min(img_gray.getextrema())
    max_intensity = max(img_gray.getextrema())

    # Calculate the range for each segment
    segment_range = (max_intensity - min_intensity + 1) // interval

    # Create a color map for each segment
    color_map = [
        (255, 0, 0),     # Red
        (0, 255, 0),     # Green
        (0, 0, 255),     # Blue
        (255, 255, 0),   # Yellow
        (255, 0, 255),   # Magenta
        (0, 255, 255),   # Cyan
        (128, 0, 0),     # Maroon
        (0, 128, 0),     # Olive
        (0, 0, 128),     # Navy
        (128, 128, 0),   # Olive Green
        (128, 0, 128),   # Purple
        (0, 128, 128),   # Teal
        (255, 165, 0),   # Orange
        (128, 128, 128),  # Gray
        (192, 192, 192),  # Silver
        (0, 0, 0)        # Black
    ]

    # Create an output image with the same size as the input
    img_output = Image.new('RGB', img.size)

    # Iterate over each pixel and assign a color based on intensity range
    for y in range(img.height):
        for x in range(img.width):
            intensity = img_gray.getpixel((x, y))
            # Ensure the index is within bounds
            segment_index = min(intensity // segment_range, interval-1)
            color = color_map[segment_index]
            img_output.putpixel((x, y), color)

    # Save the output image
    img_output.save(output_image_path)


def create_directory(directory_path):
    # Create directory if it doesn't exist
    if not os.path.exists(directory_path):
        os.makedirs(directory_path)

# Input and output paths
input_image_path = "images/dark1.jpg"
output_folder_path = 'images/output/'

# Create the 'output' directory inside 'images' if it doesn't exist
create_directory(output_folder_path)

# Iterate over intervals from 1 to 10
for interval in range(1, 11):
    # Create directory for each interval inside 'output'
    interval_folder_path = os.path.join(output_folder_path, f'interval_{interval}.jpg')

    # Call the function for processing
    divide_intensity_and_color(input_image_path, interval_folder_path, interval)
