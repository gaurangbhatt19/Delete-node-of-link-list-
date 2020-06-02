void deleteNode(ListNode* node) {
        int t39;
      
            t39=node->val;
            node->val=node->next->val;
            node->next->val=t39;
            node->next=node->next->next;
      }
