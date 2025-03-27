# Assignment01_Code04.py

s = input().strip()
ex = input().strip()

st = []
ex_len = len(ex)

for c in s:
    st.append(c)

    if len(st) >= ex_len and st[-ex_len:] == list(ex):
        del st[-ex_len:]

if st: print("".join(st))
else: print("FRULA")