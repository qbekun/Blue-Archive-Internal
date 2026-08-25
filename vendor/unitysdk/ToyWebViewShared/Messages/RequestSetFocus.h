#pragma once
#include "../../unitysdk.h"

#define TOYWEBVIEWSHARED_MESSAGES_REQUESTSETFOCUS_.CTOR_OFFSET UNITYSDK_OFFSET(0x9BB7230)
#define TOYWEBVIEWSHARED_MESSAGES_REQUESTSETFOCUS_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9BBA7E0)
#define TOYWEBVIEWSHARED_MESSAGES_REQUESTSETFOCUS_SETDATA_OFFSET UNITYSDK_OFFSET(0x9BBA860)

namespace ToyWebViewShared::Messages
{
	inline static constexpr unsigned int RequestSetFocus_TypeDefinitionIndex = 25480;

	class RequestSetFocus : public Il2CppObject
	{
	public:
		::System::Boolean focus; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TOYWEBVIEWSHARED_MESSAGES_REQUESTSETFOCUS_.CTOR_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + TOYWEBVIEWSHARED_MESSAGES_REQUESTSETFOCUS_TOSTRING_OFFSET))(nullptr);
		}

		::System::Void SetData(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + TOYWEBVIEWSHARED_MESSAGES_REQUESTSETFOCUS_SETDATA_OFFSET))(str, nullptr);
		}

	};
}

