# Pythono3 code to rename multiple
# files in a directory or folder


def ReadToList(listA):
    file1 =open('file.txt','r') #Open file to read
    Lines =file1.readlines()    #Read lines from file
    for line in Lines:          #Loop for all lines read from file
        line=line[:-1]          #To remove \n from line
        line = re.sub('[*,?]', '', line)
        listA.append(line)      #Add line to List
    print(listA)                #Display list with all values
    return listA


# importing os module
import os
import re

listA = ['emp']
listA = ReadToList(listA)

filenumber=0        #Starting number for Audio Files
filepath = r'D:\GIT\Audio\KiaraNoise2\\'
filepath2 = r'D:\GIT\Audio\KiaraNoise3\\'

for filename in os.listdir(filepath):
    filenumber += 1
    os.rename(filepath + filename, filepath2 + listA[filenumber] + '.mp3')




