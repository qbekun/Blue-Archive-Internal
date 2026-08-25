#pragma once
#include "../unitysdk.h"

#define CINEMACHINE_SAVEDURINGPLAYATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x285C850)

namespace Cinemachine
{
	inline static constexpr unsigned int SaveDuringPlayAttribute_TypeDefinitionIndex = 34307;

	class SaveDuringPlayAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_SAVEDURINGPLAYATTRIBUTE_.CTOR_OFFSET))(nullptr);
		}

	};
}

