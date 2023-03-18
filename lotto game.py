import random

ln = []
ly = []

while True:
    num = random.randint(1,45)
    if num not in ln:
        ln.append(num)
    
    if len(ln) == 7:
        break;

print ('1부터 45까지의 숫자를 입력하세요')
print (ln)
for i in range(1,7):
    b = int(input())
    ly.append(b)
print ('보너스 번호를 입력하세요.')

c = int(input())
ly.append(c)

print ('당신의 번호는')
print (ly)
print ('입니다!')
cnt = 0
bn = 0
for i in ly:
    if i in ln:
        cnt = cnt + 1
if ly[6] == ln[6]:
    bn = bn + 1
print ('당신이 당첨된 숫자는 %d개 입니다!'%cnt)

print ('당첨 번호는 %s입니다.'%ln)
