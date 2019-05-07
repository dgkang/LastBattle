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
// Generated from file `Instrumentation.ice'
//
// Warning: do not edit this file.
//
// </auto-generated>
//

#ifndef __Ice_Instrumentation_h__
#define __Ice_Instrumentation_h__

#include <Ice/ProxyF.h>
#include <Ice/ObjectF.h>
#include <Ice/Exception.h>
#include <Ice/LocalObject.h>
#include <Ice/StreamHelpers.h>
#include <IceUtil/ScopedArray.h>
#include <IceUtil/Optional.h>
#include <Ice/EndpointF.h>
#include <Ice/ConnectionF.h>
#include <Ice/Current.h>
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

#ifndef ICE_API
#   ifdef ICE_API_EXPORTS
#       define ICE_API ICE_DECLSPEC_EXPORT
#   else
#       define ICE_API ICE_DECLSPEC_IMPORT
#   endif
#endif

namespace Ice
{

namespace Instrumentation
{

class Observer;
bool operator==(const Observer&, const Observer&);
bool operator<(const Observer&, const Observer&);
ICE_API ::Ice::LocalObject* upCast(::Ice::Instrumentation::Observer*);
typedef ::IceInternal::Handle< ::Ice::Instrumentation::Observer> ObserverPtr;

class ThreadObserver;
bool operator==(const ThreadObserver&, const ThreadObserver&);
bool operator<(const ThreadObserver&, const ThreadObserver&);
ICE_API ::Ice::LocalObject* upCast(::Ice::Instrumentation::ThreadObserver*);
typedef ::IceInternal::Handle< ::Ice::Instrumentation::ThreadObserver> ThreadObserverPtr;

class ConnectionObserver;
bool operator==(const ConnectionObserver&, const ConnectionObserver&);
bool operator<(const ConnectionObserver&, const ConnectionObserver&);
ICE_API ::Ice::LocalObject* upCast(::Ice::Instrumentation::ConnectionObserver*);
typedef ::IceInternal::Handle< ::Ice::Instrumentation::ConnectionObserver> ConnectionObserverPtr;

class DispatchObserver;
bool operator==(const DispatchObserver&, const DispatchObserver&);
bool operator<(const DispatchObserver&, const DispatchObserver&);
ICE_API ::Ice::LocalObject* upCast(::Ice::Instrumentation::DispatchObserver*);
typedef ::IceInternal::Handle< ::Ice::Instrumentation::DispatchObserver> DispatchObserverPtr;

class RemoteObserver;
bool operator==(const RemoteObserver&, const RemoteObserver&);
bool operator<(const RemoteObserver&, const RemoteObserver&);
ICE_API ::Ice::LocalObject* upCast(::Ice::Instrumentation::RemoteObserver*);
typedef ::IceInternal::Handle< ::Ice::Instrumentation::RemoteObserver> RemoteObserverPtr;

class InvocationObserver;
bool operator==(const InvocationObserver&, const InvocationObserver&);
bool operator<(const InvocationObserver&, const InvocationObserver&);
ICE_API ::Ice::LocalObject* upCast(::Ice::Instrumentation::InvocationObserver*);
typedef ::IceInternal::Handle< ::Ice::Instrumentation::InvocationObserver> InvocationObserverPtr;

class ObserverUpdater;
bool operator==(const ObserverUpdater&, const ObserverUpdater&);
bool operator<(const ObserverUpdater&, const ObserverUpdater&);
ICE_API ::Ice::LocalObject* upCast(::Ice::Instrumentation::ObserverUpdater*);
typedef ::IceInternal::Handle< ::Ice::Instrumentation::ObserverUpdater> ObserverUpdaterPtr;

class CommunicatorObserver;
bool operator==(const CommunicatorObserver&, const CommunicatorObserver&);
bool operator<(const CommunicatorObserver&, const CommunicatorObserver&);
ICE_API ::Ice::LocalObject* upCast(::Ice::Instrumentation::CommunicatorObserver*);
typedef ::IceInternal::Handle< ::Ice::Instrumentation::CommunicatorObserver> CommunicatorObserverPtr;

}

}

namespace Ice
{

namespace Instrumentation
{

enum ThreadState
{
    ThreadStateIdle,
    ThreadStateInUseForIO,
    ThreadStateInUseForUser,
    ThreadStateInUseForOther
};

enum ConnectionState
{
    ConnectionStateValidating,
    ConnectionStateHolding,
    ConnectionStateActive,
    ConnectionStateClosing,
    ConnectionStateClosed
};

}

}

namespace Ice
{
}

namespace Ice
{

namespace Instrumentation
{

class ICE_API Observer : virtual public ::Ice::LocalObject
{
public:

    typedef ObserverPtr PointerType;

    virtual void attach() = 0;

    virtual void detach() = 0;

    virtual void failed(const ::std::string&) = 0;
};

inline bool operator==(const Observer& l, const Observer& r)
{
    return static_cast<const ::Ice::LocalObject&>(l) == static_cast<const ::Ice::LocalObject&>(r);
}

inline bool operator<(const Observer& l, const Observer& r)
{
    return static_cast<const ::Ice::LocalObject&>(l) < static_cast<const ::Ice::LocalObject&>(r);
}

class ICE_API ThreadObserver : virtual public ::Ice::Instrumentation::Observer
{
public:

    typedef ThreadObserverPtr PointerType;

    virtual void stateChanged(::Ice::Instrumentation::ThreadState, ::Ice::Instrumentation::ThreadState) = 0;
};

inline bool operator==(const ThreadObserver& l, const ThreadObserver& r)
{
    return static_cast<const ::Ice::LocalObject&>(l) == static_cast<const ::Ice::LocalObject&>(r);
}

inline bool operator<(const ThreadObserver& l, const ThreadObserver& r)
{
    return static_cast<const ::Ice::LocalObject&>(l) < static_cast<const ::Ice::LocalObject&>(r);
}

class ICE_API ConnectionObserver : virtual public ::Ice::Instrumentation::Observer
{
public:

    typedef ConnectionObserverPtr PointerType;

    virtual void sentBytes(::Ice::Int) = 0;

    virtual void receivedBytes(::Ice::Int) = 0;
};

inline bool operator==(const ConnectionObserver& l, const ConnectionObserver& r)
{
    return static_cast<const ::Ice::LocalObject&>(l) == static_cast<const ::Ice::LocalObject&>(r);
}

inline bool operator<(const ConnectionObserver& l, const ConnectionObserver& r)
{
    return static_cast<const ::Ice::LocalObject&>(l) < static_cast<const ::Ice::LocalObject&>(r);
}

class ICE_API DispatchObserver : virtual public ::Ice::Instrumentation::Observer
{
public:

    typedef DispatchObserverPtr PointerType;

    virtual void userException() = 0;

    virtual void reply(::Ice::Int) = 0;
};

inline bool operator==(const DispatchObserver& l, const DispatchObserver& r)
{
    return static_cast<const ::Ice::LocalObject&>(l) == static_cast<const ::Ice::LocalObject&>(r);
}

inline bool operator<(const DispatchObserver& l, const DispatchObserver& r)
{
    return static_cast<const ::Ice::LocalObject&>(l) < static_cast<const ::Ice::LocalObject&>(r);
}

class ICE_API RemoteObserver : virtual public ::Ice::Instrumentation::Observer
{
public:

    typedef RemoteObserverPtr PointerType;

    virtual void reply(::Ice::Int) = 0;
};

inline bool operator==(const RemoteObserver& l, const RemoteObserver& r)
{
    return static_cast<const ::Ice::LocalObject&>(l) == static_cast<const ::Ice::LocalObject&>(r);
}

inline bool operator<(const RemoteObserver& l, const RemoteObserver& r)
{
    return static_cast<const ::Ice::LocalObject&>(l) < static_cast<const ::Ice::LocalObject&>(r);
}

class ICE_API InvocationObserver : virtual public ::Ice::Instrumentation::Observer
{
public:

    typedef InvocationObserverPtr PointerType;

    virtual void retried() = 0;

    virtual void userException() = 0;

    virtual ::Ice::Instrumentation::RemoteObserverPtr getRemoteObserver(const ::Ice::ConnectionInfoPtr&, const ::Ice::EndpointPtr&, ::Ice::Int, ::Ice::Int) = 0;
};

inline bool operator==(const InvocationObserver& l, const InvocationObserver& r)
{
    return static_cast<const ::Ice::LocalObject&>(l) == static_cast<const ::Ice::LocalObject&>(r);
}

inline bool operator<(const InvocationObserver& l, const InvocationObserver& r)
{
    return static_cast<const ::Ice::LocalObject&>(l) < static_cast<const ::Ice::LocalObject&>(r);
}

class ICE_API ObserverUpdater : virtual public ::Ice::LocalObject
{
public:

    typedef ObserverUpdaterPtr PointerType;

    virtual void updateConnectionObservers() = 0;

    virtual void updateThreadObservers() = 0;
};

inline bool operator==(const ObserverUpdater& l, const ObserverUpdater& r)
{
    return static_cast<const ::Ice::LocalObject&>(l) == static_cast<const ::Ice::LocalObject&>(r);
}

inline bool operator<(const ObserverUpdater& l, const ObserverUpdater& r)
{
    return static_cast<const ::Ice::LocalObject&>(l) < static_cast<const ::Ice::LocalObject&>(r);
}

class ICE_API CommunicatorObserver : virtual public ::Ice::LocalObject
{
public:

    typedef CommunicatorObserverPtr PointerType;

    virtual ::Ice::Instrumentation::ObserverPtr getConnectionEstablishmentObserver(const ::Ice::EndpointPtr&, const ::std::string&) = 0;

    virtual ::Ice::Instrumentation::ObserverPtr getEndpointLookupObserver(const ::Ice::EndpointPtr&) = 0;

    virtual ::Ice::Instrumentation::ConnectionObserverPtr getConnectionObserver(const ::Ice::ConnectionInfoPtr&, const ::Ice::EndpointPtr&, ::Ice::Instrumentation::ConnectionState, const ::Ice::Instrumentation::ConnectionObserverPtr&) = 0;

    virtual ::Ice::Instrumentation::ThreadObserverPtr getThreadObserver(const ::std::string&, const ::std::string&, ::Ice::Instrumentation::ThreadState, const ::Ice::Instrumentation::ThreadObserverPtr&) = 0;

    virtual ::Ice::Instrumentation::InvocationObserverPtr getInvocationObserver(const ::Ice::ObjectPrx&, const ::std::string&, const ::Ice::Context&) = 0;

    virtual ::Ice::Instrumentation::DispatchObserverPtr getDispatchObserver(const ::Ice::Current&, ::Ice::Int) = 0;

    virtual void setObserverUpdater(const ::Ice::Instrumentation::ObserverUpdaterPtr&) = 0;
};

inline bool operator==(const CommunicatorObserver& l, const CommunicatorObserver& r)
{
    return static_cast<const ::Ice::LocalObject&>(l) == static_cast<const ::Ice::LocalObject&>(r);
}

inline bool operator<(const CommunicatorObserver& l, const CommunicatorObserver& r)
{
    return static_cast<const ::Ice::LocalObject&>(l) < static_cast<const ::Ice::LocalObject&>(r);
}

}

}

#endif
