/* Automatically generated file.  Do not edit directly. */

/* This file is part of The New Aspell
 * Copyright (C) 2001-2002 by Kevin Atkinson under the GNU LGPL
 * license version 2.0 or 2.1.  You should have received a copy of the
 * LGPL license along with this library if you did not you can find it
 * at http://www.gnu.org/.                                              */

#include "string_pair.hpp"
#include "string_pair_enumeration.hpp"

namespace acommon {

class StringPairEnumeration;

extern "C" CPP_EXPORT int aspell_string_pair_enumeration_at_end(const StringPairEnumeration * ths)
{
  return ths->at_end();
}

extern "C" CPP_EXPORT StringPair aspell_string_pair_enumeration_next(StringPairEnumeration * ths)
{
  return ths->next();
}

extern "C" CPP_EXPORT void delete_aspell_string_pair_enumeration(StringPairEnumeration * ths)
{
  delete ths;
}

extern "C" CPP_EXPORT StringPairEnumeration * aspell_string_pair_enumeration_clone(const StringPairEnumeration * ths)
{
  return ths->clone();
}

extern "C" CPP_EXPORT void aspell_string_pair_enumeration_assign(StringPairEnumeration * ths, const StringPairEnumeration * other)
{
  ths->assign(other);
}



}

