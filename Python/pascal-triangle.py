def generate_pascals_triangle(n):
    triangle = []
    
    for i in range(n):
        # Start each row with 1
        row = [1] * (i + 1)
        
        # Fill in the interior values of the row
        for j in range(1, i):
            row[j] = triangle[i - 1][j - 1] + triangle[i - 1][j]
        
        # Add the row to the triangle
        triangle.append(row)
    
    # Print the triangle in pyramid format
    max_width = len("   ".join(map(str, triangle[-1])))  # Find the width of the last row for centering
    for row in triangle:
        print("   ".join(map(str, row)).center(max_width))

# Example usage:
generate_pascals_triangle(int(input("Enter the number of rows: ")))