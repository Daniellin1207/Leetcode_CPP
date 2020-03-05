s="""


62. Unique Paths11111



"""
print('\n\n\n\n')
filename=s.replace(".","_").replace(" ","_").replace("__","_").replace("\n","")+".cc"
print(filename)
print('\n\n\n\n')

with open(filename, 'w') as file_object:
    file_object.write("hello")


baconFile = open('bacon.txt')
content = baconFile.read()
baconFile.close()
print(content)
