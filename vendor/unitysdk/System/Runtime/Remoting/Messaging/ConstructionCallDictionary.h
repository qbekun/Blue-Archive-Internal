#pragma once
#include "../../../../unitysdk.h"

#define SYSTEM_RUNTIME_REMOTING_MESSAGING_CONSTRUCTIONCALLDICTIONARY_.CTOR_OFFSET UNITYSDK_OFFSET(0x91EDE30)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_CONSTRUCTIONCALLDICTIONARY_GETMETHODPROPERTY_OFFSET UNITYSDK_OFFSET(0x91EEF80)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_CONSTRUCTIONCALLDICTIONARY_SETMETHODPROPERTY_OFFSET UNITYSDK_OFFSET(0x91EF950)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_CONSTRUCTIONCALLDICTIONARY_.CCTOR_OFFSET UNITYSDK_OFFSET(0x91EFE50)

namespace System::Runtime::Remoting::Messaging
{
	inline static constexpr unsigned int ConstructionCallDictionary_TypeDefinitionIndex = 24536;

	class ConstructionCallDictionary : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* InternalKeys; // 0x0

		::System::Void .ctor(::System::Runtime::Remoting::Activation::IConstructionCallMessage* arg)
		{
			((::System::Void(*)(::System::Runtime::Remoting::Activation::IConstructionCallMessage*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_CONSTRUCTIONCALLDICTIONARY_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Object* GetMethodProperty(::System::String* str)
		{
			return (return (::System::Object*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_CONSTRUCTIONCALLDICTIONARY_GETMETHODPROPERTY_OFFSET))(str, nullptr);
		}

		::System::Void SetMethodProperty(::System::String* str, ::System::Object* arg)
		{
			((::System::Void(*)(::System::String*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_CONSTRUCTIONCALLDICTIONARY_SETMETHODPROPERTY_OFFSET))(str, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_CONSTRUCTIONCALLDICTIONARY_.CCTOR_OFFSET))(nullptr);
		}

	};
}

