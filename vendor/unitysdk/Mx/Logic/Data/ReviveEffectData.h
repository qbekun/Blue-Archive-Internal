#pragma once
#include "../../../unitysdk.h"

#define MX_LOGIC_DATA_REVIVEEFFECTDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x11F4410)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int ReviveEffectData_TypeDefinitionIndex = 13627;

	class ReviveEffectData : public Il2CppObject
	{
	public:
		::System::Int64 HPRecoverRate; // 0x58
		::System::Boolean ResetCoolTime; // 0x60

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_REVIVEEFFECTDATA_.CTOR_OFFSET))(nullptr);
		}

	};
}

