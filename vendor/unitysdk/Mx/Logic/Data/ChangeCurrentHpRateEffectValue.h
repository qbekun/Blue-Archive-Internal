#pragma once
#include "../../../unitysdk.h"

namespace MX::GameData::DAO::Battle { class ChangeCurrentHpRateEffectDAO; }

#define MX_LOGIC_DATA_CHANGECURRENTHPRATEEFFECTVALUE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1236300)
#define MX_LOGIC_DATA_CHANGECURRENTHPRATEEFFECTVALUE_GET_HPRATECHANGE_OFFSET UNITYSDK_OFFSET(0x1236330)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int ChangeCurrentHpRateEffectValue_TypeDefinitionIndex = 13859;

	class ChangeCurrentHpRateEffectValue : public Il2CppObject
	{
	public:
		::System::Int64 _HpRateChange_k__BackingField; // 0x48

		::System::Void .ctor(::MX::GameData::DAO::Battle::ChangeCurrentHpRateEffectDAO* arg)
		{
			((::System::Void(*)(::MX::GameData::DAO::Battle::ChangeCurrentHpRateEffectDAO*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_CHANGECURRENTHPRATEEFFECTVALUE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_HpRateChange()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_CHANGECURRENTHPRATEEFFECTVALUE_GET_HPRATECHANGE_OFFSET))(nullptr);
		}

	};
}

