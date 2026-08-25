#pragma once
#include "../../../unitysdk.h"

namespace MX::GameLogic::LogModel { class LogCode; }

namespace MX::GameLogic::LogModel
{
	inline static constexpr unsigned int LogCode_TypeDefinitionIndex = 12447;

	class LogCode : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::MX::GameLogic::LogModel::LogCode* None; // 0x0
		::MX::GameLogic::LogModel::LogCode* AccountLogin; // 0x0
		::MX::GameLogic::LogModel::LogCode* AccountLogOut; // 0x0
		::MX::GameLogic::LogModel::LogCode* AccountStatusChange; // 0x0
		::MX::GameLogic::LogModel::LogCode* AccountCharacterChange; // 0x0
		::MX::GameLogic::LogModel::LogCode* AccountEquipmentChange; // 0x0
		::MX::GameLogic::LogModel::LogCode* AccountItemChange; // 0x0
		::MX::GameLogic::LogModel::LogCode* AccountFurnitureChange; // 0x0
		::MX::GameLogic::LogModel::LogCode* AccountCharacterWeaponChange; // 0x0
		::MX::GameLogic::LogModel::LogCode* AccountCurrency; // 0x0
		::MX::GameLogic::LogModel::LogCode* AccountCurrencyChange; // 0x0
		::MX::GameLogic::LogModel::LogCode* AccountApCurrencyCharge; // 0x0
		::MX::GameLogic::LogModel::LogCode* AccountGemCurrencyCharge; // 0x0
		::MX::GameLogic::LogModel::LogCode* AccountTicketChange; // 0x0
		::MX::GameLogic::LogModel::LogCode* AccountMonthlyProductFix; // 0x0
		::MX::GameLogic::LogModel::LogCode* Adventure_Default; // 0x0
		::MX::GameLogic::LogModel::LogCode* Adventure_Squad; // 0x0
		::MX::GameLogic::LogModel::LogCode* Adventure_Detail; // 0x0
		::MX::GameLogic::LogModel::LogCode* Adventure_Ground; // 0x0
		::MX::GameLogic::LogModel::LogCode* Adventure_Reward; // 0x0
		::MX::GameLogic::LogModel::LogCode* Adventure_Hero; // 0x0
		::MX::GameLogic::LogModel::LogCode* Adventure_Supporter; // 0x0
		::MX::GameLogic::LogModel::LogCode* Adventure_Deck; // 0x0
		::MX::GameLogic::LogModel::LogCode* Raid_Default; // 0x0
		::MX::GameLogic::LogModel::LogCode* Raid_Squad; // 0x0
		::MX::GameLogic::LogModel::LogCode* Raid_Detail; // 0x0
		::MX::GameLogic::LogModel::LogCode* Raid_Reward; // 0x0
		::MX::GameLogic::LogModel::LogCode* Raid_SeasonReward; // 0x0
		::MX::GameLogic::LogModel::LogCode* Raid_BestRecord; // 0x0
		::MX::GameLogic::LogModel::LogCode* WeekDungeon_Default; // 0x0
		::MX::GameLogic::LogModel::LogCode* WeekDungeon_Squad; // 0x0
		::MX::GameLogic::LogModel::LogCode* WeekDungeon_Detail; // 0x0
		::MX::GameLogic::LogModel::LogCode* WeekDungeon_Reward; // 0x0
		::MX::GameLogic::LogModel::LogCode* Arena_Default; // 0x0
		::MX::GameLogic::LogModel::LogCode* Arena_Squad; // 0x0
		::MX::GameLogic::LogModel::LogCode* Arena_Detail; // 0x0
		::MX::GameLogic::LogModel::LogCode* Arena_Reward; // 0x0
		::MX::GameLogic::LogModel::LogCode* Arena_Performance; // 0x0
		::MX::GameLogic::LogModel::LogCode* SchoolDungeon_Default; // 0x0
		::MX::GameLogic::LogModel::LogCode* SchoolDungeon_Squad; // 0x0
		::MX::GameLogic::LogModel::LogCode* SchoolDungeon_Detail; // 0x0
		::MX::GameLogic::LogModel::LogCode* SchoolDungeon_Reward; // 0x0
		::MX::GameLogic::LogModel::LogCode* Battle_Character; // 0x0
		::MX::GameLogic::LogModel::LogCode* Student_FavorRankChange; // 0x0
		::MX::GameLogic::LogModel::LogCode* Parcel_CharacterChange; // 0x0
		::MX::GameLogic::LogModel::LogCode* Parcel_EquipmentChange; // 0x0
		::MX::GameLogic::LogModel::LogCode* Parcel_ItemChange; // 0x0
		::MX::GameLogic::LogModel::LogCode* Parcel_Item; // 0x0
		::MX::GameLogic::LogModel::LogCode* Parcel_MemoryLobby; // 0x0
		::MX::GameLogic::LogModel::LogCode* Parcel_Furniture; // 0x0
		::MX::GameLogic::LogModel::LogCode* Scenario_Default; // 0x0
		::MX::GameLogic::LogModel::LogCode* Scenario_Skip; // 0x0
		::MX::GameLogic::LogModel::LogCode* Scenario_Select; // 0x0
		::MX::GameLogic::LogModel::LogCode* Scenario_AccountStudent; // 0x0
		::MX::GameLogic::LogModel::LogCode* Scenario_LobbyStudent; // 0x0
		::MX::GameLogic::LogModel::LogCode* Scenario_SpecialLobby; // 0x0
		::MX::GameLogic::LogModel::LogCode* Scenario_AccountStudentChange; // 0x0
		::MX::GameLogic::LogModel::LogCode* Scenario_LobbyStudentChange; // 0x0
		::MX::GameLogic::LogModel::LogCode* Scenario_SpecialLobbyChange; // 0x0
		::MX::GameLogic::LogModel::LogCode* Scenario_Schedule; // 0x0
		::MX::GameLogic::LogModel::LogCode* Scene_Default; // 0x0
		::MX::GameLogic::LogModel::LogCode* Cafe_Default; // 0x0
		::MX::GameLogic::LogModel::LogCode* Cafe_Character; // 0x0
		::MX::GameLogic::LogModel::LogCode* Cafe_ChangeFurniture; // 0x0
		::MX::GameLogic::LogModel::LogCode* Cafe_FurnitureInfo; // 0x0
		::MX::GameLogic::LogModel::LogCode* Goods_Gacha; // 0x0
		::MX::GameLogic::LogModel::LogCode* Goods_Shop; // 0x0
		::MX::GameLogic::LogModel::LogCode* Goods_UseGold; // 0x0
		::MX::GameLogic::LogModel::LogCode* Mission_Default; // 0x0
		::MX::GameLogic::LogModel::LogCode* ItemInfo_Default; // 0x0
		::MX::GameLogic::LogModel::LogCode* ProofToken_Default; // 0x0
		::MX::GameLogic::LogModel::LogCode* ProofToken_QuestionSent; // 0x0
		::MX::GameLogic::LogModel::LogCode* ProofToken_WrongProtocolEncoding; // 0x0
		::MX::GameLogic::LogModel::LogCode* FortuneGacha_Default; // 0x0
		::MX::GameLogic::LogModel::LogCode* TimeAttackDungeon_Default; // 0x0
		::MX::GameLogic::LogModel::LogCode* TimeAttackDungeon_Reward; // 0x0
		::MX::GameLogic::LogModel::LogCode* TimeAttackDungeon_Sweep; // 0x0
		::MX::GameLogic::LogModel::LogCode* Conquest_Default; // 0x0
		::MX::GameLogic::LogModel::LogCode* Conquest_Squad; // 0x0
		::MX::GameLogic::LogModel::LogCode* Conquest_Detail; // 0x0
		::MX::GameLogic::LogModel::LogCode* Conquest_Reward; // 0x0
		::MX::GameLogic::LogModel::LogCode* WorldRaid_Default; // 0x0
		::MX::GameLogic::LogModel::LogCode* WorldRaid_Detail; // 0x0
		::MX::GameLogic::LogModel::LogCode* WorldRaid_Squad; // 0x0
		::MX::GameLogic::LogModel::LogCode* Craft_PreReward; // 0x0
		::MX::GameLogic::LogModel::LogCode* Friend_SendRequest; // 0x0
		::MX::GameLogic::LogModel::LogCode* Friend_RequestAccept; // 0x0
		::MX::GameLogic::LogModel::LogCode* Friend_RequestDecline; // 0x0
		::MX::GameLogic::LogModel::LogCode* Friend_Remove; // 0x0
		::MX::GameLogic::LogModel::LogCode* Friend_IdCardBackgroundChange; // 0x0
		::MX::GameLogic::LogModel::LogCode* EliminateRaid_Default; // 0x0
		::MX::GameLogic::LogModel::LogCode* EliminateRaid_Squad; // 0x0
		::MX::GameLogic::LogModel::LogCode* EliminateRaid_Detail; // 0x0
		::MX::GameLogic::LogModel::LogCode* EliminateRaid_Reward; // 0x0
		::MX::GameLogic::LogModel::LogCode* EliminateRaid_SeasonReward; // 0x0
		::MX::GameLogic::LogModel::LogCode* EliminateRaid_BestRecord; // 0x0
		::MX::GameLogic::LogModel::LogCode* EliminateRaid_LimitedReward; // 0x0
		::MX::GameLogic::LogModel::LogCode* AccountAttachment_Emblem; // 0x0
		::MX::GameLogic::LogModel::LogCode* MiniGameShooting_Default; // 0x0
		::MX::GameLogic::LogModel::LogCode* MiniGameShooting_Sweep; // 0x0
		::MX::GameLogic::LogModel::LogCode* MultiFloorRaid_Default; // 0x0
		::MX::GameLogic::LogModel::LogCode* MultiFloorRaid_Detail; // 0x0
		::MX::GameLogic::LogModel::LogCode* MultiFloorRaid_Squad; // 0x0
		::MX::GameLogic::LogModel::LogCode* MultiFloorRaid_Reward; // 0x0
		::MX::GameLogic::LogModel::LogCode* Clan_Transfer; // 0x0
		::MX::GameLogic::LogModel::LogCode* ClientSetting_Default; // 0x0
		::MX::GameLogic::LogModel::LogCode* Issue_Default; // 0x0
		::MX::GameLogic::LogModel::LogCode* Violation_Default; // 0x0
		::MX::GameLogic::LogModel::LogCode* Violation_ExcessiveTouch; // 0x0
		::MX::GameLogic::LogModel::LogCode* EventContent_ConcentrationDefault; // 0x0
		::MX::GameLogic::LogModel::LogCode* EventContent_ConcentrationRoundSkip; // 0x0
		::MX::GameLogic::LogModel::LogCode* EventContent_ConcentrationFlipCard; // 0x0
		::MX::GameLogic::LogModel::LogCode* PermanentRaid_Default; // 0x0
		::MX::GameLogic::LogModel::LogCode* PermanentRaid_Squad; // 0x0
		::MX::GameLogic::LogModel::LogCode* PermanentRaid_Detail; // 0x0

	};
}

