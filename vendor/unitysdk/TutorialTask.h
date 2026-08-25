#pragma once
#include "unitysdk.h"

namespace MX::Data::Excel { class TutorialExcel; }
class UIBase;
namespace UnityEngine { class Transform; }
class GraphicsConfigModerator;
namespace UnityEngine { class BoxCollider; }
namespace FlatData { class ContentType; }
namespace Assets::_MX::Program::Scripts::Network { class BaseMessage; }

#define TUTORIALTASK_ISTUTORIALSTATE_OFFSET UNITYSDK_OFFSET(0x203C590)
#define TUTORIALTASK_SET_BATTLEFOCUSCHARACTERID_OFFSET UNITYSDK_OFFSET(0x203C5A0)
#define TUTORIALTASK_SET_TUTORIALREPLAY_OFFSET UNITYSDK_OFFSET(0x203C5B0)
#define TUTORIALTASK_AFTERCOMPLETIONTUTORIALSTEPSETTING_OFFSET UNITYSDK_OFFSET(0x203C5C0)
#define TUTORIALTASK_SET_ONETIMETUTORIALTOTALCOUNT_OFFSET UNITYSDK_OFFSET(0x203C870)
#define TUTORIALTASK_SET_WEEKDUNGEONTYPE_OFFSET UNITYSDK_OFFSET(0x203C880)
#define TUTORIALTASK_BATTLEGROUNDCHECKTUTORIAL_OFFSET UNITYSDK_OFFSET(0x203C890)
#define TUTORIALTASK_GET_PROLOGUESCENARIOID_02_OFFSET UNITYSDK_OFFSET(0x203D3B0)
#define TUTORIALTASK_GET_SPEEDBUTTONSTAGEID_OFFSET UNITYSDK_OFFSET(0x203D3C0)
#define TUTORIALTASK_ISTUTORIALHARDOPENTUTORIALSTATECHECK_OFFSET UNITYSDK_OFFSET(0x203D3D0)
#define TUTORIALTASK_GET_ISCANCELABLESKILLCARD_OFFSET UNITYSDK_OFFSET(0x203D3E0)
#define TUTORIALTASK_GET_TUTORIALHEXACOLLIDER_OFFSET UNITYSDK_OFFSET(0x203D3F0)
#define TUTORIALTASK_COSETTUTORIALSCENARIOMODE_OFFSET UNITYSDK_OFFSET(0x203D400)
#define TUTORIALTASK_COPVPLAY_OFFSET UNITYSDK_OFFSET(0x203D4A0)
#define TUTORIALTASK_SETCURTUTORIALCOMPLETIONID_OFFSET UNITYSDK_OFFSET(0x203D520)
#define TUTORIALTASK_SETSKILLBUTTONCOLLIDERS_OFFSET UNITYSDK_OFFSET(0x203CDA0)
#define TUTORIALTASK_GET_ONETIMETUTORIALTOTALCOUNT_OFFSET UNITYSDK_OFFSET(0x203D840)
#define TUTORIALTASK__COMPULSORYTUTORIALSTEPMOVE_B__113_0_OFFSET UNITYSDK_OFFSET(0x203D850)
#define TUTORIALTASK_ISTUTORIALBATTLESKILLSTATECHECK_OFFSET UNITYSDK_OFFSET(0x203DC50)
#define TUTORIALTASK_CREATEGRAPHICSCONFIGMODERATOR_OFFSET UNITYSDK_OFFSET(0x203DCD0)
#define TUTORIALTASK_COMPULSORYTUTORIALSTEPMOVE_OFFSET UNITYSDK_OFFSET(0x203D860)
#define TUTORIALTASK_AFTERPROLOGUETUTORIALSTEP_OFFSET UNITYSDK_OFFSET(0x203C750)
#define TUTORIALTASK_GET_TUTORIALCHARACTERDEFAULTCOUNT_OFFSET UNITYSDK_OFFSET(0x203DE40)
#define TUTORIALTASK_SENDNEXONEVENTFORSTARTTUTORIAL_OFFSET UNITYSDK_OFFSET(0x203DE50)
#define TUTORIALTASK_SET_TUTORIALHEXACLICK_OFFSET UNITYSDK_OFFSET(0x203E010)
#define TUTORIALTASK_GET_TUTORIALPANELDEPTH_OFFSET UNITYSDK_OFFSET(0x203E020)
#define TUTORIALTASK_SET_TUTORIALHEXACOLLIDER_OFFSET UNITYSDK_OFFSET(0x203E030)
#define TUTORIALTASK_GET_TUTORIALSTARTID_OFFSET UNITYSDK_OFFSET(0x203E050)
#define TUTORIALTASK_SETTUTORIALSCENARIOMODE_OFFSET UNITYSDK_OFFSET(0x203DD70)
#define TUTORIALTASK_SETSKIPTUTORIALIDS_OFFSET UNITYSDK_OFFSET(0x203E060)
#define TUTORIALTASK_CHECKCOMPULSORYTUTORIAL1OR2_OFFSET UNITYSDK_OFFSET(0x203E460)
#define TUTORIALTASK_UIOPENCHECKTUTORIAL_OFFSET UNITYSDK_OFFSET(0x203CE50)
#define TUTORIALTASK_ISTUTORIALPROLOGUEBATTLESTATECHECK_OFFSET UNITYSDK_OFFSET(0x203F120)
#define TUTORIALTASK_SENDNEXONEVENTFORENDTUTORIAL_OFFSET UNITYSDK_OFFSET(0x203F1B0)
#define TUTORIALTASK_AFTERCAMPAIGNTUTORIALSTEP_OFFSET UNITYSDK_OFFSET(0x203F410)
#define TUTORIALTASK_SYNCTUTORIALSETCOMPLETIONIDS_OFFSET UNITYSDK_OFFSET(0x203D660)
#define TUTORIALTASK_UIOPENEDMESSAGE_OFFSET UNITYSDK_OFFSET(0x203F480)
#define TUTORIALTASK_SET_TUTORIALPANELDEPTH_OFFSET UNITYSDK_OFFSET(0x2040BC0)
#define TUTORIALTASK_ISTUTORIALCHARACTERPIECESTATECHECK_OFFSET UNITYSDK_OFFSET(0x2040BD0)
#define TUTORIALTASK_CHECKCOMPULSORYTUTORIAL_OFFSET UNITYSDK_OFFSET(0x2040BE0)
#define TUTORIALTASK_SET_PROLOGUESCENARIOID_02_OFFSET UNITYSDK_OFFSET(0x2040D50)
#define TUTORIALTASK_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x2040D60)
#define TUTORIALTASK_GET_BATTLEFOCUSCHARACTERID_OFFSET UNITYSDK_OFFSET(0x2041360)
#define TUTORIALTASK_ISTUTORIALSTAGECHECK_OFFSET UNITYSDK_OFFSET(0x2041370)
#define TUTORIALTASK_SET_HARDSTAGE1_1_OFFSET UNITYSDK_OFFSET(0x20413E0)
#define TUTORIALTASK_ISGACHATUTORIALCOMPLETIONCHECK_OFFSET UNITYSDK_OFFSET(0x2040BB0)
#define TUTORIALTASK_ISRESEMARATUTORIALCOMPLETIONCHECK_OFFSET UNITYSDK_OFFSET(0x20413F0)
#define TUTORIALTASK_ISTUTORIALSTRATEGYSKIPSTATECHECK_OFFSET UNITYSDK_OFFSET(0x2041400)
#define TUTORIALTASK_MODERATEGRAPHICSCONFIG_OFFSET UNITYSDK_OFFSET(0x2041410)
#define TUTORIALTASK_SET_ISOPENESCABLETUTORIALPOPUP_OFFSET UNITYSDK_OFFSET(0x20414A0)
#define TUTORIALTASK_SYNCTUTORIALGETCOMPLETIONIDS_OFFSET UNITYSDK_OFFSET(0x20414B0)
#define TUTORIALTASK_GET_HARDSTAGE1_1_OFFSET UNITYSDK_OFFSET(0x20415E0)
#define TUTORIALTASK__NEXT_B__123_1_OFFSET UNITYSDK_OFFSET(0x20415F0)
#define TUTORIALTASK_GET_ISPLAYTUTORIAL_OFFSET UNITYSDK_OFFSET(0x2041600)
#define TUTORIALTASK_GET_PROLOGUESCENARIOID_01_OFFSET UNITYSDK_OFFSET(0x2041610)
#define TUTORIALTASK_RELEASE_OFFSET UNITYSDK_OFFSET(0x2041620)
#define TUTORIALTASK_ISTUTORIALADVENTUREBATTLESTATECHECK_OFFSET UNITYSDK_OFFSET(0x20417A0)
#define TUTORIALTASK_ISTUTORIALSTAGEBATTLESTATECHECK_OFFSET UNITYSDK_OFFSET(0x20417B0)
#define TUTORIALTASK_RESUMTIMESCALE_OFFSET UNITYSDK_OFFSET(0x2041800)
#define TUTORIALTASK_GET_ISOPENESCABLETUTORIALPOPUP_OFFSET UNITYSDK_OFFSET(0x20418B0)
#define TUTORIALTASK_SETTUTORIALWEEKDUNGEONLOBBYSTARTCONDITIONID_OFFSET UNITYSDK_OFFSET(0x20418C0)
#define TUTORIALTASK_NEXT_OFFSET UNITYSDK_OFFSET(0x203E8B0)
#define TUTORIALTASK_SKIPBACKBUTTON_OFFSET UNITYSDK_OFFSET(0x2041B10)
#define TUTORIALTASK_SET_SPEEDBUTTONSTAGEID_OFFSET UNITYSDK_OFFSET(0x2041B40)
#define TUTORIALTASK_UIPOPUPTOOLTIPTUTORIALNEXT_OFFSET UNITYSDK_OFFSET(0x2041B50)
#define TUTORIALTASK_SET_TUTORIALSTARTID_OFFSET UNITYSDK_OFFSET(0x2041BC0)
#define TUTORIALTASK_INVOKETUTORIALENDCALLBACK_OFFSET UNITYSDK_OFFSET(0x2041AB0)
#define TUTORIALTASK_SETTUTORIALSTAGEGIVEUP_OFFSET UNITYSDK_OFFSET(0x2041BD0)
#define TUTORIALTASK_TUTORIALCOMPLETIONIDSCHECK_OFFSET UNITYSDK_OFFSET(0x2041CF0)
#define TUTORIALTASK_SETTUTORIALSTARTCONDITIONID_OFFSET UNITYSDK_OFFSET(0x20421F0)
#define TUTORIALTASK_SET_ISCANCELABLESKILLCARD_OFFSET UNITYSDK_OFFSET(0x2042220)
#define TUTORIALTASK_STARTCOMPULSORYTUTORIAL_OFFSET UNITYSDK_OFFSET(0x2042230)
#define TUTORIALTASK_CALLCHECKTUTORIAL_OFFSET UNITYSDK_OFFSET(0x20423E0)
#define TUTORIALTASK_TUTORIALSTAGESELECTSTARTCONDITIONCHECK_OFFSET UNITYSDK_OFFSET(0x203FDB0)
#define TUTORIALTASK_ISONETIMETUTORIALALLEND_OFFSET UNITYSDK_OFFSET(0x203E670)
#define TUTORIALTASK_SETSKIPCOMPULSORYTUTORIALIDS_OFFSET UNITYSDK_OFFSET(0x2042650)
#define TUTORIALTASK_ISTUTORIALCOMPLETIONCHECK_OFFSET UNITYSDK_OFFSET(0x203CCD0)
#define TUTORIALTASK_GET_WEEKDUNGEONTYPE_OFFSET UNITYSDK_OFFSET(0x2042840)
#define TUTORIALTASK_TUTORIALLOBBYSTARTCONDITIONCHECK_OFFSET UNITYSDK_OFFSET(0x20402F0)
#define TUTORIALTASK_.CTOR_OFFSET UNITYSDK_OFFSET(0x2042850)
#define TUTORIALTASK_SET_ISPLAYTUTORIAL_OFFSET UNITYSDK_OFFSET(0x2042900)
#define TUTORIALTASK__NEXT_B__123_2_OFFSET UNITYSDK_OFFSET(0x2042910)
#define TUTORIALTASK_GET_TUTORIALHEXACLICK_OFFSET UNITYSDK_OFFSET(0x2042980)
#define TUTORIALTASK_SET_PROLOGUESCENARIOID_01_OFFSET UNITYSDK_OFFSET(0x2042990)
#define TUTORIALTASK_SET_TUTORIALCHARACTERDEFAULTCOUNT_OFFSET UNITYSDK_OFFSET(0x20429A0)
#define TUTORIALTASK_SETTUTORIALDEPTH_OFFSET UNITYSDK_OFFSET(0x2041910)
#define TUTORIALTASK_GET_TUTORIALREPLAY_OFFSET UNITYSDK_OFFSET(0x20429B0)

	inline static constexpr unsigned int TutorialTask_TypeDefinitionIndex = 3257;

	class TutorialTask : public Il2CppObject
	{
	public:
		Il2CppObject* tutorialList; // 0x10
		Il2CppObject* compulsoryTutorialList; // 0x18
		Il2CppObject* oneTimeTutorialList; // 0x20
		Il2CppObject* tutorialStageIdList; // 0x28
		::MX::Data::Excel::TutorialExcel* tutorialExcel; // 0x30
		UIBase* tutorialOpenUIBase; // 0x40
		::UnityEngine::Transform* tutorialParent; // 0x48
		::UnityEngine::Transform* tutorialChild; // 0x50
		GraphicsConfigModerator* graphicsConfigModerator; // 0x58
		Il2CppObject* tutorialStepUiNames; // 0x60
		::System::Int32 tutorialParentStepIndex; // 0x68
		::System::Int32 childCurIndex; // 0x6C
		::System::Int64 _PrologueScenarioID_01_k__BackingField; // 0x70
		::System::Int64 _PrologueScenarioID_02_k__BackingField; // 0x78
		::System::Int64 _HardStage1_1_k__BackingField; // 0x80
		::System::Int64 _SpeedButtonStageID_k__BackingField; // 0x88
		::System::Int64 _TutorialCharacterDefaultCount_k__BackingField; // 0x90
		::System::Action* TutorialHexaOnClick; // 0x98
		::System::Action* TutorialEndCallback; // 0xA0
		::System::Int64 _TutorialStartID_k__BackingField; // 0xA8
		::System::Boolean _TutorialHexaClick_k__BackingField; // 0xB0
		::UnityEngine::BoxCollider* _TutorialHexaCollider_k__BackingField; // 0xB8
		::System::Int64 _BattleFocusCharacterID_k__BackingField; // 0xC0
		::System::Int32 _oneTimeTutorialTotalCount_k__BackingField; // 0xC8
		::System::Boolean _TutorialRePlay_k__BackingField; // 0xCC
		::System::Int32 _TutorialPanelDepth_k__BackingField; // 0xD0
		::FlatData::ContentType* _WeekDungeonType_k__BackingField; // 0xD4
		::System::Boolean _IsPlayTutorial_k__BackingField; // 0xD8
		::System::Boolean _IsOpenEscableTutorialPopup_k__BackingField; // 0xD9
		::System::Boolean _IsCancelableSkillCard_k__BackingField; // 0xDA
		::System::Boolean isSkillButtonCollider; // 0xDB
		::System::Int64 currentTutorialId; // 0xE0
		::System::Int64 TutorialID_01; // 0x0
		::System::Int64 TutorialID_02; // 0x0
		::System::Int64 TutorialID_03; // 0x0
		::System::Int64 TutorialID_04; // 0x0
		::System::Int64 TutorialID_05; // 0x0
		::System::Int64 TutorialID_06; // 0x0
		::System::Int64 TutorialID_07; // 0x0
		::System::Int64 TutorialID_09; // 0x0
		::System::Int64 TutorialID_10; // 0x0
		::System::Int64 TutorialID_11; // 0x0
		::System::Int64 TutorialID_12; // 0x0
		::System::Int64 TutorialID_13; // 0x0
		::System::Int64 TutorialID_14; // 0x0
		::System::Int64 TutorialID_15; // 0x0
		::System::Int64 TutorialID_16; // 0x0
		::System::Int64 TutorialID_18; // 0x0
		::System::Int64 TutorialID_19; // 0x0
		::System::Int64 TutorialID_20; // 0x0
		::System::Int64 TutorialID_21; // 0x0
		::System::Int64 TutorialID_22; // 0x0
		::System::Int64 TutorialID_23; // 0x0
		::System::Int64 TutorialID_24; // 0x0
		::System::Int64 TutorialID_25; // 0x0
		::System::Int64 TutorialID_26; // 0x0
		::System::Int64 TutorialID_27; // 0x0
		::System::Int64 TutorialStageID; // 0xE8
		::System::Boolean TutorialStageGiveUp; // 0xF0
		::System::Int64 TutorialConditionStartID; // 0xF8

		::System::Boolean IsTutorialState()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + TUTORIALTASK_ISTUTORIALSTATE_OFFSET))(nullptr);
		}

		::System::Void set_BattleFocusCharacterID(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + TUTORIALTASK_SET_BATTLEFOCUSCHARACTERID_OFFSET))(arg, nullptr);
		}

		::System::Void set_TutorialRePlay(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + TUTORIALTASK_SET_TUTORIALREPLAY_OFFSET))(arg, nullptr);
		}

		::System::Void AfterCompletionTutorialStepSetting(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + TUTORIALTASK_AFTERCOMPLETIONTUTORIALSTEPSETTING_OFFSET))(arg, nullptr);
		}

		::System::Void set_oneTimeTutorialTotalCount(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + TUTORIALTASK_SET_ONETIMETUTORIALTOTALCOUNT_OFFSET))(arg, nullptr);
		}

		::System::Void set_WeekDungeonType(::FlatData::ContentType* arg)
		{
			((::System::Void(*)(::FlatData::ContentType*, ::PVOID))((::PBYTE)hIl2Cpp + TUTORIALTASK_SET_WEEKDUNGEONTYPE_OFFSET))(arg, nullptr);
		}

		::System::Void BattleGroundCheckTutorial(::System::Int64 arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + TUTORIALTASK_BATTLEGROUNDCHECKTUTORIAL_OFFSET))(arg, arg2, nullptr);
		}

		::System::Int64 get_PrologueScenarioID_02()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + TUTORIALTASK_GET_PROLOGUESCENARIOID_02_OFFSET))(nullptr);
		}

		::System::Int64 get_SpeedButtonStageID()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + TUTORIALTASK_GET_SPEEDBUTTONSTAGEID_OFFSET))(nullptr);
		}

		::System::Boolean IsTutorialHardOpenTutorialStateCheck()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + TUTORIALTASK_ISTUTORIALHARDOPENTUTORIALSTATECHECK_OFFSET))(nullptr);
		}

		::System::Boolean get_IsCancelableSkillCard()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + TUTORIALTASK_GET_ISCANCELABLESKILLCARD_OFFSET))(nullptr);
		}

		::UnityEngine::BoxCollider* get_TutorialHexaCollider()
		{
			return ((::UnityEngine::BoxCollider*(*)(::PVOID))((::PBYTE)hIl2Cpp + TUTORIALTASK_GET_TUTORIALHEXACOLLIDER_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* CoSetTutorialScenarioMode(::System::Int64 arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + TUTORIALTASK_COSETTUTORIALSCENARIOMODE_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* CoPvPlay()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + TUTORIALTASK_COPVPLAY_OFFSET))(nullptr);
		}

		::System::Void SetCurTutorialCompletionId(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + TUTORIALTASK_SETCURTUTORIALCOMPLETIONID_OFFSET))(arg, nullptr);
		}

		::System::Void SetSkillButtonColliders(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + TUTORIALTASK_SETSKILLBUTTONCOLLIDERS_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_oneTimeTutorialTotalCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + TUTORIALTASK_GET_ONETIMETUTORIALTOTALCOUNT_OFFSET))(nullptr);
		}

		::System::Void _CompulsoryTutorialStepMove_b__113_0()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TUTORIALTASK__COMPULSORYTUTORIALSTEPMOVE_B__113_0_OFFSET))(nullptr);
		}

		::System::Boolean IsTutorialBattleSkillStateCheck()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + TUTORIALTASK_ISTUTORIALBATTLESKILLSTATECHECK_OFFSET))(nullptr);
		}

		::System::Void CreateGraphicsConfigModerator()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TUTORIALTASK_CREATEGRAPHICSCONFIGMODERATOR_OFFSET))(nullptr);
		}

		::System::Void CompulsoryTutorialStepMove(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + TUTORIALTASK_COMPULSORYTUTORIALSTEPMOVE_OFFSET))(arg, nullptr);
		}

		::System::Void AfterPrologueTutorialStep(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + TUTORIALTASK_AFTERPROLOGUETUTORIALSTEP_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_TutorialCharacterDefaultCount()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + TUTORIALTASK_GET_TUTORIALCHARACTERDEFAULTCOUNT_OFFSET))(nullptr);
		}

		::System::Void SendNexonEventForStartTutorial(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + TUTORIALTASK_SENDNEXONEVENTFORSTARTTUTORIAL_OFFSET))(arg, nullptr);
		}

		::System::Void set_TutorialHexaClick(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + TUTORIALTASK_SET_TUTORIALHEXACLICK_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_TutorialPanelDepth()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + TUTORIALTASK_GET_TUTORIALPANELDEPTH_OFFSET))(nullptr);
		}

		::System::Void set_TutorialHexaCollider(::UnityEngine::BoxCollider* arg)
		{
			((::System::Void(*)(::UnityEngine::BoxCollider*, ::PVOID))((::PBYTE)hIl2Cpp + TUTORIALTASK_SET_TUTORIALHEXACOLLIDER_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_TutorialStartID()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + TUTORIALTASK_GET_TUTORIALSTARTID_OFFSET))(nullptr);
		}

		::System::Void SetTutorialScenarioMode(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + TUTORIALTASK_SETTUTORIALSCENARIOMODE_OFFSET))(arg, nullptr);
		}

		::System::Void SetSkipTutorialIds()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TUTORIALTASK_SETSKIPTUTORIALIDS_OFFSET))(nullptr);
		}

		::System::Boolean CheckCompulsoryTutorial1Or2()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + TUTORIALTASK_CHECKCOMPULSORYTUTORIAL1OR2_OFFSET))(nullptr);
		}

		::System::Void UiOpenCheckTutorial(::System::String* str, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::String*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + TUTORIALTASK_UIOPENCHECKTUTORIAL_OFFSET))(str, arg, nullptr);
		}

		::System::Boolean IsTutorialPrologueBattleStateCheck()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + TUTORIALTASK_ISTUTORIALPROLOGUEBATTLESTATECHECK_OFFSET))(nullptr);
		}

		::System::Void SendNexonEventForEndTutorial(::System::Int64 arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + TUTORIALTASK_SENDNEXONEVENTFORENDTUTORIAL_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AfterCampaignTutorialStep()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TUTORIALTASK_AFTERCAMPAIGNTUTORIALSTEP_OFFSET))(nullptr);
		}

		::System::Void SyncTutorialSetCompletionIds(::System::Boolean arg, ::System::Action* arg2)
		{
			((::System::Void(*)(::System::Boolean, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + TUTORIALTASK_SYNCTUTORIALSETCOMPLETIONIDS_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean UIOpenedMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + TUTORIALTASK_UIOPENEDMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Void set_TutorialPanelDepth(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + TUTORIALTASK_SET_TUTORIALPANELDEPTH_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsTutorialCharacterPieceStateCheck()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + TUTORIALTASK_ISTUTORIALCHARACTERPIECESTATECHECK_OFFSET))(nullptr);
		}

		::System::Boolean CheckCompulsoryTutorial()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + TUTORIALTASK_CHECKCOMPULSORYTUTORIAL_OFFSET))(nullptr);
		}

		::System::Void set_PrologueScenarioID_02(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + TUTORIALTASK_SET_PROLOGUESCENARIOID_02_OFFSET))(arg, nullptr);
		}

		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TUTORIALTASK_INITIALIZE_OFFSET))(nullptr);
		}

		::System::Int64 get_BattleFocusCharacterID()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + TUTORIALTASK_GET_BATTLEFOCUSCHARACTERID_OFFSET))(nullptr);
		}

		::System::Boolean IsTutorialStageCheck(::System::Int64 arg)
		{
			return ((::System::Boolean(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + TUTORIALTASK_ISTUTORIALSTAGECHECK_OFFSET))(arg, nullptr);
		}

		::System::Void set_HardStage1_1(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + TUTORIALTASK_SET_HARDSTAGE1_1_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsGachaTutorialCompletionCheck()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + TUTORIALTASK_ISGACHATUTORIALCOMPLETIONCHECK_OFFSET))(nullptr);
		}

		::System::Boolean IsReseMaraTutorialCompletionCheck()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + TUTORIALTASK_ISRESEMARATUTORIALCOMPLETIONCHECK_OFFSET))(nullptr);
		}

		::System::Boolean IsTutorialStrategySkipStateCheck()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + TUTORIALTASK_ISTUTORIALSTRATEGYSKIPSTATECHECK_OFFSET))(nullptr);
		}

		::System::Void ModerateGraphicsConfig()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TUTORIALTASK_MODERATEGRAPHICSCONFIG_OFFSET))(nullptr);
		}

		::System::Void set_IsOpenEscableTutorialPopup(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + TUTORIALTASK_SET_ISOPENESCABLETUTORIALPOPUP_OFFSET))(arg, nullptr);
		}

		::System::Void SyncTutorialGetCompletionIds(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + TUTORIALTASK_SYNCTUTORIALGETCOMPLETIONIDS_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_HardStage1_1()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + TUTORIALTASK_GET_HARDSTAGE1_1_OFFSET))(nullptr);
		}

		::System::Void _Next_b__123_1()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TUTORIALTASK__NEXT_B__123_1_OFFSET))(nullptr);
		}

		::System::Boolean get_IsPlayTutorial()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + TUTORIALTASK_GET_ISPLAYTUTORIAL_OFFSET))(nullptr);
		}

		::System::Int64 get_PrologueScenarioID_01()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + TUTORIALTASK_GET_PROLOGUESCENARIOID_01_OFFSET))(nullptr);
		}

		::System::Void Release()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TUTORIALTASK_RELEASE_OFFSET))(nullptr);
		}

		::System::Boolean IsTutorialAdventureBattleStateCheck()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + TUTORIALTASK_ISTUTORIALADVENTUREBATTLESTATECHECK_OFFSET))(nullptr);
		}

		::System::Boolean IsTutorialStageBattleStateCheck(::System::Int64 arg)
		{
			return ((::System::Boolean(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + TUTORIALTASK_ISTUTORIALSTAGEBATTLESTATECHECK_OFFSET))(arg, nullptr);
		}

		::System::Void ResumTimeScale()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TUTORIALTASK_RESUMTIMESCALE_OFFSET))(nullptr);
		}

		::System::Boolean get_IsOpenEscableTutorialPopup()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + TUTORIALTASK_GET_ISOPENESCABLETUTORIALPOPUP_OFFSET))(nullptr);
		}

		::System::Void SetTutorialWeekDungeonLobbyStartConditionID()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TUTORIALTASK_SETTUTORIALWEEKDUNGEONLOBBYSTARTCONDITIONID_OFFSET))(nullptr);
		}

		::System::Void Next(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + TUTORIALTASK_NEXT_OFFSET))(arg, nullptr);
		}

		::System::Boolean SkipBackButton()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + TUTORIALTASK_SKIPBACKBUTTON_OFFSET))(nullptr);
		}

		::System::Void set_SpeedButtonStageID(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + TUTORIALTASK_SET_SPEEDBUTTONSTAGEID_OFFSET))(arg, nullptr);
		}

		::System::Void UIPopupTooltipTutorialNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TUTORIALTASK_UIPOPUPTOOLTIPTUTORIALNEXT_OFFSET))(nullptr);
		}

		::System::Void set_TutorialStartID(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + TUTORIALTASK_SET_TUTORIALSTARTID_OFFSET))(arg, nullptr);
		}

		::System::Void InvokeTutorialEndCallback()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TUTORIALTASK_INVOKETUTORIALENDCALLBACK_OFFSET))(nullptr);
		}

		::System::Void SetTutorialStageGiveUp()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TUTORIALTASK_SETTUTORIALSTAGEGIVEUP_OFFSET))(nullptr);
		}

		::System::Void TutorialCompletionIdsCheck()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TUTORIALTASK_TUTORIALCOMPLETIONIDSCHECK_OFFSET))(nullptr);
		}

		::System::Void SetTutorialStartConditionID(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + TUTORIALTASK_SETTUTORIALSTARTCONDITIONID_OFFSET))(arg, nullptr);
		}

		::System::Void set_IsCancelableSkillCard(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + TUTORIALTASK_SET_ISCANCELABLESKILLCARD_OFFSET))(arg, nullptr);
		}

		::System::Void StartCompulsoryTutorial()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TUTORIALTASK_STARTCOMPULSORYTUTORIAL_OFFSET))(nullptr);
		}

		::System::Void CallCheckTutorial(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + TUTORIALTASK_CALLCHECKTUTORIAL_OFFSET))(str, nullptr);
		}

		::System::Boolean TutorialStageSelectStartConditionCheck()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + TUTORIALTASK_TUTORIALSTAGESELECTSTARTCONDITIONCHECK_OFFSET))(nullptr);
		}

		::System::Boolean IsOneTimeTutorialAllEnd()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + TUTORIALTASK_ISONETIMETUTORIALALLEND_OFFSET))(nullptr);
		}

		::System::Void SetSkipCompulsoryTutorialIds()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TUTORIALTASK_SETSKIPCOMPULSORYTUTORIALIDS_OFFSET))(nullptr);
		}

		::System::Boolean IsTutorialCompletionCheck(::System::Int64 arg)
		{
			return ((::System::Boolean(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + TUTORIALTASK_ISTUTORIALCOMPLETIONCHECK_OFFSET))(arg, nullptr);
		}

		::FlatData::ContentType* get_WeekDungeonType()
		{
			return ((::FlatData::ContentType*(*)(::PVOID))((::PBYTE)hIl2Cpp + TUTORIALTASK_GET_WEEKDUNGEONTYPE_OFFSET))(nullptr);
		}

		::System::Boolean TutorialLobbyStartConditionCheck()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + TUTORIALTASK_TUTORIALLOBBYSTARTCONDITIONCHECK_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TUTORIALTASK_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_IsPlayTutorial(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + TUTORIALTASK_SET_ISPLAYTUTORIAL_OFFSET))(arg, nullptr);
		}

		::System::Void _Next_b__123_2()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TUTORIALTASK__NEXT_B__123_2_OFFSET))(nullptr);
		}

		::System::Boolean get_TutorialHexaClick()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + TUTORIALTASK_GET_TUTORIALHEXACLICK_OFFSET))(nullptr);
		}

		::System::Void set_PrologueScenarioID_01(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + TUTORIALTASK_SET_PROLOGUESCENARIOID_01_OFFSET))(arg, nullptr);
		}

		::System::Void set_TutorialCharacterDefaultCount(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + TUTORIALTASK_SET_TUTORIALCHARACTERDEFAULTCOUNT_OFFSET))(arg, nullptr);
		}

		::System::Void SetTutorialDepth()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TUTORIALTASK_SETTUTORIALDEPTH_OFFSET))(nullptr);
		}

		::System::Boolean get_TutorialRePlay()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + TUTORIALTASK_GET_TUTORIALREPLAY_OFFSET))(nullptr);
		}

	};

