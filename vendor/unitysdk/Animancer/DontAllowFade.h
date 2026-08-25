#pragma once
#include "../unitysdk.h"

namespace Animancer { class AnimancerPlayable; }
namespace Animancer { class AnimancerNode; }

#define ANIMANCER_DONTALLOWFADE_.CTOR_OFFSET UNITYSDK_OFFSET(0x4B5FB0)
#define ANIMANCER_DONTALLOWFADE_ANIMANCER.IUPDATABLE.UPDATE_OFFSET UNITYSDK_OFFSET(0x4B5FC0)
#define ANIMANCER_DONTALLOWFADE_ASSERT_OFFSET UNITYSDK_OFFSET(0x4B6150)
#define ANIMANCER_DONTALLOWFADE_VALIDATE_OFFSET UNITYSDK_OFFSET(0x4B6120)

namespace Animancer
{
	inline static constexpr unsigned int DontAllowFade_TypeDefinitionIndex = 35179;

	class DontAllowFade : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_DONTALLOWFADE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Animancer.IUpdatable.Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_DONTALLOWFADE_ANIMANCER.IUPDATABLE.UPDATE_OFFSET))(nullptr);
		}

		::System::Void Assert(::Animancer::AnimancerPlayable* arg)
		{
			((::System::Void(*)(::Animancer::AnimancerPlayable*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_DONTALLOWFADE_ASSERT_OFFSET))(arg, nullptr);
		}

		::System::Void Validate(::Animancer::AnimancerNode* arg)
		{
			((::System::Void(*)(::Animancer::AnimancerNode*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_DONTALLOWFADE_VALIDATE_OFFSET))(arg, nullptr);
		}

	};
}

