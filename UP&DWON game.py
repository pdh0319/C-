import random

a = random.randrange(1,101)
print ('1부터 100까지의 숫자중 하나를 입력하세요!')
print ('단 기회 15번이 지나면 아웃 됩니다!')
cnt = 0
while True:
    b = int(input())
    if a == b:
        print ('정답')
        print ('당신은 %d트만에 성공하였습니다!'%cnt)
        break
    elif a > b:
        print ('UP!')
        cnt = cnt + 1
    elif b > a:
        print ('DWON!')
        cnt = cnt + 1
    if cnt == 15:
        print ('실패!')
        print ('정답은 %d였습니다!'%a)
        break
    
    
