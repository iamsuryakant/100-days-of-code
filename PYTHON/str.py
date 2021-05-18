def findAns(l):
 odd = []
 even = []
 for c in l:
  digit = int(c)
  if (digit & 1):
   odd.append(digit)
  else:
   even.append(digit)
 i = 0
 j = 0
 ans = ""
 while (i < len(odd) and j < len(even)):
  if (odd[i] < even[j]):
   ans += str(odd[i])+" "
   i = i + 1
  else:
   ans += str(even[j])+" "
   j = j + 1
 while (i < len(odd)):
  ans += str(odd[i])+" "
  i = i + 1
 while (j < len(even)):
  ans += str(even[j])+" "
  j = j + 1
 while (ans[0] == '0'):
  ans = ans[1:]+" "
 return ans


n = int(input())
l = []
for i in range(n):
    p = int(input())
    l.append(p)
k = int(input())
m = list(findAns(l).split(" "))
r = 0
print(m)
for i in m:
    if k > 0:
        r = r+int(k)*int(i)
    else:
        break
    k = k-1
print(r)
