n, x = map(int, input().split())
s = input()

for string in s:
  if string == 'o':
    x += 1
  elif x:
    x -= 1
print(x)