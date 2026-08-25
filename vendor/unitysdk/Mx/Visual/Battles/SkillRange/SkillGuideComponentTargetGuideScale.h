#pragma once
#include "../../../../unitysdk.h"

namespace UnityEngine { class Vector3; }

#define MX_VISUAL_BATTLES_SKILLRANGE_SKILLGUIDECOMPONENTTARGETGUIDESCALE_AWAKE_OFFSET UNITYSDK_OFFSET(0x1DA26C0)
#define MX_VISUAL_BATTLES_SKILLRANGE_SKILLGUIDECOMPONENTTARGETGUIDESCALE_SETMAINTARGET_OFFSET UNITYSDK_OFFSET(0x1DA2700)
#define MX_VISUAL_BATTLES_SKILLRANGE_SKILLGUIDECOMPONENTTARGETGUIDESCALE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1DA2820)

namespace MX::Visual::Battles::SkillRange
{
	inline static constexpr unsigned int SkillGuideComponentTargetGuideScale_TypeDefinitionIndex = 20398;

	class SkillGuideComponentTargetGuideScale : public Il2CppObject
	{
	public:
		::UnityEngine::Vector3* originalScale; // 0x18

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_SKILLRANGE_SKILLGUIDECOMPONENTTARGETGUIDESCALE_AWAKE_OFFSET))(nullptr);
		}

		::System::Void SetMainTarget(CharacterVisual* arg)
		{
			((::System::Void(*)(CharacterVisual*, ::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_SKILLRANGE_SKILLGUIDECOMPONENTTARGETGUIDESCALE_SETMAINTARGET_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_SKILLRANGE_SKILLGUIDECOMPONENTTARGETGUIDESCALE_.CTOR_OFFSET))(nullptr);
		}

	};
}

