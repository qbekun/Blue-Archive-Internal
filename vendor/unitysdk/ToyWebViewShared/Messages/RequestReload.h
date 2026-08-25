#pragma once
#include "../../unitysdk.h"

#define TOYWEBVIEWSHARED_MESSAGES_REQUESTRELOAD_.CTOR_OFFSET UNITYSDK_OFFSET(0x9BB7170)
#define TOYWEBVIEWSHARED_MESSAGES_REQUESTRELOAD_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9BB9E50)
#define TOYWEBVIEWSHARED_MESSAGES_REQUESTRELOAD_SETDATA_OFFSET UNITYSDK_OFFSET(0x9BB9ED0)

namespace ToyWebViewShared::Messages
{
	inline static constexpr unsigned int RequestReload_TypeDefinitionIndex = 25472;

	class RequestReload : public Il2CppObject
	{
	public:
		::System::Boolean ignoreCache; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TOYWEBVIEWSHARED_MESSAGES_REQUESTRELOAD_.CTOR_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + TOYWEBVIEWSHARED_MESSAGES_REQUESTRELOAD_TOSTRING_OFFSET))(nullptr);
		}

		::System::Void SetData(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + TOYWEBVIEWSHARED_MESSAGES_REQUESTRELOAD_SETDATA_OFFSET))(str, nullptr);
		}

	};
}

