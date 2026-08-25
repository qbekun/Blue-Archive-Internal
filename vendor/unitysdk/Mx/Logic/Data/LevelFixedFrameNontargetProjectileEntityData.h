#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Data { class NontargetBounceCondition; }
namespace MX::Logic::Data { class BounceConditionCheckTiming; }
namespace MX::Logic::Data { class LevelSkillEntityData; }

#define MX_LOGIC_DATA_LEVELFIXEDFRAMENONTARGETPROJECTILEENTITYDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x11FBD00)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int LevelFixedFrameNontargetProjectileEntityData_TypeDefinitionIndex = 13695;

	class LevelFixedFrameNontargetProjectileEntityData : public Il2CppObject
	{
	public:
		::System::Int32 AngleOffset; // 0x1D0
		::System::Int64 ExpireDistance; // 0x1D8
		::System::Boolean Piercing; // 0x1E0
		::MX::Logic::Data::NontargetBounceCondition* BounceCondition; // 0x1E4
		::MX::Logic::Data::BounceConditionCheckTiming* BounceCheckTiming; // 0x1E8
		::System::Int32 BounceConditionCheckFixedDelay; // 0x1EC
		::MX::Logic::Data::LevelSkillEntityData* BounceEntity; // 0x1F0

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_LEVELFIXEDFRAMENONTARGETPROJECTILEENTITYDATA_.CTOR_OFFSET))(nullptr);
		}

	};
}

