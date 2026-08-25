#pragma once
#include "../../unitysdk.h"

#define TOYWEBVIEWSHARED_MESSAGES_NOTIFYCLOSE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9BB6AD0)

namespace ToyWebViewShared::Messages
{
	inline static constexpr unsigned int NotifyClose_TypeDefinitionIndex = 25440;

	class NotifyClose : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TOYWEBVIEWSHARED_MESSAGES_NOTIFYCLOSE_.CTOR_OFFSET))(nullptr);
		}

	};
}

