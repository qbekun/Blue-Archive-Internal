#pragma once
#include "../../../../unitysdk.h"

namespace UnityEngine { class Vector3; }
namespace MX::Logic::BattleEntities { class BattleEntity; }

#define MX_VISUAL_BATTLES_SKILLRANGE_SKILLGUIDETRANSFORMINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x1DA16A0)

namespace MX::Visual::Battles::SkillRange
{
	inline static constexpr unsigned int SkillGuideTransformInfo_TypeDefinitionIndex = 20396;

	class SkillGuideTransformInfo : public Il2CppObject
	{
	public:
		::System::Boolean UpdateVisualOnly; // 0x10
		::UnityEngine::Vector3* Position; // 0x14
		::System::Boolean ApplyForward; // 0x20
		::UnityEngine::Vector3* Forward; // 0x24
		::MX::Logic::BattleEntities::BattleEntity* MainTarget; // 0x30

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_SKILLRANGE_SKILLGUIDETRANSFORMINFO_.CTOR_OFFSET))(nullptr);
		}

	};
}

