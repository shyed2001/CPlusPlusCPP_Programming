#Program to generate the Fibonacci Sequence till n
import timeit

start = timeit.default_timer()
n=777
''' first two terms are first and second    
n=int(input("Enter the value of 'n': ")) '''
first=0
second=1
sum=0
count=1
print("Fibonacci Sequence: ")
# Count should not be more then n.
while(count<=n):    
  print(sum)
  count+=1
  first=second
  second=sum
  sum=first+second	
  
  stop = timeit.default_timer()
execution_time = stop - start

print("Program Executed in "+str(execution_time)) # It returns time in seconds