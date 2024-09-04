# Define sets A and B
A = {19, 22, 24, 20, 25, 26}
B = {19, 22, 20, 25, 26, 24, 28, 27}

# Join A and B (Union)
joined_AB = A.union(B)
print("Joined A and B (A 𝖴 B):", joined_AB)

# Intersection of A and B
intersection_AB = A.intersection(B)
print("Intersection of A and B (A ∩ B):", intersection_AB)

# Check if A is a subset of B
is_A_subset_B = A.issubset(B)
print("Is A a subset of B?:", is_A_subset_B)

# Check if A and B are disjoint sets
are_A_B_disjoint = A.isdisjoint(B)
print("Are A and B disjoint sets?:", are_A_B_disjoint)

# Join A with B and B with A (Both result in the union)
joined_A_with_B = A.union(B)
joined_B_with_A = B.union(A)
print
