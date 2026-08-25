#pragma once
#include "unitysdk.h"

namespace MX::Data::Excel { class ShopRecruitExcel; }
namespace MX::GameLogic::Parcel { class ParcelInfo; }
namespace MX::GameLogic::DBModel { class BeforehandGachaSnapshotDB; }
namespace MX::Data { class GachaCombinedCostDataInfo; }
namespace MX::GameLogic::Parcel { class ParcelCost; }

#define GACHAINFOOBJECT_GET_TARGETSHOPRECRUIT_OFFSET UNITYSDK_OFFSET(0x1F9D990)
#define GACHAINFOOBJECT_SET_TARGETSHOPRECRUIT_OFFSET UNITYSDK_OFFSET(0x1F9D9A0)
#define GACHAINFOOBJECT_GET_SELECTEDCHARACTERIDS_OFFSET UNITYSDK_OFFSET(0x1F9DEB0)
#define GACHAINFOOBJECT_SET_SELECTEDCHARACTERIDS_OFFSET UNITYSDK_OFFSET(0x1F9DEC0)
#define GACHAINFOOBJECT_SETPICKUPCHARACTERIDS_OFFSET UNITYSDK_OFFSET(0x1F9D9E0)
#define GACHAINFOOBJECT_ISPICKUPCHARACTER_OFFSET UNITYSDK_OFFSET(0x1F9DED0)
#define GACHAINFOOBJECT_GET_ISCHARACTERSETSELECTED_OFFSET UNITYSDK_OFFSET(0x1F9DFA0)
#define GACHAINFOOBJECT_GET_TARGETGOODSID_OFFSET UNITYSDK_OFFSET(0x1F9DFE0)
#define GACHAINFOOBJECT_SET_TARGETGOODSID_OFFSET UNITYSDK_OFFSET(0x1F9DFF0)
#define GACHAINFOOBJECT_GET_FREERECRUITID_OFFSET UNITYSDK_OFFSET(0x1F9E000)
#define GACHAINFOOBJECT_SET_FREERECRUITID_OFFSET UNITYSDK_OFFSET(0x1F9E010)
#define GACHAINFOOBJECT_GET_ISRECRUIT_OFFSET UNITYSDK_OFFSET(0x1F9E020)
#define GACHAINFOOBJECT_SET_ISRECRUIT_OFFSET UNITYSDK_OFFSET(0x1F9E030)
#define GACHAINFOOBJECT_GET_ISOPENRECRUITSHOP_OFFSET UNITYSDK_OFFSET(0x1F9E040)
#define GACHAINFOOBJECT_SET_ISOPENRECRUITSHOP_OFFSET UNITYSDK_OFFSET(0x1F9E050)
#define GACHAINFOOBJECT_GET_DIRECTPAYTOKEN_OFFSET UNITYSDK_OFFSET(0x1F9E060)
#define GACHAINFOOBJECT_SET_DIRECTPAYTOKEN_OFFSET UNITYSDK_OFFSET(0x1F9E070)
#define GACHAINFOOBJECT_GET_BEFOREHANDGACHASNAPSHOT_OFFSET UNITYSDK_OFFSET(0x1F9E080)
#define GACHAINFOOBJECT_SET_BEFOREHANDGACHASNAPSHOT_OFFSET UNITYSDK_OFFSET(0x1F9E090)
#define GACHAINFOOBJECT_GET_ALREADYPICKED_OFFSET UNITYSDK_OFFSET(0x1F9E0A0)
#define GACHAINFOOBJECT_SET_ALREADYPICKED_OFFSET UNITYSDK_OFFSET(0x1F9E0B0)
#define GACHAINFOOBJECT_GET_BEFOREHANDGACHAREMAINCOUNT_OFFSET UNITYSDK_OFFSET(0x1F9E0C0)
#define GACHAINFOOBJECT_GET_ONETICKETGOODSID_OFFSET UNITYSDK_OFFSET(0x1F9E250)
#define GACHAINFOOBJECT_SET_ONETICKETGOODSID_OFFSET UNITYSDK_OFFSET(0x1F9E260)
#define GACHAINFOOBJECT_GET_ISTENGACHASTART_OFFSET UNITYSDK_OFFSET(0x1F9E270)
#define GACHAINFOOBJECT_SET_ISTENGACHASTART_OFFSET UNITYSDK_OFFSET(0x1F9E280)
#define GACHAINFOOBJECT_GET_ISONETICKETTENUSEGACHACHANGE_OFFSET UNITYSDK_OFFSET(0x1F9E290)
#define GACHAINFOOBJECT_SET_ISONETICKETTENUSEGACHACHANGE_OFFSET UNITYSDK_OFFSET(0x1F9E2A0)
#define GACHAINFOOBJECT_GET_GACHACOMBINEDCOSTDATA_OFFSET UNITYSDK_OFFSET(0x1F9E2B0)
#define GACHAINFOOBJECT_SET_GACHACOMBINEDCOSTDATA_OFFSET UNITYSDK_OFFSET(0x1F9E2C0)
#define GACHAINFOOBJECT_GET_HASBEFOREHANDGACHASNAPSHOT_OFFSET UNITYSDK_OFFSET(0x1F9E2E0)
#define GACHAINFOOBJECT_SYNC_OFFSET UNITYSDK_OFFSET(0x1F9E300)
#define GACHAINFOOBJECT_GETREMAINCOUNT_OFFSET UNITYSDK_OFFSET(0x1F9E0D0)
#define GACHAINFOOBJECT_GETGACHACOST_OFFSET UNITYSDK_OFFSET(0x1F9E330)
#define GACHAINFOOBJECT_FILTERPICKUPLISTFORSELECTEDCHARACTER_OFFSET UNITYSDK_OFFSET(0x1F9E700)
#define GACHAINFOOBJECT_FILTERPICKUPLISTFORSELECTEDCHARACTER_OFFSET UNITYSDK_OFFSET(0x1F9E800)
#define GACHAINFOOBJECT_ISMIXUSEDGEM_OFFSET UNITYSDK_OFFSET(0x1F9E8E0)
#define GACHAINFOOBJECT_TRYGETONETENANDGEMUSEGACHACOST_OFFSET UNITYSDK_OFFSET(0x1F9E550)
#define GACHAINFOOBJECT_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F9EAB0)

	inline static constexpr unsigned int GachaInfoObject_TypeDefinitionIndex = 2801;

	class GachaInfoObject : public Il2CppObject
	{
	public:
		::MX::Data::Excel::ShopRecruitExcel* targetShopRecruit; // 0x10
		Il2CppObject* _SelectedCharacterIds_k__BackingField; // 0x20
		Il2CppObject* pickupCharacterIds; // 0x28
		Il2CppObject* recruitSelectionShopCharacrterIds; // 0x30
		::System::Int64 _TargetGoodsId_k__BackingField; // 0x38
		Il2CppObject* _FreeRecruitId_k__BackingField; // 0x40
		::System::Boolean _IsRecruit_k__BackingField; // 0x50
		::System::Boolean _IsOpenRecruitShop_k__BackingField; // 0x51
		Il2CppObject* OneGachaAvailableParcels; // 0x58
		Il2CppObject* TenGachaAvailableParcels; // 0x60
		::MX::GameLogic::Parcel::ParcelInfo* _DirectPayToken_k__BackingField; // 0x68
		::MX::GameLogic::DBModel::BeforehandGachaSnapshotDB* _BeforehandGachaSnapshot_k__BackingField; // 0x70
		::System::Boolean _AlreadyPicked_k__BackingField; // 0x78
		::System::Int64 _OneTicketGoodsId_k__BackingField; // 0x80
		::System::Boolean _IsTenGachaStart_k__BackingField; // 0x88
		::System::Boolean _IsOneTicketTenUseGachaChange_k__BackingField; // 0x89
		::MX::Data::GachaCombinedCostDataInfo* _GachaCombinedCostData_k__BackingField; // 0x90

		::MX::Data::Excel::ShopRecruitExcel* get_TargetShopRecruit()
		{
			return ((::MX::Data::Excel::ShopRecruitExcel*(*)(::PVOID))((::PBYTE)hIl2Cpp + GACHAINFOOBJECT_GET_TARGETSHOPRECRUIT_OFFSET))(nullptr);
		}

		::System::Void set_TargetShopRecruit(::MX::Data::Excel::ShopRecruitExcel* arg)
		{
			((::System::Void(*)(::MX::Data::Excel::ShopRecruitExcel*, ::PVOID))((::PBYTE)hIl2Cpp + GACHAINFOOBJECT_SET_TARGETSHOPRECRUIT_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_SelectedCharacterIds()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + GACHAINFOOBJECT_GET_SELECTEDCHARACTERIDS_OFFSET))(nullptr);
		}

		::System::Void set_SelectedCharacterIds(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + GACHAINFOOBJECT_SET_SELECTEDCHARACTERIDS_OFFSET))(arg, nullptr);
		}

		::System::Void SetPickupCharacterIds()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GACHAINFOOBJECT_SETPICKUPCHARACTERIDS_OFFSET))(nullptr);
		}

		::System::Boolean IsPickupCharacter(::System::Int64 arg, ::System::Boolean arg2)
		{
			return ((::System::Boolean(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + GACHAINFOOBJECT_ISPICKUPCHARACTER_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean get_IsCharacterSetSelected()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GACHAINFOOBJECT_GET_ISCHARACTERSETSELECTED_OFFSET))(nullptr);
		}

		::System::Int64 get_TargetGoodsId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + GACHAINFOOBJECT_GET_TARGETGOODSID_OFFSET))(nullptr);
		}

		::System::Void set_TargetGoodsId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + GACHAINFOOBJECT_SET_TARGETGOODSID_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_FreeRecruitId()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + GACHAINFOOBJECT_GET_FREERECRUITID_OFFSET))(nullptr);
		}

		::System::Void set_FreeRecruitId(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + GACHAINFOOBJECT_SET_FREERECRUITID_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsRecruit()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GACHAINFOOBJECT_GET_ISRECRUIT_OFFSET))(nullptr);
		}

		::System::Void set_IsRecruit(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + GACHAINFOOBJECT_SET_ISRECRUIT_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsOpenRecruitShop()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GACHAINFOOBJECT_GET_ISOPENRECRUITSHOP_OFFSET))(nullptr);
		}

		::System::Void set_IsOpenRecruitShop(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + GACHAINFOOBJECT_SET_ISOPENRECRUITSHOP_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::Parcel::ParcelInfo* get_DirectPayToken()
		{
			return ((::MX::GameLogic::Parcel::ParcelInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + GACHAINFOOBJECT_GET_DIRECTPAYTOKEN_OFFSET))(nullptr);
		}

		::System::Void set_DirectPayToken(::MX::GameLogic::Parcel::ParcelInfo* arg)
		{
			((::System::Void(*)(::MX::GameLogic::Parcel::ParcelInfo*, ::PVOID))((::PBYTE)hIl2Cpp + GACHAINFOOBJECT_SET_DIRECTPAYTOKEN_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::DBModel::BeforehandGachaSnapshotDB* get_BeforehandGachaSnapshot()
		{
			return ((::MX::GameLogic::DBModel::BeforehandGachaSnapshotDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + GACHAINFOOBJECT_GET_BEFOREHANDGACHASNAPSHOT_OFFSET))(nullptr);
		}

		::System::Void set_BeforehandGachaSnapshot(::MX::GameLogic::DBModel::BeforehandGachaSnapshotDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::BeforehandGachaSnapshotDB*, ::PVOID))((::PBYTE)hIl2Cpp + GACHAINFOOBJECT_SET_BEFOREHANDGACHASNAPSHOT_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_AlreadyPicked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GACHAINFOOBJECT_GET_ALREADYPICKED_OFFSET))(nullptr);
		}

		::System::Void set_AlreadyPicked(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + GACHAINFOOBJECT_SET_ALREADYPICKED_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_BeforehandGachaRemainCount()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + GACHAINFOOBJECT_GET_BEFOREHANDGACHAREMAINCOUNT_OFFSET))(nullptr);
		}

		::System::Int64 get_OneTicketGoodsId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + GACHAINFOOBJECT_GET_ONETICKETGOODSID_OFFSET))(nullptr);
		}

		::System::Void set_OneTicketGoodsId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + GACHAINFOOBJECT_SET_ONETICKETGOODSID_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsTenGachaStart()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GACHAINFOOBJECT_GET_ISTENGACHASTART_OFFSET))(nullptr);
		}

		::System::Void set_IsTenGachaStart(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + GACHAINFOOBJECT_SET_ISTENGACHASTART_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsOneTicketTenUseGachaChange()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GACHAINFOOBJECT_GET_ISONETICKETTENUSEGACHACHANGE_OFFSET))(nullptr);
		}

		::System::Void set_IsOneTicketTenUseGachaChange(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + GACHAINFOOBJECT_SET_ISONETICKETTENUSEGACHACHANGE_OFFSET))(arg, nullptr);
		}

		::MX::Data::GachaCombinedCostDataInfo* get_GachaCombinedCostData()
		{
			return ((::MX::Data::GachaCombinedCostDataInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + GACHAINFOOBJECT_GET_GACHACOMBINEDCOSTDATA_OFFSET))(nullptr);
		}

		::System::Void set_GachaCombinedCostData(::MX::Data::GachaCombinedCostDataInfo* arg)
		{
			((::System::Void(*)(::MX::Data::GachaCombinedCostDataInfo*, ::PVOID))((::PBYTE)hIl2Cpp + GACHAINFOOBJECT_SET_GACHACOMBINEDCOSTDATA_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_HasBeforehandGachaSnapshot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GACHAINFOOBJECT_GET_HASBEFOREHANDGACHASNAPSHOT_OFFSET))(nullptr);
		}

		::System::Void Sync(::MX::GameLogic::DBModel::BeforehandGachaSnapshotDB* arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::BeforehandGachaSnapshotDB*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + GACHAINFOOBJECT_SYNC_OFFSET))(arg, arg2, nullptr);
		}

		::System::Int64 GetRemainCount()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + GACHAINFOOBJECT_GETREMAINCOUNT_OFFSET))(nullptr);
		}

		::MX::GameLogic::Parcel::ParcelCost* GetGachaCost()
		{
			return ((::MX::GameLogic::Parcel::ParcelCost*(*)(::PVOID))((::PBYTE)hIl2Cpp + GACHAINFOOBJECT_GETGACHACOST_OFFSET))(nullptr);
		}

		::System::Void FilterPickupListForSelectedCharacter(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + GACHAINFOOBJECT_FILTERPICKUPLISTFORSELECTEDCHARACTER_OFFSET))(arg, nullptr);
		}

		::System::Void FilterPickupListForSelectedCharacter(Il2CppObject* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + GACHAINFOOBJECT_FILTERPICKUPLISTFORSELECTEDCHARACTER_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean IsMixUsedGem(::System::Int64 arg, GachaCombinedCostElement&* arg2)
		{
			return ((::System::Boolean(*)(::System::Int64, GachaCombinedCostElement&*, ::PVOID))((::PBYTE)hIl2Cpp + GACHAINFOOBJECT_ISMIXUSEDGEM_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean TryGetOneTenAndGemUseGachaCost(Il2CppObject* arg, ::MX::GameLogic::Parcel::ParcelCost&* arg2)
		{
			return ((::System::Boolean(*)(Il2CppObject*, ::MX::GameLogic::Parcel::ParcelCost&*, ::PVOID))((::PBYTE)hIl2Cpp + GACHAINFOOBJECT_TRYGETONETENANDGEMUSEGACHACOST_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GACHAINFOOBJECT_.CTOR_OFFSET))(nullptr);
		}

	};

