#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class StatType; }
namespace MX::Core::Math { class BasisPoint; }
namespace MX::GameData::DAO::Battle { class ShieldHealEffectDAO; }

#define MX_LOGIC_DATA_SHIELDHEALEFFECTVALUE_SETAMOUNT_OFFSET UNITYSDK_OFFSET(0x123E8E0)
#define MX_LOGIC_DATA_SHIELDHEALEFFECTVALUE_GET_AMOUNT_OFFSET UNITYSDK_OFFSET(0x123E8F0)
#define MX_LOGIC_DATA_SHIELDHEALEFFECTVALUE_GET_SHIELDID_OFFSET UNITYSDK_OFFSET(0x123E900)
#define MX_LOGIC_DATA_SHIELDHEALEFFECTVALUE_SET_AMOUNT_OFFSET UNITYSDK_OFFSET(0x123E910)
#define MX_LOGIC_DATA_SHIELDHEALEFFECTVALUE_GET_BONUSSOURCE_OFFSET UNITYSDK_OFFSET(0x123E920)
#define MX_LOGIC_DATA_SHIELDHEALEFFECTVALUE_.CTOR_OFFSET UNITYSDK_OFFSET(0x123E930)
#define MX_LOGIC_DATA_SHIELDHEALEFFECTVALUE_GET_BONUSRATE_OFFSET UNITYSDK_OFFSET(0x123E9E0)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int ShieldHealEffectValue_TypeDefinitionIndex = 13921;

	class ShieldHealEffectValue : public Il2CppObject
	{
	public:
		::System::Int64 _Amount_k__BackingField; // 0x48
		::FlatData::StatType* _BonusSource_k__BackingField; // 0x50
		::MX::Core::Math::BasisPoint* _BonusRate_k__BackingField; // 0x58
		::System::String* _ShieldId_k__BackingField; // 0x60

		::System::Void SetAmount(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_SHIELDHEALEFFECTVALUE_SETAMOUNT_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_Amount()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_SHIELDHEALEFFECTVALUE_GET_AMOUNT_OFFSET))(nullptr);
		}

		::System::String* get_ShieldId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_SHIELDHEALEFFECTVALUE_GET_SHIELDID_OFFSET))(nullptr);
		}

		::System::Void set_Amount(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_SHIELDHEALEFFECTVALUE_SET_AMOUNT_OFFSET))(arg, nullptr);
		}

		::FlatData::StatType* get_BonusSource()
		{
			return ((::FlatData::StatType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_SHIELDHEALEFFECTVALUE_GET_BONUSSOURCE_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::GameData::DAO::Battle::ShieldHealEffectDAO* arg)
		{
			((::System::Void(*)(::MX::GameData::DAO::Battle::ShieldHealEffectDAO*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_SHIELDHEALEFFECTVALUE_.CTOR_OFFSET))(arg, nullptr);
		}

		::MX::Core::Math::BasisPoint* get_BonusRate()
		{
			return ((::MX::Core::Math::BasisPoint*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_SHIELDHEALEFFECTVALUE_GET_BONUSRATE_OFFSET))(nullptr);
		}

	};
}

