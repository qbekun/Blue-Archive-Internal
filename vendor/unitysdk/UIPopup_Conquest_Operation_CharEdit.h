#pragma once
#include "unitysdk.h"

class UILabel;
namespace UnityEngine { class Transform; }
class GroupBuffBonusUI;
namespace MX::Conquest { class ConquestTile; }
class UIConquest;
namespace MX::GameLogic::DBModel { class ConquestEchelonDB; }
class FormationCharEditScrollViewController;
class UICharacterSort;
class UIPopup_Formation_CharEdit_BottomUI;
namespace UnityEngine { class GameObject; }
class MXButton;
class IntTabController;
class UIPopup_Formation_CharEdit_CharacterInfo;
class MXToggle;
class EchelonObject;
class UIFormation;
namespace FlatData { class SquadType; }
class UIDragScrollView;
class FormationModel;
namespace FlatData { class BulletType; }
namespace FlatData { class ArmorType; }
class CharacterObject;
namespace MX::Data { class ConquestGroupBonusExcelData; }
class UICharacterCard;
namespace Assets::_MX::Program::Scripts::Network { class BaseMessage; }
namespace MX::Data { class EventContentStageInfo; }
namespace FlatData { class EchelonType; }
class UIPopupFormationCharSlot;
class EchelonSlots;
namespace MX::GameLogic::DBModel { class AssistCharacterDB; }
class SortingRule;

#define UIPOPUP_CONQUEST_OPERATION_CHAREDIT_SETAUTOCHARACTERS_OFFSET UNITYSDK_OFFSET(0x237B2C0)
#define UIPOPUP_CONQUEST_OPERATION_CHAREDIT__AUTOSORT_G__GETSCHOOLBONUS|88_0_OFFSET UNITYSDK_OFFSET(0x237BF30)
#define UIPOPUP_CONQUEST_OPERATION_CHAREDIT_ISDEPLOYED_OFFSET UNITYSDK_OFFSET(0x237BFA0)
#define UIPOPUP_CONQUEST_OPERATION_CHAREDIT_SETBOTTOMUI_OFFSET UNITYSDK_OFFSET(0x237BFF0)
#define UIPOPUP_CONQUEST_OPERATION_CHAREDIT_REFRESHDEFAULTORGROUPBUFF_OFFSET UNITYSDK_OFFSET(0x237C180)
#define UIPOPUP_CONQUEST_OPERATION_CHAREDIT_ONCLICKSLOT_OFFSET UNITYSDK_OFFSET(0x237C420)
#define UIPOPUP_CONQUEST_OPERATION_CHAREDIT_SET_CONQUESTECHELON_OFFSET UNITYSDK_OFFSET(0x237CB40)
#define UIPOPUP_CONQUEST_OPERATION_CHAREDIT_GET_READYLABELTEXT_OFFSET UNITYSDK_OFFSET(0x237CB60)
#define UIPOPUP_CONQUEST_OPERATION_CHAREDIT_INITSCROLLVIEWS_OFFSET UNITYSDK_OFFSET(0x237CC30)
#define UIPOPUP_CONQUEST_OPERATION_CHAREDIT_SETASSISTTAB_OFFSET UNITYSDK_OFFSET(0x237D0D0)
#define UIPOPUP_CONQUEST_OPERATION_CHAREDIT_ONMYORASSISTFILTERTABCHANGED_OFFSET UNITYSDK_OFFSET(0x237D2C0)
#define UIPOPUP_CONQUEST_OPERATION_CHAREDIT_AWAKE_OFFSET UNITYSDK_OFFSET(0x237D2F0)
#define UIPOPUP_CONQUEST_OPERATION_CHAREDIT_HANDLECLANALLASSISTLISTRESPONSEMESSAGE_OFFSET UNITYSDK_OFFSET(0x237D700)
#define UIPOPUP_CONQUEST_OPERATION_CHAREDIT_GET_ECHELON_OFFSET UNITYSDK_OFFSET(0x237D770)
#define UIPOPUP_CONQUEST_OPERATION_CHAREDIT_AUTOSORT_OFFSET UNITYSDK_OFFSET(0x237D780)
#define UIPOPUP_CONQUEST_OPERATION_CHAREDIT_OPENCHARACTERDETAIL_OFFSET UNITYSDK_OFFSET(0x237DA20)
#define UIPOPUP_CONQUEST_OPERATION_CHAREDIT_SETMYORASSISTFILTERTAB_OFFSET UNITYSDK_OFFSET(0x237D270)
#define UIPOPUP_CONQUEST_OPERATION_CHAREDIT_SETRAIDASSISTUSECOUNT_OFFSET UNITYSDK_OFFSET(0x237DC90)
#define UIPOPUP_CONQUEST_OPERATION_CHAREDIT_ONCLICKLONGPRESSMESSAGE_OFFSET UNITYSDK_OFFSET(0x237DDE0)
#define UIPOPUP_CONQUEST_OPERATION_CHAREDIT_ADDSCROLLVIEWITEMS_OFFSET UNITYSDK_OFFSET(0x237DE60)
#define UIPOPUP_CONQUEST_OPERATION_CHAREDIT_ONCLICKMESSAGE_OFFSET UNITYSDK_OFFSET(0x237DED0)
#define UIPOPUP_CONQUEST_OPERATION_CHAREDIT_REQUESTALLASSISTLIST_OFFSET UNITYSDK_OFFSET(0x237E360)
#define UIPOPUP_CONQUEST_OPERATION_CHAREDIT_SETPERSONALITYIDS_OFFSET UNITYSDK_OFFSET(0x237CA40)
#define UIPOPUP_CONQUEST_OPERATION_CHAREDIT_ONBACK_OFFSET UNITYSDK_OFFSET(0x237E400)
#define UIPOPUP_CONQUEST_OPERATION_CHAREDIT_UPDATEWRAPCONTENTITEMSIZE_OFFSET UNITYSDK_OFFSET(0x237E420)
#define UIPOPUP_CONQUEST_OPERATION_CHAREDIT_ONCLICKOK_OFFSET UNITYSDK_OFFSET(0x237E4E0)
#define UIPOPUP_CONQUEST_OPERATION_CHAREDIT_GETCONQUESTASSISTREMAINCOUNT_OFFSET UNITYSDK_OFFSET(0x237EC70)
#define UIPOPUP_CONQUEST_OPERATION_CHAREDIT_ASSISTFORMATIONCHECK_OFFSET UNITYSDK_OFFSET(0x237ED50)
#define UIPOPUP_CONQUEST_OPERATION_CHAREDIT_CO_LOADING_OFFSET UNITYSDK_OFFSET(0x237F440)
#define UIPOPUP_CONQUEST_OPERATION_CHAREDIT_SET_INBOX_OFFSET UNITYSDK_OFFSET(0x237F4D0)
#define UIPOPUP_CONQUEST_OPERATION_CHAREDIT_ONCLICKGROUPBUFF_OFFSET UNITYSDK_OFFSET(0x237F4F0)
#define UIPOPUP_CONQUEST_OPERATION_CHAREDIT_ONCLICKDIMMESSAGE_OFFSET UNITYSDK_OFFSET(0x237F5F0)
#define UIPOPUP_CONQUEST_OPERATION_CHAREDIT_CLEARSCROLLVIEWITEMS_OFFSET UNITYSDK_OFFSET(0x237D070)
#define UIPOPUP_CONQUEST_OPERATION_CHAREDIT_REFRESH_OFFSET UNITYSDK_OFFSET(0x237F6D0)
#define UIPOPUP_CONQUEST_OPERATION_CHAREDIT_SAVEECHELONSEQUENCE_OFFSET UNITYSDK_OFFSET(0x237FE70)
#define UIPOPUP_CONQUEST_OPERATION_CHAREDIT_GET_ASSISTCONQUESTINFOLOCALIZEKEY_OFFSET UNITYSDK_OFFSET(0x237FF70)
#define UIPOPUP_CONQUEST_OPERATION_CHAREDIT_SETTSSINTERACTION_OFFSET UNITYSDK_OFFSET(0x237FFA0)
#define UIPOPUP_CONQUEST_OPERATION_CHAREDIT_.CTOR_OFFSET UNITYSDK_OFFSET(0x23805F0)
#define UIPOPUP_CONQUEST_OPERATION_CHAREDIT_ONCLICKDIMITEM_OFFSET UNITYSDK_OFFSET(0x237F690)
#define UIPOPUP_CONQUEST_OPERATION_CHAREDIT_DISABLESLOT_OFFSET UNITYSDK_OFFSET(0x237C6F0)
#define UIPOPUP_CONQUEST_OPERATION_CHAREDIT_GETGROUPBONUSAPPLIEDSTUDENTS_OFFSET UNITYSDK_OFFSET(0x237C260)
#define UIPOPUP_CONQUEST_OPERATION_CHAREDIT_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x2380710)
#define UIPOPUP_CONQUEST_OPERATION_CHAREDIT_SHOULDOKBUTTONBEDISABLED_OFFSET UNITYSDK_OFFSET(0x2380AB0)
#define UIPOPUP_CONQUEST_OPERATION_CHAREDIT_GET_ECHELONSLOTS_OFFSET UNITYSDK_OFFSET(0x237C160)
#define UIPOPUP_CONQUEST_OPERATION_CHAREDIT_SETECHELONSLOTS_OFFSET UNITYSDK_OFFSET(0x237FD80)
#define UIPOPUP_CONQUEST_OPERATION_CHAREDIT_GET_CONQUESTECHELON_OFFSET UNITYSDK_OFFSET(0x2380C70)
#define UIPOPUP_CONQUEST_OPERATION_CHAREDIT_SETCONQUESTUSECOUNT_OFFSET UNITYSDK_OFFSET(0x2380C80)
#define UIPOPUP_CONQUEST_OPERATION_CHAREDIT_REFRESHOKBUTTON_OFFSET UNITYSDK_OFFSET(0x237C980)
#define UIPOPUP_CONQUEST_OPERATION_CHAREDIT_SET_ECHELON_OFFSET UNITYSDK_OFFSET(0x2380F50)
#define UIPOPUP_CONQUEST_OPERATION_CHAREDIT_SAVEECHELON_OFFSET UNITYSDK_OFFSET(0x237FF00)
#define UIPOPUP_CONQUEST_OPERATION_CHAREDIT_ONCLICKAUTOTEAMSETTING_OFFSET UNITYSDK_OFFSET(0x2380F70)
#define UIPOPUP_CONQUEST_OPERATION_CHAREDIT_ASSISTSAMEECHELONCHECK_OFFSET UNITYSDK_OFFSET(0x237C720)
#define UIPOPUP_CONQUEST_OPERATION_CHAREDIT_ONCLOSED_OFFSET UNITYSDK_OFFSET(0x2381660)
#define UIPOPUP_CONQUEST_OPERATION_CHAREDIT_REFRESHCARDS_OFFSET UNITYSDK_OFFSET(0x2380C00)
#define UIPOPUP_CONQUEST_OPERATION_CHAREDIT_ONCHANGESCROLLVIEWSIZETOGGLE_OFFSET UNITYSDK_OFFSET(0x2381880)
#define UIPOPUP_CONQUEST_OPERATION_CHAREDIT_ONSORT_OFFSET UNITYSDK_OFFSET(0x2381B10)
#define UIPOPUP_CONQUEST_OPERATION_CHAREDIT_GET_INBOX_OFFSET UNITYSDK_OFFSET(0x2382D30)
#define UIPOPUP_CONQUEST_OPERATION_CHAREDIT_ONCLICKITEM_OFFSET UNITYSDK_OFFSET(0x237DF50)
#define UIPOPUP_CONQUEST_OPERATION_CHAREDIT___N__0_OFFSET UNITYSDK_OFFSET(0x2382D50)
#define UIPOPUP_CONQUEST_OPERATION_CHAREDIT_ONOPENED_OFFSET UNITYSDK_OFFSET(0x2382D60)

	inline static constexpr unsigned int UIPopup_Conquest_Operation_CharEdit_TypeDefinitionIndex = 5122;

	class UIPopup_Conquest_Operation_CharEdit : public Il2CppObject
	{
	public:
		UILabel* titleLabel; // 0xD8
		UILabel* echelonChangeCountLabelOn; // 0xE0
		UILabel* echelonChangeCountLabelOff; // 0xE8
		::UnityEngine::Transform* echelonChangeCountBubbleOn; // 0xF0
		::UnityEngine::Transform* echelonChangeCountBubbleOff; // 0xF8
		GroupBuffBonusUI* groupBuffBonusUI; // 0x100
		::MX::Conquest::ConquestTile* tileData; // 0x108
		UIConquest* uiConquest; // 0x110
		::MX::GameLogic::DBModel::ConquestEchelonDB* _ConquestEchelon_k__BackingField; // 0x118
		Il2CppObject* originalServerIds; // 0x120
		FormationCharEditScrollViewController* ScrollView; // 0x128
		FormationCharEditScrollViewController* ScrollViewSmall; // 0x130
		UICharacterSort* UICharacterSort; // 0x138
		UIPopup_Formation_CharEdit_BottomUI* baseEchelonBottom; // 0x140
		::UnityEngine::GameObject* DisableButton; // 0x148
		MXButton* OkButton; // 0x150
		IntTabController* myOrAssistFilterTab; // 0x158
		UILabel* assistUseCountLabel; // 0x160
		::UnityEngine::Transform* assistSizeTarget; // 0x168
		UIPopup_Formation_CharEdit_CharacterInfo* FormationCharacterInfo; // 0x170
		::UnityEngine::Transform* assistConquestUseCheck; // 0x178
		UILabel* assistConquestInfoLabel; // 0x180
		UILabel* assistConquestUseLabel; // 0x188
		::System::Int32 characterWrapcontentItemSize; // 0x190
		::System::Int32 assistWrapcontentItemSize; // 0x194
		MXToggle* changeScrollViewSizeToggle; // 0x198
		::System::Int32 MyFilterTabIndex; // 0x0
		::System::Int32 AssistFilterTabIndex; // 0x0
		::System::Int32 ColumnCount; // 0x0
		UIPopup_Formation_CharEdit_BottomUI* currentBottomUI; // 0x1A0
		Il2CppObject* autoMainCharacters; // 0x1A8
		Il2CppObject* autoSupportCharacters; // 0x1B0
		EchelonObject* _echelon_k__BackingField; // 0x1B8
		Il2CppObject* disableServerId; // 0x1C0
		UIFormation* uiFormation; // 0x1C8
		::System::Int64 startCharacterServerId; // 0x1D0
		::FlatData::SquadType* startSquadType; // 0x1D8
		Il2CppObject* charDetailIds; // 0x1E0
		FormationCharEditScrollViewController* CurrentScrollView; // 0x1E8
		UIDragScrollView* _inBox_k__BackingField; // 0x1F0
		FormationModel* formationModel; // 0x1F8
		::System::Boolean closeUIAfterSave; // 0x200
		::System::Int64 groundId; // 0x208
		::FlatData::BulletType* enemyBulletType; // 0x210
		::FlatData::ArmorType* enemyArmorType; // 0x214
		Il2CppObject* previousSupports; // 0x218

		::System::Void SetAutoCharacters()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CONQUEST_OPERATION_CHAREDIT_SETAUTOCHARACTERS_OFFSET))(nullptr);
		}

		::System::Int32 _AutoSort_g__GetSchoolBonus|88_0(CharacterObject* arg, ::MX::Data::ConquestGroupBonusExcelData* arg2)
		{
			return ((::System::Int32(*)(CharacterObject*, ::MX::Data::ConquestGroupBonusExcelData*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CONQUEST_OPERATION_CHAREDIT__AUTOSORT_G__GETSCHOOLBONUS|88_0_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean IsDeployed(::System::Int64 arg)
		{
			return ((::System::Boolean(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CONQUEST_OPERATION_CHAREDIT_ISDEPLOYED_OFFSET))(arg, nullptr);
		}

		::System::Void SetBottomUI()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CONQUEST_OPERATION_CHAREDIT_SETBOTTOMUI_OFFSET))(nullptr);
		}

		::System::Void RefreshDefaultOrGroupBuff()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CONQUEST_OPERATION_CHAREDIT_REFRESHDEFAULTORGROUPBUFF_OFFSET))(nullptr);
		}

		::System::Void OnClickSlot(UICharacterCard* arg)
		{
			((::System::Void(*)(UICharacterCard*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CONQUEST_OPERATION_CHAREDIT_ONCLICKSLOT_OFFSET))(arg, nullptr);
		}

		::System::Void set_ConquestEchelon(::MX::GameLogic::DBModel::ConquestEchelonDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::ConquestEchelonDB*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CONQUEST_OPERATION_CHAREDIT_SET_CONQUESTECHELON_OFFSET))(arg, nullptr);
		}

		::System::String* get_readyLabelText()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CONQUEST_OPERATION_CHAREDIT_GET_READYLABELTEXT_OFFSET))(nullptr);
		}

		::System::Void InitScrollViews()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CONQUEST_OPERATION_CHAREDIT_INITSCROLLVIEWS_OFFSET))(nullptr);
		}

		::System::Void SetAssistTab()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CONQUEST_OPERATION_CHAREDIT_SETASSISTTAB_OFFSET))(nullptr);
		}

		::System::Void OnMyOrAssistFilterTabChanged(::System::Boolean arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::System::Boolean, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CONQUEST_OPERATION_CHAREDIT_ONMYORASSISTFILTERTABCHANGED_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CONQUEST_OPERATION_CHAREDIT_AWAKE_OFFSET))(nullptr);
		}

		::System::Boolean HandleClanAllAssistListResponseMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CONQUEST_OPERATION_CHAREDIT_HANDLECLANALLASSISTLISTRESPONSEMESSAGE_OFFSET))(arg, nullptr);
		}

		EchelonObject* get_echelon()
		{
			return ((EchelonObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CONQUEST_OPERATION_CHAREDIT_GET_ECHELON_OFFSET))(nullptr);
		}

		::System::Int32 AutoSort(CharacterObject* arg, CharacterObject* arg2, ::MX::Data::EventContentStageInfo* arg3, Il2CppObject* arg4)
		{
			return ((::System::Int32(*)(CharacterObject*, CharacterObject*, ::MX::Data::EventContentStageInfo*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CONQUEST_OPERATION_CHAREDIT_AUTOSORT_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void OpenCharacterDetail(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CONQUEST_OPERATION_CHAREDIT_OPENCHARACTERDETAIL_OFFSET))(arg, nullptr);
		}

		::System::Void SetMyOrAssistFilterTab(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CONQUEST_OPERATION_CHAREDIT_SETMYORASSISTFILTERTAB_OFFSET))(arg, nullptr);
		}

		::System::Void SetRaidAssistUseCount(::System::Int32 arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CONQUEST_OPERATION_CHAREDIT_SETRAIDASSISTUSECOUNT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean OnClickLongPressMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CONQUEST_OPERATION_CHAREDIT_ONCLICKLONGPRESSMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Void AddScrollViewItems(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CONQUEST_OPERATION_CHAREDIT_ADDSCROLLVIEWITEMS_OFFSET))(arg, nullptr);
		}

		::System::Boolean OnClickMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CONQUEST_OPERATION_CHAREDIT_ONCLICKMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* RequestAllAssistList(::FlatData::EchelonType* arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::FlatData::EchelonType*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CONQUEST_OPERATION_CHAREDIT_REQUESTALLASSISTLIST_OFFSET))(arg, nullptr);
		}

		::System::Void SetPersonalityIds()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CONQUEST_OPERATION_CHAREDIT_SETPERSONALITYIDS_OFFSET))(nullptr);
		}

		::System::Void OnBack()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CONQUEST_OPERATION_CHAREDIT_ONBACK_OFFSET))(nullptr);
		}

		::System::Void UpdateWrapcontentItemSize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CONQUEST_OPERATION_CHAREDIT_UPDATEWRAPCONTENTITEMSIZE_OFFSET))(nullptr);
		}

		::System::Void OnClickOk()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CONQUEST_OPERATION_CHAREDIT_ONCLICKOK_OFFSET))(nullptr);
		}

		Il2CppObject* GetConquestAssistRemainCount()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CONQUEST_OPERATION_CHAREDIT_GETCONQUESTASSISTREMAINCOUNT_OFFSET))(nullptr);
		}

		::System::Boolean AssistFormationCheck()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CONQUEST_OPERATION_CHAREDIT_ASSISTFORMATIONCHECK_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* Co_Loading()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CONQUEST_OPERATION_CHAREDIT_CO_LOADING_OFFSET))(nullptr);
		}

		::System::Void set_inBox(UIDragScrollView* arg)
		{
			((::System::Void(*)(UIDragScrollView*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CONQUEST_OPERATION_CHAREDIT_SET_INBOX_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickGroupBuff()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CONQUEST_OPERATION_CHAREDIT_ONCLICKGROUPBUFF_OFFSET))(nullptr);
		}

		::System::Boolean OnClickDimMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CONQUEST_OPERATION_CHAREDIT_ONCLICKDIMMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Void ClearScrollViewItems()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CONQUEST_OPERATION_CHAREDIT_CLEARSCROLLVIEWITEMS_OFFSET))(nullptr);
		}

		::System::Void Refresh()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CONQUEST_OPERATION_CHAREDIT_REFRESH_OFFSET))(nullptr);
		}

		::System::Void SaveEchelonSequence()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CONQUEST_OPERATION_CHAREDIT_SAVEECHELONSEQUENCE_OFFSET))(nullptr);
		}

		::System::String* get_AssistConquestInfoLocalizeKey()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CONQUEST_OPERATION_CHAREDIT_GET_ASSISTCONQUESTINFOLOCALIZEKEY_OFFSET))(nullptr);
		}

		::System::Void SetTSSInteraction()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CONQUEST_OPERATION_CHAREDIT_SETTSSINTERACTION_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CONQUEST_OPERATION_CHAREDIT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnClickDimItem(UIPopupFormationCharSlot* arg)
		{
			((::System::Void(*)(UIPopupFormationCharSlot*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CONQUEST_OPERATION_CHAREDIT_ONCLICKDIMITEM_OFFSET))(arg, nullptr);
		}

		::System::Void DisableSlot(UICharacterCard* arg)
		{
			((::System::Void(*)(UICharacterCard*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CONQUEST_OPERATION_CHAREDIT_DISABLESLOT_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetGroupBonusAppliedStudents()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CONQUEST_OPERATION_CHAREDIT_GETGROUPBONUSAPPLIEDSTUDENTS_OFFSET))(nullptr);
		}

		::System::Void Initialize(::MX::GameLogic::DBModel::ConquestEchelonDB* arg, ::MX::Conquest::ConquestTile* arg2)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::ConquestEchelonDB*, ::MX::Conquest::ConquestTile*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CONQUEST_OPERATION_CHAREDIT_INITIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean ShouldOkButtonBeDisabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CONQUEST_OPERATION_CHAREDIT_SHOULDOKBUTTONBEDISABLED_OFFSET))(nullptr);
		}

		EchelonSlots* get_echelonSlots()
		{
			return ((EchelonSlots*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CONQUEST_OPERATION_CHAREDIT_GET_ECHELONSLOTS_OFFSET))(nullptr);
		}

		::System::Void SetEchelonSlots()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CONQUEST_OPERATION_CHAREDIT_SETECHELONSLOTS_OFFSET))(nullptr);
		}

		::MX::GameLogic::DBModel::ConquestEchelonDB* get_ConquestEchelon()
		{
			return ((::MX::GameLogic::DBModel::ConquestEchelonDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CONQUEST_OPERATION_CHAREDIT_GET_CONQUESTECHELON_OFFSET))(nullptr);
		}

		::System::Void SetConquestUseCount()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CONQUEST_OPERATION_CHAREDIT_SETCONQUESTUSECOUNT_OFFSET))(nullptr);
		}

		::System::Void RefreshOkButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CONQUEST_OPERATION_CHAREDIT_REFRESHOKBUTTON_OFFSET))(nullptr);
		}

		::System::Void set_echelon(EchelonObject* arg)
		{
			((::System::Void(*)(EchelonObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CONQUEST_OPERATION_CHAREDIT_SET_ECHELON_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* SaveEchelon()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CONQUEST_OPERATION_CHAREDIT_SAVEECHELON_OFFSET))(nullptr);
		}

		::System::Void OnClickAutoTeamSetting()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CONQUEST_OPERATION_CHAREDIT_ONCLICKAUTOTEAMSETTING_OFFSET))(nullptr);
		}

		::System::Void AssistSameEchelonCheck(::MX::GameLogic::DBModel::AssistCharacterDB* arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::AssistCharacterDB*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CONQUEST_OPERATION_CHAREDIT_ASSISTSAMEECHELONCHECK_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void OnClosed()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CONQUEST_OPERATION_CHAREDIT_ONCLOSED_OFFSET))(nullptr);
		}

		::System::Void RefreshCards()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CONQUEST_OPERATION_CHAREDIT_REFRESHCARDS_OFFSET))(nullptr);
		}

		::System::Void OnChangeScrollViewSizeToggle(MXToggle* arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(MXToggle*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CONQUEST_OPERATION_CHAREDIT_ONCHANGESCROLLVIEWSIZETOGGLE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void OnSort(Il2CppObject* arg, SortingRule* arg2)
		{
			((::System::Void(*)(Il2CppObject*, SortingRule*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CONQUEST_OPERATION_CHAREDIT_ONSORT_OFFSET))(arg, arg2, nullptr);
		}

		UIDragScrollView* get_inBox()
		{
			return ((UIDragScrollView*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CONQUEST_OPERATION_CHAREDIT_GET_INBOX_OFFSET))(nullptr);
		}

		::System::Void OnClickItem(UIPopupFormationCharSlot* arg)
		{
			((::System::Void(*)(UIPopupFormationCharSlot*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CONQUEST_OPERATION_CHAREDIT_ONCLICKITEM_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* __n__0()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CONQUEST_OPERATION_CHAREDIT___N__0_OFFSET))(nullptr);
		}

		::System::Void OnOpened(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_CONQUEST_OPERATION_CHAREDIT_ONOPENED_OFFSET))(arg, nullptr);
		}

	};

