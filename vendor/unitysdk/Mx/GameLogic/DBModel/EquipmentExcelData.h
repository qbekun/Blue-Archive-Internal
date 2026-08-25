#pragma once
#include "../../../unitysdk.h"

namespace MX::Data::Excel { class EquipmentExcel; }
namespace FlatData { class ParcelType; }
namespace FlatData { class Rarity; }
namespace FlatData { class CraftNodeTier; }

#define MX_GAMELOGIC_DBMODEL_EQUIPMENTEXCELDATA_GET_TYPE_OFFSET UNITYSDK_OFFSET(0xFF0100)
#define MX_GAMELOGIC_DBMODEL_EQUIPMENTEXCELDATA_GET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0xFF0110)
#define MX_GAMELOGIC_DBMODEL_EQUIPMENTEXCELDATA_GET_SHIFTINGCRAFTQUALITY_OFFSET UNITYSDK_OFFSET(0xFF0130)
#define MX_GAMELOGIC_DBMODEL_EQUIPMENTEXCELDATA_GET_STACKABLEMAX_OFFSET UNITYSDK_OFFSET(0xFF0150)
#define MX_GAMELOGIC_DBMODEL_EQUIPMENTEXCELDATA_GET_RARITY_OFFSET UNITYSDK_OFFSET(0xFF0170)
#define MX_GAMELOGIC_DBMODEL_EQUIPMENTEXCELDATA_GET_TAGS_OFFSET UNITYSDK_OFFSET(0xFF0190)
#define MX_GAMELOGIC_DBMODEL_EQUIPMENTEXCELDATA_SET_TAGS_OFFSET UNITYSDK_OFFSET(0xFF01A0)
#define MX_GAMELOGIC_DBMODEL_EQUIPMENTEXCELDATA_GET_CRAFTQUALITYDICT_OFFSET UNITYSDK_OFFSET(0xFF01B0)
#define MX_GAMELOGIC_DBMODEL_EQUIPMENTEXCELDATA_SET_CRAFTQUALITYDICT_OFFSET UNITYSDK_OFFSET(0xFF01C0)
#define MX_GAMELOGIC_DBMODEL_EQUIPMENTEXCELDATA_GET__EXCEL_OFFSET UNITYSDK_OFFSET(0xFF01D0)
#define MX_GAMELOGIC_DBMODEL_EQUIPMENTEXCELDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0xFF01E0)
#define MX_GAMELOGIC_DBMODEL_EQUIPMENTEXCELDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0xFF01F0)
#define MX_GAMELOGIC_DBMODEL_EQUIPMENTEXCELDATA_TRYGETCRAFTQUALITY_OFFSET UNITYSDK_OFFSET(0xFF0440)

namespace MX::GameLogic::DBModel
{
	inline static constexpr unsigned int EquipmentExcelData_TypeDefinitionIndex = 12552;

	class EquipmentExcelData : public Il2CppObject
	{
	public:
		Il2CppObject* _Tags_k__BackingField; // 0x10
		Il2CppObject* _CraftQualityDict_k__BackingField; // 0x18
		::MX::Data::Excel::EquipmentExcel* __excel_k__BackingField; // 0x20

		::FlatData::ParcelType* get_Type()
		{
			return ((::FlatData::ParcelType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_EQUIPMENTEXCELDATA_GET_TYPE_OFFSET))(nullptr);
		}

		::System::Int64 get_UniqueId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_EQUIPMENTEXCELDATA_GET_UNIQUEID_OFFSET))(nullptr);
		}

		::System::Int64 get_ShiftingCraftQuality()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_EQUIPMENTEXCELDATA_GET_SHIFTINGCRAFTQUALITY_OFFSET))(nullptr);
		}

		::System::Int64 get_StackableMax()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_EQUIPMENTEXCELDATA_GET_STACKABLEMAX_OFFSET))(nullptr);
		}

		::FlatData::Rarity* get_Rarity()
		{
			return ((::FlatData::Rarity*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_EQUIPMENTEXCELDATA_GET_RARITY_OFFSET))(nullptr);
		}

		Il2CppObject* get_Tags()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_EQUIPMENTEXCELDATA_GET_TAGS_OFFSET))(nullptr);
		}

		::System::Void set_Tags(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_EQUIPMENTEXCELDATA_SET_TAGS_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_CraftQualityDict()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_EQUIPMENTEXCELDATA_GET_CRAFTQUALITYDICT_OFFSET))(nullptr);
		}

		::System::Void set_CraftQualityDict(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_EQUIPMENTEXCELDATA_SET_CRAFTQUALITYDICT_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::EquipmentExcel* get__excel()
		{
			return ((::MX::Data::Excel::EquipmentExcel*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_EQUIPMENTEXCELDATA_GET__EXCEL_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_EQUIPMENTEXCELDATA_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Data::Excel::EquipmentExcel* arg)
		{
			((::System::Void(*)(::MX::Data::Excel::EquipmentExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_EQUIPMENTEXCELDATA_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Boolean TryGetCraftQuality(::FlatData::CraftNodeTier* arg, int64_t&* arg2)
		{
			return ((::System::Boolean(*)(::FlatData::CraftNodeTier*, int64_t&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_EQUIPMENTEXCELDATA_TRYGETCRAFTQUALITY_OFFSET))(arg, arg2, nullptr);
		}

	};
}

