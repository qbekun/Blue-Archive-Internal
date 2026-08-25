#pragma once
#include "unitysdk.h"

namespace UnityEngine { class GameObject; }
class MXButton;
class UILabel;
class UISprite;
class UIConquest;
namespace MX::Conquest { class ConquestTile; }
namespace MX::Data { class LocalizeData; }
class UIPopup_Conquest_RemoveErosionUnit;
class UIPopup_ConquestBattleEnter_Sub;
class TileState;
class ConquestTileVisual;
class UIPopup_ConquestTileInfo;
class UIPopup_ConquestBattleEnter;
namespace MX::GameLogic::DBModel { class ConquestEventObjectDB; }
class UIPopup_Conquest_Operation;

#define HEXAUICONQUEST_ONCLICKCOMBAT_OFFSET UNITYSDK_OFFSET(0x234B840)
#define HEXAUICONQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0x234BD10)
#define HEXAUICONQUEST_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x234BD20)
#define HEXAUICONQUEST_ONCLICKCONQUEST_OFFSET UNITYSDK_OFFSET(0x234BEC0)
#define HEXAUICONQUEST__ONCLICKREMOVEEROSION_B__43_0_OFFSET UNITYSDK_OFFSET(0x234C2F0)
#define HEXAUICONQUEST__ONCLICKCOMBAT_B__41_1_OFFSET UNITYSDK_OFFSET(0x234C320)
#define HEXAUICONQUEST_OPENSELECTUIMASK1_OFFSET UNITYSDK_OFFSET(0x234C590)
#define HEXAUICONQUEST_AWAKE_OFFSET UNITYSDK_OFFSET(0x234C6C0)
#define HEXAUICONQUEST_CLOSESELECTUI_OFFSET UNITYSDK_OFFSET(0x234BCD0)
#define HEXAUICONQUEST_OPENSELECTUIMASK3_OFFSET UNITYSDK_OFFSET(0x234CF20)
#define HEXAUICONQUEST_ONCLICKTILEINFO_OFFSET UNITYSDK_OFFSET(0x234D090)
#define HEXAUICONQUEST_REQUESTNORMALCONQUEST_OFFSET UNITYSDK_OFFSET(0x234D160)
#define HEXAUICONQUEST_SETPOSITION_OFFSET UNITYSDK_OFFSET(0x234D720)
#define HEXAUICONQUEST_OPENSELECTUIMASK2_OFFSET UNITYSDK_OFFSET(0x234D860)
#define HEXAUICONQUEST_SET_OFFSET UNITYSDK_OFFSET(0x234DEA0)
#define HEXAUICONQUEST__ONCLICKTILEINFO_B__37_0_OFFSET UNITYSDK_OFFSET(0x234DF00)
#define HEXAUICONQUEST_ONCLICKGETTREASUREBOX_OFFSET UNITYSDK_OFFSET(0x234DF80)
#define HEXAUICONQUEST__ONCLICKCOMBAT_B__41_0_OFFSET UNITYSDK_OFFSET(0x234E330)
#define HEXAUICONQUEST_ONCLICKOPERATE_OFFSET UNITYSDK_OFFSET(0x234E360)
#define HEXAUICONQUEST_REQUESTCONQUESTOBJECTREWARD_OFFSET UNITYSDK_OFFSET(0x234E150)
#define HEXAUICONQUEST__REQUESTCONQUESTOBJECTREWARD_B__40_0_OFFSET UNITYSDK_OFFSET(0x234E590)
#define HEXAUICONQUEST_ONCLICKREMOVEEROSION_OFFSET UNITYSDK_OFFSET(0x234E5C0)
#define HEXAUICONQUEST__ONCLICKOPERATE_B__44_0_OFFSET UNITYSDK_OFFSET(0x234E850)
#define HEXAUICONQUEST_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x234E890)
#define HEXAUICONQUEST_GET_HASTILEVISUAL_OFFSET UNITYSDK_OFFSET(0x234E8A0)

	inline static constexpr unsigned int HexaUIConquest_TypeDefinitionIndex = 5022;

	class HexaUIConquest : public Il2CppObject
	{
	public:
		::UnityEngine::GameObject* center; // 0x18
		::UnityEngine::GameObject* SelectUI; // 0x20
		MXButton* Mask1TileInfoButton; // 0x28
		UILabel* Mask1TileInfoButtonLabel; // 0x30
		MXButton* Mask2TileInfoButton; // 0x38
		UILabel* Mask2TileInfoButtonLabel; // 0x40
		MXButton* Mask2TileConquestButton; // 0x48
		MXButton* Mask2AttackConquestButton; // 0x50
		UISprite* Mask2SecondButtonDimmed; // 0x58
		UILabel* Mask2AttackConquestOrReCombatLabel; // 0x60
		MXButton* Mask2TreasureBoxButton; // 0x68
		MXButton* Mask2ErosionRemoveButton; // 0x70
		UILabel* Mask2ErosionRemoveButtonLabel; // 0x78
		MXButton* Mask3TileInfoButton; // 0x80
		UILabel* Mask3TileInfoButtonLabel; // 0x88
		MXButton* Mask3OperationButton; // 0x90
		UILabel* Mask3OperationButtonLabel; // 0x98
		MXButton* Mask3ReAttackButton; // 0xA0
		::UnityEngine::GameObject* Mask1; // 0xA8
		::UnityEngine::GameObject* Mask2; // 0xB0
		::UnityEngine::GameObject* Mask3; // 0xB8
		::System::Action* ChangeUnitAction; // 0xC0
		UIConquest* uiConquest; // 0xC8
		::MX::Conquest::ConquestTile* currentTileData; // 0xD0
		::MX::Data::LocalizeData* localData; // 0xD8

		::System::Void OnClickCombat()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEXAUICONQUEST_ONCLICKCOMBAT_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEXAUICONQUEST_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEXAUICONQUEST_INITIALIZE_OFFSET))(nullptr);
		}

		::System::Void OnClickConquest()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEXAUICONQUEST_ONCLICKCONQUEST_OFFSET))(nullptr);
		}

		::System::Void _OnClickRemoveErosion_b__43_0(UIPopup_Conquest_RemoveErosionUnit* arg)
		{
			((::System::Void(*)(UIPopup_Conquest_RemoveErosionUnit*, ::PVOID))((::PBYTE)hIl2Cpp + HEXAUICONQUEST__ONCLICKREMOVEEROSION_B__43_0_OFFSET))(arg, nullptr);
		}

		::System::Void _OnClickCombat_b__41_1(UIPopup_ConquestBattleEnter_Sub* arg)
		{
			((::System::Void(*)(UIPopup_ConquestBattleEnter_Sub*, ::PVOID))((::PBYTE)hIl2Cpp + HEXAUICONQUEST__ONCLICKCOMBAT_B__41_1_OFFSET))(arg, nullptr);
		}

		::System::Void OpenSelectUIMask1()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEXAUICONQUEST_OPENSELECTUIMASK1_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEXAUICONQUEST_AWAKE_OFFSET))(nullptr);
		}

		::System::Void CloseSelectUI(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + HEXAUICONQUEST_CLOSESELECTUI_OFFSET))(arg, nullptr);
		}

		::System::Void OpenSelectUIMask3(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + HEXAUICONQUEST_OPENSELECTUIMASK3_OFFSET))(str, nullptr);
		}

		::System::Void OnClickTileInfo()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEXAUICONQUEST_ONCLICKTILEINFO_OFFSET))(nullptr);
		}

		::System::Void RequestNormalConquest()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEXAUICONQUEST_REQUESTNORMALCONQUEST_OFFSET))(nullptr);
		}

		::System::Void SetPosition()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEXAUICONQUEST_SETPOSITION_OFFSET))(nullptr);
		}

		::System::Void OpenSelectUIMask2(TileState* arg)
		{
			((::System::Void(*)(TileState*, ::PVOID))((::PBYTE)hIl2Cpp + HEXAUICONQUEST_OPENSELECTUIMASK2_OFFSET))(arg, nullptr);
		}

		::System::Void Set(ConquestTileVisual* arg)
		{
			((::System::Void(*)(ConquestTileVisual*, ::PVOID))((::PBYTE)hIl2Cpp + HEXAUICONQUEST_SET_OFFSET))(arg, nullptr);
		}

		::System::Void _OnClickTileInfo_b__37_0(UIPopup_ConquestTileInfo* arg)
		{
			((::System::Void(*)(UIPopup_ConquestTileInfo*, ::PVOID))((::PBYTE)hIl2Cpp + HEXAUICONQUEST__ONCLICKTILEINFO_B__37_0_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickGetTreasureBox()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEXAUICONQUEST_ONCLICKGETTREASUREBOX_OFFSET))(nullptr);
		}

		::System::Void _OnClickCombat_b__41_0(UIPopup_ConquestBattleEnter* arg)
		{
			((::System::Void(*)(UIPopup_ConquestBattleEnter*, ::PVOID))((::PBYTE)hIl2Cpp + HEXAUICONQUEST__ONCLICKCOMBAT_B__41_0_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickOperate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEXAUICONQUEST_ONCLICKOPERATE_OFFSET))(nullptr);
		}

		::System::Void RequestConquestObjectReward()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEXAUICONQUEST_REQUESTCONQUESTOBJECTREWARD_OFFSET))(nullptr);
		}

		::System::Boolean _RequestConquestObjectReward_b__40_0(::MX::GameLogic::DBModel::ConquestEventObjectDB* arg)
		{
			return ((::System::Boolean(*)(::MX::GameLogic::DBModel::ConquestEventObjectDB*, ::PVOID))((::PBYTE)hIl2Cpp + HEXAUICONQUEST__REQUESTCONQUESTOBJECTREWARD_B__40_0_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickRemoveErosion()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEXAUICONQUEST_ONCLICKREMOVEEROSION_OFFSET))(nullptr);
		}

		::System::Void _OnClickOperate_b__44_0(UIPopup_Conquest_Operation* arg)
		{
			((::System::Void(*)(UIPopup_Conquest_Operation*, ::PVOID))((::PBYTE)hIl2Cpp + HEXAUICONQUEST__ONCLICKOPERATE_B__44_0_OFFSET))(arg, nullptr);
		}

		::System::Void LateUpdate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEXAUICONQUEST_LATEUPDATE_OFFSET))(nullptr);
		}

		::System::Boolean get_HasTileVisual()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HEXAUICONQUEST_GET_HASTILEVISUAL_OFFSET))(nullptr);
		}

	};

