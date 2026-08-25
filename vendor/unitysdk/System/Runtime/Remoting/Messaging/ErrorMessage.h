#pragma once
#include "../../../../unitysdk.h"

#define SYSTEM_RUNTIME_REMOTING_MESSAGING_ERRORMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x91E49C0)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_ERRORMESSAGE_GET_ARGCOUNT_OFFSET UNITYSDK_OFFSET(0x91F0620)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_ERRORMESSAGE_GET_ARGS_OFFSET UNITYSDK_OFFSET(0x91F0630)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_ERRORMESSAGE_GET_METHODBASE_OFFSET UNITYSDK_OFFSET(0x91F0640)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_ERRORMESSAGE_GET_METHODNAME_OFFSET UNITYSDK_OFFSET(0x91F0650)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_ERRORMESSAGE_GET_METHODSIGNATURE_OFFSET UNITYSDK_OFFSET(0x91F0680)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_ERRORMESSAGE_GET_PROPERTIES_OFFSET UNITYSDK_OFFSET(0x91F0690)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_ERRORMESSAGE_GET_TYPENAME_OFFSET UNITYSDK_OFFSET(0x91F06A0)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_ERRORMESSAGE_GET_URI_OFFSET UNITYSDK_OFFSET(0x91F06D0)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_ERRORMESSAGE_GETARG_OFFSET UNITYSDK_OFFSET(0x91F06E0)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_ERRORMESSAGE_GET_LOGICALCALLCONTEXT_OFFSET UNITYSDK_OFFSET(0x91F06F0)

namespace System::Runtime::Remoting::Messaging
{
	inline static constexpr unsigned int ErrorMessage_TypeDefinitionIndex = 24539;

	class ErrorMessage : public Il2CppObject
	{
	public:
		::System::String* _uri; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_ERRORMESSAGE_.CTOR_OFFSET))(nullptr);
		}

		::System::Int32 get_ArgCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_ERRORMESSAGE_GET_ARGCOUNT_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* get_Args()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_ERRORMESSAGE_GET_ARGS_OFFSET))(nullptr);
		}

		::System::Reflection::MethodBase* get_MethodBase()
		{
			return (return (::System::Reflection::MethodBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_ERRORMESSAGE_GET_METHODBASE_OFFSET))(nullptr);
		}

		::System::String* get_MethodName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_ERRORMESSAGE_GET_METHODNAME_OFFSET))(nullptr);
		}

		::System::Object* get_MethodSignature()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_ERRORMESSAGE_GET_METHODSIGNATURE_OFFSET))(nullptr);
		}

		::System::Collections::IDictionary* get_Properties()
		{
			return (return (::System::Collections::IDictionary*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_ERRORMESSAGE_GET_PROPERTIES_OFFSET))(nullptr);
		}

		::System::String* get_TypeName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_ERRORMESSAGE_GET_TYPENAME_OFFSET))(nullptr);
		}

		::System::String* get_Uri()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_ERRORMESSAGE_GET_URI_OFFSET))(nullptr);
		}

		::System::Object* GetArg(::System::Int32 arg)
		{
			return (return (::System::Object*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_ERRORMESSAGE_GETARG_OFFSET))(arg, nullptr);
		}

		::System::Runtime::Remoting::Messaging::LogicalCallContext* get_LogicalCallContext()
		{
			return (return (::System::Runtime::Remoting::Messaging::LogicalCallContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_ERRORMESSAGE_GET_LOGICALCALLCONTEXT_OFFSET))(nullptr);
		}

	};
}

