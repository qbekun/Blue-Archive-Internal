#pragma once
#include "../../../../unitysdk.h"

#define SYSTEM_RUNTIME_REMOTING_MESSAGING_ILLOGICALCALLCONTEXT_GET_DATASTORE_OFFSET UNITYSDK_OFFSET(0x91E8100)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_ILLOGICALCALLCONTEXT_GET_HOSTCONTEXT_OFFSET UNITYSDK_OFFSET(0x91E8170)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_ILLOGICALCALLCONTEXT_SET_HOSTCONTEXT_OFFSET UNITYSDK_OFFSET(0x91E8180)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_ILLOGICALCALLCONTEXT_GET_HASUSERDATA_OFFSET UNITYSDK_OFFSET(0x91E8190)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_ILLOGICALCALLCONTEXT_FREENAMEDDATASLOT_OFFSET UNITYSDK_OFFSET(0x91E7F80)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_ILLOGICALCALLCONTEXT_CREATECOPY_OFFSET UNITYSDK_OFFSET(0x91E81C0)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_ILLOGICALCALLCONTEXT_.CTOR_OFFSET UNITYSDK_OFFSET(0x91E84A0)

namespace System::Runtime::Remoting::Messaging
{
	inline static constexpr unsigned int IllogicalCallContext_TypeDefinitionIndex = 24519;

	class IllogicalCallContext : public Il2CppObject
	{
	public:
		::System::Collections::Hashtable* m_Datastore; // 0x10
		::System::Object* m_HostContext; // 0x18

		::System::Collections::Hashtable* get_Datastore()
		{
			return (return (::System::Collections::Hashtable*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_ILLOGICALCALLCONTEXT_GET_DATASTORE_OFFSET))(nullptr);
		}

		::System::Object* get_HostContext()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_ILLOGICALCALLCONTEXT_GET_HOSTCONTEXT_OFFSET))(nullptr);
		}

		::System::Void set_HostContext(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_ILLOGICALCALLCONTEXT_SET_HOSTCONTEXT_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_HasUserData()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_ILLOGICALCALLCONTEXT_GET_HASUSERDATA_OFFSET))(nullptr);
		}

		::System::Void FreeNamedDataSlot(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_ILLOGICALCALLCONTEXT_FREENAMEDDATASLOT_OFFSET))(str, nullptr);
		}

		::System::Runtime::Remoting::Messaging::IllogicalCallContext* CreateCopy()
		{
			return (return (::System::Runtime::Remoting::Messaging::IllogicalCallContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_ILLOGICALCALLCONTEXT_CREATECOPY_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_ILLOGICALCALLCONTEXT_.CTOR_OFFSET))(nullptr);
		}

	};
}

