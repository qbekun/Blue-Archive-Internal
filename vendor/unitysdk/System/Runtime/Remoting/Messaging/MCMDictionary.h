#pragma once
#include "../../../../unitysdk.h"

#define SYSTEM_RUNTIME_REMOTING_MESSAGING_MCMDICTIONARY_.CTOR_OFFSET UNITYSDK_OFFSET(0x91F15E0)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_MCMDICTIONARY_.CCTOR_OFFSET UNITYSDK_OFFSET(0x91F19F0)

namespace System::Runtime::Remoting::Messaging
{
	inline static constexpr unsigned int MCMDictionary_TypeDefinitionIndex = 24550;

	class MCMDictionary : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* InternalKeys; // 0x0

		::System::Void .ctor(::System::Runtime::Remoting::Messaging::IMethodMessage* arg)
		{
			((::System::Void(*)(::System::Runtime::Remoting::Messaging::IMethodMessage*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_MCMDICTIONARY_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_MCMDICTIONARY_.CCTOR_OFFSET))(nullptr);
		}

	};
}

