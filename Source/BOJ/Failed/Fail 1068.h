#pragma once

#include <iostream>

namespace BOJ1068
{
	// struct TreeNode {
	// 	int value;
	// 	TreeNode* parent = nullptr;
	// 	TreeNode** children = nullptr;
	// 	TreeNode(int val) : value(val), parent(nullptr), children(nullptr) {}
	//
	// 	TreeNode* Find(int val) {
	// 		if (val == value) {
	// 			return this;
	// 		}
	//
	// 		TreeNode** childPtr = children;
	// 		while (*childPtr != nullptr) {
	// 			auto target = (*childPtr)->Find(val);
	// 			if (target != nullptr) {
	// 				return target;
	// 			}
	// 			childPtr++;
	// 		}
	// 		return nullptr;
	// 	}
	//
	// 	void Destroy() {
	// 		if (parent != nullptr) {
	// 			TreeNode** childPtr = children;
	// 			while (*childPtr != nullptr) {
	//
	// 				childPtr++;
	// 			}
	// 		}
	//
	// 		TreeNode** childPtr = children;
	// 		while (*childPtr != nullptr) {
	//
	// 			childPtr++;
	// 		}
	// 		if (left != nullptr) {
	// 			left->Destroy();
	// 			delete left;
	// 			left = nullptr;
	// 		}
	// 		if (right != nullptr) {
	// 			right->Destroy();
	// 			delete right;
	// 			right = nullptr;
	// 		}
	// 	}
	//
	// 	void AddChild(int val) {
	// 		TargetNode->right = new TreeNode(i);
	// 		TargetNode->right->parent = TargetNode;
	// 	}
	//
	// 	int GetLeafNodeCount() {
	// 		if (left == nullptr && right == nullptr) {
	// 			return 1;
	// 		}
	// 		int result = 0;
	// 		if (left != nullptr) {
	// 			result += left->GetLeafNodeCount();
	// 		}
	// 		if (right != nullptr) {
	// 			result += right->GetLeafNodeCount();
	// 		}
	// 		return result;
	// 	}
	// };
	//
	// int TEST() {
	// 	std::ios::sync_with_stdio(false);
	// 	int N;
	// 	int* Node;
	// 	std::cin >> N;
	// 	Node = new int[N];
	// 	for (int i = 0; i < N; i++) {
	// 		std::cin >> Node[i];
	// 	}
	//
	// 	TreeNode* root = new TreeNode(0);
	// 	for (int i = 0; i < N; i++) {sdf
	// 		int index = Node[i];
	// 		if (index == -1) {
	// 			// Check
	// 			continue;
	// 		}
	// 		else
	// 		{
	// 			auto TargetNode = root->Find(index);
	// 			if (TargetNode == nullptr) {
	// 				// Check
	// 				continue;
	// 			}
	// 			TargetNode->AddChild(i);
	// 		}
	// 	}
	// 	int TargetNodeValue;
	// 	std::cin >> TargetNodeValue;
	//
	// 	auto TargetNode = root->Find(TargetNodeValue);
	// 	if (TargetNode != nullptr) {
	// 		if (TargetNode == root) {
	// 			root = nullptr;
	// 		}
	// 		TargetNode->Destroy();
	// 		delete TargetNode;
	// 	}
	// 	int count = 0;
	// 	if (root != nullptr)
	// 	{
	// 		count = root->GetLeafNodeCount();
	// 	}
	// 	std::cout << count;
	//
	// 	
	// 	return 0;
	// }
}