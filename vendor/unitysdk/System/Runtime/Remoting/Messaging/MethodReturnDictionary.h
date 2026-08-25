#pragma once
#include "../../../../unitysdk.h"

#define SYSTEM_RUNTIME_REMOTING_MESSAGING_METHODRETURNDICTIONARY_.CTOR_OFFSET UNITYSDK_OFFSET(0x91F3F80)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_METHODRETURNDICTIONARY_.CCTOR_OFFSET UNITYSDK_OFFSET(0x91F46A0)

namespace System::Runtime::Remoting::Messaging
{
	inline static constexpr unsigned int MethodReturnDictionary_TypeDefinitionIndex = 24554;

	class MethodReturnDictionary : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* InternalReturnKeys; // 0x0
		::Il2CppArray<::System::Object*>* InternalExceptionKeys; // 0x8

		::System::Void .ctor(::System::Runtime::Remoting::Messaging::IMethodReturnMessage* arg)
		{
			((::System::Void(*)(::System::Runtime::Remoting::Messaging::IMethodReturnMessage*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_METHODRETURNDICTIONARY_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_METHODRETURNDICTIONARY_.CCTOR_OFFSET))(nullptr);
		}

	};
}

