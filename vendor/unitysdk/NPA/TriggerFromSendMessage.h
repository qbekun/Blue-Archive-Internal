#pragma once
#include "../unitysdk.h"

#define NPA_TRIGGERFROMSENDMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9BBA970)

namespace NPA
{
	inline static constexpr unsigned int TriggerFromSendMessage_TypeDefinitionIndex = 25485;

	class TriggerFromSendMessage : public ::UnityEngine::AudioClip
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_TRIGGERFROMSENDMESSAGE_.CTOR_OFFSET))(nullptr);
		}

	};
}

