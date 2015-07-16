#!/usr/bin/env python
# -*- coding: utf-8 -*-
# @Author: senyang
# @Date:   2015-07-16 23:08:07

class Solution:
    # @param A, a list of integer
    # @return an integer
    def singleNumber(self, A):
        array = {}
        for i in A:
            if not array.has_key(i):
                array[i]=i
            else:
                array.pop(i)
        return array.keys()[0]