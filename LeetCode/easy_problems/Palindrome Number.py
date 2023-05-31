def isPalindrome(x):

    int_to_str = str(x)

    if int_to_str[:] == int_to_str[::-1]:

        return True

    return False

# another solution

# def isPalindrome(self, x: int) -> bool:

#         flag= True
#         int_to_str=str(x)
#         last = -1
#         for i in range(len(int_to_str)//2):
#             if int_to_str[i] != int_to_str[last]:
#                 flag =False
#                 break
#             last-=1
#         if flag:
#             return True
#         else:
#             return False
