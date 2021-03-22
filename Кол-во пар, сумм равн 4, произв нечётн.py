n = int(input('Введите число')) 
buf = 10 * [0] 
sum_number = 0 
for _ in range(n): 
  x = int(input()) 
  if x % 2 != 0: 
    buf[x % 10] += 1 
print(buf) 
for i in range(0, buf[7]): 
  sum_number += i 
sum_number += buf[1] * buf[3] 
sum_number += buf[5] * buf[9] 
print(sum_number)
