import pygame
import math
import random
from pygame import mixer

# initialize the pygame
pygame.init()

hieght = 800
width = 600

# score
score_value = 0
font = pygame.font.Font('freesansbold.ttf',32)

textX = 10
textY = 10

#game over text
over_font = pygame.font.Font('freesansbold.ttf',64)

def show_score(x,y):
    score = font.render("Score :" + str(score_value), True, (255,255,255))
    screen.blit(score,(x,y))

# creating the screen
screen = pygame.display.set_mode((hieght,width))

#background image loading
background = pygame.image.load('./images/background.png')

# Title and Icon
pygame.display.set_caption("Tile Breakers")
icon = pygame.image.load('./images/logo.png')
pygame.display.set_icon(icon)

# background sound
mixer.music.load('./audio/background.wav')
mixer.music.play(-1)

# player
playerImg = pygame.image.load('./images/spaceship.png')
playerX = 370
playerY = 480
playerX_change = 0

# enemy
enemyImg = []
enemyX = []
enemyY = []
enemyX_change = []
enemyY_change = []
num_of_enemies = 6

for i in range(num_of_enemies):
    enemyImg.append(pygame.image.load('./images/alien.png'))
    enemyX.append(random.randint(0,735))
    enemyY.append(random.randint(50,150))
    enemyX_change.append(0.8)
    enemyY_change.append(40)

#ready state
#fire state

# bullet
bulletImg = pygame.image.load('./images/bullet.png')
bulletX = 0
bulletY = 480
bulletX_change = 0
bulletY_change = 5
bullet_state = "ready"


def player(x,y):
    screen.blit(playerImg,(x,y))

def enemy(x,y,i):
    screen.blit(enemyImg[i],(x,y))

def fire_bullet(x,y):
    global bullet_state
    bullet_state = "fire"
    screen.blit(bulletImg,(x+16, y+10))
    
def isCollision(enemyX, enemyY, bulletX, bulletY):
    distance = math.sqrt(((bulletX - enemyX)**2) + ((bulletY - enemyY)**2))
    if distance < 27:
        return True
    return False

def game_over_text():
    over_text = over_font.render("GAME OVER", True, (255,255,255))
    screen.blit(over_text,(200,250))


# runnig loop for window
running = True

while running:
    
    #all time showing
    #RGB
    screen.fill((0,0,0))
    #background image
    screen.blit(background,(0,0))

    for event in pygame.event.get():
        if event.type == pygame.QUIT:
            running = False
        
        # if keystroke is pressed checking left or right key
        if event.type == pygame.KEYDOWN:
            if event.key == pygame.K_LEFT:
                playerX_change = -0.6
            if event.key == pygame.K_RIGHT:
                playerX_change = 0.6
            if event.key == pygame.K_SPACE:
                if bullet_state == "ready":
                    bullet_sound = mixer.Sound('./audio/laser.wav')
                    bullet_sound.play()
                    bulletX = playerX
                    fire_bullet(bulletX,playerY)
        if event.type == pygame.KEYUP:
            if event.key == pygame.K_LEFT or event.key == pygame.K_RIGHT:
                playerX_change = 0
   
    
    playerX += playerX_change
    if playerX <=0 :
        playerX = 0
    elif playerX >= 736:
        playerX = 736
    
    for i in range(num_of_enemies):

        # game over
        if enemyY[i] > 440:
            for j in range(num_of_enemies):
                enemyY[j] = 2000
            game_over_text()
            break 

        enemyX[i] += enemyX_change[i]
        if enemyX[i ] <=0 :
            enemyX_change[i] = 0.8
            enemyY[i] += enemyY_change[i] 
        elif enemyX[i] >= 736:
            enemyX_change[i] = -0.8
            enemyY[i] += enemyY_change[i] 

        #collision
        collision = isCollision(enemyX[i],enemyY[i],bulletX,bulletY)
        if collision:
            explosion_sound = mixer.Sound('./audio/explosion.wav')
            explosion_sound.play()
            bulletY = 480
            bullet_state = "ready"
            score_value += 1
            print(score_value)
            enemyX[i] = random.randint(0,735)
            enemyY[i] = random.randint(50,150)

        enemy(enemyX[i],enemyY[i],i)
    
    
    #bullet movement
    if bulletY <= 0:
        bulletY = 480
        bullet_state = "ready"
    if bullet_state == "fire":
        fire_bullet(bulletX,bulletY)
        bulletY -= bulletY_change
    
   

    player(playerX,playerY)
    show_score(textX,textY)
    #always update display after adding any element to screen
    pygame.display.update()
    

