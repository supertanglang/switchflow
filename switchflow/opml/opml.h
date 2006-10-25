/**
 * @file opml.c generic OPML 1.0 support
 * 
 * Copyright (C) 2003 Lars Lindner <lars.lindner@gmx.net>
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Library General Public
 * License as published by the Free Software Foundation; either
 * version 2 of the License, or (at your option) any later version.
 * 
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Library General Public License for more details.
 * 
 * You should have received a copy of the GNU Library General Public License
 * along with this library; see the file COPYING.LIB.  If not, write to
 * the Free Software Foundation, Inc., 59 Temple Place - Suite 330,
 * Boston, MA 02111-1307, USA.
 */

#ifndef _OPML_H
#define _OPML_H

#include <libxml/xmlmemory.h>
#include <libxml/parser.h>

//#include "feed.h"
//feedHandlerPtr	opml_init_feed_handler(void);



class i_opml_handler
{
 public:
  void virtual feed_url(char* url) = 0;
};

void opml_parse(xmlDocPtr doc, xmlNodePtr cur,
                i_opml_handler* p_opml_handler);


#endif