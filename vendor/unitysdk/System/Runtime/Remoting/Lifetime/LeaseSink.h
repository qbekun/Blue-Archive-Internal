#pragma once
#include "../../../../unitysdk.h"

#define SYSTEM_RUNTIME_REMOTING_LIFETIME_LEASESINK_.CTOR_OFFSET UNITYSDK_OFFSET(0x91DBCA0)
#define SYSTEM_RUNTIME_REMOTING_LIFETIME_LEASESINK_SYNCPROCESSMESSAGE_OFFSET UNITYSDK_OFFSET(0x91DBCD0)
#define SYSTEM_RUNTIME_REMOTING_LIFETIME_LEASESINK_ASYNCPROCESSMESSAGE_OFFSET UNITYSDK_OFFSET(0x91DC020)
#define SYSTEM_RUNTIME_REMOTING_LIFETIME_LEASESINK_RENEWLEASE_OFFSET UNITYSDK_OFFSET(0x91DBD80)

namespace System::Runtime::Remoting::Lifetime
{
	inline static constexpr unsigned int LeaseSink_TypeDefinitionIndex = 24470;

	class LeaseSink : public Il2CppObject
	{
	public:
		::System::Runtime::Remoting::Messaging::IMessageSink* _nextSink; // 0x10

		::System::Void .ctor(::System::Runtime::Remoting::Messaging::IMessageSink* arg)
		{
			((::System::Void(*)(::System::Runtime::Remoting::Messaging::IMessageSink*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_LIFETIME_LEASESINK_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Runtime::Remoting::Messaging::IMessage* SyncProcessMessage(::System::Runtime::Remoting::Messaging::IMessage* arg)
		{
			return (return (::System::Runtime::Remoting::Messaging::IMessage*(*)(::System::Runtime::Remoting::Messaging::IMessage*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_LIFETIME_LEASESINK_SYNCPROCESSMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Runtime::Remoting::Messaging::IMessageCtrl* AsyncProcessMessage(::System::Runtime::Remoting::Messaging::IMessage* arg, ::System::Runtime::Remoting::Messaging::IMessageSink* arg)
		{
			return (return (::System::Runtime::Remoting::Messaging::IMessageCtrl*(*)(::System::Runtime::Remoting::Messaging::IMessage*, ::System::Runtime::Remoting::Messaging::IMessageSink*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_LIFETIME_LEASESINK_ASYNCPROCESSMESSAGE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void RenewLease(::System::Runtime::Remoting::Messaging::IMessage* arg)
		{
			((::System::Void(*)(::System::Runtime::Remoting::Messaging::IMessage*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_LIFETIME_LEASESINK_RENEWLEASE_OFFSET))(arg, nullptr);
		}

	};
}

