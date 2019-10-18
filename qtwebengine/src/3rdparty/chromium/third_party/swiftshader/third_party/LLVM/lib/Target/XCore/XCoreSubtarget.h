//=====-- XCoreSubtarget.h - Define Subtarget for the XCore -----*- C++ -*--==//
//
//                     The LLVM Compiler Infrastructure
//
// This file is distributed under the University of Illinois Open Source
// License. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//
//
// This file declares the XCore specific subclass of TargetSubtargetInfo.
//
//===----------------------------------------------------------------------===//

#ifndef XCORESUBTARGET_H
#define XCORESUBTARGET_H

#include "llvm/Target/TargetSubtargetInfo.h"
#include "llvm/Target/TargetMachine.h"
#include <string>

#define GET_SUBTARGETINFO_HEADER
#include "XCoreGenSubtargetInfo.inc"

namespace llvm {
class StringRef;

class XCoreSubtarget : public XCoreGenSubtargetInfo {

public:
  /// This constructor initializes the data members to match that
  /// of the specified triple.
  ///
  XCoreSubtarget(const std::string &TT, const std::string &CPU,
                 const std::string &FS);
  
  /// ParseSubtargetFeatures - Parses features string setting specified 
  /// subtarget options.  Definition of function is auto generated by tblgen.
  void ParseSubtargetFeatures(StringRef CPU, StringRef FS);
};
} // End llvm namespace

#endif