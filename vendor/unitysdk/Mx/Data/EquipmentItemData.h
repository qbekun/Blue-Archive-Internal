#pragma once
#include "../../unitysdk.h"

namespace MX::Data::Excel { class EquipmentChangePieceExcel&; }
namespace MX::Data::Excel { class EquipmentExcel; }
namespace MX::Data::Excel { class EquipmentStatExcel; }
namespace FlatData { class EquipmentCategory; }
namespace MX::Data::Excel { class EquipmentExcel&; }
namespace FlatData { class Tag; }
namespace MX::Data::Excel { class EquipmentStatExcel&; }

#define MX_DATA_EQUIPMENTITEMDATA_INITIALIZECOMMON_OFFSET UNITYSDK_OFFSET(0x18BAE80)
#define MX_DATA_EQUIPMENTITEMDATA_TRYGETEQUIPMENTCHANGEPIECE_OFFSET UNITYSDK_OFFSET(0x18BC3D0)
#define MX_DATA_EQUIPMENTITEMDATA_GETDATA_OFFSET UNITYSDK_OFFSET(0x18BC430)
#define MX_DATA_EQUIPMENTITEMDATA_GETBASETIERTOENDTIEREXCELS_OFFSET UNITYSDK_OFFSET(0x18BC490)
#define MX_DATA_EQUIPMENTITEMDATA_TRYGETTAGS_OFFSET UNITYSDK_OFFSET(0x18BC7B0)
#define MX_DATA_EQUIPMENTITEMDATA_TRYGETLEVELUPFEEDADDEXP_OFFSET UNITYSDK_OFFSET(0x18BC810)
#define MX_DATA_EQUIPMENTITEMDATA_GETTOTALEXP_OFFSET UNITYSDK_OFFSET(0x18BC8F0)
#define MX_DATA_EQUIPMENTITEMDATA_GETSTATPARCELTOOLTIPDATA_OFFSET UNITYSDK_OFFSET(0x18BC990)
#define MX_DATA_EQUIPMENTITEMDATA_GETEQUIPMENTSTATEXCEL_OFFSET UNITYSDK_OFFSET(0x18BCD40)
#define MX_DATA_EQUIPMENTITEMDATA_GETEQUIPMENTFROMCATEGORY_OFFSET UNITYSDK_OFFSET(0x18BCDA0)
#define MX_DATA_EQUIPMENTITEMDATA_GET_TIERUPEQUIPEMNTIDS_OFFSET UNITYSDK_OFFSET(0x18BCEC0)
#define MX_DATA_EQUIPMENTITEMDATA_TRYGETCHANGEPIECEEXCELBYITEMID_OFFSET UNITYSDK_OFFSET(0x18BCED0)
#define MX_DATA_EQUIPMENTITEMDATA_HASEQUIPMENTDATA_OFFSET UNITYSDK_OFFSET(0x18BC760)
#define MX_DATA_EQUIPMENTITEMDATA_TRYGETEQUIPMENTDATA_OFFSET UNITYSDK_OFFSET(0x18BC700)
#define MX_DATA_EQUIPMENTITEMDATA_HASLEVELEXPDATA_OFFSET UNITYSDK_OFFSET(0x18BD0C0)
#define MX_DATA_EQUIPMENTITEMDATA_PREPAREINITIALDATA_OFFSET UNITYSDK_OFFSET(0x18BAF90)
#define MX_DATA_EQUIPMENTITEMDATA_GETREQUIREDEXPTOLEVELUP_OFFSET UNITYSDK_OFFSET(0x18BD0D0)
#define MX_DATA_EQUIPMENTITEMDATA_GETEQUIPMENTIDLISTFROMTAG_OFFSET UNITYSDK_OFFSET(0x18BD1B0)
#define MX_DATA_EQUIPMENTITEMDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x18BD460)
#define MX_DATA_EQUIPMENTITEMDATA_GETPARCELTOOLTIPDATA_OFFSET UNITYSDK_OFFSET(0x18BD670)
#define MX_DATA_EQUIPMENTITEMDATA_TRYGETBASETIEREQUIPMENTFROMCATEGORY_OFFSET UNITYSDK_OFFSET(0x18BDA50)
#define MX_DATA_EQUIPMENTITEMDATA_GET_EQUIPMENTEXCELS_OFFSET UNITYSDK_OFFSET(0x18BDBF0)
#define MX_DATA_EQUIPMENTITEMDATA_GETEQUIPMENTUNIQUEIDBYCATEGORYANDTIER_OFFSET UNITYSDK_OFFSET(0x18BDC40)
#define MX_DATA_EQUIPMENTITEMDATA_GETMAXTOTOTALEXP_OFFSET UNITYSDK_OFFSET(0x18BDD80)
#define MX_DATA_EQUIPMENTITEMDATA_TRYGETPREVIOUSTIEREQUIPMENTDATA_OFFSET UNITYSDK_OFFSET(0x18BDE10)
#define MX_DATA_EQUIPMENTITEMDATA_TRYGETEQUIPMENTSTATEXCEL_OFFSET UNITYSDK_OFFSET(0x18BC890)
#define MX_DATA_EQUIPMENTITEMDATA_GETEQUIPMENTDATA_OFFSET UNITYSDK_OFFSET(0x18BDF50)
#define MX_DATA_EQUIPMENTITEMDATA_GETEQUIPMENTEXCELENUMERATOR_OFFSET UNITYSDK_OFFSET(0x18BDFB0)
#define MX_DATA_EQUIPMENTITEMDATA_TRYGETMAXLEVEL_OFFSET UNITYSDK_OFFSET(0x18BE040)
#define MX_DATA_EQUIPMENTITEMDATA_GET_IDS_OFFSET UNITYSDK_OFFSET(0x18BE0D0)

namespace MX::Data
{
	inline static constexpr unsigned int EquipmentItemData_TypeDefinitionIndex = 16065;

	class EquipmentItemData : public Il2CppObject
	{
	public:
		Il2CppObject* equipmentTable; // 0x28
		Il2CppObject* equipmentStatTable; // 0x30
		Il2CppObject* equipmentLevelTable; // 0x38
		Il2CppObject* tagTables; // 0x40
		Il2CppObject* tierUpEquipemntIds; // 0x48
		Il2CppObject* equipmentChangePieceTable; // 0x50

		::System::Void InitializeCommon()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EQUIPMENTITEMDATA_INITIALIZECOMMON_OFFSET))(nullptr);
		}

		::System::Boolean TryGetEquipmentChangePiece(::System::Int64 arg, ::MX::Data::Excel::EquipmentChangePieceExcel&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::MX::Data::Excel::EquipmentChangePieceExcel&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EQUIPMENTITEMDATA_TRYGETEQUIPMENTCHANGEPIECE_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::EquipmentExcel* GetData(::System::Int64 arg)
		{
			return (return (::MX::Data::Excel::EquipmentExcel*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EQUIPMENTITEMDATA_GETDATA_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetBaseTierToEndTierExcels(::System::Int64 arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EQUIPMENTITEMDATA_GETBASETIERTOENDTIEREXCELS_OFFSET))(arg, nullptr);
		}

		::System::Boolean TryGetTags(::System::Int64 arg, Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EQUIPMENTITEMDATA_TRYGETTAGS_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean TryGetLevelUpFeedAddExp(::System::Int64 arg, int64_t&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, int64_t&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EQUIPMENTITEMDATA_TRYGETLEVELUPFEEDADDEXP_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 GetTotalExp(::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int64(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EQUIPMENTITEMDATA_GETTOTALEXP_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* GetStatParcelTooltipData()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EQUIPMENTITEMDATA_GETSTATPARCELTOOLTIPDATA_OFFSET))(nullptr);
		}

		::MX::Data::Excel::EquipmentStatExcel* GetEquipmentStatExcel(::System::Int64 arg)
		{
			return (return (::MX::Data::Excel::EquipmentStatExcel*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EQUIPMENTITEMDATA_GETEQUIPMENTSTATEXCEL_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetEquipmentFromCategory(::FlatData::EquipmentCategory* arg)
		{
			return (return (Il2CppObject*(*)(::FlatData::EquipmentCategory*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EQUIPMENTITEMDATA_GETEQUIPMENTFROMCATEGORY_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_TierUpEquipemntIds()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EQUIPMENTITEMDATA_GET_TIERUPEQUIPEMNTIDS_OFFSET))(nullptr);
		}

		::System::Boolean TryGetChangePieceExcelByItemId(::System::Int64 arg, ::MX::Data::Excel::EquipmentChangePieceExcel&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::MX::Data::Excel::EquipmentChangePieceExcel&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EQUIPMENTITEMDATA_TRYGETCHANGEPIECEEXCELBYITEMID_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean HasEquipmentData(::System::Int64 arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EQUIPMENTITEMDATA_HASEQUIPMENTDATA_OFFSET))(arg, nullptr);
		}

		::System::Boolean TryGetEquipmentData(::System::Int64 arg, ::MX::Data::Excel::EquipmentExcel&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::MX::Data::Excel::EquipmentExcel&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EQUIPMENTITEMDATA_TRYGETEQUIPMENTDATA_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean HasLevelExpData(::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EQUIPMENTITEMDATA_HASLEVELEXPDATA_OFFSET))(arg, nullptr);
		}

		::System::Void PrepareInitialData()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EQUIPMENTITEMDATA_PREPAREINITIALDATA_OFFSET))(nullptr);
		}

		::System::Int64 GetRequiredExpToLevelUp(::System::Int64 arg, ::System::Int32 arg)
		{
			return (return (::System::Int64(*)(::System::Int64, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EQUIPMENTITEMDATA_GETREQUIREDEXPTOLEVELUP_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* GetEquipmentIdListFromTag(::FlatData::Tag* arg)
		{
			return (return (Il2CppObject*(*)(::FlatData::Tag*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EQUIPMENTITEMDATA_GETEQUIPMENTIDLISTFROMTAG_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EQUIPMENTITEMDATA_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* GetParcelTooltipData()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EQUIPMENTITEMDATA_GETPARCELTOOLTIPDATA_OFFSET))(nullptr);
		}

		::System::Boolean TryGetBaseTierEquipmentFromCategory(::FlatData::EquipmentCategory* arg, ::MX::Data::Excel::EquipmentExcel&* arg)
		{
			return (return (::System::Boolean(*)(::FlatData::EquipmentCategory*, ::MX::Data::Excel::EquipmentExcel&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EQUIPMENTITEMDATA_TRYGETBASETIEREQUIPMENTFROMCATEGORY_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* get_EquipmentExcels()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EQUIPMENTITEMDATA_GET_EQUIPMENTEXCELS_OFFSET))(nullptr);
		}

		::System::Int64 GetEquipmentUniqueIdByCategoryAndTier(::FlatData::EquipmentCategory* arg, ::System::Int32 arg)
		{
			return (return (::System::Int64(*)(::FlatData::EquipmentCategory*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EQUIPMENTITEMDATA_GETEQUIPMENTUNIQUEIDBYCATEGORYANDTIER_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 GetMaxToTotalExp(::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int64(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EQUIPMENTITEMDATA_GETMAXTOTOTALEXP_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean TryGetPreviousTierEquipmentData(::System::Int64 arg, ::MX::Data::Excel::EquipmentExcel&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::MX::Data::Excel::EquipmentExcel&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EQUIPMENTITEMDATA_TRYGETPREVIOUSTIEREQUIPMENTDATA_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean TryGetEquipmentStatExcel(::System::Int64 arg, ::MX::Data::Excel::EquipmentStatExcel&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::MX::Data::Excel::EquipmentStatExcel&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EQUIPMENTITEMDATA_TRYGETEQUIPMENTSTATEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::EquipmentExcel* GetEquipmentData(::System::Int64 arg)
		{
			return (return (::MX::Data::Excel::EquipmentExcel*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EQUIPMENTITEMDATA_GETEQUIPMENTDATA_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetEquipmentExcelEnumerator()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EQUIPMENTITEMDATA_GETEQUIPMENTEXCELENUMERATOR_OFFSET))(nullptr);
		}

		::System::Boolean TryGetMaxLevel(::System::Int64 arg, int64_t&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, int64_t&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EQUIPMENTITEMDATA_TRYGETMAXLEVEL_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* get_Ids()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EQUIPMENTITEMDATA_GET_IDS_OFFSET))(nullptr);
		}

	};
}

