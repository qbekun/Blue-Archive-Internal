#pragma once
#include "unitysdk.h"

namespace MX::MinigameShooting { class AnimatorState; }
namespace UnityEngine { class AnimatorControllerParameter; }

#define <>C__DISPLAYCLASS24_0_.CTOR_OFFSET UNITYSDK_OFFSET(0x145CD40)
#define <>C__DISPLAYCLASS24_0__USESHOTEVENTS_B__0_OFFSET UNITYSDK_OFFSET(0x145CD50)

	inline static constexpr unsigned int <>c__DisplayClass24_0_TypeDefinitionIndex = 15043;

	class <>c__DisplayClass24_0 : public Il2CppObject
	{
	public:
		::MX::MinigameShooting::AnimatorState* animatorState; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS24_0_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean _UseShotEvents_b__0(::UnityEngine::AnimatorControllerParameter* arg)
		{
			return ((::System::Boolean(*)(::UnityEngine::AnimatorControllerParameter*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS24_0__USESHOTEVENTS_B__0_OFFSET))(arg, nullptr);
		}

	};

