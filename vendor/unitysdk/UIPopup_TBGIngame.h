#pragma once
#include "unitysdk.h"

class UITBGDiceResult;
class UITBGItemInfo;
class UITBGBattleTop;
class UITBGSelectSet;
namespace UnityEngine { class GameObject; }
class UISprite;
class UILabel;
class UIAdmissionDisplay;
class MXButton;
namespace MX::TableBoard { class TBGEncounterDB; }
namespace MX::TableBoard { class TBGBattleEncounterDB; }
namespace MX::TableBoard { class TBGRandomEncounterDB; }
namespace MX::NetworkProtocol { class MiniGameTableBoardEncounterInputResponse; }
namespace MX::Data { class ITBGEncounterInfo; }
namespace Assets::_MX::Program::Scripts::Network { class BaseMessage; }
namespace MX::TableBoard { class TBGFacilityEncounterDB; }
class ButtonSetType;

#define UIPOPUP_TBGINGAME_ONENABLE_OFFSET UNITYSDK_OFFSET(0xB37530)
#define UIPOPUP_TBGINGAME_SETREWARDITEMS_OFFSET UNITYSDK_OFFSET(0xB37640)
#define UIPOPUP_TBGINGAME_SETBATTLEENCOUNTERDATA_OFFSET UNITYSDK_OFFSET(0xB37B50)
#define UIPOPUP_TBGINGAME_CLEAR_OFFSET UNITYSDK_OFFSET(0xB38F30)
#define UIPOPUP_TBGINGAME_ONRUNBUTTONCLICK_OFFSET UNITYSDK_OFFSET(0xB39100)
#define UIPOPUP_TBGINGAME_GET_SELECTINDEX_OFFSET UNITYSDK_OFFSET(0xB39150)
#define UIPOPUP_TBGINGAME___N__0_OFFSET UNITYSDK_OFFSET(0xB391E0)
#define UIPOPUP_TBGINGAME_SETRANDOMENCOUNTERDATA_OFFSET UNITYSDK_OFFSET(0xB391F0)
#define UIPOPUP_TBGINGAME_CO_LOADING_OFFSET UNITYSDK_OFFSET(0xB39730)
#define UIPOPUP_TBGINGAME_AWAKE_OFFSET UNITYSDK_OFFSET(0xB397C0)
#define UIPOPUP_TBGINGAME_PLAYDICE_OFFSET UNITYSDK_OFFSET(0xB39AD0)
#define UIPOPUP_TBGINGAME_ONOKBUTTONCLICK_OFFSET UNITYSDK_OFFSET(0xB39C10)
#define UIPOPUP_TBGINGAME_SETBATTLETOPSET_OFFSET UNITYSDK_OFFSET(0xB38EB0)
#define UIPOPUP_TBGINGAME_ONSTOPBUTTONCLICK_OFFSET UNITYSDK_OFFSET(0xB39D00)
#define UIPOPUP_TBGINGAME_GET_ENCOUNTERINFO_OFFSET UNITYSDK_OFFSET(0xB38950)
#define UIPOPUP_TBGINGAME_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xB39D50)
#define UIPOPUP_TBGINGAME_HANDLEUIENDOPENANIMATIONMESSAGE_OFFSET UNITYSDK_OFFSET(0xB39E60)
#define UIPOPUP_TBGINGAME_SETSELECTSET_OFFSET UNITYSDK_OFFSET(0xB396B0)
#define UIPOPUP_TBGINGAME_SETFACILITYENCOUNTERDATA_OFFSET UNITYSDK_OFFSET(0xB39EE0)
#define UIPOPUP_TBGINGAME_SETSELECTSETNODICE_OFFSET UNITYSDK_OFFSET(0xB38D30)
#define UIPOPUP_TBGINGAME_REFRESHINFO_OFFSET UNITYSDK_OFFSET(0xB3A310)
#define UIPOPUP_TBGINGAME_SETBUTTONSET_OFFSET UNITYSDK_OFFSET(0xB38DB0)
#define UIPOPUP_TBGINGAME_ONCLOSED_OFFSET UNITYSDK_OFFSET(0xB3A6A0)
#define UIPOPUP_TBGINGAME_PLAYRESULT_OFFSET UNITYSDK_OFFSET(0xB3A860)
#define UIPOPUP_TBGINGAME_.CTOR_OFFSET UNITYSDK_OFFSET(0xB3AAB0)
#define UIPOPUP_TBGINGAME_PLAYRECOVERYFX_OFFSET UNITYSDK_OFFSET(0xB3AAC0)
#define UIPOPUP_TBGINGAME_SETDATA_OFFSET UNITYSDK_OFFSET(0xB3AB70)

	inline static constexpr unsigned int UIPopup_TBGIngame_TypeDefinitionIndex = 8321;

	class UIPopup_TBGIngame : public Il2CppObject
	{
	public:
		UITBGDiceResult* DiceResult; // 0xD8
		UITBGItemInfo* ItemInfo; // 0xE0
		UITBGBattleTop* TopSetCombat; // 0xE8
		UITBGSelectSet* SelectSet; // 0xF0
		UITBGSelectSet* SelectSetNoReward; // 0xF8
		::UnityEngine::GameObject* CombatRewardObject; // 0x100
		UISprite* IconTitle; // 0x108
		Il2CppObject* LabelThemaName; // 0x110
		UILabel* LabelTitle; // 0x118
		UILabel* LabelInfoTitle; // 0x120
		Il2CppObject* RewardItems; // 0x128
		UILabel* TargetSuccessLabel; // 0x130
		UILabel* TargetGreatSuccessLabel; // 0x138
		UILabel* TargetRunawayLabel; // 0x140
		UIAdmissionDisplay* CostDisplay; // 0x148
		Il2CppObject* OkButtonDice; // 0x150
		MXButton* OkButton; // 0x158
		::UnityEngine::GameObject* RunButtonDice; // 0x160
		MXButton* RunButton; // 0x168
		MXButton* StopButton; // 0x170
		::MX::TableBoard::TBGEncounterDB* encounterDB; // 0x178

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_TBGINGAME_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void SetRewardItems(::MX::TableBoard::TBGBattleEncounterDB* arg)
		{
			((::System::Void(*)(::MX::TableBoard::TBGBattleEncounterDB*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_TBGINGAME_SETREWARDITEMS_OFFSET))(arg, nullptr);
		}

		::System::Void SetBattleEncounterData(::MX::TableBoard::TBGBattleEncounterDB* arg)
		{
			((::System::Void(*)(::MX::TableBoard::TBGBattleEncounterDB*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_TBGINGAME_SETBATTLEENCOUNTERDATA_OFFSET))(arg, nullptr);
		}

		::System::Void Clear()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_TBGINGAME_CLEAR_OFFSET))(nullptr);
		}

		::System::Void OnRunButtonClick()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_TBGINGAME_ONRUNBUTTONCLICK_OFFSET))(nullptr);
		}

		::System::Int32 get_SelectIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_TBGINGAME_GET_SELECTINDEX_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* __n__0()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_TBGINGAME___N__0_OFFSET))(nullptr);
		}

		::System::Void SetRandomEncounterData(::MX::TableBoard::TBGRandomEncounterDB* arg)
		{
			((::System::Void(*)(::MX::TableBoard::TBGRandomEncounterDB*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_TBGINGAME_SETRANDOMENCOUNTERDATA_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* Co_Loading()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_TBGINGAME_CO_LOADING_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_TBGINGAME_AWAKE_OFFSET))(nullptr);
		}

		::System::Void PlayDice(::System::Int32 arg, ::MX::NetworkProtocol::MiniGameTableBoardEncounterInputResponse* arg2, Il2CppObject* arg3, ::System::Action* arg4)
		{
			((::System::Void(*)(::System::Int32, ::MX::NetworkProtocol::MiniGameTableBoardEncounterInputResponse*, Il2CppObject*, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_TBGINGAME_PLAYDICE_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void OnOkButtonClick()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_TBGINGAME_ONOKBUTTONCLICK_OFFSET))(nullptr);
		}

		::System::Void SetBattleTopSet()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_TBGINGAME_SETBATTLETOPSET_OFFSET))(nullptr);
		}

		::System::Void OnStopButtonClick()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_TBGINGAME_ONSTOPBUTTONCLICK_OFFSET))(nullptr);
		}

		::MX::Data::ITBGEncounterInfo* get_encounterInfo()
		{
			return ((::MX::Data::ITBGEncounterInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_TBGINGAME_GET_ENCOUNTERINFO_OFFSET))(nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_TBGINGAME_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Boolean HandleUIEndOpenAnimationMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_TBGINGAME_HANDLEUIENDOPENANIMATIONMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Void SetSelectSet()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_TBGINGAME_SETSELECTSET_OFFSET))(nullptr);
		}

		::System::Void SetFacilityEncounterData(::MX::TableBoard::TBGFacilityEncounterDB* arg)
		{
			((::System::Void(*)(::MX::TableBoard::TBGFacilityEncounterDB*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_TBGINGAME_SETFACILITYENCOUNTERDATA_OFFSET))(arg, nullptr);
		}

		::System::Void SetSelectSetNoDice()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_TBGINGAME_SETSELECTSETNODICE_OFFSET))(nullptr);
		}

		::System::Void RefreshInfo()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_TBGINGAME_REFRESHINFO_OFFSET))(nullptr);
		}

		::System::Void SetButtonSet(ButtonSetType* arg)
		{
			((::System::Void(*)(ButtonSetType*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_TBGINGAME_SETBUTTONSET_OFFSET))(arg, nullptr);
		}

		::System::Void OnClosed()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_TBGINGAME_ONCLOSED_OFFSET))(nullptr);
		}

		::System::Void PlayResult(::MX::TableBoard::TBGEncounterDB* arg, ::System::Action* arg2)
		{
			((::System::Void(*)(::MX::TableBoard::TBGEncounterDB*, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_TBGINGAME_PLAYRESULT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_TBGINGAME_.CTOR_OFFSET))(nullptr);
		}

		::System::Void PlayRecoveryFx()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_TBGINGAME_PLAYRECOVERYFX_OFFSET))(nullptr);
		}

		::System::Void SetData(::MX::TableBoard::TBGEncounterDB* arg)
		{
			((::System::Void(*)(::MX::TableBoard::TBGEncounterDB*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_TBGINGAME_SETDATA_OFFSET))(arg, nullptr);
		}

	};

