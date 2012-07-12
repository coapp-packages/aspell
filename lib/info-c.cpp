/* This file is part of The New Aspell
 * Copyright (C) 2001-2002 by Kevin Atkinson under the GNU LGPL
 * license version 2.0 or 2.1.  You should have received a copy of the
 * LGPL license along with this library if you did not you can find it
 * at http://www.gnu.org/.                                              */

#include "info.hpp"

namespace acommon {

class Config;
struct DictInfo;
class DictInfoEnumeration;
class DictInfoList;
struct ModuleInfo;
class ModuleInfoEnumeration;
class ModuleInfoList;

extern "C" CPP_EXPORT ModuleInfoList * get_aspell_module_info_list(Config * config)
{
  return const_cast<ModuleInfoList *>(get_module_info_list(config));
}

extern "C" CPP_EXPORT int aspell_module_info_list_empty(const ModuleInfoList * ths)
{
  return ths->empty();
}

extern "C" CPP_EXPORT unsigned int aspell_module_info_list_size(const ModuleInfoList * ths)
{
  return ths->size();
}

extern "C" CPP_EXPORT ModuleInfoEnumeration * aspell_module_info_list_elements(const ModuleInfoList * ths)
{
  return ths->elements();
}

extern "C" CPP_EXPORT DictInfoList * get_aspell_dict_info_list(Config * config)
{
  return const_cast<DictInfoList *>(get_dict_info_list(config));
}

extern "C" CPP_EXPORT int aspell_dict_info_list_empty(const DictInfoList * ths)
{
  return ths->empty();
}

extern "C" CPP_EXPORT unsigned int aspell_dict_info_list_size(const DictInfoList * ths)
{
  return ths->size();
}

extern "C" CPP_EXPORT DictInfoEnumeration * aspell_dict_info_list_elements(const DictInfoList * ths)
{
  return ths->elements();
}

extern "C" CPP_EXPORT int aspell_module_info_enumeration_at_end(const ModuleInfoEnumeration * ths)
{
  return ths->at_end();
}

extern "C" CPP_EXPORT const ModuleInfo * aspell_module_info_enumeration_next(ModuleInfoEnumeration * ths)
{
  return ths->next();
}

extern "C" CPP_EXPORT void delete_aspell_module_info_enumeration(ModuleInfoEnumeration * ths)
{
  delete ths;
}

extern "C" CPP_EXPORT ModuleInfoEnumeration * aspell_module_info_enumeration_clone(const ModuleInfoEnumeration * ths)
{
  return ths->clone();
}

extern "C" CPP_EXPORT void aspell_module_info_enumeration_assign(ModuleInfoEnumeration * ths, const ModuleInfoEnumeration * other)
{
  ths->assign(other);
}

extern "C" CPP_EXPORT int aspell_dict_info_enumeration_at_end(const DictInfoEnumeration * ths)
{
  return ths->at_end();
}

extern "C" CPP_EXPORT const DictInfo * aspell_dict_info_enumeration_next(DictInfoEnumeration * ths)
{
  return ths->next();
}

extern "C" CPP_EXPORT void delete_aspell_dict_info_enumeration(DictInfoEnumeration * ths)
{
  delete ths;
}

extern "C" CPP_EXPORT DictInfoEnumeration * aspell_dict_info_enumeration_clone(const DictInfoEnumeration * ths)
{
  return ths->clone();
}

extern "C" CPP_EXPORT void aspell_dict_info_enumeration_assign(DictInfoEnumeration * ths, const DictInfoEnumeration * other)
{
  ths->assign(other);
}



}

