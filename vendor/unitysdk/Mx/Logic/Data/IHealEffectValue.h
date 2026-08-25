#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class StatType; }
namespace MX::Logic::Skills { class ExtraStatType; }
namespace MX::Core::Math { class BasisPoint; }

#define MX_LOGIC_DATA_IHEALEFFECTVALUE_GET_APPLYHEALRATEBYBULLETTYPE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_LOGIC_DATA_IHEALEFFECTVALUE_GET_BONUSSOURCE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_LOGIC_DATA_IHEALEFFECTVALUE_GET_AMOUNT_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_LOGIC_DATA_IHEALEFFECTVALUE_GET_APPLYHEALRATEBYARMORTYPE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_LOGIC_DATA_IHEALEFFECTVALUE_GET_EXTRASTATSOURCE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_LOGIC_DATA_IHEALEFFECTVALUE_GET_ISACCUMULATEDHEAL_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_LOGIC_DATA_IHEALEFFECTVALUE_GET_EXTRASTATRATE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_LOGIC_DATA_IHEALEFFECTVALUE_GET_BONUSRATE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_LOGIC_DATA_IHEALEFFECTVALUE_GET_APPLYHEALRATE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_LOGIC_DATA_IHEALEFFECTVALUE_GET_CHANGERATEBYCOSTLIST_OFFSET UNITYSDK_OFFSET(0x000000)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int IHealEffectValue_TypeDefinitionIndex = 13896;

	class IHealEffectValue : public Il2CppObject
	{
	public:
		::System::Boolean get_ApplyHealRateByBulletType()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_IHEALEFFECTVALUE_GET_APPLYHEALRATEBYBULLETTYPE_OFFSET))(nullptr);
		}

		::FlatData::StatType* get_BonusSource()
		{
			return ((::FlatData::StatType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_IHEALEFFECTVALUE_GET_BONUSSOURCE_OFFSET))(nullptr);
		}

		::System::Int64 get_Amount()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_IHEALEFFECTVALUE_GET_AMOUNT_OFFSET))(nullptr);
		}

		::System::Boolean get_ApplyHealRateByArmorType()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_IHEALEFFECTVALUE_GET_APPLYHEALRATEBYARMORTYPE_OFFSET))(nullptr);
		}

		::MX::Logic::Skills::ExtraStatType* get_ExtraStatSource()
		{
			return ((::MX::Logic::Skills::ExtraStatType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_IHEALEFFECTVALUE_GET_EXTRASTATSOURCE_OFFSET))(nullptr);
		}

		::System::Boolean get_IsAccumulatedHeal()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_IHEALEFFECTVALUE_GET_ISACCUMULATEDHEAL_OFFSET))(nullptr);
		}

		::MX::Core::Math::BasisPoint* get_ExtraStatRate()
		{
			return ((::MX::Core::Math::BasisPoint*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_IHEALEFFECTVALUE_GET_EXTRASTATRATE_OFFSET))(nullptr);
		}

		::MX::Core::Math::BasisPoint* get_BonusRate()
		{
			return ((::MX::Core::Math::BasisPoint*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_IHEALEFFECTVALUE_GET_BONUSRATE_OFFSET))(nullptr);
		}

		::System::Boolean get_ApplyHealRate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_IHEALEFFECTVALUE_GET_APPLYHEALRATE_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* get_ChangeRateByCostList()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_IHEALEFFECTVALUE_GET_CHANGERATEBYCOSTLIST_OFFSET))(nullptr);
		}

	};
}

