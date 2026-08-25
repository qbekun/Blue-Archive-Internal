#pragma once
#include "../../unitysdk.h"

#define TOYWEBVIEWSHARED_MESSAGES_REQUESTRESIZE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9BB7190)
#define TOYWEBVIEWSHARED_MESSAGES_REQUESTRESIZE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9BB9F30)
#define TOYWEBVIEWSHARED_MESSAGES_REQUESTRESIZE_SETDATA_OFFSET UNITYSDK_OFFSET(0x9BB9FE0)

namespace ToyWebViewShared::Messages
{
	inline static constexpr unsigned int RequestResize_TypeDefinitionIndex = 25473;

	class RequestResize : public Il2CppObject
	{
	public:
		::System::Int32 width; // 0x18
		::System::Int32 height; // 0x1C

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TOYWEBVIEWSHARED_MESSAGES_REQUESTRESIZE_.CTOR_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + TOYWEBVIEWSHARED_MESSAGES_REQUESTRESIZE_TOSTRING_OFFSET))(nullptr);
		}

		::System::Void SetData(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + TOYWEBVIEWSHARED_MESSAGES_REQUESTRESIZE_SETDATA_OFFSET))(str, nullptr);
		}

	};
}

