function makeArrayConsecutive2(sequence) {
    return Math.max(...sequence) - Math.min(...sequence) - sequence.length + 1;
}