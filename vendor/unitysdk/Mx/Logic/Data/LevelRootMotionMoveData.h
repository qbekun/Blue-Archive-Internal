#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Skills { class TargetEntityType; }

#define MX_LOGIC_DATA_LEVELROOTMOTIONMOVEDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x11FBFF0)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int LevelRootMotionMoveData_TypeDefinitionIndex = 13712;

	class LevelRootMotionMoveData : public Il2CppObject
	{
	public:
		::MX::Logic::Skills::TargetEntityType* CheckCollisionType; // 0x150
		::System::Boolean IgnoreMovableCheckInMove; // 0x154

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_LEVELROOTMOTIONMOVEDATA_.CTOR_OFFSET))(nullptr);
		}

	};
}

