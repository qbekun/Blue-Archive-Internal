#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Animation; }

#define ANIMATIONPLAYSAMETIME_START_OFFSET UNITYSDK_OFFSET(0x2099700)
#define ANIMATIONPLAYSAMETIME_AWAKE_OFFSET UNITYSDK_OFFSET(0x2099A40)
#define ANIMATIONPLAYSAMETIME_.CTOR_OFFSET UNITYSDK_OFFSET(0x2099A90)

	inline static constexpr unsigned int AnimationPlaySameTime_TypeDefinitionIndex = 3517;

	class AnimationPlaySameTime : public Il2CppObject
	{
	public:
		::UnityEngine::Animation* ani; // 0x18

		::System::Void Start()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMATIONPLAYSAMETIME_START_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMATIONPLAYSAMETIME_AWAKE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMATIONPLAYSAMETIME_.CTOR_OFFSET))(nullptr);
		}

	};

