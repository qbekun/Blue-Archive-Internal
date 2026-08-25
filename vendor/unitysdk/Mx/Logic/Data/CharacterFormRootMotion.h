#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Data { class RootMotionFrame; }

#define MX_LOGIC_DATA_CHARACTERFORMROOTMOTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x11FC820)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int CharacterFormRootMotion_TypeDefinitionIndex = 13732;

	class CharacterFormRootMotion : public Il2CppObject
	{
	public:
		::MX::Logic::Data::RootMotionFrame* PublicSkill; // 0x10
		::MX::Logic::Data::RootMotionFrame* MoveEndNormal; // 0x18
		::MX::Logic::Data::RootMotionFrame* MoveEndKneel; // 0x20
		::MX::Logic::Data::RootMotionFrame* MoveEndStand; // 0x28

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_CHARACTERFORMROOTMOTION_.CTOR_OFFSET))(nullptr);
		}

	};
}

