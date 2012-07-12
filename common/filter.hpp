/* This file is part of The New Aspell
 * Copyright (C) 2001 by Kevin Atkinson under the GNU LGPL
 * license version 2.0 or 2.1.  You should have received a copy of the
 * LGPL license along with this library if you did not you can find it
 * at http://www.gnu.org/.                                              */

#ifndef ASPELL_FILTER__HPP
#define ASPELL_FILTER__HPP

#include "can_have_error.hpp"
#include "copy_ptr.hpp"
#include "filter_char.hpp"
#include "posib_err.hpp"
#include "vector.hpp"
#include "string_pair_enumeration.hpp"

#include <stdio.h>

namespace acommon {

  class Config;
  class Speller;
  class IndividualFilter;
  class StringList;
  struct ConfigModule;

  class Filter : public CanHaveError {
  public:
    
    bool empty() const {return filters_.empty();}
    void clear();
    void reset();
    void process(FilterChar * & start, FilterChar * & stop);
    void add_filter(IndividualFilter * filter);
    // setup the filter where the string list is the list of 
    // filters to use.
    Filter();
    ~Filter();

 private:
    typedef Vector<IndividualFilter *> Filters;
    Filters filters_;
  };

  CPP_EXPORT PosibErr<void> set_mode_from_extension(Config * config,
                                         ParmString filename,
                                         FILE * in = NULL);
  
  CPP_EXPORT PosibErr<void> setup_filter(Filter &, Config *, 
			      bool use_decoder, 
			      bool use_filter, 
			      bool use_encoder);
  CPP_EXPORT void activate_dynamic_filteroptions(Config *c);
  CPP_EXPORT void activate_filter_modes(Config * config);

  CPP_EXPORT void load_all_filters(Config * config);

  CPP_EXPORT PosibErr<bool> verify_version(const char * relOp, 
                                const char * actual, const char * required);
  CPP_EXPORT PosibErr<void> check_version(const char * requirement);

  CPP_EXPORT PosibErr<StringPairEnumeration *> available_filters(Config *);
  CPP_EXPORT PosibErr<StringPairEnumeration *> available_filter_modes(Config *);

};

#endif /* ASPELL_FILTER__HPP */
