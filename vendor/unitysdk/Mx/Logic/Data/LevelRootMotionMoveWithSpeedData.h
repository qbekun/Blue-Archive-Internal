#pragma once
#include "../../../unitysdk.h"

#define MX_LOGIC_DATA_LEVELROOTMOTIONMOVEWITHSPEEDDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x11FC010)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int LevelRootMotionMoveWithSpeedData_TypeDefinitionIndex = 13713;

	class LevelRootMotionMoveWithSpeedData : public Il2CppObject
	{
	public:
		::System::Int64 MoveSpeed; // 0x158

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_LEVELROOTMOTIONMOVEWITHSPEEDDATA_.CTOR_OFFSET))(nullptr);
		}

	};
}

