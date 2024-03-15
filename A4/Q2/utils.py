def longest_common_prefix(strs):
    if not strs:
        return ""

    min_length = min(len(s) for s in strs)
    low, high = 0, min_length

    while low < high:
        mid = (low + high + 1) // 2
        prefix = strs[0][:mid]

        if all(s.startswith(prefix) for s in strs):
            low = mid
        else:
            high = mid - 1

    return strs[0][:low]

def segregate_and_find_max_lcp(strs):
    char_groups = {}
    
    for s in strs:
        if s[0] not in char_groups:
            char_groups[s[0]] = []
        char_groups[s[0]].append(s)
    
    max_lcp = ""
    
    for char, group in char_groups.items():
        if(len(group)!=1):
            lcp = longest_common_prefix(group)
            if len(lcp) > len(max_lcp):
                max_lcp = lcp
    
    return max_lcp

# Example usage
# input_strings = ["flower", "flow", "flight", "apple", "app", "bat", "ball", "banana"]
# result = segregate_and_find_max_lcp(input_strings)
# print("Longest Common Prefix with Max Length:", result)
