import pygame
import time

# Initialize Pygame
pygame.init()

# Set screen dimensions
screen_width = 640
screen_height = 480
screen = pygame.display.set_mode((screen_width, screen_height))

# Set font and font size
font = pygame.font.Font(None, 30)

# Set loading text
loading_text = font.render("Loading...", True, (255, 255, 255))
loading_rect = loading_text.get_rect(center=(screen_width/2, screen_height/2))

# Set loading rectangle
loading_rect2 = pygame.Rect(50, 400, 0, 20)
loading_increment = screen_width // 20

# Draw loading screen
screen.fill((0, 0, 0))
pygame.draw.rect(screen, (255, 255, 255), loading_rect2, 1)
pygame.draw.rect(screen, (255, 255, 255), (loading_rect2.x+1, loading_rect2.y+1, loading_rect2.width-1, loading_rect2.height-1))
screen.blit(loading_text, loading_rect)
pygame.display.flip()

# Load resources
loaded_resources = 0
total_resources = 10

for i in range(total_resources):
    # Load resource i
    loaded_resources += 1

    # Increase the width of the loading rectangle
    loading_rect2.width += loading_increment

    # Fill the loading rectangle with white up to its current width
    fill_rect = pygame.Rect(loading_rect2.x+1, loading_rect2.y+1, loading_rect2.width-2, loading_rect2.height-2)
    pygame.draw.rect(screen, (255, 255, 255), fill_rect)

    # Add delay to simulate loading time
    time.sleep(0.5)

    # Update the loading screen
    pygame.display.flip()

# Game loop
running = True
while running:
    for event in pygame.event.get():
        if event.type == pygame.QUIT:
            running = False

    # Game code goes here

    pygame.display.update()

# Quit Pygame
pygame.quit()
