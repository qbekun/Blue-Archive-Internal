#pragma once
#include "../../unitysdk.h"

#define TOYWEBVIEWSHARED_MESSAGES_EXECUTENATIVEMETHOD_.CTOR_OFFSET UNITYSDK_OFFSET(0x9BB53C0)
#define TOYWEBVIEWSHARED_MESSAGES_EXECUTENATIVEMETHOD_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9BB5470)
#define TOYWEBVIEWSHARED_MESSAGES_EXECUTENATIVEMETHOD_SETDATA_OFFSET UNITYSDK_OFFSET(0x9BB5780)

namespace ToyWebViewShared::Messages
{
	inline static constexpr unsigned int ExecuteNativeMethod_TypeDefinitionIndex = 25436;

	class ExecuteNativeMethod : public Il2CppObject
	{
	public:
		::System::String* objectName; // 0x18
		::System::String* methodName; // 0x20
		Il2CppObject* methodParameters; // 0x28

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TOYWEBVIEWSHARED_MESSAGES_EXECUTENATIVEMETHOD_.CTOR_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + TOYWEBVIEWSHARED_MESSAGES_EXECUTENATIVEMETHOD_TOSTRING_OFFSET))(nullptr);
		}

		::System::Void SetData(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + TOYWEBVIEWSHARED_MESSAGES_EXECUTENATIVEMETHOD_SETDATA_OFFSET))(str, nullptr);
		}

	};
}

