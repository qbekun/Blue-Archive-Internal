#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Data { class NontargetBounceCondition; }
namespace MX::Logic::Data { class LevelSkillEntityData; }
namespace MX::Logic::Data { class BounceConditionCheckTiming; }

#define MX_LOGIC_DATA_LEVELNONTARGETPROJECTILEENTITYDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x11FBE70)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int LevelNontargetProjectileEntityData_TypeDefinitionIndex = 13703;

	class LevelNontargetProjectileEntityData : public Il2CppObject
	{
	public:
		Il2CppObject* BarrierTransferAbilities; // 0x1D0
		::System::Single AngleOffset; // 0x1D8
		::System::Int64 ExpireDistance; // 0x1E0
		::System::Boolean Piercing; // 0x1E8
		::MX::Logic::Data::NontargetBounceCondition* BounceCondition; // 0x1EC
		::MX::Logic::Data::LevelSkillEntityData* BounceEntity; // 0x1F0
		::MX::Logic::Data::BounceConditionCheckTiming* BounceCheckTiming; // 0x1F8
		::System::Int32 BounceConditionCheckFixedDelay; // 0x1FC

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_LEVELNONTARGETPROJECTILEENTITYDATA_.CTOR_OFFSET))(nullptr);
		}

	};
}

