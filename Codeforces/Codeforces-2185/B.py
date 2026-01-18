t = 0
T = 1
T = int(input())
while t < T:
  
  n = int(input())
  arr = list(map(int, input().split()))
  mx = 0; 
  mx = max(arr)
  print(mx*n)
  
  
  t += 1
