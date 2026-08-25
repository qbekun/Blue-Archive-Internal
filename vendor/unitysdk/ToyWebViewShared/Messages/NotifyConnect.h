#pragma once
#include "../../unitysdk.h"

#define TOYWEBVIEWSHARED_MESSAGES_NOTIFYCONNECT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9BB6AF0)

namespace ToyWebViewShared::Messages
{
	inline static constexpr unsigned int NotifyConnect_TypeDefinitionIndex = 25441;

	class NotifyConnect : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TOYWEBVIEWSHARED_MESSAGES_NOTIFYCONNECT_.CTOR_OFFSET))(nullptr);
		}

	};
}

