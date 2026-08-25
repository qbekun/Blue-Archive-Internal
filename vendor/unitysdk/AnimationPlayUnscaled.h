#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Animation; }

#define ANIMATIONPLAYUNSCALED_UPDATE_OFFSET UNITYSDK_OFFSET(0x2099AA0)
#define ANIMATIONPLAYUNSCALED_.CTOR_OFFSET UNITYSDK_OFFSET(0x2099D10)
#define ANIMATIONPLAYUNSCALED_GET_ANI_OFFSET UNITYSDK_OFFSET(0x2099C60)
#define ANIMATIONPLAYUNSCALED_ONENABLE_OFFSET UNITYSDK_OFFSET(0x2099D20)
#define ANIMATIONPLAYUNSCALED_PLAY_OFFSET UNITYSDK_OFFSET(0x2099DB0)

	inline static constexpr unsigned int AnimationPlayUnscaled_TypeDefinitionIndex = 3518;

	class AnimationPlayUnscaled : public Il2CppObject
	{
	public:
		::UnityEngine::Animation* ani; // 0x18
		::System::Single elapsedTime; // 0x20

		::System::Void Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMATIONPLAYUNSCALED_UPDATE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMATIONPLAYUNSCALED_.CTOR_OFFSET))(nullptr);
		}

		::UnityEngine::Animation* get_Ani()
		{
			return ((::UnityEngine::Animation*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMATIONPLAYUNSCALED_GET_ANI_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMATIONPLAYUNSCALED_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void Play()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMATIONPLAYUNSCALED_PLAY_OFFSET))(nullptr);
		}

	};

