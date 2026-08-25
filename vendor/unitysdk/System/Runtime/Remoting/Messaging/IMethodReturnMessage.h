#pragma once
#include "../../../../unitysdk.h"

#define SYSTEM_RUNTIME_REMOTING_MESSAGING_IMETHODRETURNMESSAGE_GET_EXCEPTION_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_IMETHODRETURNMESSAGE_GET_OUTARGS_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_IMETHODRETURNMESSAGE_GET_RETURNVALUE_OFFSET UNITYSDK_OFFSET(0x000000)

namespace System::Runtime::Remoting::Messaging
{
	inline static constexpr unsigned int IMethodReturnMessage_TypeDefinitionIndex = 24548;

	class IMethodReturnMessage : public Il2CppObject
	{
	public:
		::System::Exception* get_Exception()
		{
			return (return (::System::Exception*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_IMETHODRETURNMESSAGE_GET_EXCEPTION_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* get_OutArgs()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_IMETHODRETURNMESSAGE_GET_OUTARGS_OFFSET))(nullptr);
		}

		::System::Object* get_ReturnValue()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_IMETHODRETURNMESSAGE_GET_RETURNVALUE_OFFSET))(nullptr);
		}

	};
}

