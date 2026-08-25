#pragma once
#include "unitysdk.h"

class CharacterObject;
namespace MX::GameLogic::Parcel { class CurrencySnapshot; }
class EquipmentObject;
class WeaponObject;
namespace FlatData { class ScenarioModeTypes; }
namespace FlatData { class ScenarioModeSubTypes; }
namespace MX::GameLogic::DBModel { class CafeDB; }
namespace FlatData { class CurrencyTypes; }
namespace MX::Data { class CampaignChapterInfo; }
class ReddotType;

#define REDDOTSERVICE_ISLOBBYCRAFTREDDOTON_OFFSET UNITYSDK_OFFSET(0x1FD32C0)
#define REDDOTSERVICE_ISSHIFTINGCRAFTREDDOTON_OFFSET UNITYSDK_OFFSET(0x1FD35C0)
#define REDDOTSERVICE_ISNORMALCRAFTREDDOTON_OFFSET UNITYSDK_OFFSET(0x1FD3300)
#define REDDOTSERVICE_ISLOBBYCRAFTCHECKMARKON_OFFSET UNITYSDK_OFFSET(0x1FD3880)
#define REDDOTSERVICE_ISLOBBYCHARACTERREDDOTON_OFFSET UNITYSDK_OFFSET(0x1FD3990)
#define REDDOTSERVICE_CHECKCOLLECTIONUNITSREDDOT_OFFSET UNITYSDK_OFFSET(0x1FD4B40)
#define REDDOTSERVICE_ISCHARACTERREDDOTON_OFFSET UNITYSDK_OFFSET(0x1FD4750)
#define REDDOTSERVICE_ISCANGAINCHARACTER_OFFSET UNITYSDK_OFFSET(0x1FD44F0)
#define REDDOTSERVICE_CANPOTENTIALLEVELUP_OFFSET UNITYSDK_OFFSET(0x1FD62B0)
#define REDDOTSERVICE_CANSKILLLEVELUP_OFFSET UNITYSDK_OFFSET(0x1FD5C90)
#define REDDOTSERVICE_CANCHARACTERTRANSCENDENCE_OFFSET UNITYSDK_OFFSET(0x1FD5EB0)
#define REDDOTSERVICE_CANCHARACTERLEVELUP_OFFSET UNITYSDK_OFFSET(0x1FD5FE0)
#define REDDOTSERVICE_CANEQUIP_OFFSET UNITYSDK_OFFSET(0x1FD5850)
#define REDDOTSERVICE_ISGEARREDDOTON_OFFSET UNITYSDK_OFFSET(0x1FD5C60)
#define REDDOTSERVICE_CANEQUIPGEAR_OFFSET UNITYSDK_OFFSET(0x1FD6970)
#define REDDOTSERVICE_CANGEARTIERUP_OFFSET UNITYSDK_OFFSET(0x1FD6B20)
#define REDDOTSERVICE_ISLOBBYEQUIPMENTREDDOTON_OFFSET UNITYSDK_OFFSET(0x1FD6D60)
#define REDDOTSERVICE_ISEQUIPMENTREDDOTON_OFFSET UNITYSDK_OFFSET(0x1FD5BD0)
#define REDDOTSERVICE_CANEQUIPMENTLEVELUP_OFFSET UNITYSDK_OFFSET(0x1FD6D70)
#define REDDOTSERVICE_CANEQUIPMENTTRANSCENDENCE_OFFSET UNITYSDK_OFFSET(0x1FD6E70)
#define REDDOTSERVICE_CANEQUIPMENTTRANSCENDENCE_OFFSET UNITYSDK_OFFSET(0x1FD7110)
#define REDDOTSERVICE_CANWEAPONLEVELUP_OFFSET UNITYSDK_OFFSET(0x1FD60D0)
#define REDDOTSERVICE_CANWEAPONTRANSCENDENCE_OFFSET UNITYSDK_OFFSET(0x1FD60F0)
#define REDDOTSERVICE_CANWEAPONMOUNT_OFFSET UNITYSDK_OFFSET(0x1FD6250)
#define REDDOTSERVICE_SHOWSTORYYELLOWDOT_OFFSET UNITYSDK_OFFSET(0x1FD7370)
#define REDDOTSERVICE_ANYNEWSTORY_OFFSET UNITYSDK_OFFSET(0x1FD73D0)
#define REDDOTSERVICE_ANYNEWSTORY_OFFSET UNITYSDK_OFFSET(0x1FD78D0)
#define REDDOTSERVICE_ANYNEWSTORY_OFFSET UNITYSDK_OFFSET(0x1FD7460)
#define REDDOTSERVICE_ANYITEMCONSUMABLE_OFFSET UNITYSDK_OFFSET(0x1FD7970)
#define REDDOTSERVICE_ANYSTICKERCANUNLOCK_OFFSET UNITYSDK_OFFSET(0x1FD7A00)
#define REDDOTSERVICE_ISLOBBYCAFEYELLOWDOTON_OFFSET UNITYSDK_OFFSET(0x1FD7A90)
#define REDDOTSERVICE_ISLOBBYCAFEREDDOTON_OFFSET UNITYSDK_OFFSET(0x1FD83F0)
#define REDDOTSERVICE_CANCAFERANKUP_OFFSET UNITYSDK_OFFSET(0x1FD7AD0)
#define REDDOTSERVICE_CANCAFERANKUP_OFFSET UNITYSDK_OFFSET(0x1FD8640)
#define REDDOTSERVICE_CANCAFESTUDENTREDDOT_OFFSET UNITYSDK_OFFSET(0x1FD7C90)
#define REDDOTSERVICE_CANCAFECURRENCYREDDOT_OFFSET UNITYSDK_OFFSET(0x1FD8400)
#define REDDOTSERVICE_CANCAFECURRENCYYELLOWDOT_OFFSET UNITYSDK_OFFSET(0x1FD8C40)
#define REDDOTSERVICE_ANYREDDOTONTHISCAFE_OFFSET UNITYSDK_OFFSET(0x1FD8F40)
#define REDDOTSERVICE_ANYYELLOWDOTONTHISCAFE_OFFSET UNITYSDK_OFFSET(0x1FD8FE0)
#define REDDOTSERVICE_ISCAFECURRENCYREDDOT_OFFSET UNITYSDK_OFFSET(0x1FD8BA0)
#define REDDOTSERVICE_ISCAFECURRENCYYELLOWDOT_OFFSET UNITYSDK_OFFSET(0x1FD8E80)
#define REDDOTSERVICE_ISCAFERANKUPYELLOWDOT_OFFSET UNITYSDK_OFFSET(0x1FD93D0)
#define REDDOTSERVICE_ISINVITEYELLOWDOT_OFFSET UNITYSDK_OFFSET(0x1FD90A0)
#define REDDOTSERVICE_ISCAFESTUDENTINTERACTIONYELLOWDOT_OFFSET UNITYSDK_OFFSET(0x1FD87C0)
#define REDDOTSERVICE_SHOWTIMEATTACKREDDOT_OFFSET UNITYSDK_OFFSET(0x1FD93E0)
#define REDDOTSERVICE_SHOWTIMEATTACKYELLOWDOT_OFFSET UNITYSDK_OFFSET(0x1FD9610)
#define REDDOTSERVICE_ANYCURRENCY_OFFSET UNITYSDK_OFFSET(0x1FD9760)
#define REDDOTSERVICE_GETREDDOTSPRITENAME_OFFSET UNITYSDK_OFFSET(0x1FD9870)
#define REDDOTSERVICE_SHOWCHASERYELLOWDOT_OFFSET UNITYSDK_OFFSET(0x1FD98C0)
#define REDDOTSERVICE_SHOWSCHOOLDUNGEONYELLOWDOT_OFFSET UNITYSDK_OFFSET(0x1FD9A10)
#define REDDOTSERVICE_SHOWREDDOT_OFFSET UNITYSDK_OFFSET(0x1FD9B60)
#define REDDOTSERVICE_SHOWCAMPAIGNALLEXTRASTAGESYELLOWDOT_OFFSET UNITYSDK_OFFSET(0x1FDA010)
#define REDDOTSERVICE_SHOWCAMPAIGNEXTRASTAGEYELLOWDOT_OFFSET UNITYSDK_OFFSET(0x1FDA2D0)
#define REDDOTSERVICE_SHOWFRIENDREQRECEIVEDDOT_OFFSET UNITYSDK_OFFSET(0x1FDA6B0)
#define REDDOTSERVICE_SHOWFREEPRODUCTREDDOT_OFFSET UNITYSDK_OFFSET(0x1FDA740)
#define REDDOTSERVICE_GETREDDOTSPRITENAME_OFFSET UNITYSDK_OFFSET(0x1FDAE10)
#define REDDOTSERVICE_GETCHARACTERCOLLECTIONBUTTONREDDOT_OFFSET UNITYSDK_OFFSET(0x1FDAE80)
#define REDDOTSERVICE_GETCLANBUTTONREDDOT_OFFSET UNITYSDK_OFFSET(0x1FDAEA0)
#define REDDOTSERVICE_GETFRIENDBUTTONREDDOT_OFFSET UNITYSDK_OFFSET(0x1FDAFB0)
#define REDDOTSERVICE_GETMYASSISTSLOTREDDOT_OFFSET UNITYSDK_OFFSET(0x1FDB040)
#define REDDOTSERVICE_GETSTUDENTRECORDBUTTONREDDOT_OFFSET UNITYSDK_OFFSET(0x1FDB330)
#define REDDOTSERVICE_GETSOCIALBUTTONREDDOT_OFFSET UNITYSDK_OFFSET(0x1FDB350)
#define REDDOTSERVICE_SHOWWELCOMECAMPAIGNATTENDANCEREWARD_OFFSET UNITYSDK_OFFSET(0x1FDB400)
#define REDDOTSERVICE_SHOWWELCOMECAMPAIGNMISSIONREWARD_OFFSET UNITYSDK_OFFSET(0x1FDB600)

	inline static constexpr unsigned int RedDotService_TypeDefinitionIndex = 3031;

	class RedDotService : public Il2CppObject
	{
	public:
		::System::Boolean IsLobbyCraftRedDotOn()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + REDDOTSERVICE_ISLOBBYCRAFTREDDOTON_OFFSET))(nullptr);
		}

		::System::Boolean IsShiftingCraftRedDotOn()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + REDDOTSERVICE_ISSHIFTINGCRAFTREDDOTON_OFFSET))(nullptr);
		}

		::System::Boolean IsNormalCraftRedDotOn()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + REDDOTSERVICE_ISNORMALCRAFTREDDOTON_OFFSET))(nullptr);
		}

		::System::Boolean IsLobbyCraftCheckMarkOn()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + REDDOTSERVICE_ISLOBBYCRAFTCHECKMARKON_OFFSET))(nullptr);
		}

		::System::Boolean IsLobbyCharacterRedDotOn()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + REDDOTSERVICE_ISLOBBYCHARACTERREDDOTON_OFFSET))(nullptr);
		}

		::System::Void CheckCollectionUnitsRedDot(Il2CppObject* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + REDDOTSERVICE_CHECKCOLLECTIONUNITSREDDOT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean IsCharacterRedDotOn(CharacterObject* arg, ::MX::GameLogic::Parcel::CurrencySnapshot* arg2, Il2CppObject* arg3, Il2CppObject* arg4, Il2CppObject* arg5, Il2CppObject* arg6, ::System::Boolean arg7)
		{
			return ((::System::Boolean(*)(CharacterObject*, ::MX::GameLogic::Parcel::CurrencySnapshot*, Il2CppObject*, Il2CppObject*, Il2CppObject*, Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + REDDOTSERVICE_ISCHARACTERREDDOTON_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, arg7, nullptr);
		}

		::System::Boolean IsCanGainCharacter(Il2CppObject* arg)
		{
			return ((::System::Boolean(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + REDDOTSERVICE_ISCANGAINCHARACTER_OFFSET))(arg, nullptr);
		}

		::System::Boolean CanPotentialLevelUp(CharacterObject* arg)
		{
			return ((::System::Boolean(*)(CharacterObject*, ::PVOID))((::PBYTE)hIl2Cpp + REDDOTSERVICE_CANPOTENTIALLEVELUP_OFFSET))(arg, nullptr);
		}

		::System::Boolean CanSkillLevelUp(CharacterObject* arg)
		{
			return ((::System::Boolean(*)(CharacterObject*, ::PVOID))((::PBYTE)hIl2Cpp + REDDOTSERVICE_CANSKILLLEVELUP_OFFSET))(arg, nullptr);
		}

		::System::Boolean CanCharacterTranscendence(CharacterObject* arg)
		{
			return ((::System::Boolean(*)(CharacterObject*, ::PVOID))((::PBYTE)hIl2Cpp + REDDOTSERVICE_CANCHARACTERTRANSCENDENCE_OFFSET))(arg, nullptr);
		}

		::System::Boolean CanCharacterLevelUp(CharacterObject* arg)
		{
			return ((::System::Boolean(*)(CharacterObject*, ::PVOID))((::PBYTE)hIl2Cpp + REDDOTSERVICE_CANCHARACTERLEVELUP_OFFSET))(arg, nullptr);
		}

		::System::Boolean CanEquip(CharacterObject* arg, ::System::Int32 arg2)
		{
			return ((::System::Boolean(*)(CharacterObject*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + REDDOTSERVICE_CANEQUIP_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean IsGearRedDotOn(CharacterObject* arg)
		{
			return ((::System::Boolean(*)(CharacterObject*, ::PVOID))((::PBYTE)hIl2Cpp + REDDOTSERVICE_ISGEARREDDOTON_OFFSET))(arg, nullptr);
		}

		::System::Boolean CanEquipGear(CharacterObject* arg)
		{
			return ((::System::Boolean(*)(CharacterObject*, ::PVOID))((::PBYTE)hIl2Cpp + REDDOTSERVICE_CANEQUIPGEAR_OFFSET))(arg, nullptr);
		}

		::System::Boolean CanGearTierUp(CharacterObject* arg)
		{
			return ((::System::Boolean(*)(CharacterObject*, ::PVOID))((::PBYTE)hIl2Cpp + REDDOTSERVICE_CANGEARTIERUP_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsLobbyEquipmentRedDotOn()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + REDDOTSERVICE_ISLOBBYEQUIPMENTREDDOTON_OFFSET))(nullptr);
		}

		::System::Boolean IsEquipmentRedDotOn(EquipmentObject* arg, ::MX::GameLogic::Parcel::CurrencySnapshot* arg2, Il2CppObject* arg3, Il2CppObject* arg4, Il2CppObject* arg5, Il2CppObject* arg6)
		{
			return ((::System::Boolean(*)(EquipmentObject*, ::MX::GameLogic::Parcel::CurrencySnapshot*, Il2CppObject*, Il2CppObject*, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + REDDOTSERVICE_ISEQUIPMENTREDDOTON_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, nullptr);
		}

		::System::Boolean CanEquipmentLevelUp(EquipmentObject* arg, Il2CppObject* arg2)
		{
			return ((::System::Boolean(*)(EquipmentObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + REDDOTSERVICE_CANEQUIPMENTLEVELUP_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean CanEquipmentTranscendence(EquipmentObject* arg, ::MX::GameLogic::Parcel::CurrencySnapshot* arg2, Il2CppObject* arg3, Il2CppObject* arg4, Il2CppObject* arg5)
		{
			return ((::System::Boolean(*)(EquipmentObject*, ::MX::GameLogic::Parcel::CurrencySnapshot*, Il2CppObject*, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + REDDOTSERVICE_CANEQUIPMENTTRANSCENDENCE_OFFSET))(arg, arg2, arg3, arg4, arg5, nullptr);
		}

		::System::Boolean CanEquipmentTranscendence(EquipmentObject* arg)
		{
			return ((::System::Boolean(*)(EquipmentObject*, ::PVOID))((::PBYTE)hIl2Cpp + REDDOTSERVICE_CANEQUIPMENTTRANSCENDENCE_OFFSET))(arg, nullptr);
		}

		::System::Boolean CanWeaponLevelup(WeaponObject* arg)
		{
			return ((::System::Boolean(*)(WeaponObject*, ::PVOID))((::PBYTE)hIl2Cpp + REDDOTSERVICE_CANWEAPONLEVELUP_OFFSET))(arg, nullptr);
		}

		::System::Boolean CanWeaponTranscendence(WeaponObject* arg)
		{
			return ((::System::Boolean(*)(WeaponObject*, ::PVOID))((::PBYTE)hIl2Cpp + REDDOTSERVICE_CANWEAPONTRANSCENDENCE_OFFSET))(arg, nullptr);
		}

		::System::Boolean CanWeaponMount(CharacterObject* arg)
		{
			return ((::System::Boolean(*)(CharacterObject*, ::PVOID))((::PBYTE)hIl2Cpp + REDDOTSERVICE_CANWEAPONMOUNT_OFFSET))(arg, nullptr);
		}

		::System::Boolean ShowStoryYellowDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + REDDOTSERVICE_SHOWSTORYYELLOWDOT_OFFSET))(nullptr);
		}

		::System::Boolean AnyNewStory(::FlatData::ScenarioModeTypes* arg)
		{
			return ((::System::Boolean(*)(::FlatData::ScenarioModeTypes*, ::PVOID))((::PBYTE)hIl2Cpp + REDDOTSERVICE_ANYNEWSTORY_OFFSET))(arg, nullptr);
		}

		::System::Boolean AnyNewStory(::FlatData::ScenarioModeTypes* arg, ::FlatData::ScenarioModeSubTypes* arg2)
		{
			return ((::System::Boolean(*)(::FlatData::ScenarioModeTypes*, ::FlatData::ScenarioModeSubTypes*, ::PVOID))((::PBYTE)hIl2Cpp + REDDOTSERVICE_ANYNEWSTORY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean AnyNewStory(Il2CppObject* arg)
		{
			return ((::System::Boolean(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + REDDOTSERVICE_ANYNEWSTORY_OFFSET))(arg, nullptr);
		}

		::System::Boolean AnyItemConsumable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + REDDOTSERVICE_ANYITEMCONSUMABLE_OFFSET))(nullptr);
		}

		::System::Boolean AnyStickerCanUnlock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + REDDOTSERVICE_ANYSTICKERCANUNLOCK_OFFSET))(nullptr);
		}

		::System::Boolean IsLobbyCafeYellowDotOn()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + REDDOTSERVICE_ISLOBBYCAFEYELLOWDOTON_OFFSET))(nullptr);
		}

		::System::Boolean IsLobbyCafeRedDotOn()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + REDDOTSERVICE_ISLOBBYCAFEREDDOTON_OFFSET))(nullptr);
		}

		::System::Boolean CanCafeRankUp()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + REDDOTSERVICE_CANCAFERANKUP_OFFSET))(nullptr);
		}

		::System::Boolean CanCafeRankUp(::MX::GameLogic::DBModel::CafeDB* arg)
		{
			return ((::System::Boolean(*)(::MX::GameLogic::DBModel::CafeDB*, ::PVOID))((::PBYTE)hIl2Cpp + REDDOTSERVICE_CANCAFERANKUP_OFFSET))(arg, nullptr);
		}

		::System::Boolean CanCafeStudentRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + REDDOTSERVICE_CANCAFESTUDENTREDDOT_OFFSET))(nullptr);
		}

		::System::Boolean CanCafeCurrencyRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + REDDOTSERVICE_CANCAFECURRENCYREDDOT_OFFSET))(nullptr);
		}

		::System::Boolean CanCafeCurrencyYellowDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + REDDOTSERVICE_CANCAFECURRENCYYELLOWDOT_OFFSET))(nullptr);
		}

		::System::Boolean AnyRedDotOnThisCafe(::MX::GameLogic::DBModel::CafeDB* arg)
		{
			return ((::System::Boolean(*)(::MX::GameLogic::DBModel::CafeDB*, ::PVOID))((::PBYTE)hIl2Cpp + REDDOTSERVICE_ANYREDDOTONTHISCAFE_OFFSET))(arg, nullptr);
		}

		::System::Boolean AnyYellowDotOnThisCafe(::MX::GameLogic::DBModel::CafeDB* arg)
		{
			return ((::System::Boolean(*)(::MX::GameLogic::DBModel::CafeDB*, ::PVOID))((::PBYTE)hIl2Cpp + REDDOTSERVICE_ANYYELLOWDOTONTHISCAFE_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsCafeCurrencyRedDot(::MX::GameLogic::DBModel::CafeDB* arg)
		{
			return ((::System::Boolean(*)(::MX::GameLogic::DBModel::CafeDB*, ::PVOID))((::PBYTE)hIl2Cpp + REDDOTSERVICE_ISCAFECURRENCYREDDOT_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsCafeCurrencyYellowDot(::MX::GameLogic::DBModel::CafeDB* arg)
		{
			return ((::System::Boolean(*)(::MX::GameLogic::DBModel::CafeDB*, ::PVOID))((::PBYTE)hIl2Cpp + REDDOTSERVICE_ISCAFECURRENCYYELLOWDOT_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsCafeRankUpYellowDot(::MX::GameLogic::DBModel::CafeDB* arg)
		{
			return ((::System::Boolean(*)(::MX::GameLogic::DBModel::CafeDB*, ::PVOID))((::PBYTE)hIl2Cpp + REDDOTSERVICE_ISCAFERANKUPYELLOWDOT_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsInviteYellowDot(::MX::GameLogic::DBModel::CafeDB* arg)
		{
			return ((::System::Boolean(*)(::MX::GameLogic::DBModel::CafeDB*, ::PVOID))((::PBYTE)hIl2Cpp + REDDOTSERVICE_ISINVITEYELLOWDOT_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsCafeStudentInteractionYellowDot(::MX::GameLogic::DBModel::CafeDB* arg)
		{
			return ((::System::Boolean(*)(::MX::GameLogic::DBModel::CafeDB*, ::PVOID))((::PBYTE)hIl2Cpp + REDDOTSERVICE_ISCAFESTUDENTINTERACTIONYELLOWDOT_OFFSET))(arg, nullptr);
		}

		::System::Boolean ShowTimeAttackRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + REDDOTSERVICE_SHOWTIMEATTACKREDDOT_OFFSET))(nullptr);
		}

		::System::Boolean ShowTimeAttackYellowDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + REDDOTSERVICE_SHOWTIMEATTACKYELLOWDOT_OFFSET))(nullptr);
		}

		::System::Boolean AnyCurrency(::FlatData::CurrencyTypes* arg)
		{
			return ((::System::Boolean(*)(::FlatData::CurrencyTypes*, ::PVOID))((::PBYTE)hIl2Cpp + REDDOTSERVICE_ANYCURRENCY_OFFSET))(arg, nullptr);
		}

		::System::String* GetRedDotSpriteName(::System::Boolean arg)
		{
			return ((::System::String*(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + REDDOTSERVICE_GETREDDOTSPRITENAME_OFFSET))(arg, nullptr);
		}

		::System::Boolean ShowChaserYellowDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + REDDOTSERVICE_SHOWCHASERYELLOWDOT_OFFSET))(nullptr);
		}

		::System::Boolean ShowSchooldungeonYellowDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + REDDOTSERVICE_SHOWSCHOOLDUNGEONYELLOWDOT_OFFSET))(nullptr);
		}

		::System::Boolean ShowRedDot(Il2CppObject* arg, Il2CppObject* arg2)
		{
			return ((::System::Boolean(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + REDDOTSERVICE_SHOWREDDOT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean ShowCampaignAllExtraStagesYellowDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + REDDOTSERVICE_SHOWCAMPAIGNALLEXTRASTAGESYELLOWDOT_OFFSET))(nullptr);
		}

		::System::Boolean ShowCampaignExtraStageYellowDot(::MX::Data::CampaignChapterInfo* arg)
		{
			return ((::System::Boolean(*)(::MX::Data::CampaignChapterInfo*, ::PVOID))((::PBYTE)hIl2Cpp + REDDOTSERVICE_SHOWCAMPAIGNEXTRASTAGEYELLOWDOT_OFFSET))(arg, nullptr);
		}

		::System::Boolean ShowFriendReqReceivedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + REDDOTSERVICE_SHOWFRIENDREQRECEIVEDDOT_OFFSET))(nullptr);
		}

		::System::Boolean ShowFreeProductRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + REDDOTSERVICE_SHOWFREEPRODUCTREDDOT_OFFSET))(nullptr);
		}

		::System::String* GetReddotSpriteName(ReddotType* arg)
		{
			return ((::System::String*(*)(ReddotType*, ::PVOID))((::PBYTE)hIl2Cpp + REDDOTSERVICE_GETREDDOTSPRITENAME_OFFSET))(arg, nullptr);
		}

		ReddotType* GetCharacterCollectionButtonReddot()
		{
			return ((ReddotType*(*)(::PVOID))((::PBYTE)hIl2Cpp + REDDOTSERVICE_GETCHARACTERCOLLECTIONBUTTONREDDOT_OFFSET))(nullptr);
		}

		ReddotType* GetClanButtonReddot()
		{
			return ((ReddotType*(*)(::PVOID))((::PBYTE)hIl2Cpp + REDDOTSERVICE_GETCLANBUTTONREDDOT_OFFSET))(nullptr);
		}

		ReddotType* GetFriendButtonReddot()
		{
			return ((ReddotType*(*)(::PVOID))((::PBYTE)hIl2Cpp + REDDOTSERVICE_GETFRIENDBUTTONREDDOT_OFFSET))(nullptr);
		}

		ReddotType* GetMyAssistSlotReddot()
		{
			return ((ReddotType*(*)(::PVOID))((::PBYTE)hIl2Cpp + REDDOTSERVICE_GETMYASSISTSLOTREDDOT_OFFSET))(nullptr);
		}

		ReddotType* GetStudentRecordButtonReddot()
		{
			return ((ReddotType*(*)(::PVOID))((::PBYTE)hIl2Cpp + REDDOTSERVICE_GETSTUDENTRECORDBUTTONREDDOT_OFFSET))(nullptr);
		}

		ReddotType* GetSocialButtonReddot()
		{
			return ((ReddotType*(*)(::PVOID))((::PBYTE)hIl2Cpp + REDDOTSERVICE_GETSOCIALBUTTONREDDOT_OFFSET))(nullptr);
		}

		::System::Boolean ShowWelcomeCampaignAttendanceReward()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + REDDOTSERVICE_SHOWWELCOMECAMPAIGNATTENDANCEREWARD_OFFSET))(nullptr);
		}

		::System::Boolean ShowWelcomeCampaignMissionReward()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + REDDOTSERVICE_SHOWWELCOMECAMPAIGNMISSIONREWARD_OFFSET))(nullptr);
		}

	};

