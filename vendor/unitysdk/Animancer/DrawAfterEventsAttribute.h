#pragma once
#include "../unitysdk.h"

#define ANIMANCER_DRAWAFTEREVENTSATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x4AC060)

namespace Animancer
{
	inline static constexpr unsigned int DrawAfterEventsAttribute_TypeDefinitionIndex = 35130;

	class DrawAfterEventsAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_DRAWAFTEREVENTSATTRIBUTE_.CTOR_OFFSET))(nullptr);
		}

	};
}

