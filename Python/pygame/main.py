import pygame

# initialize the pygame
pygame.init()

hieght=800
width=600


# creating the screen
screen = pygame.display.set_mode((hieght,width))

# Title and Icon
pygame.display.set_caption("Tile Breakers")
icon = pygame.image.load('./images/logo.png')
pygame.display.set_icon(icon)


# runnig loop for window
running = True
while running:
    for event in pygame.event.get():
        if event.type == pygame.QUIT:
            running = False
    
