/* Automatically generated file.  Do not edit directly. */

/* This file is part of The New Aspell
 * Copyright (C) 2001-2002 by Kevin Atkinson under the GNU LGPL
 * license version 2.0 or 2.1.  You should have received a copy of the
 * LGPL license along with this library if you did not you can find it
 * at http://www.gnu.org/.                                              */

#include "config.hpp"
#include "error.hpp"
#include "posib_err.hpp"
#include "string.hpp"

namespace acommon {

class Config;
struct Error;
struct KeyInfo;
class KeyInfoEnumeration;
class MutableContainer;
class StringPairEnumeration;

extern "C" CPP_EXPORT int aspell_key_info_enumeration_at_end(const KeyInfoEnumeration * ths)
{
  return ths->at_end();
}

extern "C" CPP_EXPORT const KeyInfo * aspell_key_info_enumeration_next(KeyInfoEnumeration * ths)
{
  return ths->next();
}

extern "C" CPP_EXPORT void delete_aspell_key_info_enumeration(KeyInfoEnumeration * ths)
{
  delete ths;
}

extern "C" CPP_EXPORT KeyInfoEnumeration * aspell_key_info_enumeration_clone(const KeyInfoEnumeration * ths)
{
  return ths->clone();
}

extern "C" CPP_EXPORT void aspell_key_info_enumeration_assign(KeyInfoEnumeration * ths, const KeyInfoEnumeration * other)
{
  ths->assign(other);
}

extern "C" CPP_EXPORT Config * new_aspell_config()
{
  return new_config();
}

extern "C" CPP_EXPORT void delete_aspell_config(Config * ths)
{
  delete ths;
}

extern "C" CPP_EXPORT Config * aspell_config_clone(const Config * ths)
{
  return ths->clone();
}

extern "C" CPP_EXPORT void aspell_config_assign(Config * ths, const Config * other)
{
  ths->assign(other);
}

extern "C" CPP_EXPORT unsigned int aspell_config_error_number(const Config * ths)
{
  return ths->err_ == 0 ? 0 : 1;
}

extern "C" CPP_EXPORT const char * aspell_config_error_message(const Config * ths)
{
  return ths->err_ ? ths->err_->mesg : "";
}

extern "C" CPP_EXPORT const Error * aspell_config_error(const Config * ths)
{
  return ths->err_;
}

extern "C" CPP_EXPORT void aspell_config_set_extra(Config * ths, const KeyInfo * begin, const KeyInfo * end)
{
  ths->set_extra(begin, end);
}

extern "C" CPP_EXPORT const KeyInfo * aspell_config_keyinfo(Config * ths, const char * key)
{
  PosibErr<const KeyInfo *> ret = ths->keyinfo(key);
  ths->err_.reset(ret.release_err());
  if (ths->err_ != 0) return 0;
  return ret.data;
}

extern "C" CPP_EXPORT KeyInfoEnumeration * aspell_config_possible_elements(Config * ths, int include_extra)
{
  return ths->possible_elements(include_extra);
}

extern "C" CPP_EXPORT const char * aspell_config_get_default(Config * ths, const char * key)
{
  PosibErr<String> ret = ths->get_default(key);
  ths->err_.reset(ret.release_err());
  if (ths->err_ != 0) return 0;
  ths->temp_str = ret.data;
  return ths->temp_str.c_str();
}

extern "C" CPP_EXPORT StringPairEnumeration * aspell_config_elements(Config * ths)
{
  return ths->elements();
}

extern "C" CPP_EXPORT int aspell_config_replace(Config * ths, const char * key, const char * value)
{
  PosibErr<void> ret = ths->replace(key, value);
  ths->err_.reset(ret.release_err());
  if (ths->err_ != 0) return 0;
  return 1;
}

extern "C" CPP_EXPORT int aspell_config_remove(Config * ths, const char * key)
{
  PosibErr<void> ret = ths->remove(key);
  ths->err_.reset(ret.release_err());
  if (ths->err_ != 0) return 0;
  return 1;
}

extern "C" CPP_EXPORT int aspell_config_have(const Config * ths, const char * key)
{
  return ths->have(key);
}

extern "C" CPP_EXPORT const char * aspell_config_retrieve(Config * ths, const char * key)
{
  PosibErr<String> ret = ths->retrieve(key);
  ths->err_.reset(ret.release_err());
  if (ths->err_ != 0) return 0;
  ths->temp_str = ret.data;
  return ths->temp_str.c_str();
}

extern "C" CPP_EXPORT int aspell_config_retrieve_list(Config * ths, const char * key, MutableContainer * lst)
{
  PosibErr<void> ret = ths->retrieve_list(key, lst);
  ths->err_.reset(ret.release_err());
  if (ths->err_ != 0) return 0;
  return 1;
}

extern "C" CPP_EXPORT int aspell_config_retrieve_bool(Config * ths, const char * key)
{
  PosibErr<bool> ret = ths->retrieve_bool(key);
  ths->err_.reset(ret.release_err());
  if (ths->err_ != 0) return -1;
  return ret.data;
}

extern "C" CPP_EXPORT int aspell_config_retrieve_int(Config * ths, const char * key)
{
  PosibErr<unsigned int> ret = ths->retrieve_int(key);
  ths->err_.reset(ret.release_err());
  if (ths->err_ != 0) return -1;
  return ret.data;
}



}

