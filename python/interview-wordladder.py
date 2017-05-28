import collections


def wordLadder1(beginWord, endWord, wordList):
    wordSet = set([])
    for word in wordList:
        wordSet.add(word)

    # write your code here
    wordSet.add(endWord)
    wordLen = len(beginWord)
    queue = collections.deque([(beginWord, 1)])
    while queue:
        curr = queue.popleft()
        currWord = curr[0];
        currLen = curr[1]
        if currWord == endWord: return currLen
        for i in range(wordLen):
            part1 = currWord[:i];
            part2 = currWord[i + 1:]
            for j in 'abcdefghijklmnopqrstuvwxyz':
                if currWord[i] != j:
                    nextWord = part1 + j + part2
                    if nextWord in wordSet:
                        queue.append((nextWord, currLen + 1))
                        wordSet.remove(nextWord)
        return 0

def wordLadder(beginWord, endWord, wordList):
    wordSet = set()
    for word in wordList:
        wordSet.add(word)

    wordSet.add(endWord)
    queue = []
    queue.append((beginWord, 1))

    while queue:
        cur = queue.pop(0)
        curWord, curLen = cur[0], cur[1]

        if curWord == endWord:
            return curLen

        for i in range(len(endWord)):
            beforeChar, afterChar = curWord[:i], curWord[i+1:]
            for char in "abcdefghijklmnopqrstuvwxyz":
                newWord = beforeChar + char + afterChar
                if newWord in wordSet:
                    queue.append((newWord, curLen + 1))
                    wordSet.remove(newWord)

    return 0


if __name__ == '__main__' :
    start = 'hit'
    end = 'cog'
    wordList = ['hot', "dot", "dog", "lot", "log", "cog"]
    l = wordLadder(start, end, wordList)
    print(l)
