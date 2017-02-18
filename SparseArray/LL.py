class NodeString:
	
	def __init__(self, _frequency, _name):
		self.frequency = _frequency
		self.name = _name
		self.next

class UnrollList:

	def __init__(self):
		self.startNode

	def addStart(self, _newNode):
		if(self.startNode):
			self.startNode.next = _newNode
		else:
			self.startNode = _newNode

class LL:
	def __init__(self):
		self.internalList = [None] * 20

	#Find the string's length, and use the length
	#to find new node
	def add(self, string):
		length = len(string)

		if self.internalList[length]:
			ULL = self.internalList[length].startNode
			if ULL:
				if ULL.startNode.name == string:
					ULL.frequency += 1
				else:
					newString = NodeString(1, string)
					ULL.next = newString
		else:
			newString = NodeString(1,string)
			self.internalList[length] = newString



if __name__ == "__main__":
	print "Hello, Testing"
	sparseArray = LL();

	sparseArray.add("abc")
