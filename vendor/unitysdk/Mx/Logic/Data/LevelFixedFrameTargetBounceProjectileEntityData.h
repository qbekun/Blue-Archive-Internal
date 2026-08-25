#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Data { class BounceConditionCheckTiming; }
namespace MX::Logic::Data { class NontargetBounceCondition; }
namespace MX::Logic::Data { class LevelTargetBounceProjectileEntityData; }

#define MX_LOGIC_DATA_LEVELFIXEDFRAMETARGETBOUNCEPROJECTILEENTITYDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x11FBD90)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int LevelFixedFrameTargetBounceProjectileEntityData_TypeDefinitionIndex = 13697;

	class LevelFixedFrameTargetBounceProjectileEntityData : public Il2CppObject
	{
	public:
		::System::Int64 BounceRadius; // 0x1D0
		::System::Boolean AllowBounceTargetDuplication; // 0x1D8
		::MX::Logic::Data::BounceConditionCheckTiming* BounceCheckTiming; // 0x1DC
		::System::Int32 BounceConditionCheckFixedDelay; // 0x1E0
		::MX::Logic::Data::NontargetBounceCondition* BounceCondition; // 0x1E4
		::MX::Logic::Data::LevelTargetBounceProjectileEntityData* BounceProjectileEntity; // 0x1E8

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_LEVELFIXEDFRAMETARGETBOUNCEPROJECTILEENTITYDATA_.CTOR_OFFSET))(nullptr);
		}

	};
}

