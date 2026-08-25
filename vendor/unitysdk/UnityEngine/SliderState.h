#pragma once
#include "../unitysdk.h"

#define UNITYENGINE_SLIDERSTATE_.CTOR_OFFSET UNITYSDK_OFFSET(0xA28A150)

namespace UnityEngine
{
	inline static constexpr unsigned int SliderState_TypeDefinitionIndex = 36557;

	class SliderState : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SLIDERSTATE_.CTOR_OFFSET))(nullptr);
		}

	};
}

