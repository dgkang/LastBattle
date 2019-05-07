// **********************************************************************
//
// Copyright (c) 2003-2013 ZeroC, Inc. All rights reserved.
//
// This copy of Ice is licensed to you under the terms described in the
// ICE_LICENSE file included in this distribution.
//
// **********************************************************************
//
// Ice version 3.5.1
//
// <auto-generated>
//
// Generated from file `FileInfo.ice'
//
// Warning: do not edit this file.
//
// </auto-generated>
//

#ifndef __IcePatch2_FileInfo_h__
#define __IcePatch2_FileInfo_h__

#include <Ice/ProxyF.h>
#include <Ice/ObjectF.h>
#include <Ice/Exception.h>
#include <Ice/LocalObject.h>
#include <Ice/StreamHelpers.h>
#include <IceUtil/ScopedArray.h>
#include <IceUtil/Optional.h>
#include <Ice/BuiltinSequences.h>
#include <Ice/UndefSysMacros.h>

#ifndef ICE_IGNORE_VERSION
#   if ICE_INT_VERSION / 100 != 305
#       error Ice version mismatch!
#   endif
#   if ICE_INT_VERSION % 100 > 50
#       error Beta header file detected
#   endif
#   if ICE_INT_VERSION % 100 < 1
#       error Ice patch level mismatch!
#   endif
#endif

#ifndef ICE_PATCH2_API
#   ifdef ICE_PATCH2_API_EXPORTS
#       define ICE_PATCH2_API ICE_DECLSPEC_EXPORT
#   else
#       define ICE_PATCH2_API ICE_DECLSPEC_IMPORT
#   endif
#endif

namespace IcePatch2
{

struct FileInfo
{
    ::std::string path;
    ::Ice::ByteSeq checksum;
    ::Ice::Int size;
    bool executable;
};

typedef ::std::vector< ::IcePatch2::FileInfo> FileInfoSeq;

}

namespace Ice
{
template<>
struct StreamableTraits< ::IcePatch2::FileInfo>
{
    static const StreamHelperCategory helper = StreamHelperCategoryStruct;
    static const int minWireSize = 7;
    static const bool fixedLength = false;
};

template<class S>
struct StreamWriter< ::IcePatch2::FileInfo, S>
{
    static void write(S* __os, const ::IcePatch2::FileInfo& v)
    {
        __os->write(v.path);
        __os->write(v.checksum);
        __os->write(v.size);
        __os->write(v.executable);
    }
};

template<class S>
struct StreamReader< ::IcePatch2::FileInfo, S>
{
    static void read(S* __is, ::IcePatch2::FileInfo& v)
    {
        __is->read(v.path);
        __is->read(v.checksum);
        __is->read(v.size);
        __is->read(v.executable);
    }
};

#if defined(ICE_HAS_DECLSPEC_IMPORT_EXPORT) && !defined(ICE_PATCH2_API_EXPORTS)
template struct ICE_PATCH2_API StreamWriter< ::IcePatch2::FileInfo, ::IceInternal::BasicStream>;
template struct ICE_PATCH2_API StreamReader< ::IcePatch2::FileInfo, ::IceInternal::BasicStream>;
#endif

}

#endif
