#pragma once
#include "../unitysdk.h"

#define UNITYENGINE_DISALLOWMULTIPLECOMPONENT_.CTOR_OFFSET UNITYSDK_OFFSET(0xA22E830)

namespace UnityEngine
{
	inline static constexpr unsigned int DisallowMultipleComponent_TypeDefinitionIndex = 31132;

	class DisallowMultipleComponent : public ::UnityEngine::AudioClip
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_DISALLOWMULTIPLECOMPONENT_.CTOR_OFFSET))(nullptr);
		}

	};
}

