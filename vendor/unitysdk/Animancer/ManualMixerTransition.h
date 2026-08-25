#pragma once
#include "../unitysdk.h"

namespace Animancer { class ManualMixerState; }
namespace Animancer { class ManualMixerTransition; }

#define ANIMANCER_MANUALMIXERTRANSITION_.CTOR_OFFSET UNITYSDK_OFFSET(0x4C12B0)
#define ANIMANCER_MANUALMIXERTRANSITION_CREATESTATE_OFFSET UNITYSDK_OFFSET(0x4C12F0)
#define ANIMANCER_MANUALMIXERTRANSITION_COPYFROM_OFFSET UNITYSDK_OFFSET(0x4C1390)

namespace Animancer
{
	inline static constexpr unsigned int ManualMixerTransition_TypeDefinitionIndex = 35239;

	class ManualMixerTransition : public ::System::Resources::FastResourceComparer
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_MANUALMIXERTRANSITION_.CTOR_OFFSET))(nullptr);
		}

		::Animancer::ManualMixerState* CreateState()
		{
			return (return (::Animancer::ManualMixerState*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_MANUALMIXERTRANSITION_CREATESTATE_OFFSET))(nullptr);
		}

		::System::Void CopyFrom(::Animancer::ManualMixerTransition* arg)
		{
			((::System::Void(*)(::Animancer::ManualMixerTransition*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_MANUALMIXERTRANSITION_COPYFROM_OFFSET))(arg, nullptr);
		}

	};
}

