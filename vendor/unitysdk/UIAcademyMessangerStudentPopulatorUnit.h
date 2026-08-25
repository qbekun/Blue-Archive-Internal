#pragma once
#include "unitysdk.h"

class UITexture;
class UILabel;
namespace UnityEngine { class GameObject; }
class UIWidget;
namespace UnityEngine { class Transform; }
class UIEventTrigger;
class MessangerDisplayType;
class UIAcademyMessangerStudentPopulator;
class UIScrollView;
class CharacterObject;
namespace MX::Data { class AcademyMessageData; }

#define UIACADEMYMESSANGERSTUDENTPOPULATORUNIT_SET_DISPLAYTYPE_OFFSET UNITYSDK_OFFSET(0x21AD180)
#define UIACADEMYMESSANGERSTUDENTPOPULATORUNIT_SETBEHAVIOR_OFFSET UNITYSDK_OFFSET(0x21AD190)
#define UIACADEMYMESSANGERSTUDENTPOPULATORUNIT_GET_ISHEADERACTIVE_OFFSET UNITYSDK_OFFSET(0x21AD280)
#define UIACADEMYMESSANGERSTUDENTPOPULATORUNIT_SETSELECTED_OFFSET UNITYSDK_OFFSET(0x21AC740)
#define UIACADEMYMESSANGERSTUDENTPOPULATORUNIT_SETDATA_OFFSET UNITYSDK_OFFSET(0x21ABA10)
#define UIACADEMYMESSANGERSTUDENTPOPULATORUNIT_SETLOCALPOSITION_OFFSET UNITYSDK_OFFSET(0x21AD8F0)
#define UIACADEMYMESSANGERSTUDENTPOPULATORUNIT_GET_SERVERID_OFFSET UNITYSDK_OFFSET(0x21ADA20)
#define UIACADEMYMESSANGERSTUDENTPOPULATORUNIT_SETHEADERANDBODY_OFFSET UNITYSDK_OFFSET(0x21AD4D0)
#define UIACADEMYMESSANGERSTUDENTPOPULATORUNIT_SETMESSAGELABEL_OFFSET UNITYSDK_OFFSET(0x21AD3C0)
#define UIACADEMYMESSANGERSTUDENTPOPULATORUNIT_SET_SERVERID_OFFSET UNITYSDK_OFFSET(0x21ADA30)
#define UIACADEMYMESSANGERSTUDENTPOPULATORUNIT_.CTOR_OFFSET UNITYSDK_OFFSET(0x21ADA40)
#define UIACADEMYMESSANGERSTUDENTPOPULATORUNIT_ISVISIBLE_OFFSET UNITYSDK_OFFSET(0x21ADA50)
#define UIACADEMYMESSANGERSTUDENTPOPULATORUNIT_GET_DISPLAYTYPE_OFFSET UNITYSDK_OFFSET(0x21ADB20)
#define UIACADEMYMESSANGERSTUDENTPOPULATORUNIT_AWAKE_OFFSET UNITYSDK_OFFSET(0x21ADB30)
#define UIACADEMYMESSANGERSTUDENTPOPULATORUNIT_ONCLICKSTUDENTINFO_OFFSET UNITYSDK_OFFSET(0x21ADC60)
#define UIACADEMYMESSANGERSTUDENTPOPULATORUNIT_REFRESHUI_OFFSET UNITYSDK_OFFSET(0x21ACF20)
#define UIACADEMYMESSANGERSTUDENTPOPULATORUNIT_GET_POPULATOR_OFFSET UNITYSDK_OFFSET(0x21AD310)
#define UIACADEMYMESSANGERSTUDENTPOPULATORUNIT_ONFEEDBACKMESSAGEUPDATED_OFFSET UNITYSDK_OFFSET(0x21AD050)

	inline static constexpr unsigned int UIAcademyMessangerStudentPopulatorUnit_TypeDefinitionIndex = 4174;

	class UIAcademyMessangerStudentPopulatorUnit : public Il2CppObject
	{
	public:
		UITexture* thumbnail; // 0x50
		UILabel* studentNameLabel; // 0x58
		UILabel* messageLabel; // 0x60
		::UnityEngine::GameObject* selected; // 0x68
		::UnityEngine::GameObject* favorRankRoot; // 0x70
		UILabel* favorRankLabel; // 0x78
		::UnityEngine::GameObject* notiRoot; // 0x80
		UILabel* notiLabel; // 0x88
		UIWidget* header; // 0x90
		UILabel* headerLabel; // 0x98
		UIWidget* body; // 0xA0
		::UnityEngine::Transform* studentInfoRoot; // 0xA8
		UIEventTrigger* eventTrigger; // 0xB0
		::UnityEngine::GameObject* birthDayObject; // 0xB8
		::UnityEngine::GameObject* d_Day_Object; // 0xC0
		UILabel* d_Day_label; // 0xC8
		::UnityEngine::GameObject* favorite; // 0xD0
		MessangerDisplayType* _DisplayType_k__BackingField; // 0xD8
		UIAcademyMessangerStudentPopulator* populator; // 0xE0
		::System::Int64 _ServerId_k__BackingField; // 0xE8

		::System::Void set_DisplayType(MessangerDisplayType* arg)
		{
			((::System::Void(*)(MessangerDisplayType*, ::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYMESSANGERSTUDENTPOPULATORUNIT_SET_DISPLAYTYPE_OFFSET))(arg, nullptr);
		}

		::System::Void SetBehavior(UIScrollView* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(UIScrollView*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYMESSANGERSTUDENTPOPULATORUNIT_SETBEHAVIOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean get_IsHeaderActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYMESSANGERSTUDENTPOPULATORUNIT_GET_ISHEADERACTIVE_OFFSET))(nullptr);
		}

		::System::Void SetSelected(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYMESSANGERSTUDENTPOPULATORUNIT_SETSELECTED_OFFSET))(arg, nullptr);
		}

		::System::Void SetData(CharacterObject* arg)
		{
			((::System::Void(*)(CharacterObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYMESSANGERSTUDENTPOPULATORUNIT_SETDATA_OFFSET))(arg, nullptr);
		}

		::System::Void SetLocalPosition()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYMESSANGERSTUDENTPOPULATORUNIT_SETLOCALPOSITION_OFFSET))(nullptr);
		}

		::System::Int64 get_ServerId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYMESSANGERSTUDENTPOPULATORUNIT_GET_SERVERID_OFFSET))(nullptr);
		}

		::System::Void SetHeaderAndBody(CharacterObject* arg)
		{
			((::System::Void(*)(CharacterObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYMESSANGERSTUDENTPOPULATORUNIT_SETHEADERANDBODY_OFFSET))(arg, nullptr);
		}

		::System::Void SetMessageLabel(::MX::Data::AcademyMessageData* arg)
		{
			((::System::Void(*)(::MX::Data::AcademyMessageData*, ::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYMESSANGERSTUDENTPOPULATORUNIT_SETMESSAGELABEL_OFFSET))(arg, nullptr);
		}

		::System::Void set_ServerId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYMESSANGERSTUDENTPOPULATORUNIT_SET_SERVERID_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYMESSANGERSTUDENTPOPULATORUNIT_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean IsVisible()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYMESSANGERSTUDENTPOPULATORUNIT_ISVISIBLE_OFFSET))(nullptr);
		}

		MessangerDisplayType* get_DisplayType()
		{
			return ((MessangerDisplayType*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYMESSANGERSTUDENTPOPULATORUNIT_GET_DISPLAYTYPE_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYMESSANGERSTUDENTPOPULATORUNIT_AWAKE_OFFSET))(nullptr);
		}

		::System::Void OnClickStudentInfo()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYMESSANGERSTUDENTPOPULATORUNIT_ONCLICKSTUDENTINFO_OFFSET))(nullptr);
		}

		::System::Void RefreshUI()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYMESSANGERSTUDENTPOPULATORUNIT_REFRESHUI_OFFSET))(nullptr);
		}

		UIAcademyMessangerStudentPopulator* get_Populator()
		{
			return ((UIAcademyMessangerStudentPopulator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYMESSANGERSTUDENTPOPULATORUNIT_GET_POPULATOR_OFFSET))(nullptr);
		}

		::System::Void OnFeedbackMessageUpdated(::System::Int64 arg, ::MX::Data::AcademyMessageData* arg2)
		{
			((::System::Void(*)(::System::Int64, ::MX::Data::AcademyMessageData*, ::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYMESSANGERSTUDENTPOPULATORUNIT_ONFEEDBACKMESSAGEUPDATED_OFFSET))(arg, arg2, nullptr);
		}

	};

