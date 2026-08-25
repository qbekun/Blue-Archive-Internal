#pragma once
#include "../../../../unitysdk.h"

namespace MX::Visual::Battles::SkillRange { class SkillGuideTransformInfo; }
namespace UnityEngine { class Transform; }

#define MX_VISUAL_BATTLES_SKILLRANGE_ISKILLGUIDE_APPLYTRANSFORMINFO_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_VISUAL_BATTLES_SKILLRANGE_ISKILLGUIDE_GET_TRANSFORM_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_VISUAL_BATTLES_SKILLRANGE_ISKILLGUIDE_SETACTIVE_OFFSET UNITYSDK_OFFSET(0x000000)

namespace MX::Visual::Battles::SkillRange
{
	inline static constexpr unsigned int ISkillGuide_TypeDefinitionIndex = 20376;

	class ISkillGuide : public Il2CppObject
	{
	public:
		::System::Void ApplyTransformInfo(::MX::Visual::Battles::SkillRange::SkillGuideTransformInfo* arg)
		{
			((::System::Void(*)(::MX::Visual::Battles::SkillRange::SkillGuideTransformInfo*, ::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_SKILLRANGE_ISKILLGUIDE_APPLYTRANSFORMINFO_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Transform* get_Transform()
		{
			return (return (::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_SKILLRANGE_ISKILLGUIDE_GET_TRANSFORM_OFFSET))(nullptr);
		}

		::System::Void SetActive(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_SKILLRANGE_ISKILLGUIDE_SETACTIVE_OFFSET))(arg, nullptr);
		}

	};
}

