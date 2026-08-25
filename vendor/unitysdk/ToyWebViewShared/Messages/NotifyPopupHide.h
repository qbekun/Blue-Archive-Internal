#pragma once
#include "../../unitysdk.h"

#define TOYWEBVIEWSHARED_MESSAGES_NOTIFYPOPUPHIDE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9BB6C10)

namespace ToyWebViewShared::Messages
{
	inline static constexpr unsigned int NotifyPopupHide_TypeDefinitionIndex = 25453;

	class NotifyPopupHide : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TOYWEBVIEWSHARED_MESSAGES_NOTIFYPOPUPHIDE_.CTOR_OFFSET))(nullptr);
		}

	};
}

