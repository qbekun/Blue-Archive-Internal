#pragma once
#include "../../unitysdk.h"

namespace UnityEngine { class AnimationCurve; }

#define MX_MINIGAMESHOOTING_PROJECTILETARGETSKILLDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1454050)

namespace MX::MinigameShooting
{
	inline static constexpr unsigned int ProjectileTargetSkillData_TypeDefinitionIndex = 15012;

	class ProjectileTargetSkillData : public Il2CppObject
	{
	public:
		::System::Int64 Speed; // 0x68
		::UnityEngine::AnimationCurve* Curve; // 0x70

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_PROJECTILETARGETSKILLDATA_.CTOR_OFFSET))(nullptr);
		}

	};
}

