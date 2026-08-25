#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Transform; }
class UIAcademyMessangerSortingPopup;
class MXButton;
class UILabel;
namespace UnityEngine { class GameObject; }
class UIAcademyMessengerNameSearch;
class MessangerDisplayType;
class SortingRule;
class ChatSortingRule;
class SortingOrder;
class UIAcademyMessanger;
namespace Assets::_MX::Program::Scripts::Network { class BaseMessage; }
class UIAcademyMessangerStudentPopulatorUnit;
class NameSearchResult;
namespace MX::SaveData { class AcademyMessangerSortingSaveData; }
namespace MX::Data { class AcademyMessageData; }

#define UIACADEMYMESSANGERSTUDENTPOPULATOR_SET_FIRSTBIRTHDAYISCOMMINGINDEX_OFFSET UNITYSDK_OFFSET(0x21AA960)
#define UIACADEMYMESSANGERSTUDENTPOPULATOR_SET_FIRSTNEITHERBIRTHDAYNORCOMMINGINDEX_OFFSET UNITYSDK_OFFSET(0x21AA970)
#define UIACADEMYMESSANGERSTUDENTPOPULATOR_GETLISTUNITPARENTTRANSFORM_OFFSET UNITYSDK_OFFSET(0x21AA980)
#define UIACADEMYMESSANGERSTUDENTPOPULATOR_GET_FIRSTBIRTHDAYISCOMMINGINDEX_OFFSET UNITYSDK_OFFSET(0x21AAA20)
#define UIACADEMYMESSANGERSTUDENTPOPULATOR_GET_STUDENTSORTINGRULE_OFFSET UNITYSDK_OFFSET(0x21AAA30)
#define UIACADEMYMESSANGERSTUDENTPOPULATOR_SET_FIRSTBIRTHDAYINDEX_OFFSET UNITYSDK_OFFSET(0x21AAA40)
#define UIACADEMYMESSANGERSTUDENTPOPULATOR_HANDLEMOMOTALKREADSYNCMESSAGE_OFFSET UNITYSDK_OFFSET(0x21AAA50)
#define UIACADEMYMESSANGERSTUDENTPOPULATOR_GET_CHATSORTINGORDER_OFFSET UNITYSDK_OFFSET(0x21AAB70)
#define UIACADEMYMESSANGERSTUDENTPOPULATOR_AWAKE_OFFSET UNITYSDK_OFFSET(0x21AAB80)
#define UIACADEMYMESSANGERSTUDENTPOPULATOR_GET_DISPLAYTYPE_OFFSET UNITYSDK_OFFSET(0x21AAE90)
#define UIACADEMYMESSANGERSTUDENTPOPULATOR_PREPARELOCALPOSITION_OFFSET UNITYSDK_OFFSET(0x21AAEA0)
#define UIACADEMYMESSANGERSTUDENTPOPULATOR_GETCHARACTERLIST_OFFSET UNITYSDK_OFFSET(0x21AAEB0)
#define UIACADEMYMESSANGERSTUDENTPOPULATOR_ONENABLE_OFFSET UNITYSDK_OFFSET(0x21AB0B0)
#define UIACADEMYMESSANGERSTUDENTPOPULATOR_SET_STUDENTSORTINGRULE_OFFSET UNITYSDK_OFFSET(0x21AB1B0)
#define UIACADEMYMESSANGERSTUDENTPOPULATOR_SET_SORTEDLIST_OFFSET UNITYSDK_OFFSET(0x21AB1C0)
#define UIACADEMYMESSANGERSTUDENTPOPULATOR_ONSEARCHRESULTUPDATED_OFFSET UNITYSDK_OFFSET(0x21AB1E0)
#define UIACADEMYMESSANGERSTUDENTPOPULATOR__SETITEMS_G__YIELDRESETSCROLLVIEW|56_2_OFFSET UNITYSDK_OFFSET(0x21AB5A0)
#define UIACADEMYMESSANGERSTUDENTPOPULATOR_SETSORTUI_OFFSET UNITYSDK_OFFSET(0x21AB630)
#define UIACADEMYMESSANGERSTUDENTPOPULATOR_SETITEMDATA_OFFSET UNITYSDK_OFFSET(0x21AB980)
#define UIACADEMYMESSANGERSTUDENTPOPULATOR_SET_DISPLAYTYPE_OFFSET UNITYSDK_OFFSET(0x21ABE10)
#define UIACADEMYMESSANGERSTUDENTPOPULATOR_BUILDSORTEDLIST_OFFSET UNITYSDK_OFFSET(0x21AC040)
#define UIACADEMYMESSANGERSTUDENTPOPULATOR_ONCLICKOPENSORTING_OFFSET UNITYSDK_OFFSET(0x21AC150)
#define UIACADEMYMESSANGERSTUDENTPOPULATOR_ONFEEDBACKMESSAGEUPDATED_OFFSET UNITYSDK_OFFSET(0x21A5430)
#define UIACADEMYMESSANGERSTUDENTPOPULATOR_ISONSORTINGPOPUP_OFFSET UNITYSDK_OFFSET(0x21AC1F0)
#define UIACADEMYMESSANGERSTUDENTPOPULATOR_GET_STUDENTSORTINGORDER_OFFSET UNITYSDK_OFFSET(0x21AC270)
#define UIACADEMYMESSANGERSTUDENTPOPULATOR_ONCLICKTOGGLEORDER_OFFSET UNITYSDK_OFFSET(0x21AC280)
#define UIACADEMYMESSANGERSTUDENTPOPULATOR_GET_FIRSTBIRTHDAYINDEX_OFFSET UNITYSDK_OFFSET(0x21AC3C0)
#define UIACADEMYMESSANGERSTUDENTPOPULATOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x21AC3D0)
#define UIACADEMYMESSANGERSTUDENTPOPULATOR_GET_SELECTEDCHARACTER_OFFSET UNITYSDK_OFFSET(0x21AC440)
#define UIACADEMYMESSANGERSTUDENTPOPULATOR_REFRESHELEMENTS_OFFSET UNITYSDK_OFFSET(0x21AC450)
#define UIACADEMYMESSANGERSTUDENTPOPULATOR_GET_CHATSORTINGRULE_OFFSET UNITYSDK_OFFSET(0x21AC570)
#define UIACADEMYMESSANGERSTUDENTPOPULATOR_SET_MESSANGERUI_OFFSET UNITYSDK_OFFSET(0x21AC580)
#define UIACADEMYMESSANGERSTUDENTPOPULATOR_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x21AC5A0)
#define UIACADEMYMESSANGERSTUDENTPOPULATOR_GET_FIRSTNEITHERBIRTHDAYNORCOMMINGINDEX_OFFSET UNITYSDK_OFFSET(0x21AC640)
#define UIACADEMYMESSANGERSTUDENTPOPULATOR_ONSELECTCHARACTER_OFFSET UNITYSDK_OFFSET(0x21AC650)
#define UIACADEMYMESSANGERSTUDENTPOPULATOR__ONSELECTCHARACTER_B__59_0_OFFSET UNITYSDK_OFFSET(0x21AC700)
#define UIACADEMYMESSANGERSTUDENTPOPULATOR_GET_SORTEDLIST_OFFSET UNITYSDK_OFFSET(0x21AC770)
#define UIACADEMYMESSANGERSTUDENTPOPULATOR_INITLOCALPOSITION_OFFSET UNITYSDK_OFFSET(0x21AC780)
#define UIACADEMYMESSANGERSTUDENTPOPULATOR_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x21AC790)
#define UIACADEMYMESSANGERSTUDENTPOPULATOR_SETITEMS_OFFSET UNITYSDK_OFFSET(0x21AB1F0)
#define UIACADEMYMESSANGERSTUDENTPOPULATOR_SET_STUDENTSORTINGORDER_OFFSET UNITYSDK_OFFSET(0x21ACC20)
#define UIACADEMYMESSANGERSTUDENTPOPULATOR_GETLISTUNITPARENTGAMEOBJECT_OFFSET UNITYSDK_OFFSET(0x21ACC30)
#define UIACADEMYMESSANGERSTUDENTPOPULATOR_SET_CHATSORTINGRULE_OFFSET UNITYSDK_OFFSET(0x21ACCC0)
#define UIACADEMYMESSANGERSTUDENTPOPULATOR_GET_MESSANGERUI_OFFSET UNITYSDK_OFFSET(0x21ACCD0)
#define UIACADEMYMESSANGERSTUDENTPOPULATOR_CLOSESORTINGPOPUP_OFFSET UNITYSDK_OFFSET(0x21ACCE0)
#define UIACADEMYMESSANGERSTUDENTPOPULATOR_SET_CHATSORTINGORDER_OFFSET UNITYSDK_OFFSET(0x21ACD00)
#define UIACADEMYMESSANGERSTUDENTPOPULATOR__SETITEMS_G__SETINDEX|56_1_OFFSET UNITYSDK_OFFSET(0x21AC910)
#define UIACADEMYMESSANGERSTUDENTPOPULATOR_SET_SELECTEDCHARACTER_OFFSET UNITYSDK_OFFSET(0x21ACD10)
#define UIACADEMYMESSANGERSTUDENTPOPULATOR_ONSORTCHANGED_OFFSET UNITYSDK_OFFSET(0x21A7D40)

	inline static constexpr unsigned int UIAcademyMessangerStudentPopulator_TypeDefinitionIndex = 4173;

	class UIAcademyMessangerStudentPopulator : public ::BestHTTP::SecureProtocol::Org::BouncyCastle::Security::InvalidKeyException
	{
	public:
		::UnityEngine::Transform* contentContainer; // 0x58
		UIAcademyMessangerSortingPopup* sortingPopup; // 0x60
		MXButton* openSortingButton; // 0x68
		MXButton* toggleOrderButton; // 0x70
		UILabel* currentSortingLabel; // 0x78
		::UnityEngine::GameObject* sortAsc; // 0x80
		::UnityEngine::GameObject* sortDesc; // 0x88
		UIAcademyMessengerNameSearch* nameSearch; // 0x90
		::UnityEngine::GameObject* emptyObject; // 0x98
		MessangerDisplayType* displayType; // 0xA0
		::System::Int64 _SelectedCharacter_k__BackingField; // 0xA8
		SortingRule* _StudentSortingRule_k__BackingField; // 0xB0
		ChatSortingRule* _ChatSortingRule_k__BackingField; // 0xB4
		SortingOrder* _StudentSortingOrder_k__BackingField; // 0xB8
		SortingOrder* _ChatSortingOrder_k__BackingField; // 0xBC
		UIAcademyMessanger* _MessangerUI_k__BackingField; // 0xC0
		Il2CppObject* _SortedList_k__BackingField; // 0xC8
		::System::Int32 _FirstBirthDayIndex_k__BackingField; // 0xD0
		::System::Int32 _FirstBirthDayIsCommingIndex_k__BackingField; // 0xD4
		::System::Int32 _FirstNeitherBirthDayNorCommingIndex_k__BackingField; // 0xD8

		::System::Void set_FirstBirthDayIsCommingIndex(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYMESSANGERSTUDENTPOPULATOR_SET_FIRSTBIRTHDAYISCOMMINGINDEX_OFFSET))(arg, nullptr);
		}

		::System::Void set_FirstNeitherBirthDayNorCommingIndex(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYMESSANGERSTUDENTPOPULATOR_SET_FIRSTNEITHERBIRTHDAYNORCOMMINGINDEX_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Transform* GetListUnitParentTransform()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYMESSANGERSTUDENTPOPULATOR_GETLISTUNITPARENTTRANSFORM_OFFSET))(nullptr);
		}

		::System::Int32 get_FirstBirthDayIsCommingIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYMESSANGERSTUDENTPOPULATOR_GET_FIRSTBIRTHDAYISCOMMINGINDEX_OFFSET))(nullptr);
		}

		SortingRule* get_StudentSortingRule()
		{
			return ((SortingRule*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYMESSANGERSTUDENTPOPULATOR_GET_STUDENTSORTINGRULE_OFFSET))(nullptr);
		}

		::System::Void set_FirstBirthDayIndex(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYMESSANGERSTUDENTPOPULATOR_SET_FIRSTBIRTHDAYINDEX_OFFSET))(arg, nullptr);
		}

		::System::Boolean HandleMomotalkReadSyncMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYMESSANGERSTUDENTPOPULATOR_HANDLEMOMOTALKREADSYNCMESSAGE_OFFSET))(arg, nullptr);
		}

		SortingOrder* get_ChatSortingOrder()
		{
			return ((SortingOrder*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYMESSANGERSTUDENTPOPULATOR_GET_CHATSORTINGORDER_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYMESSANGERSTUDENTPOPULATOR_AWAKE_OFFSET))(nullptr);
		}

		MessangerDisplayType* get_DisplayType()
		{
			return ((MessangerDisplayType*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYMESSANGERSTUDENTPOPULATOR_GET_DISPLAYTYPE_OFFSET))(nullptr);
		}

		::System::Void PrepareLocalPosition(UIAcademyMessangerStudentPopulatorUnit* arg, ::System::Int32 arg2, ::System::Int32 arg3)
		{
			((::System::Void(*)(UIAcademyMessangerStudentPopulatorUnit*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYMESSANGERSTUDENTPOPULATOR_PREPARELOCALPOSITION_OFFSET))(arg, arg2, arg3, nullptr);
		}

		Il2CppObject* GetCharacterList(MessangerDisplayType* arg)
		{
			return ((Il2CppObject*(*)(MessangerDisplayType*, ::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYMESSANGERSTUDENTPOPULATOR_GETCHARACTERLIST_OFFSET))(arg, nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYMESSANGERSTUDENTPOPULATOR_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void set_StudentSortingRule(SortingRule* arg)
		{
			((::System::Void(*)(SortingRule*, ::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYMESSANGERSTUDENTPOPULATOR_SET_STUDENTSORTINGRULE_OFFSET))(arg, nullptr);
		}

		::System::Void set_SortedList(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYMESSANGERSTUDENTPOPULATOR_SET_SORTEDLIST_OFFSET))(arg, nullptr);
		}

		::System::Void OnSearchResultUpdated(NameSearchResult* arg)
		{
			((::System::Void(*)(NameSearchResult*, ::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYMESSANGERSTUDENTPOPULATOR_ONSEARCHRESULTUPDATED_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* _SetItems_g__YieldResetScrollView|56_2()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYMESSANGERSTUDENTPOPULATOR__SETITEMS_G__YIELDRESETSCROLLVIEW|56_2_OFFSET))(nullptr);
		}

		::System::Void SetSortUI()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYMESSANGERSTUDENTPOPULATOR_SETSORTUI_OFFSET))(nullptr);
		}

		::System::Void SetItemData(UIAcademyMessangerStudentPopulatorUnit* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(UIAcademyMessangerStudentPopulatorUnit*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYMESSANGERSTUDENTPOPULATOR_SETITEMDATA_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void set_DisplayType(MessangerDisplayType* arg)
		{
			((::System::Void(*)(MessangerDisplayType*, ::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYMESSANGERSTUDENTPOPULATOR_SET_DISPLAYTYPE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* BuildSortedList(::MX::SaveData::AcademyMessangerSortingSaveData* arg)
		{
			return ((Il2CppObject*(*)(::MX::SaveData::AcademyMessangerSortingSaveData*, ::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYMESSANGERSTUDENTPOPULATOR_BUILDSORTEDLIST_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickOpenSorting()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYMESSANGERSTUDENTPOPULATOR_ONCLICKOPENSORTING_OFFSET))(nullptr);
		}

		::System::Void OnFeedbackMessageUpdated(::System::Int64 arg, ::MX::Data::AcademyMessageData* arg2)
		{
			((::System::Void(*)(::System::Int64, ::MX::Data::AcademyMessageData*, ::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYMESSANGERSTUDENTPOPULATOR_ONFEEDBACKMESSAGEUPDATED_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean IsOnSortingPopup()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYMESSANGERSTUDENTPOPULATOR_ISONSORTINGPOPUP_OFFSET))(nullptr);
		}

		SortingOrder* get_StudentSortingOrder()
		{
			return ((SortingOrder*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYMESSANGERSTUDENTPOPULATOR_GET_STUDENTSORTINGORDER_OFFSET))(nullptr);
		}

		::System::Void OnClickToggleOrder()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYMESSANGERSTUDENTPOPULATOR_ONCLICKTOGGLEORDER_OFFSET))(nullptr);
		}

		::System::Int32 get_FirstBirthDayIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYMESSANGERSTUDENTPOPULATOR_GET_FIRSTBIRTHDAYINDEX_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYMESSANGERSTUDENTPOPULATOR_.CTOR_OFFSET))(nullptr);
		}

		::System::Int64 get_SelectedCharacter()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYMESSANGERSTUDENTPOPULATOR_GET_SELECTEDCHARACTER_OFFSET))(nullptr);
		}

		::System::Void RefreshElements()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYMESSANGERSTUDENTPOPULATOR_REFRESHELEMENTS_OFFSET))(nullptr);
		}

		ChatSortingRule* get_ChatSortingRule()
		{
			return ((ChatSortingRule*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYMESSANGERSTUDENTPOPULATOR_GET_CHATSORTINGRULE_OFFSET))(nullptr);
		}

		::System::Void set_MessangerUI(UIAcademyMessanger* arg)
		{
			((::System::Void(*)(UIAcademyMessanger*, ::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYMESSANGERSTUDENTPOPULATOR_SET_MESSANGERUI_OFFSET))(arg, nullptr);
		}

		::System::Void OnDestroy()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYMESSANGERSTUDENTPOPULATOR_ONDESTROY_OFFSET))(nullptr);
		}

		::System::Int32 get_FirstNeitherBirthDayNorCommingIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYMESSANGERSTUDENTPOPULATOR_GET_FIRSTNEITHERBIRTHDAYNORCOMMINGINDEX_OFFSET))(nullptr);
		}

		::System::Void OnSelectCharacter(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYMESSANGERSTUDENTPOPULATOR_ONSELECTCHARACTER_OFFSET))(arg, nullptr);
		}

		::System::Void _OnSelectCharacter_b__59_0(UIAcademyMessangerStudentPopulatorUnit* arg)
		{
			((::System::Void(*)(UIAcademyMessangerStudentPopulatorUnit*, ::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYMESSANGERSTUDENTPOPULATOR__ONSELECTCHARACTER_B__59_0_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_SortedList()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYMESSANGERSTUDENTPOPULATOR_GET_SORTEDLIST_OFFSET))(nullptr);
		}

		::System::Void InitLocalPosition(UIAcademyMessangerStudentPopulatorUnit* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(UIAcademyMessangerStudentPopulatorUnit*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYMESSANGERSTUDENTPOPULATOR_INITLOCALPOSITION_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYMESSANGERSTUDENTPOPULATOR_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Void SetItems()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYMESSANGERSTUDENTPOPULATOR_SETITEMS_OFFSET))(nullptr);
		}

		::System::Void set_StudentSortingOrder(SortingOrder* arg)
		{
			((::System::Void(*)(SortingOrder*, ::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYMESSANGERSTUDENTPOPULATOR_SET_STUDENTSORTINGORDER_OFFSET))(arg, nullptr);
		}

		::UnityEngine::GameObject* GetListUnitParentGameObject()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYMESSANGERSTUDENTPOPULATOR_GETLISTUNITPARENTGAMEOBJECT_OFFSET))(nullptr);
		}

		::System::Void set_ChatSortingRule(ChatSortingRule* arg)
		{
			((::System::Void(*)(ChatSortingRule*, ::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYMESSANGERSTUDENTPOPULATOR_SET_CHATSORTINGRULE_OFFSET))(arg, nullptr);
		}

		UIAcademyMessanger* get_MessangerUI()
		{
			return ((UIAcademyMessanger*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYMESSANGERSTUDENTPOPULATOR_GET_MESSANGERUI_OFFSET))(nullptr);
		}

		::System::Void CloseSortingPopup()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYMESSANGERSTUDENTPOPULATOR_CLOSESORTINGPOPUP_OFFSET))(nullptr);
		}

		::System::Void set_ChatSortingOrder(SortingOrder* arg)
		{
			((::System::Void(*)(SortingOrder*, ::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYMESSANGERSTUDENTPOPULATOR_SET_CHATSORTINGORDER_OFFSET))(arg, nullptr);
		}

		::System::Void _SetItems_g__SetIndex|56_1()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYMESSANGERSTUDENTPOPULATOR__SETITEMS_G__SETINDEX|56_1_OFFSET))(nullptr);
		}

		::System::Void set_SelectedCharacter(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYMESSANGERSTUDENTPOPULATOR_SET_SELECTEDCHARACTER_OFFSET))(arg, nullptr);
		}

		::System::Void OnSortChanged()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYMESSANGERSTUDENTPOPULATOR_ONSORTCHANGED_OFFSET))(nullptr);
		}

	};

