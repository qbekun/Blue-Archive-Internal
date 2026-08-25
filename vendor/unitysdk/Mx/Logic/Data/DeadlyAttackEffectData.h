#pragma once
#include "../../../unitysdk.h"

#define MX_LOGIC_DATA_DEADLYATTACKEFFECTDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x11F3FC0)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int DeadlyAttackEffectData_TypeDefinitionIndex = 13581;

	class DeadlyAttackEffectData : public Il2CppObject
	{
	public:
		::System::Int64 Amount; // 0x58
		::System::Boolean ForceFloaterHide; // 0x60

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_DEADLYATTACKEFFECTDATA_.CTOR_OFFSET))(nullptr);
		}

	};
}

