
def correctScholarships(bestStudents, scholarships, allStudents):
    return  set(allStudents).issuperset(set(scholarships)) \
            and set(scholarships).issuperset(set(bestStudents)) \
            and not set(allStudents).issubset(scholarships)

if __name__ == '__main__':
    bestStudents = [3, 5]
    scholarships = [3, 5]
    allStudents = [3, 5]
    print(correctScholarships(bestStudents, scholarships, allStudents))