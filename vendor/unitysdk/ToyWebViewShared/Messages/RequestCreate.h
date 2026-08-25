#pragma once
#include "../../unitysdk.h"

#define TOYWEBVIEWSHARED_MESSAGES_REQUESTCREATE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9BB6D10)
#define TOYWEBVIEWSHARED_MESSAGES_REQUESTCREATE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9BB8460)
#define TOYWEBVIEWSHARED_MESSAGES_REQUESTCREATE_SETDATA_OFFSET UNITYSDK_OFFSET(0x9BB87D0)

namespace ToyWebViewShared::Messages
{
	inline static constexpr unsigned int RequestCreate_TypeDefinitionIndex = 25461;

	class RequestCreate : public Il2CppObject
	{
	public:
		::System::Int32 width; // 0x18
		::System::Int32 height; // 0x1C
		::System::String* url; // 0x20
		::System::Boolean isUseTransparency; // 0x28
		::System::UInt32 backgroundColor; // 0x2C
		Il2CppObject* additionalHttpHeaders; // 0x30

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TOYWEBVIEWSHARED_MESSAGES_REQUESTCREATE_.CTOR_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + TOYWEBVIEWSHARED_MESSAGES_REQUESTCREATE_TOSTRING_OFFSET))(nullptr);
		}

		::System::Void SetData(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + TOYWEBVIEWSHARED_MESSAGES_REQUESTCREATE_SETDATA_OFFSET))(str, nullptr);
		}

	};
}

