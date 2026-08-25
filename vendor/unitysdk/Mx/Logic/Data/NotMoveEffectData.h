#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class EndCondition; }

#define MX_LOGIC_DATA_NOTMOVEEFFECTDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x11F4390)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int NotMoveEffectData_TypeDefinitionIndex = 13619;

	class NotMoveEffectData : public Il2CppObject
	{
	public:
		::FlatData::EndCondition* EndCondition; // 0x58
		::System::Int32 EndConditionArgument; // 0x5C
		::System::Boolean Dispellable; // 0x60
		::System::Boolean IncludeRootMotion; // 0x61
		::System::Boolean ImmuneKnockback; // 0x62

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_NOTMOVEEFFECTDATA_.CTOR_OFFSET))(nullptr);
		}

	};
}

