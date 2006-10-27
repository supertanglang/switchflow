//
// Copyright 2003-2006 Christopher Baus. http://baus.net/
// Read the LICENSE file for more information.

#ifndef NON_VALIDATING_PROXY_STREAM_HANDLER_H__
#define NON_VALIDATING_PROXY_STREAM_HANDLER_H__

#include <proxylib/ProxyHandler.h>


class NonValidatingProxyStreamHandler: public proxylib::IProxyStreamHandler
{
 public:
  NonValidatingProxyStreamHandler();
  socketlib::STATUS processData(read_write_buffer& buf);
  NonValidatingProxyStreamHandler* clone();
  virtual void reset(){}
};
#endif

