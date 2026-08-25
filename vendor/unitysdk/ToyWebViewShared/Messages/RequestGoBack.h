#pragma once
#include "../../unitysdk.h"

#define TOYWEBVIEWSHARED_MESSAGES_REQUESTGOBACK_.CTOR_OFFSET UNITYSDK_OFFSET(0x9BB7060)

namespace ToyWebViewShared::Messages
{
	inline static constexpr unsigned int RequestGoBack_TypeDefinitionIndex = 25466;

	class RequestGoBack : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TOYWEBVIEWSHARED_MESSAGES_REQUESTGOBACK_.CTOR_OFFSET))(nullptr);
		}

	};
}

