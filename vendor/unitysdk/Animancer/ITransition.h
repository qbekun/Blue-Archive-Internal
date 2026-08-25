#pragma once
#include "../unitysdk.h"

namespace Animancer { class FadeMode; }
namespace Animancer { class AnimancerState; }

#define ANIMANCER_ITRANSITION_GET_FADEMODE_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_ITRANSITION_CREATESTATE_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_ITRANSITION_APPLY_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_ITRANSITION_GET_FADEDURATION_OFFSET UNITYSDK_OFFSET(0x000000)

namespace Animancer
{
	inline static constexpr unsigned int ITransition_TypeDefinitionIndex = 35153;

	class ITransition : public Il2CppObject
	{
	public:
		::Animancer::FadeMode* get_FadeMode()
		{
			return (return (::Animancer::FadeMode*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ITRANSITION_GET_FADEMODE_OFFSET))(nullptr);
		}

		::Animancer::AnimancerState* CreateState()
		{
			return (return (::Animancer::AnimancerState*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ITRANSITION_CREATESTATE_OFFSET))(nullptr);
		}

		::System::Void Apply(::Animancer::AnimancerState* arg)
		{
			((::System::Void(*)(::Animancer::AnimancerState*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ITRANSITION_APPLY_OFFSET))(arg, nullptr);
		}

		::System::Single get_FadeDuration()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ITRANSITION_GET_FADEDURATION_OFFSET))(nullptr);
		}

	};
}

