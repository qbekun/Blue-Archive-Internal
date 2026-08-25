#pragma once
#include "../unitysdk.h"

namespace Animancer { class LinearMixerState; }
namespace Animancer { class AnimancerState; }
namespace Animancer { class LinearMixerTransition; }

#define ANIMANCER_LINEARMIXERTRANSITION_CREATESTATE_OFFSET UNITYSDK_OFFSET(0x4C0CD0)
#define ANIMANCER_LINEARMIXERTRANSITION_GET_EXTRAPOLATESPEED_OFFSET UNITYSDK_OFFSET(0x4C0DA0)
#define ANIMANCER_LINEARMIXERTRANSITION_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x4C0DB0)
#define ANIMANCER_LINEARMIXERTRANSITION_.CTOR_OFFSET UNITYSDK_OFFSET(0x4C0E60)
#define ANIMANCER_LINEARMIXERTRANSITION_APPLY_OFFSET UNITYSDK_OFFSET(0x4C0EA0)
#define ANIMANCER_LINEARMIXERTRANSITION_SORTBYTHRESHOLDS_OFFSET UNITYSDK_OFFSET(0x4C0F20)
#define ANIMANCER_LINEARMIXERTRANSITION_COPYFROM_OFFSET UNITYSDK_OFFSET(0x4C1270)

namespace Animancer
{
	inline static constexpr unsigned int LinearMixerTransition_TypeDefinitionIndex = 35238;

	class LinearMixerTransition : public <PostAsync>d__1
	{
	public:
		::System::Boolean _ExtrapolateSpeed; // 0x68

		::Animancer::LinearMixerState* CreateState()
		{
			return (return (::Animancer::LinearMixerState*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_LINEARMIXERTRANSITION_CREATESTATE_OFFSET))(nullptr);
		}

		bool&* get_ExtrapolateSpeed()
		{
			return (return (bool&*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_LINEARMIXERTRANSITION_GET_EXTRAPOLATESPEED_OFFSET))(nullptr);
		}

		::System::Boolean get_IsValid()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_LINEARMIXERTRANSITION_GET_ISVALID_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_LINEARMIXERTRANSITION_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Apply(::Animancer::AnimancerState* arg)
		{
			((::System::Void(*)(::Animancer::AnimancerState*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_LINEARMIXERTRANSITION_APPLY_OFFSET))(arg, nullptr);
		}

		::System::Void SortByThresholds()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_LINEARMIXERTRANSITION_SORTBYTHRESHOLDS_OFFSET))(nullptr);
		}

		::System::Void CopyFrom(::Animancer::LinearMixerTransition* arg)
		{
			((::System::Void(*)(::Animancer::LinearMixerTransition*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_LINEARMIXERTRANSITION_COPYFROM_OFFSET))(arg, nullptr);
		}

	};
}

