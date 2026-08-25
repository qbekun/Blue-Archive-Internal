#pragma once
#include "../../unitysdk.h"

namespace FlatData { class ParcelType; }
namespace MX::GameLogic::DBModel { class IConsumableItemBaseExcel&; }
namespace MX::GameLogic::Parcel { class ParcelKeyPair; }
namespace MX::Data::Excel { class ItemExcel; }
namespace MX::Data::Excel { class ItemExcel&; }
namespace MX::GameLogic::Parcel { class ParcelInfo&; }
namespace FlatData { class ItemCategory; }
namespace FlatData { class Tag; }
namespace FlatData { class GachaTicketType; }
namespace MX::Data { class AutoSynthInfo&; }

#define MX_DATA_ITEMDATA_GET_AUTOSYNTHINFOS_OFFSET UNITYSDK_OFFSET(0x18E3780)
#define MX_DATA_ITEMDATA_GET_POSSESSIONCHECKITEMS_OFFSET UNITYSDK_OFFSET(0x18E3790)
#define MX_DATA_ITEMDATA_INITIALIZECOMMON_OFFSET UNITYSDK_OFFSET(0x18E38D0)
#define MX_DATA_ITEMDATA_PREPAREINITIALDATA_OFFSET UNITYSDK_OFFSET(0x18E39A0)
#define MX_DATA_ITEMDATA_PREPROCESSCOMMON_OFFSET UNITYSDK_OFFSET(0x18E4AE0)
#define MX_DATA_ITEMDATA_TRYGETCONSUMABLEITEMBASEEXCEL_OFFSET UNITYSDK_OFFSET(0x18E57F0)
#define MX_DATA_ITEMDATA_TRYGETCONSUMABLEITEMBASEEXCEL_OFFSET UNITYSDK_OFFSET(0x18E5880)
#define MX_DATA_ITEMDATA_GETDATA_OFFSET UNITYSDK_OFFSET(0x18D5040)
#define MX_DATA_ITEMDATA_TRYGETVALUE_OFFSET UNITYSDK_OFFSET(0x18D4F50)
#define MX_DATA_ITEMDATA_TRYGETUSINGRESULT_OFFSET UNITYSDK_OFFSET(0x18E58E0)
#define MX_DATA_ITEMDATA_TRYGETDUPLICATEBONUS_OFFSET UNITYSDK_OFFSET(0x18E5940)
#define MX_DATA_ITEMDATA_GETDUPLICATEBONUSINFOS_OFFSET UNITYSDK_OFFSET(0x18E5A60)
#define MX_DATA_ITEMDATA_TRYGETEXPIRYCHANGEPARCELINFO_OFFSET UNITYSDK_OFFSET(0x18E5A70)
#define MX_DATA_ITEMDATA_GETCATEGORYLIST_OFFSET UNITYSDK_OFFSET(0x18E5AD0)
#define MX_DATA_ITEMDATA_GETITEMIDLISTFROMTAG_OFFSET UNITYSDK_OFFSET(0x18E5CD0)
#define MX_DATA_ITEMDATA_GET_IDS_OFFSET UNITYSDK_OFFSET(0x18E5EB0)
#define MX_DATA_ITEMDATA_HASDATA_OFFSET UNITYSDK_OFFSET(0x18E5F00)
#define MX_DATA_ITEMDATA_ISIMMEDIATEUSE_OFFSET UNITYSDK_OFFSET(0x18E5F50)
#define MX_DATA_ITEMDATA_ISITEMCATEGORY_OFFSET UNITYSDK_OFFSET(0x18E5FC0)
#define MX_DATA_ITEMDATA_GETCANUSEITEMDATAINFOS_OFFSET UNITYSDK_OFFSET(0x18E6040)
#define MX_DATA_ITEMDATA_TRYGETTICKETGACHAITEMIDS_OFFSET UNITYSDK_OFFSET(0x18E6160)
#define MX_DATA_ITEMDATA_TRYGETTAGS_OFFSET UNITYSDK_OFFSET(0x18E63A0)
#define MX_DATA_ITEMDATA_HASTAG_OFFSET UNITYSDK_OFFSET(0x18E6400)
#define MX_DATA_ITEMDATA_SPLITFAVORITEMIDSBYTAGCOUNT_OFFSET UNITYSDK_OFFSET(0x18E64C0)
#define MX_DATA_ITEMDATA_GET_FRENAPATESCARDFRAGMENTITEMID_OFFSET UNITYSDK_OFFSET(0x18E6C30)
#define MX_DATA_ITEMDATA_TRYGETAVAILABLEGACHATICKETS_OFFSET UNITYSDK_OFFSET(0x18E6CA0)
#define MX_DATA_ITEMDATA_GETPARCELTOOLTIPDATA_OFFSET UNITYSDK_OFFSET(0x18E7610)
#define MX_DATA_ITEMDATA_TRYGETAUTOSYNTHINFO_OFFSET UNITYSDK_OFFSET(0x18E79F0)
#define MX_DATA_ITEMDATA_ISPERMANENTTICKET_OFFSET UNITYSDK_OFFSET(0x18E7B00)
#define MX_DATA_ITEMDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x18E7CB0)

namespace MX::Data
{
	inline static constexpr unsigned int ItemData_TypeDefinitionIndex = 16163;

	class ItemData : public Il2CppObject
	{
	public:
		Il2CppObject* dic; // 0x28
		Il2CppObject* usingResultTable; // 0x30
		Il2CppObject* duplicateBonus; // 0x38
		Il2CppObject* expiryChangeTable; // 0x40
		Il2CppObject* tagTables; // 0x48
		Il2CppObject* favorItemTagTables; // 0x50
		Il2CppObject* canUseItemDataInfoDic; // 0x58
		Il2CppObject* consumableItemBaseExcelDic; // 0x60
		Il2CppObject* autoSynthInfos; // 0x68
		::System::Int64 _frenaPatesCardFragmentItemId; // 0x70

		Il2CppObject* get_AutoSynthInfos()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ITEMDATA_GET_AUTOSYNTHINFOS_OFFSET))(nullptr);
		}

		Il2CppObject* get_PossessionCheckItems()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ITEMDATA_GET_POSSESSIONCHECKITEMS_OFFSET))(nullptr);
		}

		::System::Void InitializeCommon()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ITEMDATA_INITIALIZECOMMON_OFFSET))(nullptr);
		}

		::System::Void PrepareInitialData()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ITEMDATA_PREPAREINITIALDATA_OFFSET))(nullptr);
		}

		::System::Void PreprocessCommon()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ITEMDATA_PREPROCESSCOMMON_OFFSET))(nullptr);
		}

		::System::Boolean TryGetConsumableItemBaseExcel(::FlatData::ParcelType* arg, ::System::Int64 arg, ::MX::GameLogic::DBModel::IConsumableItemBaseExcel&* arg)
		{
			return (return (::System::Boolean(*)(::FlatData::ParcelType*, ::System::Int64, ::MX::GameLogic::DBModel::IConsumableItemBaseExcel&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ITEMDATA_TRYGETCONSUMABLEITEMBASEEXCEL_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean TryGetConsumableItemBaseExcel(::MX::GameLogic::Parcel::ParcelKeyPair* arg, ::MX::GameLogic::DBModel::IConsumableItemBaseExcel&* arg)
		{
			return (return (::System::Boolean(*)(::MX::GameLogic::Parcel::ParcelKeyPair*, ::MX::GameLogic::DBModel::IConsumableItemBaseExcel&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ITEMDATA_TRYGETCONSUMABLEITEMBASEEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::ItemExcel* GetData(::System::Int64 arg)
		{
			return (return (::MX::Data::Excel::ItemExcel*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ITEMDATA_GETDATA_OFFSET))(arg, nullptr);
		}

		::System::Boolean TryGetValue(::System::Int64 arg, ::MX::Data::Excel::ItemExcel&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::MX::Data::Excel::ItemExcel&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ITEMDATA_TRYGETVALUE_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean TryGetUsingResult(::System::Int64 arg, ::MX::GameLogic::Parcel::ParcelInfo&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::MX::GameLogic::Parcel::ParcelInfo&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ITEMDATA_TRYGETUSINGRESULT_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean TryGetDuplicateBonus(::System::Int64 arg, ::System::Int64 arg, ::MX::GameLogic::Parcel::ParcelInfo&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::System::Int64, ::MX::GameLogic::Parcel::ParcelInfo&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ITEMDATA_TRYGETDUPLICATEBONUS_OFFSET))(arg, arg, arg, nullptr);
		}

		Il2CppObject* GetDuplicateBonusInfos()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ITEMDATA_GETDUPLICATEBONUSINFOS_OFFSET))(nullptr);
		}

		::System::Boolean TryGetExpiryChangeParcelInfo(::System::Int64 arg, ::MX::GameLogic::Parcel::ParcelInfo&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::MX::GameLogic::Parcel::ParcelInfo&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ITEMDATA_TRYGETEXPIRYCHANGEPARCELINFO_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* GetCategoryList(::FlatData::ItemCategory* arg)
		{
			return (return (Il2CppObject*(*)(::FlatData::ItemCategory*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ITEMDATA_GETCATEGORYLIST_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetItemIdListFromTag(::FlatData::Tag* arg)
		{
			return (return (Il2CppObject*(*)(::FlatData::Tag*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ITEMDATA_GETITEMIDLISTFROMTAG_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_Ids()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ITEMDATA_GET_IDS_OFFSET))(nullptr);
		}

		::System::Boolean HasData(::System::Int64 arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ITEMDATA_HASDATA_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsImmediateUse(::System::Int64 arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ITEMDATA_ISIMMEDIATEUSE_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsItemCategory(::System::Int64 arg, ::FlatData::ItemCategory* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::FlatData::ItemCategory*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ITEMDATA_ISITEMCATEGORY_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* GetCanUseItemDataInfos(::FlatData::ParcelType* arg, ::FlatData::ParcelType* arg, ::System::Int64 arg)
		{
			return (return (Il2CppObject*(*)(::FlatData::ParcelType*, ::FlatData::ParcelType*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ITEMDATA_GETCANUSEITEMDATAINFOS_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean TryGetTicketGachaItemIds(::FlatData::GachaTicketType* arg, Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(::FlatData::GachaTicketType*, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ITEMDATA_TRYGETTICKETGACHAITEMIDS_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean TryGetTags(::System::Int64 arg, Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ITEMDATA_TRYGETTAGS_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean HasTag(::System::Int64 arg, ::FlatData::Tag* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::FlatData::Tag*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ITEMDATA_HASTAG_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SplitFavorItemIdsByTagCount(Il2CppObject* arg, ::System::Boolean arg, Il2CppObject&* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::System::Boolean, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ITEMDATA_SPLITFAVORITEMIDSBYTAGCOUNT_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int64 get_FrenaPatesCardFragmentItemId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ITEMDATA_GET_FRENAPATESCARDFRAGMENTITEMID_OFFSET))(nullptr);
		}

		::System::Boolean TryGetAvailableGachaTickets(::System::Int64 arg, ::System::DateTime* arg, ::FlatData::GachaTicketType* arg, Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::System::DateTime*, ::FlatData::GachaTicketType*, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ITEMDATA_TRYGETAVAILABLEGACHATICKETS_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		Il2CppObject* GetParcelTooltipData()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ITEMDATA_GETPARCELTOOLTIPDATA_OFFSET))(nullptr);
		}

		::System::Boolean TryGetAutoSynthInfo(::MX::GameLogic::Parcel::ParcelKeyPair* arg, ::MX::Data::AutoSynthInfo&* arg)
		{
			return (return (::System::Boolean(*)(::MX::GameLogic::Parcel::ParcelKeyPair*, ::MX::Data::AutoSynthInfo&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ITEMDATA_TRYGETAUTOSYNTHINFO_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean IsPermanentTicket(::System::Int64 arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ITEMDATA_ISPERMANENTTICKET_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ITEMDATA_.CTOR_OFFSET))(nullptr);
		}

	};
}

