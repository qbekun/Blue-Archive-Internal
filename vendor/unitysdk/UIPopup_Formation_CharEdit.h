#pragma once
#include "unitysdk.h"

class FormationCharEditScrollViewController;
class UICharacterSort;
class UIPopup_Formation_CharEdit_BottomUI;
class UIPopup_Formation_CharEdit_CharacterInfo;
namespace UnityEngine { class GameObject; }
class MXButton;
class GroupBuffButton;
class EnemyInfoButton;
class IntTabController;
class UILabel;
namespace UnityEngine { class Transform; }
class MXToggle;
class ClearDeckButton;
class UIFormationNameSearch;
namespace FlatData { class SquadType; }
namespace MX::GameLogic::DBModel { class EchelonPresetDB; }
class UIDragScrollView;
class FormationModel;
namespace FlatData { class BulletType; }
namespace FlatData { class ArmorType; }
class CharacterObject;
namespace MX::Data { class EventContentStageInfo; }
namespace FlatData { class EchelonType; }
namespace Assets::_MX::Program::Scripts::Network { class BaseMessage; }
class SortingRule;
class UIFormation;
class UICharacterCard;
namespace MX::NetworkProtocol { class ErrorPacket; }
class EchelonSlots;
namespace MX::Data::Excel { class ConquestGroupBuffExcel; }
namespace FlatData { class EchelonExtensionType; }
namespace MX::GameLogic::DBModel { class RaidTeamSettingDB; }
class NameSearchResult;
namespace MX::GameLogic::DBModel { class AssistCharacterDB; }
class UIPopupFormationCharSlot;

#define UIPOPUP_FORMATION_CHAREDIT_ONCHANGESCROLLVIEWSIZETOGGLE_OFFSET UNITYSDK_OFFSET(0x2550100)
#define UIPOPUP_FORMATION_CHAREDIT__SETGROUNDID_G__ERRORHANDLING|106_0_OFFSET UNITYSDK_OFFSET(0x2550540)
#define UIPOPUP_FORMATION_CHAREDIT_ONMYORASSISTFILTERTABCHANGED_OFFSET UNITYSDK_OFFSET(0x2550560)
#define UIPOPUP_FORMATION_CHAREDIT_RESETSCROLLBAR_OFFSET UNITYSDK_OFFSET(0x25504F0)
#define UIPOPUP_FORMATION_CHAREDIT_AUTOSORT_OFFSET UNITYSDK_OFFSET(0x25505B0)
#define UIPOPUP_FORMATION_CHAREDIT_REQUESTALLASSISTLIST_OFFSET UNITYSDK_OFFSET(0x25510F0)
#define UIPOPUP_FORMATION_CHAREDIT_REFRESHSTYLES_OFFSET UNITYSDK_OFFSET(0x2551160)
#define UIPOPUP_FORMATION_CHAREDIT_ONCLOSED_OFFSET UNITYSDK_OFFSET(0x25511F0)
#define UIPOPUP_FORMATION_CHAREDIT_SETMYORASSISTFILTERTAB_OFFSET UNITYSDK_OFFSET(0x25517C0)
#define UIPOPUP_FORMATION_CHAREDIT_ASSISTFORMATIONCHECK_OFFSET UNITYSDK_OFFSET(0x2551A10)
#define UIPOPUP_FORMATION_CHAREDIT_ONBACK_OFFSET UNITYSDK_OFFSET(0x2552320)
#define UIPOPUP_FORMATION_CHAREDIT_AWAKE_OFFSET UNITYSDK_OFFSET(0x25525A0)
#define UIPOPUP_FORMATION_CHAREDIT_HANDLECOMBATSTYLECHANGED_OFFSET UNITYSDK_OFFSET(0x2552AD0)
#define UIPOPUP_FORMATION_CHAREDIT__AUTOSORT_G__GETTOTALVALIDBONUS|97_4_OFFSET UNITYSDK_OFFSET(0x2550D80)
#define UIPOPUP_FORMATION_CHAREDIT_ONSORT_OFFSET UNITYSDK_OFFSET(0x2552B40)
#define UIPOPUP_FORMATION_CHAREDIT_SETBOTTOMUIBYEXTENSIONTYPE_OFFSET UNITYSDK_OFFSET(0x25547D0)
#define UIPOPUP_FORMATION_CHAREDIT_SAVEPRESET_OFFSET UNITYSDK_OFFSET(0x2554A00)
#define UIPOPUP_FORMATION_CHAREDIT__ONSORT_G__UPDATESCROLLVIEW|74_7_OFFSET UNITYSDK_OFFSET(0x25543D0)
#define UIPOPUP_FORMATION_CHAREDIT__AUTOSORT_G__ISVALIDEVENT|97_0_OFFSET UNITYSDK_OFFSET(0x2550D30)
#define UIPOPUP_FORMATION_CHAREDIT_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x2555030)
#define UIPOPUP_FORMATION_CHAREDIT_GETUIFORMATION_OFFSET UNITYSDK_OFFSET(0x25550C0)
#define UIPOPUP_FORMATION_CHAREDIT_SETPERSONALITYIDS_OFFSET UNITYSDK_OFFSET(0x25552C0)
#define UIPOPUP_FORMATION_CHAREDIT__ONSORT_G__SETCHARACTERDETAILIDS|74_6_OFFSET UNITYSDK_OFFSET(0x25544F0)
#define UIPOPUP_FORMATION_CHAREDIT_CANCELCHANGESTYLE_OFFSET UNITYSDK_OFFSET(0x25524C0)
#define UIPOPUP_FORMATION_CHAREDIT_ONCLICKSLOT_OFFSET UNITYSDK_OFFSET(0x2555B90)
#define UIPOPUP_FORMATION_CHAREDIT_SAVEECHELON_OFFSET UNITYSDK_OFFSET(0x2556D40)
#define UIPOPUP_FORMATION_CHAREDIT_COERRORCLANASSISTCHARACTERCHANGED_OFFSET UNITYSDK_OFFSET(0x2556DB0)
#define UIPOPUP_FORMATION_CHAREDIT_GET_ECHELONSLOTS_OFFSET UNITYSDK_OFFSET(0x25511D0)
#define UIPOPUP_FORMATION_CHAREDIT__ONSORT_G__ISASSISTCHARTODAYUSECOMPLETE|74_3_OFFSET UNITYSDK_OFFSET(0x2556E30)
#define UIPOPUP_FORMATION_CHAREDIT__AUTOSORT_G__GETSCHOOLBONUS|97_3_OFFSET UNITYSDK_OFFSET(0x2550CA0)
#define UIPOPUP_FORMATION_CHAREDIT_ADDSCROLLVIEWITEMS_OFFSET UNITYSDK_OFFSET(0x2554FC0)
#define UIPOPUP_FORMATION_CHAREDIT_SETLEADERMARK_OFFSET UNITYSDK_OFFSET(0x2555ED0)
#define UIPOPUP_FORMATION_CHAREDIT_INITIALIZECOMPONENTS_OFFSET UNITYSDK_OFFSET(0x2557020)
#define UIPOPUP_FORMATION_CHAREDIT_DISABLESLOT_OFFSET UNITYSDK_OFFSET(0x2555E80)
#define UIPOPUP_FORMATION_CHAREDIT__ONSORT_G__CATEGORIZECHARACTERS|74_1_OFFSET UNITYSDK_OFFSET(0x2553190)
#define UIPOPUP_FORMATION_CHAREDIT__ONSORT_G__GETFINALSORTEDLIST|74_2_OFFSET UNITYSDK_OFFSET(0x2553C90)
#define UIPOPUP_FORMATION_CHAREDIT_REFRESHGROUPBUFF_OFFSET UNITYSDK_OFFSET(0x2556CC0)
#define UIPOPUP_FORMATION_CHAREDIT_GETCONQUESTASSISTREMAINCOUNT_OFFSET UNITYSDK_OFFSET(0x2557B00)
#define UIPOPUP_FORMATION_CHAREDIT_ONOPENED_OFFSET UNITYSDK_OFFSET(0x2557B90)
#define UIPOPUP_FORMATION_CHAREDIT__ONSORT_G__ISASSISTCHARINSAMEECHELON|74_4_OFFSET UNITYSDK_OFFSET(0x2557AB0)
#define UIPOPUP_FORMATION_CHAREDIT_SETCONQUESTUSECOUNT_OFFSET UNITYSDK_OFFSET(0x2558060)
#define UIPOPUP_FORMATION_CHAREDIT_ERRORCLANASSISTCHARACTERCHANGED_OFFSET UNITYSDK_OFFSET(0x2558560)
#define UIPOPUP_FORMATION_CHAREDIT_INITSCROLLVIEWS_OFFSET UNITYSDK_OFFSET(0x2558680)
#define UIPOPUP_FORMATION_CHAREDIT_REFRESHCARDS_OFFSET UNITYSDK_OFFSET(0x2558AC0)
#define UIPOPUP_FORMATION_CHAREDIT__ONSORT_G__GETFORMATIONCHARINFO|74_5_OFFSET UNITYSDK_OFFSET(0x2553E20)
#define UIPOPUP_FORMATION_CHAREDIT__SETTSSINTERACTION_G__GETVALIDTSSDATA|113_2_OFFSET UNITYSDK_OFFSET(0x2558B30)
#define UIPOPUP_FORMATION_CHAREDIT_REFRESH_OFFSET UNITYSDK_OFFSET(0x2558BA0)
#define UIPOPUP_FORMATION_CHAREDIT___N__0_OFFSET UNITYSDK_OFFSET(0x255A3A0)
#define UIPOPUP_FORMATION_CHAREDIT_INITIALIZEFROMPRESET_OFFSET UNITYSDK_OFFSET(0x255A3B0)
#define UIPOPUP_FORMATION_CHAREDIT_GET_MAINCHARACTERSLOTS_OFFSET UNITYSDK_OFFSET(0x2554F00)
#define UIPOPUP_FORMATION_CHAREDIT__ONCLICKOK_B__82_1_OFFSET UNITYSDK_OFFSET(0x255A470)
#define UIPOPUP_FORMATION_CHAREDIT__ONCLICKSLOT_G__DESELECTSCROLLVIEWCHARACTERCARD|75_0_OFFSET UNITYSDK_OFFSET(0x2556450)
#define UIPOPUP_FORMATION_CHAREDIT_GET_INBOX_OFFSET UNITYSDK_OFFSET(0x255A4F0)
#define UIPOPUP_FORMATION_CHAREDIT_HANDLECLANALLASSISTLISTRESPONSEMESSAGE_OFFSET UNITYSDK_OFFSET(0x255A500)
#define UIPOPUP_FORMATION_CHAREDIT_ONCLICKLONGPRESSMESSAGE_OFFSET UNITYSDK_OFFSET(0x255A570)
#define UIPOPUP_FORMATION_CHAREDIT_UPDATEBYRAIDTEAMSETTINGDB_OFFSET UNITYSDK_OFFSET(0x255A830)
#define UIPOPUP_FORMATION_CHAREDIT_ONCLICKMESSAGE_OFFSET UNITYSDK_OFFSET(0x255AF30)
#define UIPOPUP_FORMATION_CHAREDIT_ONSEARCHRESULTUPDATED_OFFSET UNITYSDK_OFFSET(0x255B500)
#define UIPOPUP_FORMATION_CHAREDIT_GET_SUPPORTCHARACTERSLOTS_OFFSET UNITYSDK_OFFSET(0x2554F30)
#define UIPOPUP_FORMATION_CHAREDIT_HANDLECHARACTERSETFAVORITESRESPONSEMESSAGE_OFFSET UNITYSDK_OFFSET(0x255B540)
#define UIPOPUP_FORMATION_CHAREDIT_GET_ASSISTCONQUESTINFOLOCALIZEKEY_OFFSET UNITYSDK_OFFSET(0x2558530)
#define UIPOPUP_FORMATION_CHAREDIT_CHECKASSISTCOUNTLIMIT_OFFSET UNITYSDK_OFFSET(0x2551E30)
#define UIPOPUP_FORMATION_CHAREDIT_.CCTOR_OFFSET UNITYSDK_OFFSET(0x255B5F0)
#define UIPOPUP_FORMATION_CHAREDIT_DISABLESAMEASSISTCHARACTERS_OFFSET UNITYSDK_OFFSET(0x25560F0)
#define UIPOPUP_FORMATION_CHAREDIT_ONCLICKDIMMESSAGE_OFFSET UNITYSDK_OFFSET(0x255B640)
#define UIPOPUP_FORMATION_CHAREDIT_SET_INBOX_OFFSET UNITYSDK_OFFSET(0x255B720)
#define UIPOPUP_FORMATION_CHAREDIT_REFRESHOKBUTTON_OFFSET UNITYSDK_OFFSET(0x2554710)
#define UIPOPUP_FORMATION_CHAREDIT_CO_LOADING_OFFSET UNITYSDK_OFFSET(0x255B980)
#define UIPOPUP_FORMATION_CHAREDIT_TRYREQUESTFAVORITECHANGED_OFFSET UNITYSDK_OFFSET(0x2551810)
#define UIPOPUP_FORMATION_CHAREDIT_ONCLICKAUTOTEAMSETTING_OFFSET UNITYSDK_OFFSET(0x255B9F0)
#define UIPOPUP_FORMATION_CHAREDIT_HANDLECHANGEFAVORITEMESSAGE_OFFSET UNITYSDK_OFFSET(0x255C010)
#define UIPOPUP_FORMATION_CHAREDIT_ONCLICKOK_OFFSET UNITYSDK_OFFSET(0x255C0B0)
#define UIPOPUP_FORMATION_CHAREDIT_SETAUTOCHARACTERS_OFFSET UNITYSDK_OFFSET(0x2559600)
#define UIPOPUP_FORMATION_CHAREDIT_SETRAIDASSISTUSECOUNT_OFFSET UNITYSDK_OFFSET(0x25583D0)
#define UIPOPUP_FORMATION_CHAREDIT_ONCLICKDIMITEM_OFFSET UNITYSDK_OFFSET(0x255B6E0)
#define UIPOPUP_FORMATION_CHAREDIT_OPENCHARACTERDETAIL_OFFSET UNITYSDK_OFFSET(0x255A5F0)
#define UIPOPUP_FORMATION_CHAREDIT__CANCELCHANGESTYLE_G__CANCELINTERNAL|100_0_OFFSET UNITYSDK_OFFSET(0x25553C0)
#define UIPOPUP_FORMATION_CHAREDIT_UPDATEWRAPCONTENTITEMSIZE_OFFSET UNITYSDK_OFFSET(0x25503C0)
#define UIPOPUP_FORMATION_CHAREDIT_SETGROUNDID_OFFSET UNITYSDK_OFFSET(0x2557430)
#define UIPOPUP_FORMATION_CHAREDIT_SETASSISTTAB_OFFSET UNITYSDK_OFFSET(0x255C8E0)
#define UIPOPUP_FORMATION_CHAREDIT_ONCLICKADVANTAGE_OFFSET UNITYSDK_OFFSET(0x255CAE0)
#define UIPOPUP_FORMATION_CHAREDIT_SETECHELONSLOTS_OFFSET UNITYSDK_OFFSET(0x255A290)
#define UIPOPUP_FORMATION_CHAREDIT_SHOULDOKBUTTONBEDISABLED_OFFSET UNITYSDK_OFFSET(0x255B740)
#define UIPOPUP_FORMATION_CHAREDIT_SETASSISTTABS_OFFSET UNITYSDK_OFFSET(0x25574A0)
#define UIPOPUP_FORMATION_CHAREDIT_.CTOR_OFFSET UNITYSDK_OFFSET(0x254F540)
#define UIPOPUP_FORMATION_CHAREDIT_ONCLICKITEM_OFFSET UNITYSDK_OFFSET(0x255AFB0)
#define UIPOPUP_FORMATION_CHAREDIT_CLEARSCROLLVIEWITEMS_OFFSET UNITYSDK_OFFSET(0x2554F60)
#define UIPOPUP_FORMATION_CHAREDIT__AUTOSORT_G__GETDAMAGERATE|97_1_OFFSET UNITYSDK_OFFSET(0x2550EB0)
#define UIPOPUP_FORMATION_CHAREDIT__AUTOSORT_G__GETDEFENCERATE|97_2_OFFSET UNITYSDK_OFFSET(0x2550FD0)
#define UIPOPUP_FORMATION_CHAREDIT_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x255CB90)
#define UIPOPUP_FORMATION_CHAREDIT_SETTSSINTERACTION_OFFSET UNITYSDK_OFFSET(0x25565F0)

	inline static constexpr unsigned int UIPopup_Formation_CharEdit_TypeDefinitionIndex = 6117;

	class UIPopup_Formation_CharEdit : public Il2CppObject
	{
	public:
		FormationCharEditScrollViewController* ScrollView; // 0xD8
		FormationCharEditScrollViewController* ScrollViewSmall; // 0xE0
		FormationCharEditScrollViewController* currentScrollView; // 0xE8
		UICharacterSort* UICharacterSort; // 0xF0
		UIPopup_Formation_CharEdit_BottomUI* baseEchelonBottom; // 0xF8
		UIPopup_Formation_CharEdit_BottomUI* extendedEchelonBottom; // 0x100
		UIPopup_Formation_CharEdit_BottomUI* currentBottomUI; // 0x108
		UIPopup_Formation_CharEdit_CharacterInfo* FormationCharacterInfo; // 0x110
		::UnityEngine::GameObject* DisableButton; // 0x118
		MXButton* OkButton; // 0x120
		GroupBuffButton* GroupBuffButton; // 0x128
		EnemyInfoButton* EnemyInfoButton; // 0x130
		MXButton* AdvantageButton; // 0x138
		IntTabController* myOrAssistFilterTab; // 0x140
		UILabel* assistUseCountLabel; // 0x148
		::UnityEngine::Transform* assistSizeTarget; // 0x150
		::UnityEngine::Transform* assistConquestUseCheck; // 0x158
		UILabel* assistConquestInfoLabel; // 0x160
		UILabel* assistConquestUseLabel; // 0x168
		::System::Int32 characterWrapcontentItemSize; // 0x170
		::System::Int32 assistWrapcontentItemSize; // 0x174
		MXToggle* changeScrollViewSizeToggle; // 0x178
		ClearDeckButton* ClearDeckButton; // 0x180
		IntTabController* characterSkillEquipTab; // 0x188
		UIFormationNameSearch* nameSearch; // 0x190
		::System::Int32 MyFilterTabIndex; // 0x0
		::System::Int32 AssistFilterTabIndex; // 0x4
		::System::Int32 ColumnCount; // 0x0
		Il2CppObject* autoMainCharacters; // 0x198
		Il2CppObject* autoSupportCharacters; // 0x1A0
		::System::Int64 startCharacterServerId; // 0x1A8
		::FlatData::SquadType* startSquadType; // 0x1B0
		Il2CppObject* charDetailIds; // 0x1B8
		::MX::GameLogic::DBModel::EchelonPresetDB* presetDB; // 0x1C0
		Il2CppObject* savePresetCallback; // 0x1C8
		UIDragScrollView* _inBox_k__BackingField; // 0x1D0
		FormationModel* formationModel; // 0x1D8
		::System::Boolean closeUIAfterSave; // 0x1E0
		::System::Int64 groundId; // 0x1E8
		::FlatData::BulletType* enemyBulletType; // 0x1F0
		::FlatData::ArmorType* enemyArmorType; // 0x1F4
		::System::Boolean errorClanAssistCharacterChanged; // 0x1F8
		Il2CppObject* previousActiveSupports; // 0x200

		::System::Void OnChangeScrollViewSizeToggle(MXToggle* arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(MXToggle*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_FORMATION_CHAREDIT_ONCHANGESCROLLVIEWSIZETOGGLE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void _SetGroundId_g__ErrorHandling|106_0()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_FORMATION_CHAREDIT__SETGROUNDID_G__ERRORHANDLING|106_0_OFFSET))(nullptr);
		}

		::System::Void OnMyOrAssistFilterTabChanged(::System::Boolean arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::System::Boolean, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_FORMATION_CHAREDIT_ONMYORASSISTFILTERTABCHANGED_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void ResetScrollBar()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_FORMATION_CHAREDIT_RESETSCROLLBAR_OFFSET))(nullptr);
		}

		::System::Int32 AutoSort(CharacterObject* arg, CharacterObject* arg2, ::MX::Data::EventContentStageInfo* arg3, Il2CppObject* arg4)
		{
			return ((::System::Int32(*)(CharacterObject*, CharacterObject*, ::MX::Data::EventContentStageInfo*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_FORMATION_CHAREDIT_AUTOSORT_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Collections::IEnumerator* RequestAllAssistList(::FlatData::EchelonType* arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::FlatData::EchelonType*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_FORMATION_CHAREDIT_REQUESTALLASSISTLIST_OFFSET))(arg, nullptr);
		}

		::System::Void RefreshStyles()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_FORMATION_CHAREDIT_REFRESHSTYLES_OFFSET))(nullptr);
		}

		::System::Void OnClosed()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_FORMATION_CHAREDIT_ONCLOSED_OFFSET))(nullptr);
		}

		::System::Void SetMyOrAssistFilterTab(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_FORMATION_CHAREDIT_SETMYORASSISTFILTERTAB_OFFSET))(arg, nullptr);
		}

		::System::Boolean AssistFormationCheck()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_FORMATION_CHAREDIT_ASSISTFORMATIONCHECK_OFFSET))(nullptr);
		}

		::System::Void OnBack()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_FORMATION_CHAREDIT_ONBACK_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_FORMATION_CHAREDIT_AWAKE_OFFSET))(nullptr);
		}

		::System::Boolean HandleCombatStyleChanged(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_FORMATION_CHAREDIT_HANDLECOMBATSTYLECHANGED_OFFSET))(arg, nullptr);
		}

		::System::Int64 _AutoSort_g__GetTotalValidBonus|97_4(::System::Int64 arg, Il2CppObject* arg2, ::System::Int64 arg3)
		{
			return ((::System::Int64(*)(::System::Int64, Il2CppObject*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_FORMATION_CHAREDIT__AUTOSORT_G__GETTOTALVALIDBONUS|97_4_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void OnSort(Il2CppObject* arg, SortingRule* arg2)
		{
			((::System::Void(*)(Il2CppObject*, SortingRule*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_FORMATION_CHAREDIT_ONSORT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void SetBottomUIByExtensionType()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_FORMATION_CHAREDIT_SETBOTTOMUIBYEXTENSIONTYPE_OFFSET))(nullptr);
		}

		::System::Void SavePreset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_FORMATION_CHAREDIT_SAVEPRESET_OFFSET))(nullptr);
		}

		::System::Void _OnSort_g__UpdateScrollView|74_7(<>c__DisplayClass74_0&* arg)
		{
			((::System::Void(*)(<>c__DisplayClass74_0&*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_FORMATION_CHAREDIT__ONSORT_G__UPDATESCROLLVIEW|74_7_OFFSET))(arg, nullptr);
		}

		::System::Boolean _AutoSort_g__IsValidEvent|97_0(<>c__DisplayClass97_0&* arg)
		{
			return ((::System::Boolean(*)(<>c__DisplayClass97_0&*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_FORMATION_CHAREDIT__AUTOSORT_G__ISVALIDEVENT|97_0_OFFSET))(arg, nullptr);
		}

		::System::Void OnDestroy()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_FORMATION_CHAREDIT_ONDESTROY_OFFSET))(nullptr);
		}

		UIFormation* GetUIFormation()
		{
			return ((UIFormation*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_FORMATION_CHAREDIT_GETUIFORMATION_OFFSET))(nullptr);
		}

		::System::Void SetPersonalityIds()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_FORMATION_CHAREDIT_SETPERSONALITYIDS_OFFSET))(nullptr);
		}

		::System::Void _OnSort_g__SetCharacterDetailIds|74_6(<>c__DisplayClass74_0&* arg)
		{
			((::System::Void(*)(<>c__DisplayClass74_0&*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_FORMATION_CHAREDIT__ONSORT_G__SETCHARACTERDETAILIDS|74_6_OFFSET))(arg, nullptr);
		}

		::System::Void CancelChangeStyle()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_FORMATION_CHAREDIT_CANCELCHANGESTYLE_OFFSET))(nullptr);
		}

		::System::Void OnClickSlot(UICharacterCard* arg)
		{
			((::System::Void(*)(UICharacterCard*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_FORMATION_CHAREDIT_ONCLICKSLOT_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* SaveEchelon()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_FORMATION_CHAREDIT_SAVEECHELON_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* CoErrorClanAssistCharacterChanged(::MX::NetworkProtocol::ErrorPacket* arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::MX::NetworkProtocol::ErrorPacket*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_FORMATION_CHAREDIT_COERRORCLANASSISTCHARACTERCHANGED_OFFSET))(arg, nullptr);
		}

		EchelonSlots* get_echelonSlots()
		{
			return ((EchelonSlots*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_FORMATION_CHAREDIT_GET_ECHELONSLOTS_OFFSET))(nullptr);
		}

		::System::Boolean _OnSort_g__IsAssistCharTodayUseComplete|74_3(CharacterObject* arg, <>c__DisplayClass74_0&* arg2)
		{
			return ((::System::Boolean(*)(CharacterObject*, <>c__DisplayClass74_0&*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_FORMATION_CHAREDIT__ONSORT_G__ISASSISTCHARTODAYUSECOMPLETE|74_3_OFFSET))(arg, arg2, nullptr);
		}

		::System::Int32 _AutoSort_g__GetSchoolBonus|97_3(CharacterObject* arg, ::MX::Data::Excel::ConquestGroupBuffExcel* arg2)
		{
			return ((::System::Int32(*)(CharacterObject*, ::MX::Data::Excel::ConquestGroupBuffExcel*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_FORMATION_CHAREDIT__AUTOSORT_G__GETSCHOOLBONUS|97_3_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddScrollViewItems(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_FORMATION_CHAREDIT_ADDSCROLLVIEWITEMS_OFFSET))(arg, nullptr);
		}

		::System::Void SetLeaderMark()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_FORMATION_CHAREDIT_SETLEADERMARK_OFFSET))(nullptr);
		}

		::System::Void InitializeComponents()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_FORMATION_CHAREDIT_INITIALIZECOMPONENTS_OFFSET))(nullptr);
		}

		::System::Void DisableSlot(UICharacterCard* arg)
		{
			((::System::Void(*)(UICharacterCard*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_FORMATION_CHAREDIT_DISABLESLOT_OFFSET))(arg, nullptr);
		}

		::System::Void _OnSort_g__CategorizeCharacters|74_1(Il2CppObject* arg, Il2CppObject* arg2, <>c__DisplayClass74_0&* arg3)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, <>c__DisplayClass74_0&*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_FORMATION_CHAREDIT__ONSORT_G__CATEGORIZECHARACTERS|74_1_OFFSET))(arg, arg2, arg3, nullptr);
		}

		Il2CppObject* _OnSort_g__GetFinalSortedList|74_2(Il2CppObject* arg, Il2CppObject* arg2)
		{
			return ((Il2CppObject*(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_FORMATION_CHAREDIT__ONSORT_G__GETFINALSORTEDLIST|74_2_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void RefreshGroupBuff()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_FORMATION_CHAREDIT_REFRESHGROUPBUFF_OFFSET))(nullptr);
		}

		Il2CppObject* GetConquestAssistRemainCount()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_FORMATION_CHAREDIT_GETCONQUESTASSISTREMAINCOUNT_OFFSET))(nullptr);
		}

		::System::Void OnOpened(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_FORMATION_CHAREDIT_ONOPENED_OFFSET))(arg, nullptr);
		}

		::System::Boolean _OnSort_g__IsAssistCharInSameEchelon|74_4(CharacterObject* arg, <>c__DisplayClass74_0&* arg2)
		{
			return ((::System::Boolean(*)(CharacterObject*, <>c__DisplayClass74_0&*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_FORMATION_CHAREDIT__ONSORT_G__ISASSISTCHARINSAMEECHELON|74_4_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void SetConquestUseCount()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_FORMATION_CHAREDIT_SETCONQUESTUSECOUNT_OFFSET))(nullptr);
		}

		::System::Boolean ErrorClanAssistCharacterChanged(::MX::NetworkProtocol::ErrorPacket* arg)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::ErrorPacket*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_FORMATION_CHAREDIT_ERRORCLANASSISTCHARACTERCHANGED_OFFSET))(arg, nullptr);
		}

		::System::Void InitScrollViews()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_FORMATION_CHAREDIT_INITSCROLLVIEWS_OFFSET))(nullptr);
		}

		::System::Void RefreshCards()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_FORMATION_CHAREDIT_REFRESHCARDS_OFFSET))(nullptr);
		}

		Il2CppObject* _OnSort_g__GetFormationCharInfo|74_5(Il2CppObject* arg, Il2CppObject* arg2, <>c__DisplayClass74_0&* arg3)
		{
			return ((Il2CppObject*(*)(Il2CppObject*, Il2CppObject*, <>c__DisplayClass74_0&*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_FORMATION_CHAREDIT__ONSORT_G__GETFORMATIONCHARINFO|74_5_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Boolean _SetTSSInteraction_g__GetValidTSSData|113_2(Il2CppObject&* arg, <>c__DisplayClass113_0&* arg2, <>c__DisplayClass113_1&* arg3)
		{
			return ((::System::Boolean(*)(Il2CppObject&*, <>c__DisplayClass113_0&*, <>c__DisplayClass113_1&*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_FORMATION_CHAREDIT__SETTSSINTERACTION_G__GETVALIDTSSDATA|113_2_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void Refresh()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_FORMATION_CHAREDIT_REFRESH_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* __n__0()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_FORMATION_CHAREDIT___N__0_OFFSET))(nullptr);
		}

		::System::Void InitializeFromPreset(::MX::GameLogic::DBModel::EchelonPresetDB* arg, ::FlatData::EchelonExtensionType* arg2, Il2CppObject* arg3)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::EchelonPresetDB*, ::FlatData::EchelonExtensionType*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_FORMATION_CHAREDIT_INITIALIZEFROMPRESET_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::Il2CppArray<::System::Object*>* get_mainCharacterSlots()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_FORMATION_CHAREDIT_GET_MAINCHARACTERSLOTS_OFFSET))(nullptr);
		}

		::System::Void _OnClickOk_b__82_1()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_FORMATION_CHAREDIT__ONCLICKOK_B__82_1_OFFSET))(nullptr);
		}

		::System::Void _OnClickSlot_g__DeselectScrollViewCharacterCard|75_0(<>c__DisplayClass75_0&* arg)
		{
			((::System::Void(*)(<>c__DisplayClass75_0&*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_FORMATION_CHAREDIT__ONCLICKSLOT_G__DESELECTSCROLLVIEWCHARACTERCARD|75_0_OFFSET))(arg, nullptr);
		}

		UIDragScrollView* get_inBox()
		{
			return ((UIDragScrollView*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_FORMATION_CHAREDIT_GET_INBOX_OFFSET))(nullptr);
		}

		::System::Boolean HandleClanAllAssistListResponseMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_FORMATION_CHAREDIT_HANDLECLANALLASSISTLISTRESPONSEMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Boolean OnClickLongPressMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_FORMATION_CHAREDIT_ONCLICKLONGPRESSMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Void UpdateByRaidTeamSettingDB(::MX::GameLogic::DBModel::RaidTeamSettingDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::RaidTeamSettingDB*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_FORMATION_CHAREDIT_UPDATEBYRAIDTEAMSETTINGDB_OFFSET))(arg, nullptr);
		}

		::System::Boolean OnClickMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_FORMATION_CHAREDIT_ONCLICKMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Void OnSearchResultUpdated(NameSearchResult* arg)
		{
			((::System::Void(*)(NameSearchResult*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_FORMATION_CHAREDIT_ONSEARCHRESULTUPDATED_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* get_supportCharacterSlots()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_FORMATION_CHAREDIT_GET_SUPPORTCHARACTERSLOTS_OFFSET))(nullptr);
		}

		::System::Boolean HandleCharacterSetFavoritesResponseMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_FORMATION_CHAREDIT_HANDLECHARACTERSETFAVORITESRESPONSEMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::String* get_AssistConquestInfoLocalizeKey()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_FORMATION_CHAREDIT_GET_ASSISTCONQUESTINFOLOCALIZEKEY_OFFSET))(nullptr);
		}

		::System::Boolean CheckAssistCountLimit()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_FORMATION_CHAREDIT_CHECKASSISTCOUNTLIMIT_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_FORMATION_CHAREDIT_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void DisableSameAssistCharacters(::MX::GameLogic::DBModel::AssistCharacterDB* arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::AssistCharacterDB*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_FORMATION_CHAREDIT_DISABLESAMEASSISTCHARACTERS_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean OnClickDimMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_FORMATION_CHAREDIT_ONCLICKDIMMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Void set_inBox(UIDragScrollView* arg)
		{
			((::System::Void(*)(UIDragScrollView*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_FORMATION_CHAREDIT_SET_INBOX_OFFSET))(arg, nullptr);
		}

		::System::Void RefreshOkButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_FORMATION_CHAREDIT_REFRESHOKBUTTON_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* Co_Loading()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_FORMATION_CHAREDIT_CO_LOADING_OFFSET))(nullptr);
		}

		::System::Boolean TryRequestFavoriteChanged()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_FORMATION_CHAREDIT_TRYREQUESTFAVORITECHANGED_OFFSET))(nullptr);
		}

		::System::Void OnClickAutoTeamSetting()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_FORMATION_CHAREDIT_ONCLICKAUTOTEAMSETTING_OFFSET))(nullptr);
		}

		::System::Boolean HandleChangeFavoriteMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_FORMATION_CHAREDIT_HANDLECHANGEFAVORITEMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickOk()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_FORMATION_CHAREDIT_ONCLICKOK_OFFSET))(nullptr);
		}

		::System::Void SetAutoCharacters()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_FORMATION_CHAREDIT_SETAUTOCHARACTERS_OFFSET))(nullptr);
		}

		::System::Void SetRaidAssistUseCount(::System::Int32 arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_FORMATION_CHAREDIT_SETRAIDASSISTUSECOUNT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void OnClickDimItem(UIPopupFormationCharSlot* arg)
		{
			((::System::Void(*)(UIPopupFormationCharSlot*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_FORMATION_CHAREDIT_ONCLICKDIMITEM_OFFSET))(arg, nullptr);
		}

		::System::Void OpenCharacterDetail(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_FORMATION_CHAREDIT_OPENCHARACTERDETAIL_OFFSET))(arg, nullptr);
		}

		::System::Void _CancelChangeStyle_g__CancelInternal|100_0(Il2CppObject* arg, Il2CppObject* arg2, ::Il2CppArray<::System::Object*>* arg3, ::System::Int32 arg4)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_FORMATION_CHAREDIT__CANCELCHANGESTYLE_G__CANCELINTERNAL|100_0_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void UpdateWrapcontentItemSize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_FORMATION_CHAREDIT_UPDATEWRAPCONTENTITEMSIZE_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* SetGroundId()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_FORMATION_CHAREDIT_SETGROUNDID_OFFSET))(nullptr);
		}

		::System::Void SetAssistTab()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_FORMATION_CHAREDIT_SETASSISTTAB_OFFSET))(nullptr);
		}

		::System::Void OnClickAdvantage()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_FORMATION_CHAREDIT_ONCLICKADVANTAGE_OFFSET))(nullptr);
		}

		::System::Void SetEchelonSlots()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_FORMATION_CHAREDIT_SETECHELONSLOTS_OFFSET))(nullptr);
		}

		::System::Boolean ShouldOkButtonBeDisabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_FORMATION_CHAREDIT_SHOULDOKBUTTONBEDISABLED_OFFSET))(nullptr);
		}

		::System::Void SetAssistTabs()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_FORMATION_CHAREDIT_SETASSISTTABS_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_FORMATION_CHAREDIT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnClickItem(UIPopupFormationCharSlot* arg)
		{
			((::System::Void(*)(UIPopupFormationCharSlot*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_FORMATION_CHAREDIT_ONCLICKITEM_OFFSET))(arg, nullptr);
		}

		::System::Void ClearScrollViewItems()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_FORMATION_CHAREDIT_CLEARSCROLLVIEWITEMS_OFFSET))(nullptr);
		}

		::System::Int64 _AutoSort_g__GetDamageRate|97_1(CharacterObject* arg, <>c__DisplayClass97_0&* arg2)
		{
			return ((::System::Int64(*)(CharacterObject*, <>c__DisplayClass97_0&*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_FORMATION_CHAREDIT__AUTOSORT_G__GETDAMAGERATE|97_1_OFFSET))(arg, arg2, nullptr);
		}

		::System::Int64 _AutoSort_g__GetDefenceRate|97_2(CharacterObject* arg, <>c__DisplayClass97_0&* arg2)
		{
			return ((::System::Int64(*)(CharacterObject*, <>c__DisplayClass97_0&*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_FORMATION_CHAREDIT__AUTOSORT_G__GETDEFENCERATE|97_2_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Initialize(::FlatData::EchelonType* arg, ::System::Int64 arg2, ::System::Int64 arg3, ::FlatData::SquadType* arg4, Il2CppObject* arg5)
		{
			((::System::Void(*)(::FlatData::EchelonType*, ::System::Int64, ::System::Int64, ::FlatData::SquadType*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_FORMATION_CHAREDIT_INITIALIZE_OFFSET))(arg, arg2, arg3, arg4, arg5, nullptr);
		}

		::System::Void SetTSSInteraction()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_FORMATION_CHAREDIT_SETTSSINTERACTION_OFFSET))(nullptr);
		}

	};

