#pragma once
#include "unitysdk.h"

class UIEchelonInfo;
namespace UnityEngine { class GameObject; }
class UILabel;
class MXButton;
class IntTabController;
class UIWidget;
namespace UnityEngine { class Animation; }
class UIFormation_BuffController;
class OpponentListRefreshTimer;
class EchelonObject;
class FormationModel;
class UIPopup_System;
namespace MX::NetworkProtocol { class WebAPIErrorCode; }
class From;
namespace FlatData { class StageTopography; }
class SupportPosition;
namespace FlatData { class EchelonType; }
class UIPopup_ArenaPlaywait;
class UIPopup_AssistNotice;
class TeamPosition;
namespace FlatData { class EchelonExtensionType; }
namespace Assets::_MX::Program::Scripts::Network { class BaseMessage; }
namespace MX::GameLogic::DBModel { class ArenaUserDB; }

#define UIFORMATION__BACKWITHERRORCODE_B__52_0_OFFSET UNITYSDK_OFFSET(0x24F8D20)
#define UIFORMATION_ONOPENED_OFFSET UNITYSDK_OFFSET(0x24F8DC0)
#define UIFORMATION_BACKWITHERRORCODE_OFFSET UNITYSDK_OFFSET(0x24FBD70)
#define UIFORMATION_ISFIXEDECHELON_OFFSET UNITYSDK_OFFSET(0x24FB8E0)
#define UIFORMATION_INITWITHASSIST_OFFSET UNITYSDK_OFFSET(0x24FBF20)
#define UIFORMATION_OPENPOPUPNOTONLYUSEASSISTCHAR_OFFSET UNITYSDK_OFFSET(0x24FC4A0)
#define UIFORMATION_GET_SUBSTAGECOSTAMOUNT_OFFSET UNITYSDK_OFFSET(0x24FC4F0)
#define UIFORMATION_REFRESHTAG_OFFSET UNITYSDK_OFFSET(0x24FC500)
#define UIFORMATION__ONCLICKACTIONBUTTON_B__57_17_OFFSET UNITYSDK_OFFSET(0x24FC960)
#define UIFORMATION_GETECHELONTYPE_OFFSET UNITYSDK_OFFSET(0x24FC9A0)
#define UIFORMATION_REFRESHACTIONBUTTON_OFFSET UNITYSDK_OFFSET(0x24FB9E0)
#define UIFORMATION__ONCLICKACTIONBUTTON_B__57_23_OFFSET UNITYSDK_OFFSET(0x24FCB50)
#define UIFORMATION_ONCLICKACTIONBUTTON_OFFSET UNITYSDK_OFFSET(0x24FCC10)
#define UIFORMATION___N__0_OFFSET UNITYSDK_OFFSET(0x253C640)
#define UIFORMATION__ONCLICKACTIONBUTTON_B__57_15_OFFSET UNITYSDK_OFFSET(0x253C650)
#define UIFORMATION_GET_CURINDEX_OFFSET UNITYSDK_OFFSET(0x24FB850)
#define UIFORMATION__ONCLICKACTIONBUTTON_B__57_1_OFFSET UNITYSDK_OFFSET(0x253C710)
#define UIFORMATION_ONCLICKRELEASE_OFFSET UNITYSDK_OFFSET(0x253C7A0)
#define UIFORMATION__ONCLICKACTIONBUTTON_B__57_6_OFFSET UNITYSDK_OFFSET(0x253C8C0)
#define UIFORMATION__ONCLICKACTIONBUTTON_B__57_19_OFFSET UNITYSDK_OFFSET(0x253C970)
#define UIFORMATION_ONCLOSED_OFFSET UNITYSDK_OFFSET(0x253CA30)
#define UIFORMATION__BACKWITHERRORCODE_B__52_3_OFFSET UNITYSDK_OFFSET(0x253CB10)
#define UIFORMATION__ONCLICKACTIONBUTTON_B__57_2_OFFSET UNITYSDK_OFFSET(0x253CB20)
#define UIFORMATION__ONCLICKACTIONBUTTON_B__57_11_OFFSET UNITYSDK_OFFSET(0x253CBE0)
#define UIFORMATION_SHOW3DCHARACTERS_OFFSET UNITYSDK_OFFSET(0x24FBD50)
#define UIFORMATION_AWAKE_OFFSET UNITYSDK_OFFSET(0x253CCA0)
#define UIFORMATION__ONBACK_B__51_1_OFFSET UNITYSDK_OFFSET(0x253D8E0)
#define UIFORMATION__ONBACK_B__51_2_OFFSET UNITYSDK_OFFSET(0x253D980)
#define UIFORMATION_ONBACK_OFFSET UNITYSDK_OFFSET(0x253DA20)
#define UIFORMATION_INITWORLDRAID_OFFSET UNITYSDK_OFFSET(0x253DE40)
#define UIFORMATION__ONCLICKACTIONBUTTON_B__57_24_OFFSET UNITYSDK_OFFSET(0x253E000)
#define UIFORMATION__ONCLICKACTIONBUTTON_B__57_16_OFFSET UNITYSDK_OFFSET(0x253E0A0)
#define UIFORMATION_SETINFORMATIONBTNACTIVE_OFFSET UNITYSDK_OFFSET(0x24FB8B0)
#define UIFORMATION__ONCLICKACTIONBUTTON_G__OPENASSISTNOTICEPOPUP|57_7_OFFSET UNITYSDK_OFFSET(0x253C4A0)
#define UIFORMATION_GET_ISTARGETFIXEDECHELON_OFFSET UNITYSDK_OFFSET(0x253E150)
#define UIFORMATION_INIT_OFFSET UNITYSDK_OFFSET(0x24FC040)
#define UIFORMATION_GET_EXTENSIONTYPE_OFFSET UNITYSDK_OFFSET(0x253E160)
#define UIFORMATION_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x253E170)
#define UIFORMATION__ONCLICKACTIONBUTTON_B__57_14_OFFSET UNITYSDK_OFFSET(0x253E290)
#define UIFORMATION__ONCLICKACTIONBUTTON_B__57_9_OFFSET UNITYSDK_OFFSET(0x253E330)
#define UIFORMATION_SET_ECHELONTYPE_OFFSET UNITYSDK_OFFSET(0x24FB9C0)
#define UIFORMATION__BACKWITHERRORCODE_B__52_2_OFFSET UNITYSDK_OFFSET(0x253E3F0)
#define UIFORMATION_ONANDROIDBACKBUTTON_OFFSET UNITYSDK_OFFSET(0x253E400)
#define UIFORMATION_SET_ASSISTCHARACTEROBJECT_OFFSET UNITYSDK_OFFSET(0x253E4C0)
#define UIFORMATION_.CTOR_OFFSET UNITYSDK_OFFSET(0x253E4E0)
#define UIFORMATION__ONCLICKACTIONBUTTON_B__57_4_OFFSET UNITYSDK_OFFSET(0x253E560)
#define UIFORMATION__ONCLICKACTIONBUTTON_B__57_10_OFFSET UNITYSDK_OFFSET(0x253E5C0)
#define UIFORMATION_SET_CURINDEX_OFFSET UNITYSDK_OFFSET(0x24FBCD0)
#define UIFORMATION_ONCLICKREADYMENU_OFFSET UNITYSDK_OFFSET(0x253E660)
#define UIFORMATION__ONCLICKACTIONBUTTON_B__57_20_OFFSET UNITYSDK_OFFSET(0x253E6F0)
#define UIFORMATION__AWAKE_B__48_0_OFFSET UNITYSDK_OFFSET(0x253E790)
#define UIFORMATION__ONCLICKACTIONBUTTON_B__57_25_OFFSET UNITYSDK_OFFSET(0x253E830)
#define UIFORMATION_ONENABLE_OFFSET UNITYSDK_OFFSET(0x253E8F0)
#define UIFORMATION_SET_ISTARGETFIXEDECHELON_OFFSET UNITYSDK_OFFSET(0x253E9D0)
#define UIFORMATION_SET_SUBSTAGECOSTAMOUNT_OFFSET UNITYSDK_OFFSET(0x253E9E0)
#define UIFORMATION_SUPPORTACTION_OFFSET UNITYSDK_OFFSET(0x253EA00)
#define UIFORMATION_INITWITHECHELONOBJECT_OFFSET UNITYSDK_OFFSET(0x253EAD0)
#define UIFORMATION__ONCLICKACTIONBUTTON_B__57_5_OFFSET UNITYSDK_OFFSET(0x253EB50)
#define UIFORMATION_GET_ASSISTCHARACTEROBJECT_OFFSET UNITYSDK_OFFSET(0x253EC00)
#define UIFORMATION_GET_REFRESHTIMER_OFFSET UNITYSDK_OFFSET(0x24FB7E0)
#define UIFORMATION__ONCLICKACTIONBUTTON_B__57_12_OFFSET UNITYSDK_OFFSET(0x253EC10)
#define UIFORMATION_ISSKIPFORMATIONUIBYFIXEDECHELON_OFFSET UNITYSDK_OFFSET(0x253EC70)
#define UIFORMATION_INITARENAOFFENSE_OFFSET UNITYSDK_OFFSET(0x253F120)
#define UIFORMATION__ONCLICKACTIONBUTTON_B__57_21_OFFSET UNITYSDK_OFFSET(0x253F190)
#define UIFORMATION_REFRESHECHELON_OFFSET UNITYSDK_OFFSET(0x253F250)
#define UIFORMATION_ONLYASSISTMEMBERECHELON_OFFSET UNITYSDK_OFFSET(0x253C240)
#define UIFORMATION__ONBACK_B__51_3_OFFSET UNITYSDK_OFFSET(0x253F480)
#define UIFORMATION_GET_ECHELONTYPE_OFFSET UNITYSDK_OFFSET(0x24FBD30)
#define UIFORMATION_ONECHELONCHANGED_OFFSET UNITYSDK_OFFSET(0x253F260)
#define UIFORMATION__ONCLICKACTIONBUTTON_B__57_22_OFFSET UNITYSDK_OFFSET(0x253F520)
#define UIFORMATION_CO_LOADING_OFFSET UNITYSDK_OFFSET(0x253F5C0)
#define UIFORMATION__BACKWITHERRORCODE_B__52_1_OFFSET UNITYSDK_OFFSET(0x253F630)
#define UIFORMATION_ONTOGGLECHANGED_OFFSET UNITYSDK_OFFSET(0x253F6D0)
#define UIFORMATION__ONBACK_B__51_0_OFFSET UNITYSDK_OFFSET(0x253FA80)

	inline static constexpr unsigned int UIFormation_TypeDefinitionIndex = 6063;

	class UIFormation : public Il2CppObject
	{
	public:
		UIEchelonInfo* UIEchelonInfo; // 0xD8
		::UnityEngine::GameObject* InformationBtn; // 0xE0
		UILabel* UIName; // 0xE8
		MXButton* BackButton; // 0xF0
		IntTabController* TabController; // 0xF8
		::Il2CppArray<::System::Object*>* Tags; // 0x100
		::Il2CppArray<::System::Object*>* usingTag; // 0x108
		::Il2CppArray<::System::Object*>* readyTag; // 0x110
		MXButton* ActionButton; // 0x118
		MXButton* ActionButtonArena; // 0x120
		MXButton* ReleaseButton; // 0x128
		::UnityEngine::GameObject* ActionDisableButton; // 0x130
		::UnityEngine::GameObject* ReleaseDisableButton; // 0x138
		UIWidget* Cost; // 0x140
		::UnityEngine::GameObject* supActionUp; // 0x148
		::UnityEngine::GameObject* supActionDown; // 0x150
		::UnityEngine::Animation* supActionAnimation; // 0x158
		UIFormation_BuffController* buffController; // 0x160
		Il2CppObject* action; // 0x168
		Il2CppObject* _AssistCharacterObject_k__BackingField; // 0x170
		Il2CppObject* indexDic; // 0x178
		::System::String* _SubStageCostAmount_k__BackingField; // 0x180
		OpponentListRefreshTimer* _refreshTimer; // 0x188
		Il2CppObject* echelonListCache; // 0x190
		::System::Boolean _IsTargetFixedEchelon_k__BackingField; // 0x198
		EchelonObject* echelonObjectFromParameter; // 0x1A0
		FormationModel* formationModel; // 0x1A8

		::System::Void _BackWithErrorCode_b__52_0(UIPopup_System* arg)
		{
			((::System::Void(*)(UIPopup_System*, ::PVOID))((::PBYTE)hIl2Cpp + UIFORMATION__BACKWITHERRORCODE_B__52_0_OFFSET))(arg, nullptr);
		}

		::System::Void OnOpened(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIFORMATION_ONOPENED_OFFSET))(arg, nullptr);
		}

		::System::Void BackWithErrorCode(::MX::NetworkProtocol::WebAPIErrorCode* arg)
		{
			((::System::Void(*)(::MX::NetworkProtocol::WebAPIErrorCode*, ::PVOID))((::PBYTE)hIl2Cpp + UIFORMATION_BACKWITHERRORCODE_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsFixedEchelon(::System::Int32 arg)
		{
			return ((::System::Boolean(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UIFORMATION_ISFIXEDECHELON_OFFSET))(arg, nullptr);
		}

		::System::Void InitWithAssist(From* arg, ::System::Int64 arg2, ::System::Int64 arg3, Il2CppObject* arg4, ::FlatData::StageTopography* arg5, Il2CppObject* arg6, ::System::Int32 arg7, ::System::Boolean arg8, Il2CppObject* arg9)
		{
			((::System::Void(*)(From*, ::System::Int64, ::System::Int64, Il2CppObject*, ::FlatData::StageTopography*, Il2CppObject*, ::System::Int32, ::System::Boolean, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIFORMATION_INITWITHASSIST_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, nullptr);
		}

		::System::Void OpenPopupNotOnlyUseAssistChar()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFORMATION_OPENPOPUPNOTONLYUSEASSISTCHAR_OFFSET))(nullptr);
		}

		::System::String* get_SubStageCostAmount()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFORMATION_GET_SUBSTAGECOSTAMOUNT_OFFSET))(nullptr);
		}

		::System::Void RefreshTag()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFORMATION_REFRESHTAG_OFFSET))(nullptr);
		}

		::System::Boolean _OnClickActionButton_b__57_17(SupportPosition* arg)
		{
			return ((::System::Boolean(*)(SupportPosition*, ::PVOID))((::PBYTE)hIl2Cpp + UIFORMATION__ONCLICKACTIONBUTTON_B__57_17_OFFSET))(arg, nullptr);
		}

		::FlatData::EchelonType* GetEchelonType(From* arg)
		{
			return ((::FlatData::EchelonType*(*)(From*, ::PVOID))((::PBYTE)hIl2Cpp + UIFORMATION_GETECHELONTYPE_OFFSET))(arg, nullptr);
		}

		::System::Void RefreshActionButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFORMATION_REFRESHACTIONBUTTON_OFFSET))(nullptr);
		}

		::System::Void _OnClickActionButton_b__57_23()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFORMATION__ONCLICKACTIONBUTTON_B__57_23_OFFSET))(nullptr);
		}

		::System::Void OnClickActionButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFORMATION_ONCLICKACTIONBUTTON_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* __n__0()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFORMATION___N__0_OFFSET))(nullptr);
		}

		::System::Void _OnClickActionButton_b__57_15()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFORMATION__ONCLICKACTIONBUTTON_B__57_15_OFFSET))(nullptr);
		}

		::System::Int32 get_curIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFORMATION_GET_CURINDEX_OFFSET))(nullptr);
		}

		::System::Void _OnClickActionButton_b__57_1(UIPopup_ArenaPlaywait* arg)
		{
			((::System::Void(*)(UIPopup_ArenaPlaywait*, ::PVOID))((::PBYTE)hIl2Cpp + UIFORMATION__ONCLICKACTIONBUTTON_B__57_1_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickRelease()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFORMATION_ONCLICKRELEASE_OFFSET))(nullptr);
		}

		::System::Void _OnClickActionButton_b__57_6(UIPopup_System* arg)
		{
			((::System::Void(*)(UIPopup_System*, ::PVOID))((::PBYTE)hIl2Cpp + UIFORMATION__ONCLICKACTIONBUTTON_B__57_6_OFFSET))(arg, nullptr);
		}

		::System::Void _OnClickActionButton_b__57_19()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFORMATION__ONCLICKACTIONBUTTON_B__57_19_OFFSET))(nullptr);
		}

		::System::Void OnClosed()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFORMATION_ONCLOSED_OFFSET))(nullptr);
		}

		::System::Void _BackWithErrorCode_b__52_3()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFORMATION__BACKWITHERRORCODE_B__52_3_OFFSET))(nullptr);
		}

		::System::Void _OnClickActionButton_b__57_2()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFORMATION__ONCLICKACTIONBUTTON_B__57_2_OFFSET))(nullptr);
		}

		::System::Void _OnClickActionButton_b__57_11()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFORMATION__ONCLICKACTIONBUTTON_B__57_11_OFFSET))(nullptr);
		}

		::System::Void Show3DCharacters(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIFORMATION_SHOW3DCHARACTERS_OFFSET))(arg, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFORMATION_AWAKE_OFFSET))(nullptr);
		}

		::System::Void _OnBack_b__51_1(UIPopup_System* arg)
		{
			((::System::Void(*)(UIPopup_System*, ::PVOID))((::PBYTE)hIl2Cpp + UIFORMATION__ONBACK_B__51_1_OFFSET))(arg, nullptr);
		}

		::System::Void _OnBack_b__51_2()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFORMATION__ONBACK_B__51_2_OFFSET))(nullptr);
		}

		::System::Void OnBack()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFORMATION_ONBACK_OFFSET))(nullptr);
		}

		::System::Void InitWorldRaid(::System::Boolean arg, From* arg2, ::System::Int64 arg3, ::System::Int64 arg4, Il2CppObject* arg5, ::FlatData::StageTopography* arg6, Il2CppObject* arg7, ::System::Int32 arg8, ::System::Boolean arg9)
		{
			((::System::Void(*)(::System::Boolean, From*, ::System::Int64, ::System::Int64, Il2CppObject*, ::FlatData::StageTopography*, Il2CppObject*, ::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIFORMATION_INITWORLDRAID_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, nullptr);
		}

		::System::Void _OnClickActionButton_b__57_24(UIPopup_AssistNotice* arg)
		{
			((::System::Void(*)(UIPopup_AssistNotice*, ::PVOID))((::PBYTE)hIl2Cpp + UIFORMATION__ONCLICKACTIONBUTTON_B__57_24_OFFSET))(arg, nullptr);
		}

		::System::Boolean _OnClickActionButton_b__57_16(TeamPosition* arg)
		{
			return ((::System::Boolean(*)(TeamPosition*, ::PVOID))((::PBYTE)hIl2Cpp + UIFORMATION__ONCLICKACTIONBUTTON_B__57_16_OFFSET))(arg, nullptr);
		}

		::System::Void SetInformationBtnActive(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIFORMATION_SETINFORMATIONBTNACTIVE_OFFSET))(arg, nullptr);
		}

		::System::Void _OnClickActionButton_g__OpenAssistNoticePopup|57_7()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFORMATION__ONCLICKACTIONBUTTON_G__OPENASSISTNOTICEPOPUP|57_7_OFFSET))(nullptr);
		}

		::System::Boolean get_IsTargetFixedEchelon()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFORMATION_GET_ISTARGETFIXEDECHELON_OFFSET))(nullptr);
		}

		::System::Void Init(From* arg, ::System::Int64 arg2, Il2CppObject* arg3, ::FlatData::StageTopography* arg4, Il2CppObject* arg5, ::System::Int32 arg6, ::System::Boolean arg7)
		{
			((::System::Void(*)(From*, ::System::Int64, Il2CppObject*, ::FlatData::StageTopography*, Il2CppObject*, ::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIFORMATION_INIT_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, arg7, nullptr);
		}

		::FlatData::EchelonExtensionType* get_ExtensionType()
		{
			return ((::FlatData::EchelonExtensionType*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFORMATION_GET_EXTENSIONTYPE_OFFSET))(nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFORMATION_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Void _OnClickActionButton_b__57_14(UIPopup_AssistNotice* arg)
		{
			((::System::Void(*)(UIPopup_AssistNotice*, ::PVOID))((::PBYTE)hIl2Cpp + UIFORMATION__ONCLICKACTIONBUTTON_B__57_14_OFFSET))(arg, nullptr);
		}

		::System::Void _OnClickActionButton_b__57_9()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFORMATION__ONCLICKACTIONBUTTON_B__57_9_OFFSET))(nullptr);
		}

		::System::Void set_echelonType(::FlatData::EchelonType* arg)
		{
			((::System::Void(*)(::FlatData::EchelonType*, ::PVOID))((::PBYTE)hIl2Cpp + UIFORMATION_SET_ECHELONTYPE_OFFSET))(arg, nullptr);
		}

		::System::Void _BackWithErrorCode_b__52_2()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFORMATION__BACKWITHERRORCODE_B__52_2_OFFSET))(nullptr);
		}

		::System::Void OnAndroidBackButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFORMATION_ONANDROIDBACKBUTTON_OFFSET))(nullptr);
		}

		::System::Void set_AssistCharacterObject(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIFORMATION_SET_ASSISTCHARACTEROBJECT_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFORMATION_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean _OnClickActionButton_b__57_4(::System::Int64 arg)
		{
			return ((::System::Boolean(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UIFORMATION__ONCLICKACTIONBUTTON_B__57_4_OFFSET))(arg, nullptr);
		}

		::System::Void _OnClickActionButton_b__57_10(UIPopup_AssistNotice* arg)
		{
			((::System::Void(*)(UIPopup_AssistNotice*, ::PVOID))((::PBYTE)hIl2Cpp + UIFORMATION__ONCLICKACTIONBUTTON_B__57_10_OFFSET))(arg, nullptr);
		}

		::System::Void set_curIndex(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UIFORMATION_SET_CURINDEX_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickReadyMenu()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFORMATION_ONCLICKREADYMENU_OFFSET))(nullptr);
		}

		::System::Void _OnClickActionButton_b__57_20(UIPopup_AssistNotice* arg)
		{
			((::System::Void(*)(UIPopup_AssistNotice*, ::PVOID))((::PBYTE)hIl2Cpp + UIFORMATION__ONCLICKACTIONBUTTON_B__57_20_OFFSET))(arg, nullptr);
		}

		::System::Boolean _Awake_b__48_0(::System::Int32 arg)
		{
			return ((::System::Boolean(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UIFORMATION__AWAKE_B__48_0_OFFSET))(arg, nullptr);
		}

		::System::Void _OnClickActionButton_b__57_25()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFORMATION__ONCLICKACTIONBUTTON_B__57_25_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFORMATION_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void set_IsTargetFixedEchelon(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIFORMATION_SET_ISTARGETFIXEDECHELON_OFFSET))(arg, nullptr);
		}

		::System::Void set_SubStageCostAmount(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UIFORMATION_SET_SUBSTAGECOSTAMOUNT_OFFSET))(str, nullptr);
		}

		::System::Boolean SupportAction(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UIFORMATION_SUPPORTACTION_OFFSET))(arg, nullptr);
		}

		::System::Void InitWithEchelonObject(EchelonObject* arg, From* arg2, ::System::Int64 arg3, Il2CppObject* arg4, ::FlatData::StageTopography* arg5, Il2CppObject* arg6, ::System::Int32 arg7, ::System::Boolean arg8)
		{
			((::System::Void(*)(EchelonObject*, From*, ::System::Int64, Il2CppObject*, ::FlatData::StageTopography*, Il2CppObject*, ::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIFORMATION_INITWITHECHELONOBJECT_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, arg7, arg8, nullptr);
		}

		::System::Void _OnClickActionButton_b__57_5(UIPopup_System* arg)
		{
			((::System::Void(*)(UIPopup_System*, ::PVOID))((::PBYTE)hIl2Cpp + UIFORMATION__ONCLICKACTIONBUTTON_B__57_5_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_AssistCharacterObject()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFORMATION_GET_ASSISTCHARACTEROBJECT_OFFSET))(nullptr);
		}

		OpponentListRefreshTimer* get_refreshTimer()
		{
			return ((OpponentListRefreshTimer*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFORMATION_GET_REFRESHTIMER_OFFSET))(nullptr);
		}

		::System::Boolean _OnClickActionButton_b__57_12(::System::Int64 arg)
		{
			return ((::System::Boolean(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UIFORMATION__ONCLICKACTIONBUTTON_B__57_12_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsSkipFormationUIByFixedEchelon(From* arg, ::System::Int64 arg2)
		{
			return ((::System::Boolean(*)(From*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UIFORMATION_ISSKIPFORMATIONUIBYFIXEDECHELON_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void InitArenaOffense(::MX::GameLogic::DBModel::ArenaUserDB* arg, Il2CppObject* arg2, ::FlatData::StageTopography* arg3)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::ArenaUserDB*, Il2CppObject*, ::FlatData::StageTopography*, ::PVOID))((::PBYTE)hIl2Cpp + UIFORMATION_INITARENAOFFENSE_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void _OnClickActionButton_b__57_21()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFORMATION__ONCLICKACTIONBUTTON_B__57_21_OFFSET))(nullptr);
		}

		::System::Void RefreshEchelon()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFORMATION_REFRESHECHELON_OFFSET))(nullptr);
		}

		::System::Boolean OnlyAssistMemberEchelon(EchelonObject* arg)
		{
			return ((::System::Boolean(*)(EchelonObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIFORMATION_ONLYASSISTMEMBERECHELON_OFFSET))(arg, nullptr);
		}

		::System::Void _OnBack_b__51_3()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFORMATION__ONBACK_B__51_3_OFFSET))(nullptr);
		}

		::FlatData::EchelonType* get_echelonType()
		{
			return ((::FlatData::EchelonType*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFORMATION_GET_ECHELONTYPE_OFFSET))(nullptr);
		}

		::System::Void OnEchelonChanged(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIFORMATION_ONECHELONCHANGED_OFFSET))(arg, nullptr);
		}

		::System::Void _OnClickActionButton_b__57_22(UIPopup_AssistNotice* arg)
		{
			((::System::Void(*)(UIPopup_AssistNotice*, ::PVOID))((::PBYTE)hIl2Cpp + UIFORMATION__ONCLICKACTIONBUTTON_B__57_22_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* Co_Loading()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFORMATION_CO_LOADING_OFFSET))(nullptr);
		}

		::System::Void _BackWithErrorCode_b__52_1(UIPopup_System* arg)
		{
			((::System::Void(*)(UIPopup_System*, ::PVOID))((::PBYTE)hIl2Cpp + UIFORMATION__BACKWITHERRORCODE_B__52_1_OFFSET))(arg, nullptr);
		}

		::System::Void OnToggleChanged(::System::Boolean arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::System::Boolean, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UIFORMATION_ONTOGGLECHANGED_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void _OnBack_b__51_0(UIPopup_System* arg)
		{
			((::System::Void(*)(UIPopup_System*, ::PVOID))((::PBYTE)hIl2Cpp + UIFORMATION__ONBACK_B__51_0_OFFSET))(arg, nullptr);
		}

	};

