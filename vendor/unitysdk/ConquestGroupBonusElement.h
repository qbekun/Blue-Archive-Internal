#pragma once
#include "unitysdk.h"

namespace FlatData { class ParcelType; }
namespace MX::Data::Excel { class ConquestGroupBonusExcel; }

#define CONQUESTGROUPBONUSELEMENT_SET_BONUSPARCELTYPE_OFFSET UNITYSDK_OFFSET(0x1839E80)
#define CONQUESTGROUPBONUSELEMENT_GETMAXBONUSWITHSTUDENTCOUNT_OFFSET UNITYSDK_OFFSET(0x1839E90)
#define CONQUESTGROUPBONUSELEMENT_GET_BONUSCHARACTERCOUNTANDPERCENTAGES_OFFSET UNITYSDK_OFFSET(0x1839FB0)
#define CONQUESTGROUPBONUSELEMENT_SET_BONUSPARCELID_OFFSET UNITYSDK_OFFSET(0x1839FC0)
#define CONQUESTGROUPBONUSELEMENT_GET_BONUSPARCELID_OFFSET UNITYSDK_OFFSET(0x1839FD0)
#define CONQUESTGROUPBONUSELEMENT_.CTOR_OFFSET UNITYSDK_OFFSET(0x1839B40)
#define CONQUESTGROUPBONUSELEMENT_SET_BONUSCHARACTERCOUNTANDPERCENTAGES_OFFSET UNITYSDK_OFFSET(0x1839FE0)
#define CONQUESTGROUPBONUSELEMENT_GET_BONUSPARCELTYPE_OFFSET UNITYSDK_OFFSET(0x1839FF0)

	inline static constexpr unsigned int ConquestGroupBonusElement_TypeDefinitionIndex = 15756;

	class ConquestGroupBonusElement : public Il2CppObject
	{
	public:
		::FlatData::ParcelType* _BonusParcelType_k__BackingField; // 0x10
		::System::Int64 _BonusParcelId_k__BackingField; // 0x18
		Il2CppObject* _BonusCharacterCountAndPercentages_k__BackingField; // 0x20

		::System::Void set_BonusParcelType(::FlatData::ParcelType* arg)
		{
			((::System::Void(*)(::FlatData::ParcelType*, ::PVOID))((::PBYTE)hIl2Cpp + CONQUESTGROUPBONUSELEMENT_SET_BONUSPARCELTYPE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetMaxBonusWithStudentCount(::System::Int32 arg)
		{
			return (return (Il2CppObject*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + CONQUESTGROUPBONUSELEMENT_GETMAXBONUSWITHSTUDENTCOUNT_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_BonusCharacterCountAndPercentages()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CONQUESTGROUPBONUSELEMENT_GET_BONUSCHARACTERCOUNTANDPERCENTAGES_OFFSET))(nullptr);
		}

		::System::Void set_BonusParcelId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + CONQUESTGROUPBONUSELEMENT_SET_BONUSPARCELID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_BonusParcelId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CONQUESTGROUPBONUSELEMENT_GET_BONUSPARCELID_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Data::Excel::ConquestGroupBonusExcel* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::MX::Data::Excel::ConquestGroupBonusExcel*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + CONQUESTGROUPBONUSELEMENT_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void set_BonusCharacterCountAndPercentages(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + CONQUESTGROUPBONUSELEMENT_SET_BONUSCHARACTERCOUNTANDPERCENTAGES_OFFSET))(arg, nullptr);
		}

		::FlatData::ParcelType* get_BonusParcelType()
		{
			return (return (::FlatData::ParcelType*(*)(::PVOID))((::PBYTE)hIl2Cpp + CONQUESTGROUPBONUSELEMENT_GET_BONUSPARCELTYPE_OFFSET))(nullptr);
		}

	};

