zz500 = 14569.48
hs300 = 28073.28
bp500 = 14400
nz100 = 23331
invest = 11096

zz = zz500
hs = hs300
hw = bp500 + nz100

pzz = 0.2
phs = 0.4
phw = 0.4

assets = zz + hs + hw + invest
izz = assets*pzz - zz
ihs = assets*phs - hs
ihw = assets*phw - hw

print(izz)
print(ihs)
print(ihw)


