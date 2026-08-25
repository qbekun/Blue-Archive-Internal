#pragma once
#include "../../unitysdk.h"

#define TOYWEBVIEWSHARED_MESSAGES_REQUESTLOADHTML_.CTOR_OFFSET UNITYSDK_OFFSET(0x9BB70C0)
#define TOYWEBVIEWSHARED_MESSAGES_REQUESTLOADHTML_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9BB9950)
#define TOYWEBVIEWSHARED_MESSAGES_REQUESTLOADHTML_SETDATA_OFFSET UNITYSDK_OFFSET(0x9BB99D0)

namespace ToyWebViewShared::Messages
{
	inline static constexpr unsigned int RequestLoadHtml_TypeDefinitionIndex = 25470;

	class RequestLoadHtml : public Il2CppObject
	{
	public:
		::System::String* html; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TOYWEBVIEWSHARED_MESSAGES_REQUESTLOADHTML_.CTOR_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + TOYWEBVIEWSHARED_MESSAGES_REQUESTLOADHTML_TOSTRING_OFFSET))(nullptr);
		}

		::System::Void SetData(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + TOYWEBVIEWSHARED_MESSAGES_REQUESTLOADHTML_SETDATA_OFFSET))(str, nullptr);
		}

	};
}

