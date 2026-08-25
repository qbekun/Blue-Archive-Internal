#pragma once
#include "unitysdk.h"

#define CONQUESTPROPANIMATIONVISUAL_PLAYPROPANIMATIONS_OFFSET UNITYSDK_OFFSET(0x1BEB330)
#define CONQUESTPROPANIMATIONVISUAL_.CTOR_OFFSET UNITYSDK_OFFSET(0x1BEB4D0)

	inline static constexpr unsigned int ConquestPropAnimationVisual_TypeDefinitionIndex = 1541;

	class ConquestPropAnimationVisual : public Il2CppObject
	{
	public:
		Il2CppObject* animations; // 0x18

		::System::Void PlayPropAnimations()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONQUESTPROPANIMATIONVISUAL_PLAYPROPANIMATIONS_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONQUESTPROPANIMATIONVISUAL_.CTOR_OFFSET))(nullptr);
		}

	};

