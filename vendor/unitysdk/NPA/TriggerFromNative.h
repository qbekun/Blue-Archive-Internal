#pragma once
#include "../unitysdk.h"

#define NPA_TRIGGERFROMNATIVE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9BBA960)

namespace NPA
{
	inline static constexpr unsigned int TriggerFromNative_TypeDefinitionIndex = 25484;

	class TriggerFromNative : public ::UnityEngine::AudioClip
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_TRIGGERFROMNATIVE_.CTOR_OFFSET))(nullptr);
		}

	};
}

