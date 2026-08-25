#pragma once
#include "../../../../unitysdk.h"

#define SYSTEM_RUNTIME_REMOTING_MESSAGING_LOGICALCALLCONTEXT_.CTOR_OFFSET UNITYSDK_OFFSET(0x91E84B0)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_LOGICALCALLCONTEXT_.CTOR_OFFSET UNITYSDK_OFFSET(0x91E84C0)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_LOGICALCALLCONTEXT_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x91E8A30)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_LOGICALCALLCONTEXT_CLONE_OFFSET UNITYSDK_OFFSET(0x91E8DC0)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_LOGICALCALLCONTEXT_MERGE_OFFSET UNITYSDK_OFFSET(0x91D7410)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_LOGICALCALLCONTEXT_GET_HASINFO_OFFSET UNITYSDK_OFFSET(0x91D73B0)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_LOGICALCALLCONTEXT_GET_HASUSERDATA_OFFSET UNITYSDK_OFFSET(0x91E8D90)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_LOGICALCALLCONTEXT_GET_DATASTORE_OFFSET UNITYSDK_OFFSET(0x91E89A0)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_LOGICALCALLCONTEXT_GETDATA_OFFSET UNITYSDK_OFFSET(0x91E9720)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_LOGICALCALLCONTEXT_SETDATA_OFFSET UNITYSDK_OFFSET(0x91E8010)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_LOGICALCALLCONTEXT_.CCTOR_OFFSET UNITYSDK_OFFSET(0x91E97B0)

namespace System::Runtime::Remoting::Messaging
{
	inline static constexpr unsigned int LogicalCallContext_TypeDefinitionIndex = 24521;

	class LogicalCallContext : public Il2CppObject
	{
	public:
		::System::Type* s_callContextType; // 0x0
		::System::String* s_CorrelationMgrSlotName; // 0x0
		::System::Collections::Hashtable* m_Datastore; // 0x10
		::System::Runtime::Remoting::Messaging::CallContextRemotingData* m_RemotingData; // 0x18
		::System::Runtime::Remoting::Messaging::CallContextSecurityData* m_SecurityData; // 0x20
		::System::Object* m_HostContext; // 0x28
		::System::Boolean m_IsCorrelationMgr; // 0x30
		::Il2CppArray<::System::Object*>* _sendHeaders; // 0x38
		::Il2CppArray<::System::Object*>* _recvHeaders; // 0x40

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_LOGICALCALLCONTEXT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Runtime::Serialization::SerializationInfo* arg, ::System::Runtime::Serialization::StreamingContext* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_LOGICALCALLCONTEXT_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void GetObjectData(::System::Runtime::Serialization::SerializationInfo* arg, ::System::Runtime::Serialization::StreamingContext* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_LOGICALCALLCONTEXT_GETOBJECTDATA_OFFSET))(arg, arg, nullptr);
		}

		::System::Object* Clone()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_LOGICALCALLCONTEXT_CLONE_OFFSET))(nullptr);
		}

		::System::Void Merge(::System::Runtime::Remoting::Messaging::LogicalCallContext* arg)
		{
			((::System::Void(*)(::System::Runtime::Remoting::Messaging::LogicalCallContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_LOGICALCALLCONTEXT_MERGE_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_HasInfo()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_LOGICALCALLCONTEXT_GET_HASINFO_OFFSET))(nullptr);
		}

		::System::Boolean get_HasUserData()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_LOGICALCALLCONTEXT_GET_HASUSERDATA_OFFSET))(nullptr);
		}

		::System::Collections::Hashtable* get_Datastore()
		{
			return (return (::System::Collections::Hashtable*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_LOGICALCALLCONTEXT_GET_DATASTORE_OFFSET))(nullptr);
		}

		::System::Object* GetData(::System::String* str)
		{
			return (return (::System::Object*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_LOGICALCALLCONTEXT_GETDATA_OFFSET))(str, nullptr);
		}

		::System::Void SetData(::System::String* str, ::System::Object* arg)
		{
			((::System::Void(*)(::System::String*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_LOGICALCALLCONTEXT_SETDATA_OFFSET))(str, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_LOGICALCALLCONTEXT_.CCTOR_OFFSET))(nullptr);
		}

	};
}

