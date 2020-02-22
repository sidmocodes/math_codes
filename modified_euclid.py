def euclid_gcd(a,b):
    old_x, x = 1, 0; old_y, y = 0, 1
    while b:
        q = a//b
        x, old_x = old_x - q*x, x
        y, old_y = old_y - q*y, y
        a, b = b, a % b
    return a, old_x, old_y

#a=GCD
#old_x,old_y=coeffs
