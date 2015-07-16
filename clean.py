import os


def clean( path ):
  mark = 1 
  file_list = os.listdir(path)
  for file_obj in file_list:
    if os.path.isdir(path+'/'+file_obj):
        clean(path+'/'+file_obj)
        continue
    if file_obj == 'clean.py':
      mark = 0
      continue
    fname,fext = os.path.splitext( file_obj )
    if fext == '.cpp' or fext == '.c' or fext == '.h' or fext == '.txt' or fext == '' or fext == '.doc' or fext == '.zip':
      mark = 0
      continue
    os.remove(path+'/'+file_obj)
  if mark == 1 :
    os.rmdir(path)
run = raw_input('Anything can happen ,input y ')
if run == 'y' or run == 'Y':
  clean(os.getcwd())
