// Copyright (c) 2017 The Chromium Embedded Framework Authors. All rights
// reserved. Use of this source code is governed by a BSD-style license that
// can be found in the LICENSE file.
//
// ---------------------------------------------------------------------------
//
// This file was generated by the CEF translator tool. If making changes by
// hand only do so within the body of existing method and function
// implementations. See the translator.README.txt file in the tools directory
// for more information.
//
// $hash=0b993dfde493bc6a973bf806392a28c220ec3daa$
//

#include "libcef_dll/ctocpp/process_message_ctocpp.h"
#include "libcef_dll/ctocpp/list_value_ctocpp.h"

// STATIC METHODS - Body may be edited by hand.

CefRefPtr<CefProcessMessage> CefProcessMessage::Create(const CefString& name) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: name; type: string_byref_const
  DCHECK(!name.empty());
  if (name.empty())
    return NULL;

  // Execute
  cef_process_message_t* _retval = cef_process_message_create(name.GetStruct());

  // Return type: refptr_same
  return CefProcessMessageCToCpp::Wrap(_retval);
}

// VIRTUAL METHODS - Body may be edited by hand.

bool CefProcessMessageCToCpp::IsValid() {
  cef_process_message_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, is_valid))
    return false;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  int _retval = _struct->is_valid(_struct);

  // Return type: bool
  return _retval ? true : false;
}

bool CefProcessMessageCToCpp::IsReadOnly() {
  cef_process_message_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, is_read_only))
    return false;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  int _retval = _struct->is_read_only(_struct);

  // Return type: bool
  return _retval ? true : false;
}

CefRefPtr<CefProcessMessage> CefProcessMessageCToCpp::Copy() {
  cef_process_message_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, copy))
    return NULL;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_process_message_t* _retval = _struct->copy(_struct);

  // Return type: refptr_same
  return CefProcessMessageCToCpp::Wrap(_retval);
}

CefString CefProcessMessageCToCpp::GetName() {
  cef_process_message_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, get_name))
    return CefString();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_string_userfree_t _retval = _struct->get_name(_struct);

  // Return type: string
  CefString _retvalStr;
  _retvalStr.AttachToUserFree(_retval);
  return _retvalStr;
}

CefRefPtr<CefListValue> CefProcessMessageCToCpp::GetArgumentList() {
  cef_process_message_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, get_argument_list))
    return NULL;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_list_value_t* _retval = _struct->get_argument_list(_struct);

  // Return type: refptr_same
  return CefListValueCToCpp::Wrap(_retval);
}

// CONSTRUCTOR - Do not edit by hand.

CefProcessMessageCToCpp::CefProcessMessageCToCpp() {}

template <>
cef_process_message_t* CefCToCppRefCounted<
    CefProcessMessageCToCpp,
    CefProcessMessage,
    cef_process_message_t>::UnwrapDerived(CefWrapperType type,
                                          CefProcessMessage* c) {
  NOTREACHED() << "Unexpected class type: " << type;
  return NULL;
}

#if DCHECK_IS_ON()
template <>
base::AtomicRefCount CefCToCppRefCounted<CefProcessMessageCToCpp,
                                         CefProcessMessage,
                                         cef_process_message_t>::DebugObjCt
    ATOMIC_DECLARATION;
#endif

template <>
CefWrapperType CefCToCppRefCounted<CefProcessMessageCToCpp,
                                   CefProcessMessage,
                                   cef_process_message_t>::kWrapperType =
    WT_PROCESS_MESSAGE;
