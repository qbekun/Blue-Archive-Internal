#pragma once
#include "../../unitysdk.h"

#define TOYWEBVIEWSHARED_MESSAGES_REQUESTGOFORWARD_.CTOR_OFFSET UNITYSDK_OFFSET(0x9BB7080)

namespace ToyWebViewShared::Messages
{
	inline static constexpr unsigned int RequestGoForward_TypeDefinitionIndex = 25467;

	class RequestGoForward : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TOYWEBVIEWSHARED_MESSAGES_REQUESTGOFORWARD_.CTOR_OFFSET))(nullptr);
		}

	};
}

