#pragma once
#include "../../../../unitysdk.h"

#define SYSTEM_RUNTIME_REMOTING_MESSAGING_CADMETHODCALLMESSAGE_GET_URI_OFFSET UNITYSDK_OFFSET(0x91ECAB0)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_CADMETHODCALLMESSAGE_CREATE_OFFSET UNITYSDK_OFFSET(0x91E50D0)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_CADMETHODCALLMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x91ECAC0)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_CADMETHODCALLMESSAGE_GETARGUMENTS_OFFSET UNITYSDK_OFFSET(0x91ECCE0)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_CADMETHODCALLMESSAGE_GETARGS_OFFSET UNITYSDK_OFFSET(0x91ECE10)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_CADMETHODCALLMESSAGE_GET_PROPERTIESCOUNT_OFFSET UNITYSDK_OFFSET(0x91ECE20)

namespace System::Runtime::Remoting::Messaging
{
	inline static constexpr unsigned int CADMethodCallMessage_TypeDefinitionIndex = 24531;

	class CADMethodCallMessage : public Il2CppObject
	{
	public:
		::System::String* _uri; // 0x38

		::System::String* get_Uri()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_CADMETHODCALLMESSAGE_GET_URI_OFFSET))(nullptr);
		}

		::System::Runtime::Remoting::Messaging::CADMethodCallMessage* Create(::System::Runtime::Remoting::Messaging::IMessage* arg)
		{
			return (return (::System::Runtime::Remoting::Messaging::CADMethodCallMessage*(*)(::System::Runtime::Remoting::Messaging::IMessage*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_CADMETHODCALLMESSAGE_CREATE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Runtime::Remoting::Messaging::IMethodCallMessage* arg)
		{
			((::System::Void(*)(::System::Runtime::Remoting::Messaging::IMethodCallMessage*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_CADMETHODCALLMESSAGE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Collections::ArrayList* GetArguments()
		{
			return (return (::System::Collections::ArrayList*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_CADMETHODCALLMESSAGE_GETARGUMENTS_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* GetArgs(::System::Collections::ArrayList* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::Collections::ArrayList*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_CADMETHODCALLMESSAGE_GETARGS_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_PropertiesCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_CADMETHODCALLMESSAGE_GET_PROPERTIESCOUNT_OFFSET))(nullptr);
		}

	};
}

