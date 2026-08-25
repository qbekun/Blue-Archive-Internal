#pragma once
#include "../../unitysdk.h"

namespace Animancer { class ClipTransition; }

#define MXUNDERCOVER_ANIMATION_UCTRANSITIONSTATE`1_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MXUNDERCOVER_ANIMATION_UCTRANSITIONSTATE`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define MXUNDERCOVER_ANIMATION_UCTRANSITIONSTATE`1_ONENTER_OFFSET UNITYSDK_OFFSET(0x000000)
#define MXUNDERCOVER_ANIMATION_UCTRANSITIONSTATE`1_GET_DURATION_OFFSET UNITYSDK_OFFSET(0x000000)

namespace MXUnderCover::Animation
{
	inline static constexpr unsigned int UCTransitionState`1_TypeDefinitionIndex = 10101;

	class UCTransitionState`1 : public ::System::Xml::Schema::XmlSchemaWhiteSpaceFacet
	{
	public:
		::Animancer::ClipTransition* ClipTransition; // 0x0

		::System::Void OnUpdate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_ANIMATION_UCTRANSITIONSTATE`1_ONUPDATE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_ANIMATION_UCTRANSITIONSTATE`1_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnEnter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_ANIMATION_UCTRANSITIONSTATE`1_ONENTER_OFFSET))(nullptr);
		}

		::System::Single get_Duration()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_ANIMATION_UCTRANSITIONSTATE`1_GET_DURATION_OFFSET))(nullptr);
		}

	};
}

