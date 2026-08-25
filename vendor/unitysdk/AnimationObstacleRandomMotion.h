#pragma once
#include "unitysdk.h"

#define ANIMATIONOBSTACLERANDOMMOTION_AWAKE_OFFSET UNITYSDK_OFFSET(0x15A1390)
#define ANIMATIONOBSTACLERANDOMMOTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x15A16F0)

	inline static constexpr unsigned int AnimationObstacleRandomMotion_TypeDefinitionIndex = 1081;

	class AnimationObstacleRandomMotion : public Il2CppObject
	{
	public:
		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMATIONOBSTACLERANDOMMOTION_AWAKE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMATIONOBSTACLERANDOMMOTION_.CTOR_OFFSET))(nullptr);
		}

	};

