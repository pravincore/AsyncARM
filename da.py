#!/usr/bin/python
import sys

if(sys.argv[1]):
	name = sys.argv[1]
else:
	print "enter filename"
f = open(name,'r')
str = ''
count = 0

print "disassembly of the .asm file\n"
while True:
        count += 1
        l = f.read(1)
        if(l):
                s = '{:0>2}'.format(format(ord(l),'x'))
                str = s + str
                if(count%4 == 0):
                        str =  '\n' + str
        else:
                break;

str = str+'\n'
nf = open(name+'.exa','w')
nf.write(str)
nf.close()

nf = open(name+'.exa','r+')
lf = nf.readlines()
del lf[0]
lf.reverse()
nf.seek(0)
nf.truncate()
nf.writelines(lf)
nf.seek(0)

print nf.read()
nf.seek(0)
print "\nLines written to the output file\n"
print nf.readlines()


nf.close()
print "\nEnd"

