#pragma once
#include "../../../unitysdk.h"

namespace MX::Core::Math { class IPseudoRandomService; }
namespace MX::GameLogic::Parcel { class ParcelInfo; }
namespace MX::Data::Excel { class ShopRecruitExcel; }
namespace MX::Data { class EventContentFortuneGachaShopInfo; }
namespace FlatData { class ParcelType; }
namespace FlatData { class GachaTicketType; }
namespace MX::GameLogic::Parcel { class ParcelResultDB; }
namespace MX::Data { class ManagementBannerData; }
namespace MX::Data { class ShopData; }

#define MX_GAMELOGIC_SERVICE_GACHASERVICE_GET_SHOPRECRUITS_OFFSET UNITYSDK_OFFSET(0xFAB730)
#define MX_GAMELOGIC_SERVICE_GACHASERVICE_SET_SHOPRECRUITS_OFFSET UNITYSDK_OFFSET(0xFAB780)
#define MX_GAMELOGIC_SERVICE_GACHASERVICE_GET_SHOPFREERECRUITHISTORYDBS_OFFSET UNITYSDK_OFFSET(0xFAB7F0)
#define MX_GAMELOGIC_SERVICE_GACHASERVICE_SET_SHOPFREERECRUITHISTORYDBS_OFFSET UNITYSDK_OFFSET(0xFAB840)
#define MX_GAMELOGIC_SERVICE_GACHASERVICE_GET_SHOPFREERECRUITHISTORYDBS_OFFSET UNITYSDK_OFFSET(0xFAB8B0)
#define MX_GAMELOGIC_SERVICE_GACHASERVICE_SET_SHOPFREERECRUITHISTORYDBS_OFFSET UNITYSDK_OFFSET(0xFAB960)
#define MX_GAMELOGIC_SERVICE_GACHASERVICE_GET_ACCOUNTLIMITEDGACHADBS_OFFSET UNITYSDK_OFFSET(0xFABA30)
#define MX_GAMELOGIC_SERVICE_GACHASERVICE_SET_ACCOUNTLIMITEDGACHADBS_OFFSET UNITYSDK_OFFSET(0xFABA80)
#define MX_GAMELOGIC_SERVICE_GACHASERVICE_PICKONE_OFFSET UNITYSDK_OFFSET(0xFABAF0)
#define MX_GAMELOGIC_SERVICE_GACHASERVICE_PICKONE_OFFSET UNITYSDK_OFFSET(0xFABE50)
#define MX_GAMELOGIC_SERVICE_GACHASERVICE_PICKONEWITHOUTDUPLICATION_OFFSET UNITYSDK_OFFSET(0xFAC3D0)
#define MX_GAMELOGIC_SERVICE_GACHASERVICE_PICKWITHOUTDUPLICATION_OFFSET UNITYSDK_OFFSET(0xFAC9A0)
#define MX_GAMELOGIC_SERVICE_GACHASERVICE_PICKWITHOUTDUPLICATION_OFFSET UNITYSDK_OFFSET(0xFAC480)
#define MX_GAMELOGIC_SERVICE_GACHASERVICE_PICKWITHDUPLICATION_OFFSET UNITYSDK_OFFSET(0xFACA00)
#define MX_GAMELOGIC_SERVICE_GACHASERVICE_PICKWITHDUPLICATION_OFFSET UNITYSDK_OFFSET(0xFACB60)
#define MX_GAMELOGIC_SERVICE_GACHASERVICE_HASELEPEITEMBYDUPLICATIONREWARD_OFFSET UNITYSDK_OFFSET(0xFACCD0)
#define MX_GAMELOGIC_SERVICE_GACHASERVICE_FINDSHOPRECRUITDB_OFFSET UNITYSDK_OFFSET(0xFAD0D0)
#define MX_GAMELOGIC_SERVICE_GACHASERVICE_TRYGETACCOUNTLIMITEDGACHA_OFFSET UNITYSDK_OFFSET(0xFAD240)
#define MX_GAMELOGIC_SERVICE_GACHASERVICE_ISACCOUNTLIMITEDGACHA_OFFSET UNITYSDK_OFFSET(0xFAD3C0)
#define MX_GAMELOGIC_SERVICE_GACHASERVICE_TRYGETACCOUNTLIMITEDGACHABYRECRUITCOINITEMID_OFFSET UNITYSDK_OFFSET(0xFAD400)
#define MX_GAMELOGIC_SERVICE_GACHASERVICE_CALCFREERECRUITREMAINCOUNT_OFFSET UNITYSDK_OFFSET(0xFAD580)
#define MX_GAMELOGIC_SERVICE_GACHASERVICE_GETMODIFIEDFORTUNEGACHAPROB_OFFSET UNITYSDK_OFFSET(0xFAD7E0)
#define MX_GAMELOGIC_SERVICE_GACHASERVICE_GETGACHACONSUMEPARCEL_OFFSET UNITYSDK_OFFSET(0xFAD880)
#define MX_GAMELOGIC_SERVICE_GACHASERVICE_TRYGETAVAILABLEGACHATICKETIDS_OFFSET UNITYSDK_OFFSET(0xFADB50)
#define MX_GAMELOGIC_SERVICE_GACHASERVICE_LOADIMAGE_OFFSET UNITYSDK_OFFSET(0xFADC90)
#define MX_GAMELOGIC_SERVICE_GACHASERVICE_CODOWNLOADIMAGE_OFFSET UNITYSDK_OFFSET(0xFAE030)
#define MX_GAMELOGIC_SERVICE_GACHASERVICE_TRYGETAVAILABLEGACHATICKETSONMYOWN_OFFSET UNITYSDK_OFFSET(0xFAE0F0)
#define MX_GAMELOGIC_SERVICE_GACHASERVICE_HASTHREESTARGACHATICKETINMAIL_OFFSET UNITYSDK_OFFSET(0xFAE7E0)
#define MX_GAMELOGIC_SERVICE_GACHASERVICE_SAVEIMAGE_OFFSET UNITYSDK_OFFSET(0xFAE860)
#define MX_GAMELOGIC_SERVICE_GACHASERVICE_SHOWPARTICULARTHREEGACHATICKETINFOPOPUP_OFFSET UNITYSDK_OFFSET(0xFAEBB0)
#define MX_GAMELOGIC_SERVICE_GACHASERVICE_SHOWPARTICULARTHREEGACHATICKETINFOPOPUP_OFFSET UNITYSDK_OFFSET(0xFAF190)
#define MX_GAMELOGIC_SERVICE_GACHASERVICE_CO_SHOWPARTICULARTHREEGACHATICKETINFOPOPUP_OFFSET UNITYSDK_OFFSET(0xFAF100)
#define MX_GAMELOGIC_SERVICE_GACHASERVICE_GETGETAVAILABLEGACHATICKETAMOUNT_OFFSET UNITYSDK_OFFSET(0xFAFA90)
#define MX_GAMELOGIC_SERVICE_GACHASERVICE_CANSHOWGACHABANNER_OFFSET UNITYSDK_OFFSET(0xFAFC70)
#define MX_GAMELOGIC_SERVICE_GACHASERVICE_.CTOR_OFFSET UNITYSDK_OFFSET(0xFAFE20)
#define MX_GAMELOGIC_SERVICE_GACHASERVICE_.CCTOR_OFFSET UNITYSDK_OFFSET(0xFAFE30)

namespace MX::GameLogic::Service
{
	inline static constexpr unsigned int GachaService_TypeDefinitionIndex = 12355;

	class GachaService : public Il2CppObject
	{
	public:
		Il2CppObject* shopRecruits; // 0x0
		Il2CppObject* _shopFreeRecruitHistoryDBs_k__BackingField; // 0x8
		Il2CppObject* accountLimitedGachaDBs; // 0x10
		::System::String* BannerDirectoryName; // 0x18

		Il2CppObject* get_ShopRecruits()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_GACHASERVICE_GET_SHOPRECRUITS_OFFSET))(nullptr);
		}

		::System::Void set_ShopRecruits(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_GACHASERVICE_SET_SHOPRECRUITS_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_shopFreeRecruitHistoryDBs()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_GACHASERVICE_GET_SHOPFREERECRUITHISTORYDBS_OFFSET))(nullptr);
		}

		::System::Void set_shopFreeRecruitHistoryDBs(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_GACHASERVICE_SET_SHOPFREERECRUITHISTORYDBS_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_ShopFreeRecruitHistoryDBs()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_GACHASERVICE_GET_SHOPFREERECRUITHISTORYDBS_OFFSET))(nullptr);
		}

		::System::Void set_ShopFreeRecruitHistoryDBs(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_GACHASERVICE_SET_SHOPFREERECRUITHISTORYDBS_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_AccountLimitedGachaDBs()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_GACHASERVICE_GET_ACCOUNTLIMITEDGACHADBS_OFFSET))(nullptr);
		}

		::System::Void set_AccountLimitedGachaDBs(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_GACHASERVICE_SET_ACCOUNTLIMITEDGACHADBS_OFFSET))(arg, nullptr);
		}

		::System::Int64 PickOne(Il2CppObject* arg, ::MX::Core::Math::IPseudoRandomService* arg2)
		{
			return ((::System::Int64(*)(Il2CppObject*, ::MX::Core::Math::IPseudoRandomService*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_GACHASERVICE_PICKONE_OFFSET))(arg, arg2, nullptr);
		}

		::MX::GameLogic::Parcel::ParcelInfo* PickOne(Il2CppObject* arg, ::MX::Core::Math::IPseudoRandomService* arg2)
		{
			return ((::MX::GameLogic::Parcel::ParcelInfo*(*)(Il2CppObject*, ::MX::Core::Math::IPseudoRandomService*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_GACHASERVICE_PICKONE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Int64 PickOneWithoutDuplication(Il2CppObject* arg, Il2CppObject* arg2, ::MX::Core::Math::IPseudoRandomService* arg3)
		{
			return ((::System::Int64(*)(Il2CppObject*, Il2CppObject*, ::MX::Core::Math::IPseudoRandomService*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_GACHASERVICE_PICKONEWITHOUTDUPLICATION_OFFSET))(arg, arg2, arg3, nullptr);
		}

		Il2CppObject* PickWithoutDuplication(Il2CppObject* arg, ::System::Int64 arg2, ::MX::Core::Math::IPseudoRandomService* arg3)
		{
			return ((Il2CppObject*(*)(Il2CppObject*, ::System::Int64, ::MX::Core::Math::IPseudoRandomService*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_GACHASERVICE_PICKWITHOUTDUPLICATION_OFFSET))(arg, arg2, arg3, nullptr);
		}

		Il2CppObject* PickWithoutDuplication(Il2CppObject* arg, Il2CppObject* arg2, ::System::Int64 arg3, ::MX::Core::Math::IPseudoRandomService* arg4)
		{
			return ((Il2CppObject*(*)(Il2CppObject*, Il2CppObject*, ::System::Int64, ::MX::Core::Math::IPseudoRandomService*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_GACHASERVICE_PICKWITHOUTDUPLICATION_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		Il2CppObject* PickWithDuplication(Il2CppObject* arg, ::System::Int64 arg2, ::MX::Core::Math::IPseudoRandomService* arg3)
		{
			return ((Il2CppObject*(*)(Il2CppObject*, ::System::Int64, ::MX::Core::Math::IPseudoRandomService*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_GACHASERVICE_PICKWITHDUPLICATION_OFFSET))(arg, arg2, arg3, nullptr);
		}

		Il2CppObject* PickWithDuplication(Il2CppObject* arg, ::System::Int64 arg2, ::MX::Core::Math::IPseudoRandomService* arg3)
		{
			return ((Il2CppObject*(*)(Il2CppObject*, ::System::Int64, ::MX::Core::Math::IPseudoRandomService*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_GACHASERVICE_PICKWITHDUPLICATION_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Boolean HasElepeItemByDuplicationReward(::System::Int64 arg)
		{
			return ((::System::Boolean(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_GACHASERVICE_HASELEPEITEMBYDUPLICATIONREWARD_OFFSET))(arg, nullptr);
		}

		::System::Boolean FindShopRecruitDB(::System::Int64 arg, ::MX::GameLogic::DBModel::ShopRecruitDB&* arg2)
		{
			return ((::System::Boolean(*)(::System::Int64, ::MX::GameLogic::DBModel::ShopRecruitDB&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_GACHASERVICE_FINDSHOPRECRUITDB_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean TryGetAccountLimitedGacha(::System::Int64 arg, ::MX::GameLogic::DBModel::AccountLimitedGachaDB&* arg2)
		{
			return ((::System::Boolean(*)(::System::Int64, ::MX::GameLogic::DBModel::AccountLimitedGachaDB&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_GACHASERVICE_TRYGETACCOUNTLIMITEDGACHA_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean IsAccountLimitedGacha(::MX::Data::Excel::ShopRecruitExcel* arg)
		{
			return ((::System::Boolean(*)(::MX::Data::Excel::ShopRecruitExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_GACHASERVICE_ISACCOUNTLIMITEDGACHA_OFFSET))(arg, nullptr);
		}

		::System::Boolean TryGetAccountLimitedGachaByRecruitCoinItemId(::System::Int64 arg, ::MX::GameLogic::DBModel::AccountLimitedGachaDB&* arg2)
		{
			return ((::System::Boolean(*)(::System::Int64, ::MX::GameLogic::DBModel::AccountLimitedGachaDB&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_GACHASERVICE_TRYGETACCOUNTLIMITEDGACHABYRECRUITCOINITEMID_OFFSET))(arg, arg2, nullptr);
		}

		::System::Int32 CalcFreeRecruitRemainCount(::System::Int64 arg, ::System::DateTime* arg2)
		{
			return ((::System::Int32(*)(::System::Int64, ::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_GACHASERVICE_CALCFREERECRUITREMAINCOUNT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Int64 GetModifiedFortuneGachaProb(::System::Int32 arg, ::System::Int32 arg2, ::MX::Data::EventContentFortuneGachaShopInfo* arg3)
		{
			return ((::System::Int64(*)(::System::Int32, ::System::Int32, ::MX::Data::EventContentFortuneGachaShopInfo*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_GACHASERVICE_GETMODIFIEDFORTUNEGACHAPROB_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::MX::GameLogic::Parcel::ParcelInfo* GetGachaConsumeParcel(::FlatData::ParcelType* arg, ::System::Int64 arg2)
		{
			return ((::MX::GameLogic::Parcel::ParcelInfo*(*)(::FlatData::ParcelType*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_GACHASERVICE_GETGACHACONSUMEPARCEL_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean TryGetAvailableGachaTicketIds(::System::DateTime* arg, ::System::Int64 arg2, Il2CppObject&* arg3)
		{
			return ((::System::Boolean(*)(::System::DateTime*, ::System::Int64, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_GACHASERVICE_TRYGETAVAILABLEGACHATICKETIDS_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Boolean LoadImage(::System::String* str, ::UnityEngine::Texture2D&* arg)
		{
			return ((::System::Boolean(*)(::System::String*, ::UnityEngine::Texture2D&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_GACHASERVICE_LOADIMAGE_OFFSET))(str, arg, nullptr);
		}

		::System::Collections::IEnumerator* CoDownloadImage(::System::String* str, ::System::String* str2, Il2CppObject* arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::String*, ::System::String*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_GACHASERVICE_CODOWNLOADIMAGE_OFFSET))(str, str2, arg, nullptr);
		}

		::System::Boolean TryGetAvailableGachaTicketsOnMyOwn(::System::Int64 arg, Il2CppObject&* arg2)
		{
			return ((::System::Boolean(*)(::System::Int64, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_GACHASERVICE_TRYGETAVAILABLEGACHATICKETSONMYOWN_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean HasThreeStarGachaTicketInMail(::MX::Data::Excel::ShopRecruitExcel* arg)
		{
			return ((::System::Boolean(*)(::MX::Data::Excel::ShopRecruitExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_GACHASERVICE_HASTHREESTARGACHATICKETINMAIL_OFFSET))(arg, nullptr);
		}

		::System::Void SaveImage(::Il2CppArray<::System::Object*>* arg, ::System::String* str, Il2CppObject* arg2)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::String*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_GACHASERVICE_SAVEIMAGE_OFFSET))(arg, str, arg2, nullptr);
		}

		::System::Void ShowParticularThreeGachaTicketInfoPopup(Il2CppObject* arg, ::System::Int64 arg2, ::FlatData::GachaTicketType* arg3)
		{
			((::System::Void(*)(Il2CppObject*, ::System::Int64, ::FlatData::GachaTicketType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_GACHASERVICE_SHOWPARTICULARTHREEGACHATICKETINFOPOPUP_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void ShowParticularThreeGachaTicketInfoPopup(::MX::GameLogic::Parcel::ParcelResultDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::Parcel::ParcelResultDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_GACHASERVICE_SHOWPARTICULARTHREEGACHATICKETINFOPOPUP_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* co_ShowParticularThreeGachaTicketInfoPopup(Il2CppObject* arg, ::System::Int64 arg2, ::FlatData::GachaTicketType* arg3)
		{
			return ((::System::Collections::IEnumerator*(*)(Il2CppObject*, ::System::Int64, ::FlatData::GachaTicketType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_GACHASERVICE_CO_SHOWPARTICULARTHREEGACHATICKETINFOPOPUP_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Int64 GetGetAvailableGachaTicketAmount(::System::Int64 arg)
		{
			return ((::System::Int64(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_GACHASERVICE_GETGETAVAILABLEGACHATICKETAMOUNT_OFFSET))(arg, nullptr);
		}

		::System::Boolean CanShowGachaBanner(::MX::Data::ManagementBannerData* arg, ::MX::Data::ShopData* arg2, ::System::DateTime* arg3)
		{
			return ((::System::Boolean(*)(::MX::Data::ManagementBannerData*, ::MX::Data::ShopData*, ::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_GACHASERVICE_CANSHOWGACHABANNER_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_GACHASERVICE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_GACHASERVICE_.CCTOR_OFFSET))(nullptr);
		}

	};
}

