#pragma once
#include "unitysdk.h"

class AcademyInfoComponent;
class AccountInfo;
class ArenaObject;
class AttendanceObject;
class CampaignObject;
class EventContents;
class ContentSaveObject;
class CharacterInventoryObject;
class WeaponListObject;
class GearListObject;
class CostumeInventoryObject;
class AccountCurrencyInfo;
class EchelonListObject;
class FixedEchelonSettingObject;
class EquipmentInventoryObject;
class FurnitureInventoryObject;
class ItemInventoryObject;
class OpenConditionListObject;
class ContentsShortcutObject;
class MailBoxObject;
class MissionObject;
class EventContentMissionObject;
class EventContentMiniGameMissionObject;
class MomotalkInfoComponent;
class BattlePassObject;
class BattlePassMissionObject;
class WelcomeCampaignMissionObject;
class ScenarioHistoryObject;
class GachaInfoObject;
class RaidObject;
class EliminateRaidObject;
class PermanentRaidObject;
class CraftObject;
class ClanInfoObject;
class ClanAssistInventoryObject;
class AccountBillingInfo;
class EventObject;
class EventContentCollectionObject;
class MinigameRhythmObject;
class MiniGameShootingObject;
class TBGObject;
class MinigameDreamMakerObject;
class MinigameDefenseObject;
class MinigameRoadPuzzleObject;
class MinigameCCGObject;
class EventContentLocationObject;
class TimeAttackDungeonObject;
class WorldRaidObject;
class FriendInfoObject;
class ConquestContentObject;
class EventContentDiceRaceObject;
class MultiSweepObject;
class StickerObject;
class MultiFloorRaidObject;
class SNSObject;
class AttachmentObject;
class CafeInfoComponent;
class AttachmentEmblemObject;
namespace MX::Logic::Data { class BattleTypes; }
namespace FlatData { class ContentType; }
namespace MX::GameLogic::Parcel { class CurrencySnapshot; }
namespace FlatData { class CurrencyTypes; }
namespace MX::GameLogic::DBModel { class SessionKey; }
namespace MX::NetworkProtocol { class Protocol; }
namespace MX::GameLogic::Parcel { class ParcelResultDB; }
namespace MX::GameLogic::DBModel { class MailDB; }
namespace MX::Data::Excel { class ScenarioModeExcel; }
namespace FlatData { class ScenarioModeTypes; }
namespace FlatData { class ScenarioModeSubTypes; }
class ScenarioWatchConditionCheck;
namespace MX::GameLogic::Parcel { class ParcelInfo; }
namespace MX::GameLogic::Parcel { class ParcelKeyPair; }
namespace MX::GameLogic::DBModel { class ClanAssistUseInfo; }
class CharacterObject;
namespace FlatData { class EchelonType; }
namespace FlatData { class EchelonExtensionType; }
class MXAccount;
namespace FlatData { class Club; }

#define MXACCOUNT_GET_ATTACHMENTEMBLEMOBJECT_OFFSET UNITYSDK_OFFSET(0x181F9A0)
#define MXACCOUNT_GET_CAFEINFO_OFFSET UNITYSDK_OFFSET(0x181F9C0)
#define MXACCOUNT_GET_MYCAFEINFO_OFFSET UNITYSDK_OFFSET(0x181F9D0)
#define MXACCOUNT_GETMEMORYLOBBYLISTBYCHARACTERID_OFFSET UNITYSDK_OFFSET(0x181F9E0)
#define MXACCOUNT_GETMEMORYLOBBYDBLISTBYCHARACTERID_OFFSET UNITYSDK_OFFSET(0x181FB10)
#define MXACCOUNT_ANYMULTIPLEMEMORIALOWNED_OFFSET UNITYSDK_OFFSET(0x181FCC0)
#define MXACCOUNT_TRYGETRAIDOBJECT_OFFSET UNITYSDK_OFFSET(0x181FDB0)
#define MXACCOUNT_TRYGETRAIDOBJECT_OFFSET UNITYSDK_OFFSET(0x181FE10)
#define MXACCOUNT_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x181FE60)
#define MXACCOUNT_INITIALIZEAFTERTIMESYNC_OFFSET UNITYSDK_OFFSET(0x1820620)
#define MXACCOUNT_HASENOUGHOBJECT_OFFSET UNITYSDK_OFFSET(0x18208E0)
#define MXACCOUNT_HASENOUGHOBJECT_OFFSET UNITYSDK_OFFSET(0x1820900)
#define MXACCOUNT_GET_CURRENTCURRENCYSNAPSHOT_OFFSET UNITYSDK_OFFSET(0x18218B0)
#define MXACCOUNT_HASENOUGHCURRENCY_OFFSET UNITYSDK_OFFSET(0x1821820)
#define MXACCOUNT_GETCURRENTCURRENCY_OFFSET UNITYSDK_OFFSET(0x181A2D0)
#define MXACCOUNT_CANADDCURRENCYVALUE_OFFSET UNITYSDK_OFFSET(0x1821940)
#define MXACCOUNT_SYNCPROGRESSMISSIONS_OFFSET UNITYSDK_OFFSET(0x1821A10)
#define MXACCOUNT_SYNCPARCELRESULTDB_OFFSET UNITYSDK_OFFSET(0x1822C00)
#define MXACCOUNT_CANCONSUMEITEM_OFFSET UNITYSDK_OFFSET(0x1823320)
#define MXACCOUNT_CANCONSUMEITEM_OFFSET UNITYSDK_OFFSET(0x18238D0)
#define MXACCOUNT_HASENOUGHINVENTORY_OFFSET UNITYSDK_OFFSET(0x1823A90)
#define MXACCOUNT_CANRECEIVEPARCELS_OFFSET UNITYSDK_OFFSET(0x1823EC0)
#define MXACCOUNT_CHECKINVENTORYTOENTERANDSHOWMESSAGE_OFFSET UNITYSDK_OFFSET(0x1824790)
#define MXACCOUNT_CHECKINVENTORYFORGACHA_OFFSET UNITYSDK_OFFSET(0x1825130)
#define MXACCOUNT_CANWATCHSCENARIOMODE_OFFSET UNITYSDK_OFFSET(0x1825600)
#define MXACCOUNT_CANWATCHSCENARIOMODEVOLUME_OFFSET UNITYSDK_OFFSET(0x1825A70)
#define MXACCOUNT_GETSCENARIOWATCHCONDITIONCHECK_OFFSET UNITYSDK_OFFSET(0x18258D0)
#define MXACCOUNT_CANWATCHSCENARIO_OFFSET UNITYSDK_OFFSET(0x1825A40)
#define MXACCOUNT_CANWATCHSCENARIOCHECKBYACCOUNTLEVEL_OFFSET UNITYSDK_OFFSET(0x1825BA0)
#define MXACCOUNT_CANWATCHSCENARIOCHECKBYCLEARMODEID_OFFSET UNITYSDK_OFFSET(0x1825C20)
#define MXACCOUNT_CANWATCHSCENARIOCHECKBYCLEARSTAGE_OFFSET UNITYSDK_OFFSET(0x1825C60)
#define MXACCOUNT_CANWATCHSCENARIOCHECKBYCLUB_OFFSET UNITYSDK_OFFSET(0x1825CE0)
#define MXACCOUNT_CANWATCHSCENARIOCHECKBYEVENT_OFFSET UNITYSDK_OFFSET(0x1825D80)
#define MXACCOUNT_TRYCREATECONSUMEREQUESTDB_OFFSET UNITYSDK_OFFSET(0x1826000)
#define MXACCOUNT_GETCURRENTASSETCOUNT_OFFSET UNITYSDK_OFFSET(0x1826280)
#define MXACCOUNT_GETCURRENTASSETCOUNT_OFFSET UNITYSDK_OFFSET(0x18262B0)
#define MXACCOUNT_CALCCONSUMECOUNT_OFFSET UNITYSDK_OFFSET(0x1826480)
#define MXACCOUNT_GETCLANASSISTUSEINFO_OFFSET UNITYSDK_OFFSET(0x1826650)
#define MXACCOUNT_GET_NEWBIEEXP_OFFSET UNITYSDK_OFFSET(0x18267C0)
#define MXACCOUNT_SET_NEWBIEEXP_OFFSET UNITYSDK_OFFSET(0x18267D0)
#define MXACCOUNT_GET_BASEACCOUNTEXP_OFFSET UNITYSDK_OFFSET(0x18267E0)
#define MXACCOUNT_SET_BASEACCOUNTEXP_OFFSET UNITYSDK_OFFSET(0x18267F0)
#define MXACCOUNT_GET_ISLOGINNOW_OFFSET UNITYSDK_OFFSET(0x1826800)
#define MXACCOUNT_SET_ISLOGINNOW_OFFSET UNITYSDK_OFFSET(0x1826810)
#define MXACCOUNT_.CTOR_OFFSET UNITYSDK_OFFSET(0x1826820)
#define MXACCOUNT_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1827930)
#define MXACCOUNT_GETFAVORRANKCHANGELIST_OFFSET UNITYSDK_OFFSET(0x1827980)
#define MXACCOUNT_GETPROFILECHANGEID_OFFSET UNITYSDK_OFFSET(0x1827DA0)
#define MXACCOUNT_GETPROFILECLUB_OFFSET UNITYSDK_OFFSET(0x1827E70)
#define MXACCOUNT_CHANGECOMBATSTYLESBYECHELONDB_OFFSET UNITYSDK_OFFSET(0x1828050)
#define MXACCOUNT_FINDCHARACTERORASSISTCHARACTER_OFFSET UNITYSDK_OFFSET(0x1828230)
#define MXACCOUNT__CANWATCHSCENARIOMODE_G__CHECKSERIESFIRSTSCENARIOFORCEENTER|91_0_OFFSET UNITYSDK_OFFSET(0x1825790)

	inline static constexpr unsigned int MXAccount_TypeDefinitionIndex = 1305;

	class MXAccount : public Il2CppObject
	{
	public:
		AcademyInfoComponent* AcademyInfo; // 0x10
		AccountInfo* AccountInfo; // 0x18
		ArenaObject* ArenaObject; // 0x20
		AttendanceObject* Attendance; // 0x28
		CampaignObject* CampaignInfo; // 0x30
		EventContents* EventContentInfo; // 0x38
		ContentSaveObject* ContentSaveInfo; // 0x40
		CharacterInventoryObject* CharacterInventory; // 0x48
		WeaponListObject* WeaponListInfo; // 0x50
		GearListObject* GearListInfo; // 0x58
		CostumeInventoryObject* CostumeInventory; // 0x60
		AccountCurrencyInfo* CurrencyInfo; // 0x68
		EchelonListObject* EchelonInfo; // 0x70
		FixedEchelonSettingObject* FixedEchelonSetting; // 0x78
		EquipmentInventoryObject* EquipmentInventory; // 0x80
		FurnitureInventoryObject* FurnitureInventory; // 0x88
		ItemInventoryObject* ItemInventory; // 0x90
		OpenConditionListObject* OpenCondition; // 0x98
		ContentsShortcutObject* ContentsShortcut; // 0xA0
		MailBoxObject* MailBox; // 0xA8
		Il2CppObject* MemoryLobbyList; // 0xB0
		MissionObject* Mission; // 0xB8
		EventContentMissionObject* EventContentMission; // 0xC0
		EventContentMiniGameMissionObject* EventContentMiniGameMission; // 0xC8
		MomotalkInfoComponent* MomotalkInfo; // 0xD0
		BattlePassObject* BattlePassInfo; // 0xD8
		BattlePassMissionObject* BattlePassMission; // 0xE0
		WelcomeCampaignMissionObject* WelcomeCampaignMission; // 0xE8
		ScenarioHistoryObject* ScenarioHistory; // 0xF0
		GachaInfoObject* GachaInfo; // 0xF8
		RaidObject* RaidObject; // 0x100
		EliminateRaidObject* EliminateRaidObject; // 0x108
		PermanentRaidObject* PermanentRaidObject; // 0x110
		CraftObject* CraftObject; // 0x118
		ClanInfoObject* ClanInfoObject; // 0x120
		ClanAssistInventoryObject* ClanAssistInventory; // 0x128
		AccountBillingInfo* AccountBillingInfo; // 0x130
		EventObject* EventInfo; // 0x138
		Il2CppObject* ExpiryItems; // 0x140
		EventContentCollectionObject* EventContentCollection; // 0x148
		MinigameRhythmObject* MinigameRhythmObject; // 0x150
		MiniGameShootingObject* MiniGameShootingObject; // 0x158
		TBGObject* TBGObject; // 0x160
		MinigameDreamMakerObject* MinigameDreamMakerObject; // 0x168
		MinigameDefenseObject* MinigameDefenseObject; // 0x170
		MinigameRoadPuzzleObject* MinigameRoadPuzzleObject; // 0x178
		MinigameCCGObject* MinigameCCGObject; // 0x180
		EventContentLocationObject* EventContentLocation; // 0x188
		TimeAttackDungeonObject* TimeAttackObject; // 0x190
		WorldRaidObject* WorldRaidObject; // 0x198
		FriendInfoObject* FriendInfoObject; // 0x1A0
		ConquestContentObject* ConquestContentObject; // 0x1A8
		EventContentDiceRaceObject* EventContentDiceRaceObject; // 0x1B0
		MultiSweepObject* MultiSweepObject; // 0x1B8
		StickerObject* StickerObject; // 0x1C0
		Il2CppObject* ClearDeckCache; // 0x1C8
		Il2CppObject* ClearDeckGroupCache; // 0x1D0
		MultiFloorRaidObject* MultiFloorRaidObject; // 0x1D8
		SNSObject* SNSObject; // 0x1E0
		AttachmentObject* AttachmentObject; // 0x1E8
		::System::Boolean TravellingCafe; // 0x1F0
		CafeInfoComponent* myCafeInfo; // 0x1F8
		CafeInfoComponent* travellingCafeInfo; // 0x200
		::System::Int64 _NewbieExp_k__BackingField; // 0x208
		::System::Int64 _BaseAccountExp_k__BackingField; // 0x210
		::System::Boolean _IsLoginNow_k__BackingField; // 0x218

		AttachmentEmblemObject* get_AttachmentEmblemObject()
		{
			return ((AttachmentEmblemObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXACCOUNT_GET_ATTACHMENTEMBLEMOBJECT_OFFSET))(nullptr);
		}

		CafeInfoComponent* get_CafeInfo()
		{
			return ((CafeInfoComponent*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXACCOUNT_GET_CAFEINFO_OFFSET))(nullptr);
		}

		CafeInfoComponent* get_MyCafeInfo()
		{
			return ((CafeInfoComponent*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXACCOUNT_GET_MYCAFEINFO_OFFSET))(nullptr);
		}

		Il2CppObject* GetMemoryLobbyListByCharacterId(::System::Int64 arg)
		{
			return ((Il2CppObject*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MXACCOUNT_GETMEMORYLOBBYLISTBYCHARACTERID_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetMemoryLobbyDBListByCharacterId(::System::Int64 arg)
		{
			return ((Il2CppObject*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MXACCOUNT_GETMEMORYLOBBYDBLISTBYCHARACTERID_OFFSET))(arg, nullptr);
		}

		::System::Boolean AnyMultipleMemorialOwned()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MXACCOUNT_ANYMULTIPLEMEMORIALOWNED_OFFSET))(nullptr);
		}

		::System::Boolean TryGetRaidObject(::MX::Logic::Data::BattleTypes* arg, RaidObjectBase&* arg2)
		{
			return ((::System::Boolean(*)(::MX::Logic::Data::BattleTypes*, RaidObjectBase&*, ::PVOID))((::PBYTE)hIl2Cpp + MXACCOUNT_TRYGETRAIDOBJECT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean TryGetRaidObject(::FlatData::ContentType* arg, RaidObjectBase&* arg2)
		{
			return ((::System::Boolean(*)(::FlatData::ContentType*, RaidObjectBase&*, ::PVOID))((::PBYTE)hIl2Cpp + MXACCOUNT_TRYGETRAIDOBJECT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXACCOUNT_INITIALIZE_OFFSET))(nullptr);
		}

		::System::Void InitializeAfterTimeSync()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXACCOUNT_INITIALIZEAFTERTIMESYNC_OFFSET))(nullptr);
		}

		::System::Boolean HasEnoughObject(Il2CppObject* arg)
		{
			return ((::System::Boolean(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MXACCOUNT_HASENOUGHOBJECT_OFFSET))(arg, nullptr);
		}

		::System::Boolean HasEnoughObject(Il2CppObject* arg, Il2CppObject&* arg2)
		{
			return ((::System::Boolean(*)(Il2CppObject*, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MXACCOUNT_HASENOUGHOBJECT_OFFSET))(arg, arg2, nullptr);
		}

		::MX::GameLogic::Parcel::CurrencySnapshot* get_CurrentCurrencySnapshot()
		{
			return ((::MX::GameLogic::Parcel::CurrencySnapshot*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXACCOUNT_GET_CURRENTCURRENCYSNAPSHOT_OFFSET))(nullptr);
		}

		::System::Boolean HasEnoughCurrency(::FlatData::CurrencyTypes* arg, ::System::Int64 arg2)
		{
			return ((::System::Boolean(*)(::FlatData::CurrencyTypes*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MXACCOUNT_HASENOUGHCURRENCY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Int64 GetCurrentCurrency(::FlatData::CurrencyTypes* arg)
		{
			return ((::System::Int64(*)(::FlatData::CurrencyTypes*, ::PVOID))((::PBYTE)hIl2Cpp + MXACCOUNT_GETCURRENTCURRENCY_OFFSET))(arg, nullptr);
		}

		::System::Boolean CanAddCurrencyValue(::FlatData::CurrencyTypes* arg, ::System::Int64 arg2)
		{
			return ((::System::Boolean(*)(::FlatData::CurrencyTypes*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MXACCOUNT_CANADDCURRENCYVALUE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void SyncProgressMissions(Il2CppObject* arg, Il2CppObject* arg2, Il2CppObject* arg3, Il2CppObject* arg4, ::System::Boolean arg5)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, Il2CppObject*, Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MXACCOUNT_SYNCPROGRESSMISSIONS_OFFSET))(arg, arg2, arg3, arg4, arg5, nullptr);
		}

		::System::Void SyncParcelResultDB(::MX::GameLogic::DBModel::SessionKey* arg, ::MX::NetworkProtocol::Protocol* arg2, ::MX::GameLogic::Parcel::ParcelResultDB* arg3, ::System::Boolean arg4, ::MX::GameLogic::DBModel::MailDB* arg5, ::System::Boolean arg6)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::SessionKey*, ::MX::NetworkProtocol::Protocol*, ::MX::GameLogic::Parcel::ParcelResultDB*, ::System::Boolean, ::MX::GameLogic::DBModel::MailDB*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MXACCOUNT_SYNCPARCELRESULTDB_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, nullptr);
		}

		::System::Boolean CanConsumeItem(::System::Int64 arg)
		{
			return ((::System::Boolean(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MXACCOUNT_CANCONSUMEITEM_OFFSET))(arg, nullptr);
		}

		::System::Boolean CanConsumeItem(::System::Int64 arg, ::MX::GameLogic::Parcel::CurrencySnapshot* arg2, Il2CppObject* arg3, Il2CppObject* arg4, Il2CppObject* arg5)
		{
			return ((::System::Boolean(*)(::System::Int64, ::MX::GameLogic::Parcel::CurrencySnapshot*, Il2CppObject*, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MXACCOUNT_CANCONSUMEITEM_OFFSET))(arg, arg2, arg3, arg4, arg5, nullptr);
		}

		::System::Boolean HasEnoughInventory(Il2CppObject* arg, ::MX::GameLogic::Parcel::ParcelInfo&* arg2)
		{
			return ((::System::Boolean(*)(Il2CppObject*, ::MX::GameLogic::Parcel::ParcelInfo&*, ::PVOID))((::PBYTE)hIl2Cpp + MXACCOUNT_HASENOUGHINVENTORY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean CanReceiveParcels(Il2CppObject* arg, Il2CppObject&* arg2)
		{
			return ((::System::Boolean(*)(Il2CppObject*, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MXACCOUNT_CANRECEIVEPARCELS_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean CheckInventoryToEnterAndShowMessage(::System::Action* arg, Il2CppObject* arg2)
		{
			return ((::System::Boolean(*)(::System::Action*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MXACCOUNT_CHECKINVENTORYTOENTERANDSHOWMESSAGE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean CheckInventoryForGacha()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MXACCOUNT_CHECKINVENTORYFORGACHA_OFFSET))(nullptr);
		}

		::System::Boolean CanWatchScenarioMode(::MX::Data::Excel::ScenarioModeExcel* arg)
		{
			return ((::System::Boolean(*)(::MX::Data::Excel::ScenarioModeExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MXACCOUNT_CANWATCHSCENARIOMODE_OFFSET))(arg, nullptr);
		}

		::System::Boolean CanWatchScenarioModeVolume(::FlatData::ScenarioModeTypes* arg, ::FlatData::ScenarioModeSubTypes* arg2, ::System::Int64 arg3)
		{
			return ((::System::Boolean(*)(::FlatData::ScenarioModeTypes*, ::FlatData::ScenarioModeSubTypes*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MXACCOUNT_CANWATCHSCENARIOMODEVOLUME_OFFSET))(arg, arg2, arg3, nullptr);
		}

		ScenarioWatchConditionCheck* GetScenarioWatchConditionCheck(::MX::Data::Excel::ScenarioModeExcel* arg)
		{
			return ((ScenarioWatchConditionCheck*(*)(::MX::Data::Excel::ScenarioModeExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MXACCOUNT_GETSCENARIOWATCHCONDITIONCHECK_OFFSET))(arg, nullptr);
		}

		::System::Boolean CanWatchScenario(::System::Boolean arg, ScenarioWatchConditionCheck* arg2)
		{
			return ((::System::Boolean(*)(::System::Boolean, ScenarioWatchConditionCheck*, ::PVOID))((::PBYTE)hIl2Cpp + MXACCOUNT_CANWATCHSCENARIO_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean CanWatchScenarioCheckByAccountLevel(::MX::Data::Excel::ScenarioModeExcel* arg)
		{
			return ((::System::Boolean(*)(::MX::Data::Excel::ScenarioModeExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MXACCOUNT_CANWATCHSCENARIOCHECKBYACCOUNTLEVEL_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* CanWatchScenarioCheckByClearModeId(::MX::Data::Excel::ScenarioModeExcel* arg)
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::MX::Data::Excel::ScenarioModeExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MXACCOUNT_CANWATCHSCENARIOCHECKBYCLEARMODEID_OFFSET))(arg, nullptr);
		}

		::System::Boolean CanWatchScenarioCheckByClearStage(::MX::Data::Excel::ScenarioModeExcel* arg)
		{
			return ((::System::Boolean(*)(::MX::Data::Excel::ScenarioModeExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MXACCOUNT_CANWATCHSCENARIOCHECKBYCLEARSTAGE_OFFSET))(arg, nullptr);
		}

		::System::Boolean CanWatchScenarioCheckByClub(::MX::Data::Excel::ScenarioModeExcel* arg)
		{
			return ((::System::Boolean(*)(::MX::Data::Excel::ScenarioModeExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MXACCOUNT_CANWATCHSCENARIOCHECKBYCLUB_OFFSET))(arg, nullptr);
		}

		::System::Boolean CanWatchScenarioCheckByEvent(::MX::Data::Excel::ScenarioModeExcel* arg)
		{
			return ((::System::Boolean(*)(::MX::Data::Excel::ScenarioModeExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MXACCOUNT_CANWATCHSCENARIOCHECKBYEVENT_OFFSET))(arg, nullptr);
		}

		::System::Boolean TryCreateConsumeRequestDB(::System::Int64 arg, ::MX::GameLogic::DBModel::ConsumeRequestDB&* arg2)
		{
			return ((::System::Boolean(*)(::System::Int64, ::MX::GameLogic::DBModel::ConsumeRequestDB&*, ::PVOID))((::PBYTE)hIl2Cpp + MXACCOUNT_TRYCREATECONSUMEREQUESTDB_OFFSET))(arg, arg2, nullptr);
		}

		::System::Int64 GetCurrentAssetCount(::MX::GameLogic::Parcel::ParcelInfo* arg)
		{
			return ((::System::Int64(*)(::MX::GameLogic::Parcel::ParcelInfo*, ::PVOID))((::PBYTE)hIl2Cpp + MXACCOUNT_GETCURRENTASSETCOUNT_OFFSET))(arg, nullptr);
		}

		::System::Int64 GetCurrentAssetCount(::MX::GameLogic::Parcel::ParcelKeyPair* arg)
		{
			return ((::System::Int64(*)(::MX::GameLogic::Parcel::ParcelKeyPair*, ::PVOID))((::PBYTE)hIl2Cpp + MXACCOUNT_GETCURRENTASSETCOUNT_OFFSET))(arg, nullptr);
		}

		::System::Int64 CalcConsumeCount(Il2CppObject* arg)
		{
			return ((::System::Int64(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MXACCOUNT_CALCCONSUMECOUNT_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::DBModel::ClanAssistUseInfo* GetClanAssistUseInfo(CharacterObject* arg, ::FlatData::EchelonType* arg2, ::FlatData::EchelonExtensionType* arg3, ::System::Int32 arg4)
		{
			return ((::MX::GameLogic::DBModel::ClanAssistUseInfo*(*)(CharacterObject*, ::FlatData::EchelonType*, ::FlatData::EchelonExtensionType*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MXACCOUNT_GETCLANASSISTUSEINFO_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Int64 get_NewbieExp()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MXACCOUNT_GET_NEWBIEEXP_OFFSET))(nullptr);
		}

		::System::Void set_NewbieExp(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MXACCOUNT_SET_NEWBIEEXP_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_BaseAccountExp()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MXACCOUNT_GET_BASEACCOUNTEXP_OFFSET))(nullptr);
		}

		::System::Void set_BaseAccountExp(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MXACCOUNT_SET_BASEACCOUNTEXP_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsLoginNow()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MXACCOUNT_GET_ISLOGINNOW_OFFSET))(nullptr);
		}

		::System::Void set_IsLoginNow(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MXACCOUNT_SET_ISLOGINNOW_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXACCOUNT_.CTOR_OFFSET))(nullptr);
		}

		MXAccount* get_Instance()
		{
			return ((MXAccount*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXACCOUNT_GET_INSTANCE_OFFSET))(nullptr);
		}

		Il2CppObject* GetFavorRankChangeList(Il2CppObject* arg)
		{
			return ((Il2CppObject*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MXACCOUNT_GETFAVORRANKCHANGELIST_OFFSET))(arg, nullptr);
		}

		::System::Int64 GetProfileChangeId(::System::Int64 arg)
		{
			return ((::System::Int64(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MXACCOUNT_GETPROFILECHANGEID_OFFSET))(arg, nullptr);
		}

		::FlatData::Club* GetProfileClub(::System::Int64 arg)
		{
			return ((::FlatData::Club*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MXACCOUNT_GETPROFILECLUB_OFFSET))(arg, nullptr);
		}

		::System::Void ChangeCombatStylesByEchelonDB(::FlatData::EchelonType* arg, ::FlatData::EchelonExtensionType* arg2)
		{
			((::System::Void(*)(::FlatData::EchelonType*, ::FlatData::EchelonExtensionType*, ::PVOID))((::PBYTE)hIl2Cpp + MXACCOUNT_CHANGECOMBATSTYLESBYECHELONDB_OFFSET))(arg, arg2, nullptr);
		}

		CharacterObject* FindCharacterOrAssistCharacter(::System::Int64 arg)
		{
			return ((CharacterObject*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MXACCOUNT_FINDCHARACTERORASSISTCHARACTER_OFFSET))(arg, nullptr);
		}

		::System::Boolean _CanWatchScenarioMode_g__CheckSeriesFirstScenarioForceEnter|91_0(::MX::Data::Excel::ScenarioModeExcel* arg, <>c__DisplayClass91_0&* arg2)
		{
			return ((::System::Boolean(*)(::MX::Data::Excel::ScenarioModeExcel*, <>c__DisplayClass91_0&*, ::PVOID))((::PBYTE)hIl2Cpp + MXACCOUNT__CANWATCHSCENARIOMODE_G__CHECKSERIESFIRSTSCENARIOFORCEENTER|91_0_OFFSET))(arg, arg2, nullptr);
		}

	};

