#pragma once
#include "../../unitysdk.h"

#define TOYWEBVIEWSHARED_MESSAGES_REQUESTCUSTOMSCHEME_.CTOR_OFFSET UNITYSDK_OFFSET(0x9BB6DA0)
#define TOYWEBVIEWSHARED_MESSAGES_REQUESTCUSTOMSCHEME_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9BB8A20)
#define TOYWEBVIEWSHARED_MESSAGES_REQUESTCUSTOMSCHEME_SETDATA_OFFSET UNITYSDK_OFFSET(0x9BB8E00)
#define TOYWEBVIEWSHARED_MESSAGES_REQUESTCUSTOMSCHEME_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9BB9110)

namespace ToyWebViewShared::Messages
{
	inline static constexpr unsigned int RequestCustomScheme_TypeDefinitionIndex = 25462;

	class RequestCustomScheme : public Il2CppObject
	{
	public:
		::System::Int32 SCHEME_PROCESS_TYPE_CUSTOM; // 0x0
		::System::Int32 SCHEME_PROCESS_TYPE_MOVE_IN_WEB; // 0x4
		::System::Int32 SCHEME_PROCESS_TYPE_WEB_LINK; // 0x8
		Il2CppObject* customSchemes; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TOYWEBVIEWSHARED_MESSAGES_REQUESTCUSTOMSCHEME_.CTOR_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + TOYWEBVIEWSHARED_MESSAGES_REQUESTCUSTOMSCHEME_TOSTRING_OFFSET))(nullptr);
		}

		::System::Void SetData(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + TOYWEBVIEWSHARED_MESSAGES_REQUESTCUSTOMSCHEME_SETDATA_OFFSET))(str, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TOYWEBVIEWSHARED_MESSAGES_REQUESTCUSTOMSCHEME_.CCTOR_OFFSET))(nullptr);
		}

	};
}

