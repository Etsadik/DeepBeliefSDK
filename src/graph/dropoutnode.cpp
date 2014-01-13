//
//  dropoutnode.cpp
//  jpcnn
//
//  Created by Peter Warden on 1/9/14.
//  Copyright (c) 2014 Jetpac, Inc. All rights reserved.
//

#include "dropoutnode.h"

#include <assert.h>
#include <string.h>

#include "buffer.h"
#include "binary_format.h"

DropoutNode::DropoutNode() : BaseNode() {
  setClassName("DropoutNode");
}

DropoutNode::~DropoutNode() {
  // Do nothing
}

Buffer* DropoutNode::run(Buffer* input) {
  return input;
}

BaseNode* new_dropoutnode_from_tag(SBinaryTag* tag) {
  const char* className = get_string_from_dict(tag, "class");
  assert(strcmp(className, "dropout") == 0);
  DropoutNode* result = new DropoutNode();
  return result;
}
