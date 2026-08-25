#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Transform; }

#define REPOSITIONSCROLLVIEWBEFOREOPENINGTOOLTIPMESSAGE_SET_CLICKEDPARCELTRANSFORM_OFFSET UNITYSDK_OFFSET(0x2744CA0)
#define REPOSITIONSCROLLVIEWBEFOREOPENINGTOOLTIPMESSAGE_GET_CLICKEDPARCELTRANSFORM_OFFSET UNITYSDK_OFFSET(0x2744CB0)
#define REPOSITIONSCROLLVIEWBEFOREOPENINGTOOLTIPMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x2733980)

	inline static constexpr unsigned int RepositionScrollViewBeforeOpeningTooltipMessage_TypeDefinitionIndex = 7232;

	class RepositionScrollViewBeforeOpeningTooltipMessage : public ::TriInspector::TitleAttribute
	{
	public:
		::UnityEngine::Transform* _ClickedParcelTransform_k__BackingField; // 0x18

		::System::Void set_ClickedParcelTransform(::UnityEngine::Transform* arg)
		{
			((::System::Void(*)(::UnityEngine::Transform*, ::PVOID))((::PBYTE)hIl2Cpp + REPOSITIONSCROLLVIEWBEFOREOPENINGTOOLTIPMESSAGE_SET_CLICKEDPARCELTRANSFORM_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Transform* get_ClickedParcelTransform()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + REPOSITIONSCROLLVIEWBEFOREOPENINGTOOLTIPMESSAGE_GET_CLICKEDPARCELTRANSFORM_OFFSET))(nullptr);
		}

		::System::Void .ctor(::UnityEngine::Transform* arg)
		{
			((::System::Void(*)(::UnityEngine::Transform*, ::PVOID))((::PBYTE)hIl2Cpp + REPOSITIONSCROLLVIEWBEFOREOPENINGTOOLTIPMESSAGE_.CTOR_OFFSET))(arg, nullptr);
		}

	};

