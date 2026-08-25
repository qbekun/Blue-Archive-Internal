#pragma once
#include "../../../unitysdk.h"

namespace MX::MinigameCCG::UI { class UICardGame_InGame_HUD_Cost; }
namespace MX::MinigameCCG::UI { class UICardGame_InGame_HUD_ExecutionButtons; }
namespace MX::MinigameCCG { class CCGPlayer; }
namespace MX::MinigameCCG::UI { class CCGButtonToggleTarget; }
namespace UnityEngine { class Color; }

#define MX_MINIGAMECCG_UI_UICARDGAME_INGAME_HUD_REFRESHREMAINENEMYCOUNT_OFFSET UNITYSDK_OFFSET(0x1DE9EC0)
#define MX_MINIGAMECCG_UI_UICARDGAME_INGAME_HUD_SETBUTTONTOGGLE_OFFSET UNITYSDK_OFFSET(0x1DEA090)
#define MX_MINIGAMECCG_UI_UICARDGAME_INGAME_HUD_ACTIVESHIFTSKILLBTN_OFFSET UNITYSDK_OFFSET(0x1DEA0B0)
#define MX_MINIGAMECCG_UI_UICARDGAME_INGAME_HUD_ONBACK_OFFSET UNITYSDK_OFFSET(0x1DEA0E0)
#define MX_MINIGAMECCG_UI_UICARDGAME_INGAME_HUD_SETSHIFTICON_OFFSET UNITYSDK_OFFSET(0x1DEA230)
#define MX_MINIGAMECCG_UI_UICARDGAME_INGAME_HUD_ACTIVEDIMEDOBJECT_OFFSET UNITYSDK_OFFSET(0x1DEA260)
#define MX_MINIGAMECCG_UI_UICARDGAME_INGAME_HUD_SET_CANUSEASSISTUI_OFFSET UNITYSDK_OFFSET(0x1DEA450)
#define MX_MINIGAMECCG_UI_UICARDGAME_INGAME_HUD_SETUSEHANDMAPPINGPOS_OFFSET UNITYSDK_OFFSET(0x1DEA460)
#define MX_MINIGAMECCG_UI_UICARDGAME_INGAME_HUD_.CTOR_OFFSET UNITYSDK_OFFSET(0x1DEA960)
#define MX_MINIGAMECCG_UI_UICARDGAME_INGAME_HUD_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1DEA9B0)
#define MX_MINIGAMECCG_UI_UICARDGAME_INGAME_HUD_SET_TARGETENTITY_OFFSET UNITYSDK_OFFSET(0x1DEB140)
#define MX_MINIGAMECCG_UI_UICARDGAME_INGAME_HUD_ONCLICKPAUSE_OFFSET UNITYSDK_OFFSET(0x1DEA0F0)
#define MX_MINIGAMECCG_UI_UICARDGAME_INGAME_HUD_GET_SPEEDCOLOR_OFFSET UNITYSDK_OFFSET(0x1DEAF50)
#define MX_MINIGAMECCG_UI_UICARDGAME_INGAME_HUD_GET_TARGETENTITY_OFFSET UNITYSDK_OFFSET(0x1DEB160)
#define MX_MINIGAMECCG_UI_UICARDGAME_INGAME_HUD_OPENLOGPOPUP_OFFSET UNITYSDK_OFFSET(0x1DEB170)
#define MX_MINIGAMECCG_UI_UICARDGAME_INGAME_HUD_ACTIVESKILLBTN_OFFSET UNITYSDK_OFFSET(0x1DEB210)
#define MX_MINIGAMECCG_UI_UICARDGAME_INGAME_HUD_AWAKE_OFFSET UNITYSDK_OFFSET(0x1DEB240)
#define MX_MINIGAMECCG_UI_UICARDGAME_INGAME_HUD_GET_CCGOBJECT_OFFSET UNITYSDK_OFFSET(0x1DEAED0)
#define MX_MINIGAMECCG_UI_UICARDGAME_INGAME_HUD_SETACTIVEUSEHANDMAPPING_OFFSET UNITYSDK_OFFSET(0x1DEA8E0)
#define MX_MINIGAMECCG_UI_UICARDGAME_INGAME_HUD_ONCLICKSPEED_OFFSET UNITYSDK_OFFSET(0x1DEB640)
#define MX_MINIGAMECCG_UI_UICARDGAME_INGAME_HUD_GET_CANUSEASSISTUI_OFFSET UNITYSDK_OFFSET(0x1DEBA10)
#define MX_MINIGAMECCG_UI_UICARDGAME_INGAME_HUD_ACTIVETURNENDBTN_OFFSET UNITYSDK_OFFSET(0x1DEBA20)
#define MX_MINIGAMECCG_UI_UICARDGAME_INGAME_HUD_SETCOSTDISPLAY_OFFSET UNITYSDK_OFFSET(0x1DEBA50)

namespace MX::MinigameCCG::UI
{
	inline static constexpr unsigned int UICardGame_InGame_HUD_TypeDefinitionIndex = 20690;

	class UICardGame_InGame_HUD : public Il2CppObject
	{
	public:
		::MX::MinigameCCG::UI::UICardGame_InGame_HUD_Cost* cost; // 0xD8
		::MX::MinigameCCG::UI::UICardGame_InGame_HUD_ExecutionButtons* executionButtons; // 0xE0
		MXButton* speedBtn; // 0xE8
		MXButton* logBtn; // 0xF0
		MXButton* pauseBtn; // 0xF8
		UILabel* speedLabel; // 0x100
		UISprite* speedIcon; // 0x108
		UILabel* stageName; // 0x110
		UILabel* remainEnemyCount; // 0x118
		Il2CppObject* dimedObjects; // 0x120
		MXUIKeyMapping* speedBtnKeyMapping; // 0x128
		MXUIKeyMapping* pauseBtnKeyMapping; // 0x130
		::System::String* _useHandControllerMappingKey; // 0x138
		MXUIKeyMapping* UseHandControllerMapping; // 0x140
		CCGVisualEntity* _TargetEntity_k__BackingField; // 0x148
		::MX::MinigameCCG::CCGPlayer* player; // 0x150
		::System::Boolean _CanUseAssistUI_k__BackingField; // 0x158

		::System::Void RefreshRemainEnemyCount()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_INGAME_HUD_REFRESHREMAINENEMYCOUNT_OFFSET))(nullptr);
		}

		::System::Void SetButtonToggle(::MX::MinigameCCG::UI::CCGButtonToggleTarget* arg)
		{
			((::System::Void(*)(::MX::MinigameCCG::UI::CCGButtonToggleTarget*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_INGAME_HUD_SETBUTTONTOGGLE_OFFSET))(arg, nullptr);
		}

		::System::Void ActiveShiftSkillBtn(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_INGAME_HUD_ACTIVESHIFTSKILLBTN_OFFSET))(arg, nullptr);
		}

		::System::Void OnBack()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_INGAME_HUD_ONBACK_OFFSET))(nullptr);
		}

		::System::Void SetShiftIcon()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_INGAME_HUD_SETSHIFTICON_OFFSET))(nullptr);
		}

		::System::Void ActiveDimedObject(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_INGAME_HUD_ACTIVEDIMEDOBJECT_OFFSET))(arg, nullptr);
		}

		::System::Void set_CanUseAssistUI(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_INGAME_HUD_SET_CANUSEASSISTUI_OFFSET))(arg, nullptr);
		}

		::System::Void SetUseHandMappingPos(CCGVisualCard* arg)
		{
			((::System::Void(*)(CCGVisualCard*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_INGAME_HUD_SETUSEHANDMAPPINGPOS_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_INGAME_HUD_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Initialize(::MX::MinigameCCG::CCGPlayer* arg)
		{
			((::System::Void(*)(::MX::MinigameCCG::CCGPlayer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_INGAME_HUD_INITIALIZE_OFFSET))(arg, nullptr);
		}

		::System::Void set_TargetEntity(CCGVisualEntity* arg)
		{
			((::System::Void(*)(CCGVisualEntity*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_INGAME_HUD_SET_TARGETENTITY_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickPause()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_INGAME_HUD_ONCLICKPAUSE_OFFSET))(nullptr);
		}

		::UnityEngine::Color* get_speedColor()
		{
			return (return (::UnityEngine::Color*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_INGAME_HUD_GET_SPEEDCOLOR_OFFSET))(nullptr);
		}

		CCGVisualEntity* get_TargetEntity()
		{
			return (return (CCGVisualEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_INGAME_HUD_GET_TARGETENTITY_OFFSET))(nullptr);
		}

		::System::Void OpenLogPopup()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_INGAME_HUD_OPENLOGPOPUP_OFFSET))(nullptr);
		}

		::System::Void ActiveSkillBtn(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_INGAME_HUD_ACTIVESKILLBTN_OFFSET))(arg, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_INGAME_HUD_AWAKE_OFFSET))(nullptr);
		}

		MinigameCCGObject* get_ccgObject()
		{
			return (return (MinigameCCGObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_INGAME_HUD_GET_CCGOBJECT_OFFSET))(nullptr);
		}

		::System::Void SetActiveUseHandMapping(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_INGAME_HUD_SETACTIVEUSEHANDMAPPING_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickSpeed()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_INGAME_HUD_ONCLICKSPEED_OFFSET))(nullptr);
		}

		::System::Boolean get_CanUseAssistUI()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_INGAME_HUD_GET_CANUSEASSISTUI_OFFSET))(nullptr);
		}

		::System::Void ActiveTurnEndBtn(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_INGAME_HUD_ACTIVETURNENDBTN_OFFSET))(arg, nullptr);
		}

		::System::Void SetCostDisplay(::System::Boolean arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Boolean, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_INGAME_HUD_SETCOSTDISPLAY_OFFSET))(arg, arg, nullptr);
		}

	};
}

