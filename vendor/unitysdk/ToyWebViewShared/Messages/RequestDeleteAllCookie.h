#pragma once
#include "../../unitysdk.h"

#define TOYWEBVIEWSHARED_MESSAGES_REQUESTDELETEALLCOOKIE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9BB6F50)

namespace ToyWebViewShared::Messages
{
	inline static constexpr unsigned int RequestDeleteAllCookie_TypeDefinitionIndex = 25463;

	class RequestDeleteAllCookie : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TOYWEBVIEWSHARED_MESSAGES_REQUESTDELETEALLCOOKIE_.CTOR_OFFSET))(nullptr);
		}

	};
}

