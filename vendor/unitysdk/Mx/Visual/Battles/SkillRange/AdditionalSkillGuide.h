#pragma once
#include "../../../../unitysdk.h"

namespace UnityEngine { class Transform; }
namespace MX::Visual::Battles::SkillRange { class SkillGuideTransformInfo; }

#define MX_VISUAL_BATTLES_SKILLRANGE_ADDITIONALSKILLGUIDE__APPLYTRANSFORMINFO_B__5_0_OFFSET UNITYSDK_OFFSET(0x1D88680)
#define MX_VISUAL_BATTLES_SKILLRANGE_ADDITIONALSKILLGUIDE_INIT_OFFSET UNITYSDK_OFFSET(0x1D88760)
#define MX_VISUAL_BATTLES_SKILLRANGE_ADDITIONALSKILLGUIDE_SETACTIVE_OFFSET UNITYSDK_OFFSET(0x1D887E0)
#define MX_VISUAL_BATTLES_SKILLRANGE_ADDITIONALSKILLGUIDE_GET_TRANSFORM_OFFSET UNITYSDK_OFFSET(0x1D88810)
#define MX_VISUAL_BATTLES_SKILLRANGE_ADDITIONALSKILLGUIDE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1D88820)
#define MX_VISUAL_BATTLES_SKILLRANGE_ADDITIONALSKILLGUIDE_APPLYTRANSFORMINFO_OFFSET UNITYSDK_OFFSET(0x1D888A0)

namespace MX::Visual::Battles::SkillRange
{
	inline static constexpr unsigned int AdditionalSkillGuide_TypeDefinitionIndex = 20356;

	class AdditionalSkillGuide : public Il2CppObject
	{
	public:
		MXBattleTask* battleTask; // 0x18
		Il2CppObject* subComponents; // 0x20

		::System::Void _ApplyTransformInfo_b__5_0(CharacterVisual* arg)
		{
			((::System::Void(*)(CharacterVisual*, ::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_SKILLRANGE_ADDITIONALSKILLGUIDE__APPLYTRANSFORMINFO_B__5_0_OFFSET))(arg, nullptr);
		}

		::System::Void Init(MXBattleTask* arg)
		{
			((::System::Void(*)(MXBattleTask*, ::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_SKILLRANGE_ADDITIONALSKILLGUIDE_INIT_OFFSET))(arg, nullptr);
		}

		::System::Void SetActive(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_SKILLRANGE_ADDITIONALSKILLGUIDE_SETACTIVE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Transform* get_Transform()
		{
			return (return (::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_SKILLRANGE_ADDITIONALSKILLGUIDE_GET_TRANSFORM_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_SKILLRANGE_ADDITIONALSKILLGUIDE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void ApplyTransformInfo(::MX::Visual::Battles::SkillRange::SkillGuideTransformInfo* arg)
		{
			((::System::Void(*)(::MX::Visual::Battles::SkillRange::SkillGuideTransformInfo*, ::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_SKILLRANGE_ADDITIONALSKILLGUIDE_APPLYTRANSFORMINFO_OFFSET))(arg, nullptr);
		}

	};
}

