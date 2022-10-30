def dupli(s):
  s = list(s)
  p = ''
  
  for i in s:
    if i not in p:
      p += i
  
  return p

s = 'hello'

print(dupli(s))
