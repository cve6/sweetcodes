import pyautogui
import random
import string
import os
import time

def gerar_frase(tamanho=10):
    caracteres = string.ascii_letters + string.digits
    return ''.join(random.choice(caracteres) for _ in range(tamanho))
def iniciar_pesquisas():
    print("Começando a pesquisar em 4s...\n Coloque a janela em foco.")
    time.sleep(4)
    for i in range(61):
        time.sleep(4)
        pyautogui.click(SUAS,CORDENADAS, duration = 1) #ajuste as cordenadas
        pyautogui.click()                   #conforme sua resoluçao
        time.sleep(1)
        frase = gerar_frase(random.randint(5, 15))
        pyautogui.write(frase)
        pyautogui.press('enter')
        print("Pesquisas feitas:", i + 1)
iniciar_pesquisas()
print("\n")

#sim isso aq eh pra farma robux na MR (microsoft rewards)
