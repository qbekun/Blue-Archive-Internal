#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Skills { class TargetSideId; }
namespace MX::Logic::Skills { class TargetEntityType; }

#define MX_LOGIC_DATA_LEVELFIXEDFRAMEEXTRAHITTARGETPROJECTILEENTITYDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x11FBCB0)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int LevelFixedFrameExtraHitTargetProjectileEntityData_TypeDefinitionIndex = 13693;

	class LevelFixedFrameExtraHitTargetProjectileEntityData : public Il2CppObject
	{
	public:
		::MX::Logic::Skills::TargetSideId* ExtraHitCheckTargetSide; // 0x1D0
		::MX::Logic::Skills::TargetEntityType* ExtraHitCheckTargetEntityType; // 0x1D4
		::System::Boolean Piercing; // 0x1D8
		::System::Int32 MaxExtraHitCount; // 0x1DC

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_LEVELFIXEDFRAMEEXTRAHITTARGETPROJECTILEENTITYDATA_.CTOR_OFFSET))(nullptr);
		}

	};
}

