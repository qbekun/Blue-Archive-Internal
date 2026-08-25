#pragma once
#include "../../../unitysdk.h"

#define MX_LOGIC_DATA_CHANGECURRENTHPRATEEFFECTDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x11F3E70)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int ChangeCurrentHpRateEffectData_TypeDefinitionIndex = 13560;

	class ChangeCurrentHpRateEffectData : public Il2CppObject
	{
	public:
		::System::Int64 HpRateChange; // 0x58

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_CHANGECURRENTHPRATEEFFECTDATA_.CTOR_OFFSET))(nullptr);
		}

	};
}

