class Solution {
    func mergeAlternately(_ word1: String, _ word2: String) -> String {
        var mergedString = "" 
        var i = word1.startIndex
        var j = word2.startIndex

        while i < word1.endIndex && j < word2.endIndex {
            mergedString.append(word1[i])
            mergedString.append(word2[j])
            i = word1.index(after:i)
            j = word2.index(after:j)
        }

        mergedString.append(contentsOf: word1[i...])
        mergedString.append(contentsOf: word2[j...])

        print(mergedString)
        return mergedString
    }
}