#pragma once
#include "unitysdk.h"

namespace FlatData { class ParcelType; }
namespace MX::Data::Excel { class ProductSelectionGroupExcel; }

#define PRODUCTSELECTEDITEMINFO_SET_CONDITIONPARCELTYPE_OFFSET UNITYSDK_OFFSET(0x272E8A0)
#define PRODUCTSELECTEDITEMINFO_SET_CONDITIONPARCELID_OFFSET UNITYSDK_OFFSET(0x272E8B0)
#define PRODUCTSELECTEDITEMINFO_SET_PRODUCTSELECTIONGROUPCOMPONENTID_OFFSET UNITYSDK_OFFSET(0x272E8C0)
#define PRODUCTSELECTEDITEMINFO_GET_CONDITIONPARCELTYPE_OFFSET UNITYSDK_OFFSET(0x272E8D0)
#define PRODUCTSELECTEDITEMINFO_GET_CONDITIONPARCELID_OFFSET UNITYSDK_OFFSET(0x272E8E0)
#define PRODUCTSELECTEDITEMINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x272E5B0)
#define PRODUCTSELECTEDITEMINFO_GET_PRODUCTSELECTIONGROUPCOMPONENTID_OFFSET UNITYSDK_OFFSET(0x272E8F0)

	inline static constexpr unsigned int ProductSelectedItemInfo_TypeDefinitionIndex = 7188;

	class ProductSelectedItemInfo : public Il2CppObject
	{
	public:
		::System::Int64 _ProductSelectionGroupComponentId_k__BackingField; // 0x48
		::FlatData::ParcelType* _ConditionParcelType_k__BackingField; // 0x50
		::System::Int64 _ConditionParcelId_k__BackingField; // 0x58

		::System::Void set_ConditionParcelType(::FlatData::ParcelType* arg)
		{
			((::System::Void(*)(::FlatData::ParcelType*, ::PVOID))((::PBYTE)hIl2Cpp + PRODUCTSELECTEDITEMINFO_SET_CONDITIONPARCELTYPE_OFFSET))(arg, nullptr);
		}

		::System::Void set_ConditionParcelId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + PRODUCTSELECTEDITEMINFO_SET_CONDITIONPARCELID_OFFSET))(arg, nullptr);
		}

		::System::Void set_ProductSelectionGroupComponentId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + PRODUCTSELECTEDITEMINFO_SET_PRODUCTSELECTIONGROUPCOMPONENTID_OFFSET))(arg, nullptr);
		}

		::FlatData::ParcelType* get_ConditionParcelType()
		{
			return ((::FlatData::ParcelType*(*)(::PVOID))((::PBYTE)hIl2Cpp + PRODUCTSELECTEDITEMINFO_GET_CONDITIONPARCELTYPE_OFFSET))(nullptr);
		}

		::System::Int64 get_ConditionParcelId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + PRODUCTSELECTEDITEMINFO_GET_CONDITIONPARCELID_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Data::Excel::ProductSelectionGroupExcel* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::MX::Data::Excel::ProductSelectionGroupExcel*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + PRODUCTSELECTEDITEMINFO_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Int64 get_ProductSelectionGroupComponentId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + PRODUCTSELECTEDITEMINFO_GET_PRODUCTSELECTIONGROUPCOMPONENTID_OFFSET))(nullptr);
		}

	};

