#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class ResponsePacket; }
namespace MX::NetworkProtocol { class CafeGetInfoResponse; }
namespace MX::NetworkProtocol { class AccountCurrencySyncResponse; }
namespace MX::NetworkProtocol { class CharacterListResponse; }
namespace MX::NetworkProtocol { class EquipmentItemListResponse; }
namespace MX::NetworkProtocol { class CharacterGearListResponse; }
namespace MX::NetworkProtocol { class ItemListResponse; }
namespace MX::NetworkProtocol { class EchelonListResponse; }
namespace MX::NetworkProtocol { class MemoryLobbyListResponse; }
namespace MX::NetworkProtocol { class CampaignListResponse; }
namespace MX::NetworkProtocol { class ArenaLoginResponse; }
namespace MX::NetworkProtocol { class RaidLoginResponse; }
namespace MX::NetworkProtocol { class EliminateRaidLoginResponse; }
namespace MX::NetworkProtocol { class CraftInfoListResponse; }
namespace MX::NetworkProtocol { class ClanLoginResponse; }
namespace MX::NetworkProtocol { class MomoTalkOutLineResponse; }
namespace MX::NetworkProtocol { class ScenarioListResponse; }
namespace MX::NetworkProtocol { class ShopGachaRecruitListResponse; }
namespace MX::NetworkProtocol { class TimeAttackDungeonLoginResponse; }
namespace MX::NetworkProtocol { class EventContentPermanentListResponse; }
namespace MX::NetworkProtocol { class AttachmentGetResponse; }
namespace MX::NetworkProtocol { class BillingPurchaseListByNexonResponse; }
namespace MX::NetworkProtocol { class AttachmentEmblemListResponse; }
namespace MX::NetworkProtocol { class ContentSweepMultiSweepPresetListResponse; }
namespace MX::NetworkProtocol { class StickerLoginResponse; }
namespace MX::NetworkProtocol { class MultiFloorRaidSyncResponse; }
namespace MX::NetworkProtocol { class MultiFloorRaidLoginResponse; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_ACCOUNTLOGINSYNCRESPONSE_GET_RESPONSES_OFFSET UNITYSDK_OFFSET(0xF0FD60)
#define MX_NETWORKPROTOCOL_ACCOUNTLOGINSYNCRESPONSE_GET_FRIENDCODE_OFFSET UNITYSDK_OFFSET(0xF0FD70)
#define MX_NETWORKPROTOCOL_ACCOUNTLOGINSYNCRESPONSE_SET_CONTENTSWEEPMULTISWEEPPRESETLISTRESPONSE_OFFSET UNITYSDK_OFFSET(0xF0FD80)
#define MX_NETWORKPROTOCOL_ACCOUNTLOGINSYNCRESPONSE_SET_ACCOUNTCURRENCYSYNCRESPONSE_OFFSET UNITYSDK_OFFSET(0xF0FDA0)
#define MX_NETWORKPROTOCOL_ACCOUNTLOGINSYNCRESPONSE_GET_ECHELONLISTRESPONSE_OFFSET UNITYSDK_OFFSET(0xF0FDB0)
#define MX_NETWORKPROTOCOL_ACCOUNTLOGINSYNCRESPONSE_SET_SHOPGACHARECRUITLISTRESPONSE_OFFSET UNITYSDK_OFFSET(0xF0FDC0)
#define MX_NETWORKPROTOCOL_ACCOUNTLOGINSYNCRESPONSE_GET_CLANLOGINRESPONSE_OFFSET UNITYSDK_OFFSET(0xF0FDE0)
#define MX_NETWORKPROTOCOL_ACCOUNTLOGINSYNCRESPONSE_SET_ATTACHMENTGETRESPONSE_OFFSET UNITYSDK_OFFSET(0xF0FDF0)
#define MX_NETWORKPROTOCOL_ACCOUNTLOGINSYNCRESPONSE_GET_SHOPGACHARECRUITLISTRESPONSE_OFFSET UNITYSDK_OFFSET(0xF0FE10)
#define MX_NETWORKPROTOCOL_ACCOUNTLOGINSYNCRESPONSE_GET_ITEMLISTRESPONSE_OFFSET UNITYSDK_OFFSET(0xF0FE20)
#define MX_NETWORKPROTOCOL_ACCOUNTLOGINSYNCRESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF0FE30)
#define MX_NETWORKPROTOCOL_ACCOUNTLOGINSYNCRESPONSE_GET_EVENTCONTENTPERMANENTLISTRESPONSE_OFFSET UNITYSDK_OFFSET(0xF0FE40)
#define MX_NETWORKPROTOCOL_ACCOUNTLOGINSYNCRESPONSE_SET_MULTIFLOORRAIDLOGINRESPONSE_OFFSET UNITYSDK_OFFSET(0xF0FE50)
#define MX_NETWORKPROTOCOL_ACCOUNTLOGINSYNCRESPONSE_SET_MULTIFLOORRAIDSYNCRESPONSE_OFFSET UNITYSDK_OFFSET(0xF0FE70)
#define MX_NETWORKPROTOCOL_ACCOUNTLOGINSYNCRESPONSE_SET_ARENALOGINRESPONSE_OFFSET UNITYSDK_OFFSET(0xF0FE90)
#define MX_NETWORKPROTOCOL_ACCOUNTLOGINSYNCRESPONSE_SET_EVENTCONTENTPERMANENTLISTRESPONSE_OFFSET UNITYSDK_OFFSET(0xF0FEB0)
#define MX_NETWORKPROTOCOL_ACCOUNTLOGINSYNCRESPONSE_SET_ELIMINATERAIDLOGINRESPONSE_OFFSET UNITYSDK_OFFSET(0xF0FED0)
#define MX_NETWORKPROTOCOL_ACCOUNTLOGINSYNCRESPONSE_SET_CLANLOGINRESPONSE_OFFSET UNITYSDK_OFFSET(0xF0FEF0)
#define MX_NETWORKPROTOCOL_ACCOUNTLOGINSYNCRESPONSE_GET_FRIENDCOUNT_OFFSET UNITYSDK_OFFSET(0xF0FF10)
#define MX_NETWORKPROTOCOL_ACCOUNTLOGINSYNCRESPONSE_SET_SCENARIOLISTRESPONSE_OFFSET UNITYSDK_OFFSET(0xF0FF20)
#define MX_NETWORKPROTOCOL_ACCOUNTLOGINSYNCRESPONSE_GET_CAFEGETINFORESPONSE_OFFSET UNITYSDK_OFFSET(0xF0FF40)
#define MX_NETWORKPROTOCOL_ACCOUNTLOGINSYNCRESPONSE_GET_CHARACTERLISTRESPONSE_OFFSET UNITYSDK_OFFSET(0xF0FF50)
#define MX_NETWORKPROTOCOL_ACCOUNTLOGINSYNCRESPONSE_SET_CHARACTERGEARLISTRESPONSE_OFFSET UNITYSDK_OFFSET(0xF0FF60)
#define MX_NETWORKPROTOCOL_ACCOUNTLOGINSYNCRESPONSE_GET_EQUIPMENTITEMLISTRESPONSE_OFFSET UNITYSDK_OFFSET(0xF0FF70)
#define MX_NETWORKPROTOCOL_ACCOUNTLOGINSYNCRESPONSE_SET_CRAFTINFOLISTRESPONSE_OFFSET UNITYSDK_OFFSET(0xF0FF80)
#define MX_NETWORKPROTOCOL_ACCOUNTLOGINSYNCRESPONSE_GET_PICKUPFIRSTGETHISTORYDBS_OFFSET UNITYSDK_OFFSET(0xF0FFA0)
#define MX_NETWORKPROTOCOL_ACCOUNTLOGINSYNCRESPONSE_SET_SNSPOSTDBS_OFFSET UNITYSDK_OFFSET(0xF0FFB0)
#define MX_NETWORKPROTOCOL_ACCOUNTLOGINSYNCRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF0FFD0)
#define MX_NETWORKPROTOCOL_ACCOUNTLOGINSYNCRESPONSE_GET_ATTACHMENTEMBLEMLISTRESPONSE_OFFSET UNITYSDK_OFFSET(0xF0FFE0)
#define MX_NETWORKPROTOCOL_ACCOUNTLOGINSYNCRESPONSE_GET_MULTIFLOORRAIDLOGINRESPONSE_OFFSET UNITYSDK_OFFSET(0xF0FFF0)
#define MX_NETWORKPROTOCOL_ACCOUNTLOGINSYNCRESPONSE_SET_CHARACTERLISTRESPONSE_OFFSET UNITYSDK_OFFSET(0xF10000)
#define MX_NETWORKPROTOCOL_ACCOUNTLOGINSYNCRESPONSE_GET_RAIDLOGINRESPONSE_OFFSET UNITYSDK_OFFSET(0xF10010)
#define MX_NETWORKPROTOCOL_ACCOUNTLOGINSYNCRESPONSE_SET_BILLINGPURCHASELISTBYNEXONRESPONSE_OFFSET UNITYSDK_OFFSET(0xF10020)
#define MX_NETWORKPROTOCOL_ACCOUNTLOGINSYNCRESPONSE_GET_ACCOUNTLEVELREWARDIDS_OFFSET UNITYSDK_OFFSET(0xF10040)
#define MX_NETWORKPROTOCOL_ACCOUNTLOGINSYNCRESPONSE_SET_ITEMLISTRESPONSE_OFFSET UNITYSDK_OFFSET(0xF10050)
#define MX_NETWORKPROTOCOL_ACCOUNTLOGINSYNCRESPONSE_GET_TIMEATTACKDUNGEONLOGINRESPONSE_OFFSET UNITYSDK_OFFSET(0xF10060)
#define MX_NETWORKPROTOCOL_ACCOUNTLOGINSYNCRESPONSE_SET_ECHELONLISTRESPONSE_OFFSET UNITYSDK_OFFSET(0xF10070)
#define MX_NETWORKPROTOCOL_ACCOUNTLOGINSYNCRESPONSE_SET_EQUIPMENTITEMLISTRESPONSE_OFFSET UNITYSDK_OFFSET(0xF10090)
#define MX_NETWORKPROTOCOL_ACCOUNTLOGINSYNCRESPONSE_GET_MULTIFLOORRAIDSYNCRESPONSE_OFFSET UNITYSDK_OFFSET(0xF100A0)
#define MX_NETWORKPROTOCOL_ACCOUNTLOGINSYNCRESPONSE_GET_CRAFTINFOLISTRESPONSE_OFFSET UNITYSDK_OFFSET(0xF100B0)
#define MX_NETWORKPROTOCOL_ACCOUNTLOGINSYNCRESPONSE_SET_FRIENDCOUNT_OFFSET UNITYSDK_OFFSET(0xF100C0)
#define MX_NETWORKPROTOCOL_ACCOUNTLOGINSYNCRESPONSE_SET_RESPONSES_OFFSET UNITYSDK_OFFSET(0xF100D0)
#define MX_NETWORKPROTOCOL_ACCOUNTLOGINSYNCRESPONSE_GET_CAMPAIGNLISTRESPONSE_OFFSET UNITYSDK_OFFSET(0xF100E0)
#define MX_NETWORKPROTOCOL_ACCOUNTLOGINSYNCRESPONSE_SET_CAMPAIGNLISTRESPONSE_OFFSET UNITYSDK_OFFSET(0xF100F0)
#define MX_NETWORKPROTOCOL_ACCOUNTLOGINSYNCRESPONSE_GET_CONTENTSWEEPMULTISWEEPPRESETLISTRESPONSE_OFFSET UNITYSDK_OFFSET(0xF10110)
#define MX_NETWORKPROTOCOL_ACCOUNTLOGINSYNCRESPONSE_SET_MOMOTALKOUTLINERESPONSE_OFFSET UNITYSDK_OFFSET(0xF10120)
#define MX_NETWORKPROTOCOL_ACCOUNTLOGINSYNCRESPONSE_GET_ACCOUNTCURRENCYSYNCRESPONSE_OFFSET UNITYSDK_OFFSET(0xF10140)
#define MX_NETWORKPROTOCOL_ACCOUNTLOGINSYNCRESPONSE_GET_STICKERLISTRESPONSE_OFFSET UNITYSDK_OFFSET(0xF10150)
#define MX_NETWORKPROTOCOL_ACCOUNTLOGINSYNCRESPONSE_GET_ATTACHMENTGETRESPONSE_OFFSET UNITYSDK_OFFSET(0xF10160)
#define MX_NETWORKPROTOCOL_ACCOUNTLOGINSYNCRESPONSE_GET_SNSPOSTDBS_OFFSET UNITYSDK_OFFSET(0xF10170)
#define MX_NETWORKPROTOCOL_ACCOUNTLOGINSYNCRESPONSE_GET_MEMORYLOBBYLISTRESPONSE_OFFSET UNITYSDK_OFFSET(0xF10180)
#define MX_NETWORKPROTOCOL_ACCOUNTLOGINSYNCRESPONSE_SET_FRIENDCODE_OFFSET UNITYSDK_OFFSET(0xF10190)
#define MX_NETWORKPROTOCOL_ACCOUNTLOGINSYNCRESPONSE_GET_SCENARIOLISTRESPONSE_OFFSET UNITYSDK_OFFSET(0xF101B0)
#define MX_NETWORKPROTOCOL_ACCOUNTLOGINSYNCRESPONSE_SET_PICKUPFIRSTGETHISTORYDBS_OFFSET UNITYSDK_OFFSET(0xF101C0)
#define MX_NETWORKPROTOCOL_ACCOUNTLOGINSYNCRESPONSE_GET_ELIMINATERAIDLOGINRESPONSE_OFFSET UNITYSDK_OFFSET(0xF101E0)
#define MX_NETWORKPROTOCOL_ACCOUNTLOGINSYNCRESPONSE_SET_STICKERLISTRESPONSE_OFFSET UNITYSDK_OFFSET(0xF101F0)
#define MX_NETWORKPROTOCOL_ACCOUNTLOGINSYNCRESPONSE_SET_ACCOUNTLEVELREWARDIDS_OFFSET UNITYSDK_OFFSET(0xF10210)
#define MX_NETWORKPROTOCOL_ACCOUNTLOGINSYNCRESPONSE_GET_CHARACTERGEARLISTRESPONSE_OFFSET UNITYSDK_OFFSET(0xF10230)
#define MX_NETWORKPROTOCOL_ACCOUNTLOGINSYNCRESPONSE_SET_MEMORYLOBBYLISTRESPONSE_OFFSET UNITYSDK_OFFSET(0xF10240)
#define MX_NETWORKPROTOCOL_ACCOUNTLOGINSYNCRESPONSE_SET_CAFEGETINFORESPONSE_OFFSET UNITYSDK_OFFSET(0xF10260)
#define MX_NETWORKPROTOCOL_ACCOUNTLOGINSYNCRESPONSE_SET_RAIDLOGINRESPONSE_OFFSET UNITYSDK_OFFSET(0xF10270)
#define MX_NETWORKPROTOCOL_ACCOUNTLOGINSYNCRESPONSE_SET_TIMEATTACKDUNGEONLOGINRESPONSE_OFFSET UNITYSDK_OFFSET(0xF10290)
#define MX_NETWORKPROTOCOL_ACCOUNTLOGINSYNCRESPONSE_GET_BILLINGPURCHASELISTBYNEXONRESPONSE_OFFSET UNITYSDK_OFFSET(0xF102B0)
#define MX_NETWORKPROTOCOL_ACCOUNTLOGINSYNCRESPONSE_GET_MOMOTALKOUTLINERESPONSE_OFFSET UNITYSDK_OFFSET(0xF102C0)
#define MX_NETWORKPROTOCOL_ACCOUNTLOGINSYNCRESPONSE_GET_ARENALOGINRESPONSE_OFFSET UNITYSDK_OFFSET(0xF102D0)
#define MX_NETWORKPROTOCOL_ACCOUNTLOGINSYNCRESPONSE_SET_ATTACHMENTEMBLEMLISTRESPONSE_OFFSET UNITYSDK_OFFSET(0xF102E0)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int AccountLoginSyncResponse_TypeDefinitionIndex = 11262;

	class AccountLoginSyncResponse : public Il2CppObject
	{
	public:
		::MX::NetworkProtocol::ResponsePacket* _Responses_k__BackingField; // 0x50
		::MX::NetworkProtocol::CafeGetInfoResponse* _CafeGetInfoResponse_k__BackingField; // 0x58
		::MX::NetworkProtocol::AccountCurrencySyncResponse* _AccountCurrencySyncResponse_k__BackingField; // 0x60
		::MX::NetworkProtocol::CharacterListResponse* _CharacterListResponse_k__BackingField; // 0x68
		::MX::NetworkProtocol::EquipmentItemListResponse* _EquipmentItemListResponse_k__BackingField; // 0x70
		::MX::NetworkProtocol::CharacterGearListResponse* _CharacterGearListResponse_k__BackingField; // 0x78
		::MX::NetworkProtocol::ItemListResponse* _ItemListResponse_k__BackingField; // 0x80
		::MX::NetworkProtocol::EchelonListResponse* _EchelonListResponse_k__BackingField; // 0x88
		::MX::NetworkProtocol::MemoryLobbyListResponse* _MemoryLobbyListResponse_k__BackingField; // 0x90
		::MX::NetworkProtocol::CampaignListResponse* _CampaignListResponse_k__BackingField; // 0x98
		::MX::NetworkProtocol::ArenaLoginResponse* _ArenaLoginResponse_k__BackingField; // 0xA0
		::MX::NetworkProtocol::RaidLoginResponse* _RaidLoginResponse_k__BackingField; // 0xA8
		::MX::NetworkProtocol::EliminateRaidLoginResponse* _EliminateRaidLoginResponse_k__BackingField; // 0xB0
		::MX::NetworkProtocol::CraftInfoListResponse* _CraftInfoListResponse_k__BackingField; // 0xB8
		::MX::NetworkProtocol::ClanLoginResponse* _ClanLoginResponse_k__BackingField; // 0xC0
		::MX::NetworkProtocol::MomoTalkOutLineResponse* _MomotalkOutlineResponse_k__BackingField; // 0xC8
		::MX::NetworkProtocol::ScenarioListResponse* _ScenarioListResponse_k__BackingField; // 0xD0
		::MX::NetworkProtocol::ShopGachaRecruitListResponse* _ShopGachaRecruitListResponse_k__BackingField; // 0xD8
		::MX::NetworkProtocol::TimeAttackDungeonLoginResponse* _TimeAttackDungeonLoginResponse_k__BackingField; // 0xE0
		::MX::NetworkProtocol::EventContentPermanentListResponse* _EventContentPermanentListResponse_k__BackingField; // 0xE8
		::MX::NetworkProtocol::AttachmentGetResponse* _AttachmentGetResponse_k__BackingField; // 0xF0
		::MX::NetworkProtocol::BillingPurchaseListByNexonResponse* _BillingPurchaseListByNexonResponse_k__BackingField; // 0xF8
		::MX::NetworkProtocol::AttachmentEmblemListResponse* _AttachmentEmblemListResponse_k__BackingField; // 0x100
		::MX::NetworkProtocol::ContentSweepMultiSweepPresetListResponse* _ContentSweepMultiSweepPresetListResponse_k__BackingField; // 0x108
		::MX::NetworkProtocol::StickerLoginResponse* _StickerListResponse_k__BackingField; // 0x110
		::MX::NetworkProtocol::MultiFloorRaidSyncResponse* _MultiFloorRaidSyncResponse_k__BackingField; // 0x118
		::MX::NetworkProtocol::MultiFloorRaidLoginResponse* _MultiFloorRaidLoginResponse_k__BackingField; // 0x120
		::System::Int64 _FriendCount_k__BackingField; // 0x128
		::System::String* _FriendCode_k__BackingField; // 0x130
		Il2CppObject* _PickupFirstGetHistoryDBs_k__BackingField; // 0x138
		Il2CppObject* _AccountLevelRewardIds_k__BackingField; // 0x140
		Il2CppObject* _SNSPostDBs_k__BackingField; // 0x148

		::MX::NetworkProtocol::ResponsePacket* get_Responses()
		{
			return ((::MX::NetworkProtocol::ResponsePacket*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTLOGINSYNCRESPONSE_GET_RESPONSES_OFFSET))(nullptr);
		}

		::System::String* get_FriendCode()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTLOGINSYNCRESPONSE_GET_FRIENDCODE_OFFSET))(nullptr);
		}

		::System::Void set_ContentSweepMultiSweepPresetListResponse(::MX::NetworkProtocol::ContentSweepMultiSweepPresetListResponse* arg)
		{
			((::System::Void(*)(::MX::NetworkProtocol::ContentSweepMultiSweepPresetListResponse*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTLOGINSYNCRESPONSE_SET_CONTENTSWEEPMULTISWEEPPRESETLISTRESPONSE_OFFSET))(arg, nullptr);
		}

		::System::Void set_AccountCurrencySyncResponse(::MX::NetworkProtocol::AccountCurrencySyncResponse* arg)
		{
			((::System::Void(*)(::MX::NetworkProtocol::AccountCurrencySyncResponse*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTLOGINSYNCRESPONSE_SET_ACCOUNTCURRENCYSYNCRESPONSE_OFFSET))(arg, nullptr);
		}

		::MX::NetworkProtocol::EchelonListResponse* get_EchelonListResponse()
		{
			return ((::MX::NetworkProtocol::EchelonListResponse*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTLOGINSYNCRESPONSE_GET_ECHELONLISTRESPONSE_OFFSET))(nullptr);
		}

		::System::Void set_ShopGachaRecruitListResponse(::MX::NetworkProtocol::ShopGachaRecruitListResponse* arg)
		{
			((::System::Void(*)(::MX::NetworkProtocol::ShopGachaRecruitListResponse*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTLOGINSYNCRESPONSE_SET_SHOPGACHARECRUITLISTRESPONSE_OFFSET))(arg, nullptr);
		}

		::MX::NetworkProtocol::ClanLoginResponse* get_ClanLoginResponse()
		{
			return ((::MX::NetworkProtocol::ClanLoginResponse*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTLOGINSYNCRESPONSE_GET_CLANLOGINRESPONSE_OFFSET))(nullptr);
		}

		::System::Void set_AttachmentGetResponse(::MX::NetworkProtocol::AttachmentGetResponse* arg)
		{
			((::System::Void(*)(::MX::NetworkProtocol::AttachmentGetResponse*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTLOGINSYNCRESPONSE_SET_ATTACHMENTGETRESPONSE_OFFSET))(arg, nullptr);
		}

		::MX::NetworkProtocol::ShopGachaRecruitListResponse* get_ShopGachaRecruitListResponse()
		{
			return ((::MX::NetworkProtocol::ShopGachaRecruitListResponse*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTLOGINSYNCRESPONSE_GET_SHOPGACHARECRUITLISTRESPONSE_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::ItemListResponse* get_ItemListResponse()
		{
			return ((::MX::NetworkProtocol::ItemListResponse*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTLOGINSYNCRESPONSE_GET_ITEMLISTRESPONSE_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTLOGINSYNCRESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::EventContentPermanentListResponse* get_EventContentPermanentListResponse()
		{
			return ((::MX::NetworkProtocol::EventContentPermanentListResponse*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTLOGINSYNCRESPONSE_GET_EVENTCONTENTPERMANENTLISTRESPONSE_OFFSET))(nullptr);
		}

		::System::Void set_MultiFloorRaidLoginResponse(::MX::NetworkProtocol::MultiFloorRaidLoginResponse* arg)
		{
			((::System::Void(*)(::MX::NetworkProtocol::MultiFloorRaidLoginResponse*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTLOGINSYNCRESPONSE_SET_MULTIFLOORRAIDLOGINRESPONSE_OFFSET))(arg, nullptr);
		}

		::System::Void set_MultiFloorRaidSyncResponse(::MX::NetworkProtocol::MultiFloorRaidSyncResponse* arg)
		{
			((::System::Void(*)(::MX::NetworkProtocol::MultiFloorRaidSyncResponse*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTLOGINSYNCRESPONSE_SET_MULTIFLOORRAIDSYNCRESPONSE_OFFSET))(arg, nullptr);
		}

		::System::Void set_ArenaLoginResponse(::MX::NetworkProtocol::ArenaLoginResponse* arg)
		{
			((::System::Void(*)(::MX::NetworkProtocol::ArenaLoginResponse*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTLOGINSYNCRESPONSE_SET_ARENALOGINRESPONSE_OFFSET))(arg, nullptr);
		}

		::System::Void set_EventContentPermanentListResponse(::MX::NetworkProtocol::EventContentPermanentListResponse* arg)
		{
			((::System::Void(*)(::MX::NetworkProtocol::EventContentPermanentListResponse*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTLOGINSYNCRESPONSE_SET_EVENTCONTENTPERMANENTLISTRESPONSE_OFFSET))(arg, nullptr);
		}

		::System::Void set_EliminateRaidLoginResponse(::MX::NetworkProtocol::EliminateRaidLoginResponse* arg)
		{
			((::System::Void(*)(::MX::NetworkProtocol::EliminateRaidLoginResponse*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTLOGINSYNCRESPONSE_SET_ELIMINATERAIDLOGINRESPONSE_OFFSET))(arg, nullptr);
		}

		::System::Void set_ClanLoginResponse(::MX::NetworkProtocol::ClanLoginResponse* arg)
		{
			((::System::Void(*)(::MX::NetworkProtocol::ClanLoginResponse*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTLOGINSYNCRESPONSE_SET_CLANLOGINRESPONSE_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_FriendCount()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTLOGINSYNCRESPONSE_GET_FRIENDCOUNT_OFFSET))(nullptr);
		}

		::System::Void set_ScenarioListResponse(::MX::NetworkProtocol::ScenarioListResponse* arg)
		{
			((::System::Void(*)(::MX::NetworkProtocol::ScenarioListResponse*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTLOGINSYNCRESPONSE_SET_SCENARIOLISTRESPONSE_OFFSET))(arg, nullptr);
		}

		::MX::NetworkProtocol::CafeGetInfoResponse* get_CafeGetInfoResponse()
		{
			return ((::MX::NetworkProtocol::CafeGetInfoResponse*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTLOGINSYNCRESPONSE_GET_CAFEGETINFORESPONSE_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::CharacterListResponse* get_CharacterListResponse()
		{
			return ((::MX::NetworkProtocol::CharacterListResponse*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTLOGINSYNCRESPONSE_GET_CHARACTERLISTRESPONSE_OFFSET))(nullptr);
		}

		::System::Void set_CharacterGearListResponse(::MX::NetworkProtocol::CharacterGearListResponse* arg)
		{
			((::System::Void(*)(::MX::NetworkProtocol::CharacterGearListResponse*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTLOGINSYNCRESPONSE_SET_CHARACTERGEARLISTRESPONSE_OFFSET))(arg, nullptr);
		}

		::MX::NetworkProtocol::EquipmentItemListResponse* get_EquipmentItemListResponse()
		{
			return ((::MX::NetworkProtocol::EquipmentItemListResponse*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTLOGINSYNCRESPONSE_GET_EQUIPMENTITEMLISTRESPONSE_OFFSET))(nullptr);
		}

		::System::Void set_CraftInfoListResponse(::MX::NetworkProtocol::CraftInfoListResponse* arg)
		{
			((::System::Void(*)(::MX::NetworkProtocol::CraftInfoListResponse*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTLOGINSYNCRESPONSE_SET_CRAFTINFOLISTRESPONSE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_PickupFirstGetHistoryDBs()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTLOGINSYNCRESPONSE_GET_PICKUPFIRSTGETHISTORYDBS_OFFSET))(nullptr);
		}

		::System::Void set_SNSPostDBs(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTLOGINSYNCRESPONSE_SET_SNSPOSTDBS_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTLOGINSYNCRESPONSE_.CTOR_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::AttachmentEmblemListResponse* get_AttachmentEmblemListResponse()
		{
			return ((::MX::NetworkProtocol::AttachmentEmblemListResponse*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTLOGINSYNCRESPONSE_GET_ATTACHMENTEMBLEMLISTRESPONSE_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::MultiFloorRaidLoginResponse* get_MultiFloorRaidLoginResponse()
		{
			return ((::MX::NetworkProtocol::MultiFloorRaidLoginResponse*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTLOGINSYNCRESPONSE_GET_MULTIFLOORRAIDLOGINRESPONSE_OFFSET))(nullptr);
		}

		::System::Void set_CharacterListResponse(::MX::NetworkProtocol::CharacterListResponse* arg)
		{
			((::System::Void(*)(::MX::NetworkProtocol::CharacterListResponse*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTLOGINSYNCRESPONSE_SET_CHARACTERLISTRESPONSE_OFFSET))(arg, nullptr);
		}

		::MX::NetworkProtocol::RaidLoginResponse* get_RaidLoginResponse()
		{
			return ((::MX::NetworkProtocol::RaidLoginResponse*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTLOGINSYNCRESPONSE_GET_RAIDLOGINRESPONSE_OFFSET))(nullptr);
		}

		::System::Void set_BillingPurchaseListByNexonResponse(::MX::NetworkProtocol::BillingPurchaseListByNexonResponse* arg)
		{
			((::System::Void(*)(::MX::NetworkProtocol::BillingPurchaseListByNexonResponse*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTLOGINSYNCRESPONSE_SET_BILLINGPURCHASELISTBYNEXONRESPONSE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_AccountLevelRewardIds()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTLOGINSYNCRESPONSE_GET_ACCOUNTLEVELREWARDIDS_OFFSET))(nullptr);
		}

		::System::Void set_ItemListResponse(::MX::NetworkProtocol::ItemListResponse* arg)
		{
			((::System::Void(*)(::MX::NetworkProtocol::ItemListResponse*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTLOGINSYNCRESPONSE_SET_ITEMLISTRESPONSE_OFFSET))(arg, nullptr);
		}

		::MX::NetworkProtocol::TimeAttackDungeonLoginResponse* get_TimeAttackDungeonLoginResponse()
		{
			return ((::MX::NetworkProtocol::TimeAttackDungeonLoginResponse*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTLOGINSYNCRESPONSE_GET_TIMEATTACKDUNGEONLOGINRESPONSE_OFFSET))(nullptr);
		}

		::System::Void set_EchelonListResponse(::MX::NetworkProtocol::EchelonListResponse* arg)
		{
			((::System::Void(*)(::MX::NetworkProtocol::EchelonListResponse*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTLOGINSYNCRESPONSE_SET_ECHELONLISTRESPONSE_OFFSET))(arg, nullptr);
		}

		::System::Void set_EquipmentItemListResponse(::MX::NetworkProtocol::EquipmentItemListResponse* arg)
		{
			((::System::Void(*)(::MX::NetworkProtocol::EquipmentItemListResponse*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTLOGINSYNCRESPONSE_SET_EQUIPMENTITEMLISTRESPONSE_OFFSET))(arg, nullptr);
		}

		::MX::NetworkProtocol::MultiFloorRaidSyncResponse* get_MultiFloorRaidSyncResponse()
		{
			return ((::MX::NetworkProtocol::MultiFloorRaidSyncResponse*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTLOGINSYNCRESPONSE_GET_MULTIFLOORRAIDSYNCRESPONSE_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::CraftInfoListResponse* get_CraftInfoListResponse()
		{
			return ((::MX::NetworkProtocol::CraftInfoListResponse*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTLOGINSYNCRESPONSE_GET_CRAFTINFOLISTRESPONSE_OFFSET))(nullptr);
		}

		::System::Void set_FriendCount(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTLOGINSYNCRESPONSE_SET_FRIENDCOUNT_OFFSET))(arg, nullptr);
		}

		::System::Void set_Responses(::MX::NetworkProtocol::ResponsePacket* arg)
		{
			((::System::Void(*)(::MX::NetworkProtocol::ResponsePacket*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTLOGINSYNCRESPONSE_SET_RESPONSES_OFFSET))(arg, nullptr);
		}

		::MX::NetworkProtocol::CampaignListResponse* get_CampaignListResponse()
		{
			return ((::MX::NetworkProtocol::CampaignListResponse*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTLOGINSYNCRESPONSE_GET_CAMPAIGNLISTRESPONSE_OFFSET))(nullptr);
		}

		::System::Void set_CampaignListResponse(::MX::NetworkProtocol::CampaignListResponse* arg)
		{
			((::System::Void(*)(::MX::NetworkProtocol::CampaignListResponse*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTLOGINSYNCRESPONSE_SET_CAMPAIGNLISTRESPONSE_OFFSET))(arg, nullptr);
		}

		::MX::NetworkProtocol::ContentSweepMultiSweepPresetListResponse* get_ContentSweepMultiSweepPresetListResponse()
		{
			return ((::MX::NetworkProtocol::ContentSweepMultiSweepPresetListResponse*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTLOGINSYNCRESPONSE_GET_CONTENTSWEEPMULTISWEEPPRESETLISTRESPONSE_OFFSET))(nullptr);
		}

		::System::Void set_MomotalkOutlineResponse(::MX::NetworkProtocol::MomoTalkOutLineResponse* arg)
		{
			((::System::Void(*)(::MX::NetworkProtocol::MomoTalkOutLineResponse*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTLOGINSYNCRESPONSE_SET_MOMOTALKOUTLINERESPONSE_OFFSET))(arg, nullptr);
		}

		::MX::NetworkProtocol::AccountCurrencySyncResponse* get_AccountCurrencySyncResponse()
		{
			return ((::MX::NetworkProtocol::AccountCurrencySyncResponse*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTLOGINSYNCRESPONSE_GET_ACCOUNTCURRENCYSYNCRESPONSE_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::StickerLoginResponse* get_StickerListResponse()
		{
			return ((::MX::NetworkProtocol::StickerLoginResponse*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTLOGINSYNCRESPONSE_GET_STICKERLISTRESPONSE_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::AttachmentGetResponse* get_AttachmentGetResponse()
		{
			return ((::MX::NetworkProtocol::AttachmentGetResponse*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTLOGINSYNCRESPONSE_GET_ATTACHMENTGETRESPONSE_OFFSET))(nullptr);
		}

		Il2CppObject* get_SNSPostDBs()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTLOGINSYNCRESPONSE_GET_SNSPOSTDBS_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::MemoryLobbyListResponse* get_MemoryLobbyListResponse()
		{
			return ((::MX::NetworkProtocol::MemoryLobbyListResponse*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTLOGINSYNCRESPONSE_GET_MEMORYLOBBYLISTRESPONSE_OFFSET))(nullptr);
		}

		::System::Void set_FriendCode(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTLOGINSYNCRESPONSE_SET_FRIENDCODE_OFFSET))(str, nullptr);
		}

		::MX::NetworkProtocol::ScenarioListResponse* get_ScenarioListResponse()
		{
			return ((::MX::NetworkProtocol::ScenarioListResponse*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTLOGINSYNCRESPONSE_GET_SCENARIOLISTRESPONSE_OFFSET))(nullptr);
		}

		::System::Void set_PickupFirstGetHistoryDBs(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTLOGINSYNCRESPONSE_SET_PICKUPFIRSTGETHISTORYDBS_OFFSET))(arg, nullptr);
		}

		::MX::NetworkProtocol::EliminateRaidLoginResponse* get_EliminateRaidLoginResponse()
		{
			return ((::MX::NetworkProtocol::EliminateRaidLoginResponse*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTLOGINSYNCRESPONSE_GET_ELIMINATERAIDLOGINRESPONSE_OFFSET))(nullptr);
		}

		::System::Void set_StickerListResponse(::MX::NetworkProtocol::StickerLoginResponse* arg)
		{
			((::System::Void(*)(::MX::NetworkProtocol::StickerLoginResponse*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTLOGINSYNCRESPONSE_SET_STICKERLISTRESPONSE_OFFSET))(arg, nullptr);
		}

		::System::Void set_AccountLevelRewardIds(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTLOGINSYNCRESPONSE_SET_ACCOUNTLEVELREWARDIDS_OFFSET))(arg, nullptr);
		}

		::MX::NetworkProtocol::CharacterGearListResponse* get_CharacterGearListResponse()
		{
			return ((::MX::NetworkProtocol::CharacterGearListResponse*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTLOGINSYNCRESPONSE_GET_CHARACTERGEARLISTRESPONSE_OFFSET))(nullptr);
		}

		::System::Void set_MemoryLobbyListResponse(::MX::NetworkProtocol::MemoryLobbyListResponse* arg)
		{
			((::System::Void(*)(::MX::NetworkProtocol::MemoryLobbyListResponse*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTLOGINSYNCRESPONSE_SET_MEMORYLOBBYLISTRESPONSE_OFFSET))(arg, nullptr);
		}

		::System::Void set_CafeGetInfoResponse(::MX::NetworkProtocol::CafeGetInfoResponse* arg)
		{
			((::System::Void(*)(::MX::NetworkProtocol::CafeGetInfoResponse*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTLOGINSYNCRESPONSE_SET_CAFEGETINFORESPONSE_OFFSET))(arg, nullptr);
		}

		::System::Void set_RaidLoginResponse(::MX::NetworkProtocol::RaidLoginResponse* arg)
		{
			((::System::Void(*)(::MX::NetworkProtocol::RaidLoginResponse*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTLOGINSYNCRESPONSE_SET_RAIDLOGINRESPONSE_OFFSET))(arg, nullptr);
		}

		::System::Void set_TimeAttackDungeonLoginResponse(::MX::NetworkProtocol::TimeAttackDungeonLoginResponse* arg)
		{
			((::System::Void(*)(::MX::NetworkProtocol::TimeAttackDungeonLoginResponse*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTLOGINSYNCRESPONSE_SET_TIMEATTACKDUNGEONLOGINRESPONSE_OFFSET))(arg, nullptr);
		}

		::MX::NetworkProtocol::BillingPurchaseListByNexonResponse* get_BillingPurchaseListByNexonResponse()
		{
			return ((::MX::NetworkProtocol::BillingPurchaseListByNexonResponse*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTLOGINSYNCRESPONSE_GET_BILLINGPURCHASELISTBYNEXONRESPONSE_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::MomoTalkOutLineResponse* get_MomotalkOutlineResponse()
		{
			return ((::MX::NetworkProtocol::MomoTalkOutLineResponse*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTLOGINSYNCRESPONSE_GET_MOMOTALKOUTLINERESPONSE_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::ArenaLoginResponse* get_ArenaLoginResponse()
		{
			return ((::MX::NetworkProtocol::ArenaLoginResponse*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTLOGINSYNCRESPONSE_GET_ARENALOGINRESPONSE_OFFSET))(nullptr);
		}

		::System::Void set_AttachmentEmblemListResponse(::MX::NetworkProtocol::AttachmentEmblemListResponse* arg)
		{
			((::System::Void(*)(::MX::NetworkProtocol::AttachmentEmblemListResponse*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTLOGINSYNCRESPONSE_SET_ATTACHMENTEMBLEMLISTRESPONSE_OFFSET))(arg, nullptr);
		}

	};
}

