#pragma once
#include "../../unitysdk.h"

namespace UnityEngine { class AnimationClip; }

#define MXUNDERCOVER_ANIMATION_UCANIMATIONCLIPSTATE`1_GET_DURATION_OFFSET UNITYSDK_OFFSET(0x000000)
#define MXUNDERCOVER_ANIMATION_UCANIMATIONCLIPSTATE`1_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MXUNDERCOVER_ANIMATION_UCANIMATIONCLIPSTATE`1_ONENTER_OFFSET UNITYSDK_OFFSET(0x000000)
#define MXUNDERCOVER_ANIMATION_UCANIMATIONCLIPSTATE`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)

namespace MXUnderCover::Animation
{
	inline static constexpr unsigned int UCAnimationClipState`1_TypeDefinitionIndex = 10102;

	class UCAnimationClipState`1 : public ::System::Xml::Schema::XmlSchemaMinInclusiveFacet
	{
	public:
		::UnityEngine::AnimationClip* Clip; // 0x0
		::System::Single TransitionTime; // 0x0

		::System::Single get_Duration()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_ANIMATION_UCANIMATIONCLIPSTATE`1_GET_DURATION_OFFSET))(nullptr);
		}

		::System::Void OnUpdate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_ANIMATION_UCANIMATIONCLIPSTATE`1_ONUPDATE_OFFSET))(nullptr);
		}

		::System::Void OnEnter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_ANIMATION_UCANIMATIONCLIPSTATE`1_ONENTER_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_ANIMATION_UCANIMATIONCLIPSTATE`1_.CTOR_OFFSET))(nullptr);
		}

	};
}

