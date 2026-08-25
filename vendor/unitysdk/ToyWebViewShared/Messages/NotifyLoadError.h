#pragma once
#include "../../unitysdk.h"

#define TOYWEBVIEWSHARED_MESSAGES_NOTIFYLOADERROR_.CTOR_OFFSET UNITYSDK_OFFSET(0x9BB6B70)
#define TOYWEBVIEWSHARED_MESSAGES_NOTIFYLOADERROR_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9BB74A0)
#define TOYWEBVIEWSHARED_MESSAGES_NOTIFYLOADERROR_SETDATA_OFFSET UNITYSDK_OFFSET(0x9BB7580)

namespace ToyWebViewShared::Messages
{
	inline static constexpr unsigned int NotifyLoadError_TypeDefinitionIndex = 25446;

	class NotifyLoadError : public Il2CppObject
	{
	public:
		::System::Int32 errorCode; // 0x18
		::System::String* errorText; // 0x20
		::System::String* failedUrl; // 0x28

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TOYWEBVIEWSHARED_MESSAGES_NOTIFYLOADERROR_.CTOR_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + TOYWEBVIEWSHARED_MESSAGES_NOTIFYLOADERROR_TOSTRING_OFFSET))(nullptr);
		}

		::System::Void SetData(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + TOYWEBVIEWSHARED_MESSAGES_NOTIFYLOADERROR_SETDATA_OFFSET))(str, nullptr);
		}

	};
}

