#pragma once
#include "../../unitysdk.h"

namespace Animancer { class LinearMixerTransition; }

#define MXUNDERCOVER_ANIMATION_UCMIXERSTATE`1_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MXUNDERCOVER_ANIMATION_UCMIXERSTATE`1_GET_DURATION_OFFSET UNITYSDK_OFFSET(0x000000)
#define MXUNDERCOVER_ANIMATION_UCMIXERSTATE`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define MXUNDERCOVER_ANIMATION_UCMIXERSTATE`1_ONENTER_OFFSET UNITYSDK_OFFSET(0x000000)

namespace MXUnderCover::Animation
{
	inline static constexpr unsigned int UCMixerState`1_TypeDefinitionIndex = 10099;

	class UCMixerState`1 : public ::System::Xml::Schema::XmlSchemaMaxInclusiveFacet
	{
	public:
		::Animancer::LinearMixerTransition* Mixer; // 0x0

		::System::Void OnUpdate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_ANIMATION_UCMIXERSTATE`1_ONUPDATE_OFFSET))(nullptr);
		}

		::System::Single get_Duration()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_ANIMATION_UCMIXERSTATE`1_GET_DURATION_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_ANIMATION_UCMIXERSTATE`1_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnEnter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_ANIMATION_UCMIXERSTATE`1_ONENTER_OFFSET))(nullptr);
		}

	};
}

