#pragma once
#include "../../../../unitysdk.h"

namespace FlatData { class EffectBone; }
namespace UnityEngine { class Transform; }

#define MX_VISUAL_BATTLES_SKILLRANGE_SKILLGUIDECOMPONENTATTACHTOTARGETBONE_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x1DA2560)
#define MX_VISUAL_BATTLES_SKILLRANGE_SKILLGUIDECOMPONENTATTACHTOTARGETBONE_SETMAINTARGET_OFFSET UNITYSDK_OFFSET(0x1DA2610)
#define MX_VISUAL_BATTLES_SKILLRANGE_SKILLGUIDECOMPONENTATTACHTOTARGETBONE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1DA26B0)

namespace MX::Visual::Battles::SkillRange
{
	inline static constexpr unsigned int SkillGuideComponentAttachToTargetBone_TypeDefinitionIndex = 20397;

	class SkillGuideComponentAttachToTargetBone : public Il2CppObject
	{
	public:
		::FlatData::EffectBone* targetBone; // 0x18
		::UnityEngine::Transform* targetTransform; // 0x20

		::System::Void LateUpdate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_SKILLRANGE_SKILLGUIDECOMPONENTATTACHTOTARGETBONE_LATEUPDATE_OFFSET))(nullptr);
		}

		::System::Void SetMainTarget(CharacterVisual* arg)
		{
			((::System::Void(*)(CharacterVisual*, ::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_SKILLRANGE_SKILLGUIDECOMPONENTATTACHTOTARGETBONE_SETMAINTARGET_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_SKILLRANGE_SKILLGUIDECOMPONENTATTACHTOTARGETBONE_.CTOR_OFFSET))(nullptr);
		}

	};
}

