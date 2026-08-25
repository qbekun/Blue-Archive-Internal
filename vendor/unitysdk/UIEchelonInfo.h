#pragma once
#include "unitysdk.h"

namespace FlatData { class EchelonType; }
namespace UnityEngine { class Camera; }
class UILabel;
namespace UnityEngine { class GameObject; }
class MXButton;
class UISprite;
class UIMulliganButton;
class UIFormationSubInfoPopup;
class UIFormation_CharacterTouchControl;
namespace MX::GameLogic::DBModel { class ArenaUserDB; }
class UIEchelonInfoRightButtonsControl;
class FormationModel;
class CharacterEchelon;
class EchelonObject;
class CharacterObject;
namespace FlatData { class SquadType; }
namespace MX::Data::Excel { class CostumeExcel; }
namespace Assets::_MX::Program::Scripts::Network { class BaseMessage; }
namespace MX::NetworkProtocol { class ErrorPacket; }
class TeamPosition;
namespace UnityEngine { class Vector3; }
class UIPopup_Formation_Preset;

#define UIECHELONINFO_GET_ECHELONTYPE_OFFSET UNITYSDK_OFFSET(0x24E8D10)
#define UIECHELONINFO_SET_ECHELONTYPE_OFFSET UNITYSDK_OFFSET(0x24E8D20)
#define UIECHELONINFO_GET_ISDRAGGING_OFFSET UNITYSDK_OFFSET(0x24E9180)
#define UIECHELONINFO_ISOTHERCHARACTERDRAGGING_OFFSET UNITYSDK_OFFSET(0x24E92A0)
#define UIECHELONINFO_GET_POSITIONS_OFFSET UNITYSDK_OFFSET(0x24E9380)
#define UIECHELONINFO_SET_POSITIONS_OFFSET UNITYSDK_OFFSET(0x24E9390)
#define UIECHELONINFO_GET_SUPPORTPOSITIONS_OFFSET UNITYSDK_OFFSET(0x24E93A0)
#define UIECHELONINFO_SET_SUPPORTPOSITIONS_OFFSET UNITYSDK_OFFSET(0x24E93B0)
#define UIECHELONINFO_GET_ISINITIALIZED_OFFSET UNITYSDK_OFFSET(0x24E93D0)
#define UIECHELONINFO_SET_ISINITIALIZED_OFFSET UNITYSDK_OFFSET(0x24E93E0)
#define UIECHELONINFO_GET_ISFIXEDECHELON_OFFSET UNITYSDK_OFFSET(0x24E93F0)
#define UIECHELONINFO_SET_ISFIXEDECHELON_OFFSET UNITYSDK_OFFSET(0x24E9400)
#define UIECHELONINFO_GET_ISDEPLOYEDECHELON_OFFSET UNITYSDK_OFFSET(0x24E9410)
#define UIECHELONINFO_GET_OPPONENTUSERDB_OFFSET UNITYSDK_OFFSET(0x24E94B0)
#define UIECHELONINFO_SET_OPPONENTUSERDB_OFFSET UNITYSDK_OFFSET(0x24E94C0)
#define UIECHELONINFO_GET_RIGHTBUTTONCONTROL_OFFSET UNITYSDK_OFFSET(0x24E8DC0)
#define UIECHELONINFO_GET_TSSINTERACTIONSERVERID_OFFSET UNITYSDK_OFFSET(0x24E94E0)
#define UIECHELONINFO_SET_TSSINTERACTIONSERVERID_OFFSET UNITYSDK_OFFSET(0x24E94F0)
#define UIECHELONINFO_AWAKE_OFFSET UNITYSDK_OFFSET(0x24E9500)
#define UIECHELONINFO_ONENABLE_OFFSET UNITYSDK_OFFSET(0x24E9C20)
#define UIECHELONINFO_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x24E9CF0)
#define UIECHELONINFO_SETFIXEDECHELONINPUTACTIVE_OFFSET UNITYSDK_OFFSET(0x24E9E30)
#define UIECHELONINFO_ACTIVATECOLLIDER_OFFSET UNITYSDK_OFFSET(0x24EA1D0)
#define UIECHELONINFO_INITFIXEDECHELON_OFFSET UNITYSDK_OFFSET(0x24EA370)
#define UIECHELONINFO_INITFIXEDSTRATEGYECHELON_OFFSET UNITYSDK_OFFSET(0x24EA410)
#define UIECHELONINFO_FILTERFORBIDDENCHARACTERS_OFFSET UNITYSDK_OFFSET(0x24EA4B0)
#define UIECHELONINFO_RELEASE_OFFSET UNITYSDK_OFFSET(0x24EACB0)
#define UIECHELONINFO_CORELEASE_OFFSET UNITYSDK_OFFSET(0x24EAD90)
#define UIECHELONINFO_CLEARALLPOSITIONS_OFFSET UNITYSDK_OFFSET(0x24EA910)
#define UIECHELONINFO_INITECHELON_OFFSET UNITYSDK_OFFSET(0x24EAE30)
#define UIECHELONINFO_NEEDMEMORYCLEAN_OFFSET UNITYSDK_OFFSET(0x24EAEE0)
#define UIECHELONINFO_ONCLICKSTRIKERSPECIALSWITCH_OFFSET UNITYSDK_OFFSET(0x24EB020)
#define UIECHELONINFO_SETFORMATIONBYSQUADTYPEMODE_OFFSET UNITYSDK_OFFSET(0x24EB2D0)
#define UIECHELONINFO_SETPOSITIONSWITHMODE_OFFSET UNITYSDK_OFFSET(0x24EB250)
#define UIECHELONINFO_GETCHARACTERFROMSERVERID_OFFSET UNITYSDK_OFFSET(0x24EB5A0)
#define UIECHELONINFO_INITECHELON_OFFSET UNITYSDK_OFFSET(0x24EB700)
#define UIECHELONINFO_INITCONQUESTMANAGEECHELON_OFFSET UNITYSDK_OFFSET(0x24EB7A0)
#define UIECHELONINFO_GETECHELONCHARACTERNAME_OFFSET UNITYSDK_OFFSET(0x24EB850)
#define UIECHELONINFO_CREATECHARACTERECHELON_OFFSET UNITYSDK_OFFSET(0x24EB900)
#define UIECHELONINFO_ONCLICKEDIT_OFFSET UNITYSDK_OFFSET(0x24EC540)
#define UIECHELONINFO_OPENECHELONEDITWITHREPEATER_OFFSET UNITYSDK_OFFSET(0x24EC640)
#define UIECHELONINFO_OPENECHELONEDIT_OFFSET UNITYSDK_OFFSET(0x24EC7A0)
#define UIECHELONINFO_GETACTIVESUPPORTCHARACTERS_OFFSET UNITYSDK_OFFSET(0x24ECB70)
#define UIECHELONINFO_CHECKPENDINGASSISTISCHANGED_OFFSET UNITYSDK_OFFSET(0x24EC9E0)
#define UIECHELONINFO_HANDLEERRORCLANASSISTCHARACTERCHANGEDMESSAGE_OFFSET UNITYSDK_OFFSET(0x24ED030)
#define UIECHELONINFO_ERRORCLANASSISTCHARACTERCHANGED_OFFSET UNITYSDK_OFFSET(0x24ED0B0)
#define UIECHELONINFO_SELECTLEADER_OFFSET UNITYSDK_OFFSET(0x24ED4C0)
#define UIECHELONINFO_SELECTTSALINK_OFFSET UNITYSDK_OFFSET(0x24ED6F0)
#define UIECHELONINFO_OPENMULLIGANPOPUP_OFFSET UNITYSDK_OFFSET(0x24ED700)
#define UIECHELONINFO_ONCLICKSUBINFO_OFFSET UNITYSDK_OFFSET(0x24EE010)
#define UIECHELONINFO_ONCLICKPRESET_OFFSET UNITYSDK_OFFSET(0x24EE670)
#define UIECHELONINFO_REFRESHEDITBUTTON_OFFSET UNITYSDK_OFFSET(0x24EE750)
#define UIECHELONINFO_REFRESHSUBINFOSPRITE_OFFSET UNITYSDK_OFFSET(0x24EE7E0)
#define UIECHELONINFO_REFRESHCHARACTERTAG_OFFSET UNITYSDK_OFFSET(0x24EE920)
#define UIECHELONINFO_SETFORMATION_OFFSET UNITYSDK_OFFSET(0x24EE9B0)
#define UIECHELONINFO_SORTPOSITION_OFFSET UNITYSDK_OFFSET(0x24EEA60)
#define UIECHELONINFO_SETMULLIGAN_OFFSET UNITYSDK_OFFSET(0x24EEB10)
#define UIECHELONINFO_GETEXCEPTLIST_OFFSET UNITYSDK_OFFSET(0x24EF6B0)
#define UIECHELONINFO_ISCHANGED_OFFSET UNITYSDK_OFFSET(0x24EEE60)
#define UIECHELONINFO_SETLINKICONSTATE_OFFSET UNITYSDK_OFFSET(0x24EF830)
#define UIECHELONINFO_MAKECHARACTEROBJECTLIST_OFFSET UNITYSDK_OFFSET(0x24EFB60)
#define UIECHELONINFO_GETCLOSESTTEAMPOSITION_OFFSET UNITYSDK_OFFSET(0x24EFE50)
#define UIECHELONINFO_CLEAR_OFFSET UNITYSDK_OFFSET(0x24F0080)
#define UIECHELONINFO_APPLYCOMBATSTYLES_OFFSET UNITYSDK_OFFSET(0x24F01B0)
#define UIECHELONINFO_SAVEIFCHANGED_OFFSET UNITYSDK_OFFSET(0x24ED630)
#define UIECHELONINFO_COSAVEIFCHANGED_OFFSET UNITYSDK_OFFSET(0x24F0280)
#define UIECHELONINFO_SAVE_OFFSET UNITYSDK_OFFSET(0x24F0330)
#define UIECHELONINFO_ISSTRIKEREMPTY_OFFSET UNITYSDK_OFFSET(0x24F03C0)
#define UIECHELONINFO_ISMAINEMPTY_OFFSET UNITYSDK_OFFSET(0x24EDDD0)
#define UIECHELONINFO_ISSUPPORTEMPTY_OFFSET UNITYSDK_OFFSET(0x24EDEF0)
#define UIECHELONINFO_SETSELECTBUFFCHARACTER_OFFSET UNITYSDK_OFFSET(0x24F0680)
#define UIECHELONINFO_GETCONQUESTGROUPBUFFAPPLIEDSTUDENTS_OFFSET UNITYSDK_OFFSET(0x24F0760)
#define UIECHELONINFO_OPENCHARACTERDETAIL_OFFSET UNITYSDK_OFFSET(0x24F0E30)
#define UIECHELONINFO_SETSELECTBUFFCHARACTER_OFFSET UNITYSDK_OFFSET(0x24F12F0)
#define UIECHELONINFO_STOPALLTAGCOROUTINE_OFFSET UNITYSDK_OFFSET(0x24F00C0)
#define UIECHELONINFO_REPLACEDRAGCHARACTER_OFFSET UNITYSDK_OFFSET(0x24F16C0)
#define UIECHELONINFO_GETECHELONSTUDENTSCHOOLS_OFFSET UNITYSDK_OFFSET(0x24F16E0)
#define UIECHELONINFO_SHOW3DCHARACTERS_OFFSET UNITYSDK_OFFSET(0x24F1B50)
#define UIECHELONINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x24F1C50)
#define UIECHELONINFO__CHECKPENDINGASSISTISCHANGED_G__SETPENDINGASSISTCHARACTER|98_0_OFFSET UNITYSDK_OFFSET(0x24F1D70)
#define UIECHELONINFO__ONCLICKSUBINFO_G__GETLEADERID|104_0_OFFSET UNITYSDK_OFFSET(0x24EE1D0)
#define UIECHELONINFO__ONCLICKSUBINFO_G__GETCHARACTEROBJECTLIST|104_1_OFFSET UNITYSDK_OFFSET(0x24EE330)
#define UIECHELONINFO__ONCLICKPRESET_B__105_0_OFFSET UNITYSDK_OFFSET(0x24F26D0)
#define UIECHELONINFO__GETCONQUESTGROUPBUFFAPPLIEDSTUDENTS_G__SETTEAMPOSITIONS|126_0_OFFSET UNITYSDK_OFFSET(0x24F0A00)
#define UIECHELONINFO__GETCONQUESTGROUPBUFFAPPLIEDSTUDENTS_G__SETSUPPORTPOSITIONS|126_1_OFFSET UNITYSDK_OFFSET(0x24F0C30)
#define UIECHELONINFO__SETSELECTBUFFCHARACTER_G__SETTEAMPOSITIONS|128_0_OFFSET UNITYSDK_OFFSET(0x24F1350)
#define UIECHELONINFO__SETSELECTBUFFCHARACTER_G__SETSUPPORTPOSITIONS|128_1_OFFSET UNITYSDK_OFFSET(0x24F1510)

	inline static constexpr unsigned int UIEchelonInfo_TypeDefinitionIndex = 6053;

	class UIEchelonInfo : public Il2CppObject
	{
	public:
		::FlatData::EchelonType* _EchelonType; // 0x18
		Il2CppObject* OnEchelonChanged; // 0x20
		::UnityEngine::Camera* Camera3D; // 0x28
		UILabel* EchelonNumberLabel; // 0x30
		Il2CppObject* OnReplaceDragCharacter; // 0x38
		::UnityEngine::GameObject* StrikerTeamRoot; // 0x40
		::UnityEngine::GameObject* SpecialTeamRoot; // 0x48
		::UnityEngine::GameObject* StrikerSupportRoot; // 0x50
		::UnityEngine::GameObject* SpecialSupportRoot; // 0x58
		::Il2CppArray<::System::Object*>* StrikerTeamPosition; // 0x60
		::Il2CppArray<::System::Object*>* SpecialTeamPosition; // 0x68
		::Il2CppArray<::System::Object*>* StrikerSupportPosition; // 0x70
		::Il2CppArray<::System::Object*>* SpecialSupportPosition; // 0x78
		::Il2CppArray<::System::Object*>* _Positions_k__BackingField; // 0x80
		::Il2CppArray<::System::Object*>* _SupportPositions_k__BackingField; // 0x88
		MXButton* StrikerSpecialSwitchButton; // 0x90
		::UnityEngine::GameObject* SwitchButtonStrikerLabel; // 0x98
		::UnityEngine::GameObject* SwitchButtonSpecialLabel; // 0xA0
		MXButton* EditButton; // 0xA8
		::UnityEngine::GameObject* EditButtonActive; // 0xB0
		UISprite* EditIcon; // 0xB8
		::UnityEngine::GameObject* EditIconDisable; // 0xC0
		UIMulliganButton* MulliganButton; // 0xC8
		MXButton* SubInfoButton; // 0xD0
		UISprite* SubInfoSprite; // 0xD8
		UISprite* SubInfoSpriteDisable; // 0xE0
		MXButton* PresetButton; // 0xE8
		UISprite* PresetSprite; // 0xF0
		UISprite* PresetSpriteDisabled; // 0xF8
		UIFormationSubInfoPopup* SubInfoPopup; // 0x100
		UIFormation_CharacterTouchControl* CharacterTouchControl; // 0x108
		::System::Boolean _IsInitialized_k__BackingField; // 0x110
		::System::Boolean _IsFixedEchelon_k__BackingField; // 0x111
		::System::Int64 fixedEchelonIdCached; // 0x118
		Il2CppObject* pendingSlots; // 0x120
		::MX::GameLogic::DBModel::ArenaUserDB* _OpponentUserDB_k__BackingField; // 0x128
		::System::Int64 EchelonEntityId; // 0x130
		UIEchelonInfoRightButtonsControl* _RightButtonControl; // 0x138
		::System::Int64 _TSSInteractionServerId_k__BackingField; // 0x140
		Il2CppObject* MulliganCharacterIds; // 0x148
		FormationModel* formationModel; // 0x150
		Il2CppObject* loadedCharacters; // 0x158
		::System::Int32 maxAllocGen; // 0x160
		::System::Boolean loadCoroutineComplete; // 0x164

		::FlatData::EchelonType* get_EchelonType()
		{
			return ((::FlatData::EchelonType*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIECHELONINFO_GET_ECHELONTYPE_OFFSET))(nullptr);
		}

		::System::Void set_EchelonType(::FlatData::EchelonType* arg)
		{
			((::System::Void(*)(::FlatData::EchelonType*, ::PVOID))((::PBYTE)hIl2Cpp + UIECHELONINFO_SET_ECHELONTYPE_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsDragging()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UIECHELONINFO_GET_ISDRAGGING_OFFSET))(nullptr);
		}

		::System::Boolean IsOtherCharacterDragging(CharacterEchelon* arg)
		{
			return ((::System::Boolean(*)(CharacterEchelon*, ::PVOID))((::PBYTE)hIl2Cpp + UIECHELONINFO_ISOTHERCHARACTERDRAGGING_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* get_Positions()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIECHELONINFO_GET_POSITIONS_OFFSET))(nullptr);
		}

		::System::Void set_Positions(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UIECHELONINFO_SET_POSITIONS_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* get_SupportPositions()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIECHELONINFO_GET_SUPPORTPOSITIONS_OFFSET))(nullptr);
		}

		::System::Void set_SupportPositions(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UIECHELONINFO_SET_SUPPORTPOSITIONS_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsInitialized()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UIECHELONINFO_GET_ISINITIALIZED_OFFSET))(nullptr);
		}

		::System::Void set_IsInitialized(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIECHELONINFO_SET_ISINITIALIZED_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsFixedEchelon()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UIECHELONINFO_GET_ISFIXEDECHELON_OFFSET))(nullptr);
		}

		::System::Void set_IsFixedEchelon(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIECHELONINFO_SET_ISFIXEDECHELON_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsDeployedEchelon()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UIECHELONINFO_GET_ISDEPLOYEDECHELON_OFFSET))(nullptr);
		}

		::MX::GameLogic::DBModel::ArenaUserDB* get_OpponentUserDB()
		{
			return ((::MX::GameLogic::DBModel::ArenaUserDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIECHELONINFO_GET_OPPONENTUSERDB_OFFSET))(nullptr);
		}

		::System::Void set_OpponentUserDB(::MX::GameLogic::DBModel::ArenaUserDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::ArenaUserDB*, ::PVOID))((::PBYTE)hIl2Cpp + UIECHELONINFO_SET_OPPONENTUSERDB_OFFSET))(arg, nullptr);
		}

		UIEchelonInfoRightButtonsControl* get_RightButtonControl()
		{
			return ((UIEchelonInfoRightButtonsControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIECHELONINFO_GET_RIGHTBUTTONCONTROL_OFFSET))(nullptr);
		}

		::System::Int64 get_TSSInteractionServerId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + UIECHELONINFO_GET_TSSINTERACTIONSERVERID_OFFSET))(nullptr);
		}

		::System::Void set_TSSInteractionServerId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UIECHELONINFO_SET_TSSINTERACTIONSERVERID_OFFSET))(arg, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIECHELONINFO_AWAKE_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIECHELONINFO_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIECHELONINFO_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Void SetFixedEchelonInputActive(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIECHELONINFO_SETFIXEDECHELONINPUTACTIVE_OFFSET))(arg, nullptr);
		}

		::System::Void ActivateCollider(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIECHELONINFO_ACTIVATECOLLIDER_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* InitFixedEchelon(::System::Int64 arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UIECHELONINFO_INITFIXEDECHELON_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* InitFixedStrategyEchelon(::System::Int64 arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UIECHELONINFO_INITFIXEDSTRATEGYECHELON_OFFSET))(arg, nullptr);
		}

		::System::Void FilterForbiddenCharacters()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIECHELONINFO_FILTERFORBIDDENCHARACTERS_OFFSET))(nullptr);
		}

		::System::Void Release()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIECHELONINFO_RELEASE_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* CoRelease(::System::Int32 arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UIECHELONINFO_CORELEASE_OFFSET))(arg, nullptr);
		}

		::System::Void ClearAllPositions()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIECHELONINFO_CLEARALLPOSITIONS_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* InitEchelon(EchelonObject* arg, ::System::Boolean arg2)
		{
			return ((::System::Collections::IEnumerator*(*)(EchelonObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIECHELONINFO_INITECHELON_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean NeedMemoryClean()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UIECHELONINFO_NEEDMEMORYCLEAN_OFFSET))(nullptr);
		}

		::System::Void OnClickStrikerSpecialSwitch()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIECHELONINFO_ONCLICKSTRIKERSPECIALSWITCH_OFFSET))(nullptr);
		}

		::System::Void SetFormationBySquadTypeMode(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIECHELONINFO_SETFORMATIONBYSQUADTYPEMODE_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* SetPositionsWithMode(::System::Boolean arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIECHELONINFO_SETPOSITIONSWITHMODE_OFFSET))(arg, nullptr);
		}

		CharacterObject* GetCharacterFromServerId(EchelonObject* arg, ::System::Int64 arg2, ::FlatData::SquadType* arg3)
		{
			return ((CharacterObject*(*)(EchelonObject*, ::System::Int64, ::FlatData::SquadType*, ::PVOID))((::PBYTE)hIl2Cpp + UIECHELONINFO_GETCHARACTERFROMSERVERID_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Collections::IEnumerator* InitEchelon(::System::Int64 arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UIECHELONINFO_INITECHELON_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* InitConquestManageEchelon(EchelonObject* arg)
		{
			return ((::System::Collections::IEnumerator*(*)(EchelonObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIECHELONINFO_INITCONQUESTMANAGEECHELON_OFFSET))(arg, nullptr);
		}

		::System::String* GetEchelonCharacterName(::MX::Data::Excel::CostumeExcel* arg)
		{
			return ((::System::String*(*)(::MX::Data::Excel::CostumeExcel*, ::PVOID))((::PBYTE)hIl2Cpp + UIECHELONINFO_GETECHELONCHARACTERNAME_OFFSET))(arg, nullptr);
		}

		::System::Void CreateCharacterEchelon(CharacterObject* arg, ::System::Boolean arg2, ::System::Int32 arg3, ::System::Action* arg4)
		{
			((::System::Void(*)(CharacterObject*, ::System::Boolean, ::System::Int32, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UIECHELONINFO_CREATECHARACTERECHELON_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void OnClickEdit()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIECHELONINFO_ONCLICKEDIT_OFFSET))(nullptr);
		}

		::System::Void OpenEchelonEditWithRepeater(::FlatData::SquadType* arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::FlatData::SquadType*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UIECHELONINFO_OPENECHELONEDITWITHREPEATER_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void OpenEchelonEdit(::FlatData::SquadType* arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::FlatData::SquadType*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UIECHELONINFO_OPENECHELONEDIT_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* GetActiveSupportCharacters()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIECHELONINFO_GETACTIVESUPPORTCHARACTERS_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* CheckPendingAssistIsChanged(::System::Action* arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UIECHELONINFO_CHECKPENDINGASSISTISCHANGED_OFFSET))(arg, nullptr);
		}

		::System::Boolean HandleErrorClanAssistCharacterChangedMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UIECHELONINFO_HANDLEERRORCLANASSISTCHARACTERCHANGEDMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Boolean ErrorClanAssistCharacterChanged(::MX::NetworkProtocol::ErrorPacket* arg)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::ErrorPacket*, ::PVOID))((::PBYTE)hIl2Cpp + UIECHELONINFO_ERRORCLANASSISTCHARACTERCHANGED_OFFSET))(arg, nullptr);
		}

		::System::Void SelectLeader(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UIECHELONINFO_SELECTLEADER_OFFSET))(arg, nullptr);
		}

		::System::Void SelectTSALink(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UIECHELONINFO_SELECTTSALINK_OFFSET))(arg, nullptr);
		}

		::System::Void OpenMulliganPopup()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIECHELONINFO_OPENMULLIGANPOPUP_OFFSET))(nullptr);
		}

		::System::Void OnClickSubInfo()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIECHELONINFO_ONCLICKSUBINFO_OFFSET))(nullptr);
		}

		::System::Void OnClickPreset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIECHELONINFO_ONCLICKPRESET_OFFSET))(nullptr);
		}

		::System::Void RefreshEditButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIECHELONINFO_REFRESHEDITBUTTON_OFFSET))(nullptr);
		}

		::System::Void RefreshSubInfoSprite()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIECHELONINFO_REFRESHSUBINFOSPRITE_OFFSET))(nullptr);
		}

		::System::Void RefreshCharacterTag()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIECHELONINFO_REFRESHCHARACTERTAG_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* SetFormation(::System::Action* arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UIECHELONINFO_SETFORMATION_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* SortPosition(::System::Action* arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UIECHELONINFO_SORTPOSITION_OFFSET))(arg, nullptr);
		}

		::System::Void SetMulligan(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIECHELONINFO_SETMULLIGAN_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetExceptList(::System::Int64 arg)
		{
			return ((Il2CppObject*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UIECHELONINFO_GETEXCEPTLIST_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsChanged()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UIECHELONINFO_ISCHANGED_OFFSET))(nullptr);
		}

		::System::Void SetLinkIconState()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIECHELONINFO_SETLINKICONSTATE_OFFSET))(nullptr);
		}

		Il2CppObject* MakeCharacterObjectList()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIECHELONINFO_MAKECHARACTEROBJECTLIST_OFFSET))(nullptr);
		}

		TeamPosition* GetClosestTeamPosition(::UnityEngine::Vector3* arg)
		{
			return ((TeamPosition*(*)(::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + UIECHELONINFO_GETCLOSESTTEAMPOSITION_OFFSET))(arg, nullptr);
		}

		::System::Void Clear()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIECHELONINFO_CLEAR_OFFSET))(nullptr);
		}

		::System::Void ApplyCombatStyles()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIECHELONINFO_APPLYCOMBATSTYLES_OFFSET))(nullptr);
		}

		::System::Void SaveIfChanged()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIECHELONINFO_SAVEIFCHANGED_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* CoSaveIfChanged(::System::Action* arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UIECHELONINFO_COSAVEIFCHANGED_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* Save()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIECHELONINFO_SAVE_OFFSET))(nullptr);
		}

		::System::Boolean IsStrikerEmpty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UIECHELONINFO_ISSTRIKEREMPTY_OFFSET))(nullptr);
		}

		::System::Boolean IsMainEmpty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UIECHELONINFO_ISMAINEMPTY_OFFSET))(nullptr);
		}

		::System::Boolean IsSupportEmpty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UIECHELONINFO_ISSUPPORTEMPTY_OFFSET))(nullptr);
		}

		::System::Void SetSelectBuffCharacter(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIECHELONINFO_SETSELECTBUFFCHARACTER_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetConquestGroupBuffAppliedStudents(::System::Boolean arg)
		{
			return ((Il2CppObject*(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIECHELONINFO_GETCONQUESTGROUPBUFFAPPLIEDSTUDENTS_OFFSET))(arg, nullptr);
		}

		::System::Void OpenCharacterDetail(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UIECHELONINFO_OPENCHARACTERDETAIL_OFFSET))(arg, nullptr);
		}

		::System::Void SetSelectBuffCharacter(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIECHELONINFO_SETSELECTBUFFCHARACTER_OFFSET))(arg, nullptr);
		}

		::System::Void StopAllTagCoroutine()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIECHELONINFO_STOPALLTAGCOROUTINE_OFFSET))(nullptr);
		}

		::System::Void ReplaceDragCharacter(CharacterEchelon* arg, CharacterEchelon* arg2)
		{
			((::System::Void(*)(CharacterEchelon*, CharacterEchelon*, ::PVOID))((::PBYTE)hIl2Cpp + UIECHELONINFO_REPLACEDRAGCHARACTER_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* GetEchelonStudentSchools()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIECHELONINFO_GETECHELONSTUDENTSCHOOLS_OFFSET))(nullptr);
		}

		::System::Void Show3DCharacters(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIECHELONINFO_SHOW3DCHARACTERS_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIECHELONINFO_.CTOR_OFFSET))(nullptr);
		}

		::System::Void _CheckPendingAssistIsChanged_g__SetPendingAssistCharacter|98_0(<>c__DisplayClass98_0&* arg)
		{
			((::System::Void(*)(<>c__DisplayClass98_0&*, ::PVOID))((::PBYTE)hIl2Cpp + UIECHELONINFO__CHECKPENDINGASSISTISCHANGED_G__SETPENDINGASSISTCHARACTER|98_0_OFFSET))(arg, nullptr);
		}

		::System::Int64 _OnClickSubInfo_g__GetLeaderId|104_0()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + UIECHELONINFO__ONCLICKSUBINFO_G__GETLEADERID|104_0_OFFSET))(nullptr);
		}

		Il2CppObject* _OnClickSubInfo_g__GetCharacterObjectList|104_1(::System::Boolean arg)
		{
			return ((Il2CppObject*(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIECHELONINFO__ONCLICKSUBINFO_G__GETCHARACTEROBJECTLIST|104_1_OFFSET))(arg, nullptr);
		}

		::System::Void _OnClickPreset_b__105_0(UIPopup_Formation_Preset* arg)
		{
			((::System::Void(*)(UIPopup_Formation_Preset*, ::PVOID))((::PBYTE)hIl2Cpp + UIECHELONINFO__ONCLICKPRESET_B__105_0_OFFSET))(arg, nullptr);
		}

		::System::Void _GetConquestGroupBuffAppliedStudents_g__SetTeamPositions|126_0(::Il2CppArray<::System::Object*>* arg, ::System::Boolean arg2, <>c__DisplayClass126_0&* arg3)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Boolean, <>c__DisplayClass126_0&*, ::PVOID))((::PBYTE)hIl2Cpp + UIECHELONINFO__GETCONQUESTGROUPBUFFAPPLIEDSTUDENTS_G__SETTEAMPOSITIONS|126_0_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void _GetConquestGroupBuffAppliedStudents_g__SetSupportPositions|126_1(::Il2CppArray<::System::Object*>* arg, ::System::Boolean arg2, <>c__DisplayClass126_0&* arg3)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Boolean, <>c__DisplayClass126_0&*, ::PVOID))((::PBYTE)hIl2Cpp + UIECHELONINFO__GETCONQUESTGROUPBUFFAPPLIEDSTUDENTS_G__SETSUPPORTPOSITIONS|126_1_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void _SetSelectBuffCharacter_g__SetTeamPositions|128_0(::Il2CppArray<::System::Object*>* arg, <>c__DisplayClass128_0&* arg2)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, <>c__DisplayClass128_0&*, ::PVOID))((::PBYTE)hIl2Cpp + UIECHELONINFO__SETSELECTBUFFCHARACTER_G__SETTEAMPOSITIONS|128_0_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void _SetSelectBuffCharacter_g__SetSupportPositions|128_1(::Il2CppArray<::System::Object*>* arg, <>c__DisplayClass128_0&* arg2)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, <>c__DisplayClass128_0&*, ::PVOID))((::PBYTE)hIl2Cpp + UIECHELONINFO__SETSELECTBUFFCHARACTER_G__SETSUPPORTPOSITIONS|128_1_OFFSET))(arg, arg2, nullptr);
		}

	};

