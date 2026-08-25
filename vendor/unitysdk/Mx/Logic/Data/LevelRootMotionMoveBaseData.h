#pragma once
#include "../../../unitysdk.h"

#define MX_LOGIC_DATA_LEVELROOTMOTIONMOVEBASEDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x11FBFE0)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int LevelRootMotionMoveBaseData_TypeDefinitionIndex = 13711;

	class LevelRootMotionMoveBaseData : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_LEVELROOTMOTIONMOVEBASEDATA_.CTOR_OFFSET))(nullptr);
		}

	};
}

