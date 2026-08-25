#pragma once
#include "../../../../unitysdk.h"

#define SYSTEM_RUNTIME_REMOTING_MESSAGING_CADMETHODRETURNMESSAGE_CREATE_OFFSET UNITYSDK_OFFSET(0x91ECE30)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_CADMETHODRETURNMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x91ECEB0)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_CADMETHODRETURNMESSAGE_GETARGUMENTS_OFFSET UNITYSDK_OFFSET(0x91ED2F0)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_CADMETHODRETURNMESSAGE_GETARGS_OFFSET UNITYSDK_OFFSET(0x91ED420)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_CADMETHODRETURNMESSAGE_GETRETURNVALUE_OFFSET UNITYSDK_OFFSET(0x91ED430)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_CADMETHODRETURNMESSAGE_GETEXCEPTION_OFFSET UNITYSDK_OFFSET(0x91ED440)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_CADMETHODRETURNMESSAGE_GET_PROPERTIESCOUNT_OFFSET UNITYSDK_OFFSET(0x91ED4E0)

namespace System::Runtime::Remoting::Messaging
{
	inline static constexpr unsigned int CADMethodReturnMessage_TypeDefinitionIndex = 24532;

	class CADMethodReturnMessage : public Il2CppObject
	{
	public:
		::System::Object* _returnValue; // 0x38
		::System::Runtime::Remoting::Messaging::CADArgHolder* _exception; // 0x40
		::Il2CppArray<::System::Object*>* _sig; // 0x48

		::System::Runtime::Remoting::Messaging::CADMethodReturnMessage* Create(::System::Runtime::Remoting::Messaging::IMessage* arg)
		{
			return (return (::System::Runtime::Remoting::Messaging::CADMethodReturnMessage*(*)(::System::Runtime::Remoting::Messaging::IMessage*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_CADMETHODRETURNMESSAGE_CREATE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Runtime::Remoting::Messaging::IMethodReturnMessage* arg)
		{
			((::System::Void(*)(::System::Runtime::Remoting::Messaging::IMethodReturnMessage*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_CADMETHODRETURNMESSAGE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Collections::ArrayList* GetArguments()
		{
			return (return (::System::Collections::ArrayList*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_CADMETHODRETURNMESSAGE_GETARGUMENTS_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* GetArgs(::System::Collections::ArrayList* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::Collections::ArrayList*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_CADMETHODRETURNMESSAGE_GETARGS_OFFSET))(arg, nullptr);
		}

		::System::Object* GetReturnValue(::System::Collections::ArrayList* arg)
		{
			return (return (::System::Object*(*)(::System::Collections::ArrayList*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_CADMETHODRETURNMESSAGE_GETRETURNVALUE_OFFSET))(arg, nullptr);
		}

		::System::Exception* GetException(::System::Collections::ArrayList* arg)
		{
			return (return (::System::Exception*(*)(::System::Collections::ArrayList*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_CADMETHODRETURNMESSAGE_GETEXCEPTION_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_PropertiesCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_CADMETHODRETURNMESSAGE_GET_PROPERTIESCOUNT_OFFSET))(nullptr);
		}

	};
}

