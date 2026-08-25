#pragma once
#include "../../unitysdk.h"

#define TOYWEBVIEWSHARED_MESSAGES_REPLYCREATE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9BB6C90)

namespace ToyWebViewShared::Messages
{
	inline static constexpr unsigned int ReplyCreate_TypeDefinitionIndex = 25457;

	class ReplyCreate : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TOYWEBVIEWSHARED_MESSAGES_REPLYCREATE_.CTOR_OFFSET))(nullptr);
		}

	};
}

