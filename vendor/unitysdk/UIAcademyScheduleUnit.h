#pragma once
#include "unitysdk.h"

namespace UnityEngine { class GameObject; }
class UILabel;
class UIWidget;
class UIGrid;
class UIAcademyStudentThumbnail;
class MXButton;
namespace MX::Data { class AcademyScheduleData; }
class UIAcademyScheduleInfoPopup;
class UIAcademyScheduleInfoPopup_event;

#define UIACADEMYSCHEDULEUNIT_SET_SCHEDULEID_OFFSET UNITYSDK_OFFSET(0x21E2890)
#define UIACADEMYSCHEDULEUNIT_SET_ZONEID_OFFSET UNITYSDK_OFFSET(0x21E28A0)
#define UIACADEMYSCHEDULEUNIT_GET_ZONEID_OFFSET UNITYSDK_OFFSET(0x21E28B0)
#define UIACADEMYSCHEDULEUNIT_ONCLICKBUTTON_OFFSET UNITYSDK_OFFSET(0x21E28C0)
#define UIACADEMYSCHEDULEUNIT_SETDATA_OFFSET UNITYSDK_OFFSET(0x21E2AB0)
#define UIACADEMYSCHEDULEUNIT_GET_SCHEDULEGROUPID_OFFSET UNITYSDK_OFFSET(0x21E3520)
#define UIACADEMYSCHEDULEUNIT_GET_SCHEDULEID_OFFSET UNITYSDK_OFFSET(0x21E3530)
#define UIACADEMYSCHEDULEUNIT_SETBUTTONDELEGATE_OFFSET UNITYSDK_OFFSET(0x21E3040)
#define UIACADEMYSCHEDULEUNIT__ONCLICKBUTTON_B__28_1_OFFSET UNITYSDK_OFFSET(0x21E35D0)
#define UIACADEMYSCHEDULEUNIT_GET_BUTTON_OFFSET UNITYSDK_OFFSET(0x21E3540)
#define UIACADEMYSCHEDULEUNIT_SETTHUMBNAILS_OFFSET UNITYSDK_OFFSET(0x21E3210)
#define UIACADEMYSCHEDULEUNIT_.CTOR_OFFSET UNITYSDK_OFFSET(0x21E3610)
#define UIACADEMYSCHEDULEUNIT__ONCLICKBUTTON_B__28_0_OFFSET UNITYSDK_OFFSET(0x21E3690)
#define UIACADEMYSCHEDULEUNIT_SET_SCHEDULEGROUPID_OFFSET UNITYSDK_OFFSET(0x21E36D0)

	inline static constexpr unsigned int UIAcademyScheduleUnit_TypeDefinitionIndex = 4230;

	class UIAcademyScheduleUnit : public Il2CppObject
	{
	public:
		::UnityEngine::GameObject* isLocked; // 0x18
		UILabel* lockedReason; // 0x20
		UIWidget* widgetsParent; // 0x28
		UILabel* levelLabel; // 0x30
		UILabel* zoneLabel; // 0x38
		UILabel* scheduleLabel; // 0x40
		UIGrid* thumbnamilGrid; // 0x48
		UIAcademyStudentThumbnail* thumbnailPrefab; // 0x50
		::UnityEngine::GameObject* noStudentLabel; // 0x58
		MXButton* _button; // 0x60
		Il2CppObject* thumbnails; // 0x68
		::System::Int64 _ScheduleId_k__BackingField; // 0x70
		::System::Int64 _ScheduleGroupId_k__BackingField; // 0x78
		::System::Int64 _ZoneId_k__BackingField; // 0x80

		::System::Void set_ScheduleId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYSCHEDULEUNIT_SET_SCHEDULEID_OFFSET))(arg, nullptr);
		}

		::System::Void set_ZoneId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYSCHEDULEUNIT_SET_ZONEID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_ZoneId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYSCHEDULEUNIT_GET_ZONEID_OFFSET))(nullptr);
		}

		::System::Void OnClickButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYSCHEDULEUNIT_ONCLICKBUTTON_OFFSET))(nullptr);
		}

		::System::Void SetData(::MX::Data::AcademyScheduleData* arg, ::System::Int64 arg2, ::System::String* str, Il2CppObject* arg3)
		{
			((::System::Void(*)(::MX::Data::AcademyScheduleData*, ::System::Int64, ::System::String*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYSCHEDULEUNIT_SETDATA_OFFSET))(arg, arg2, str, arg3, nullptr);
		}

		::System::Int64 get_ScheduleGroupId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYSCHEDULEUNIT_GET_SCHEDULEGROUPID_OFFSET))(nullptr);
		}

		::System::Int64 get_ScheduleId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYSCHEDULEUNIT_GET_SCHEDULEID_OFFSET))(nullptr);
		}

		::System::Void SetButtonDelegate(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYSCHEDULEUNIT_SETBUTTONDELEGATE_OFFSET))(arg, nullptr);
		}

		::System::Void _OnClickButton_b__28_1(UIAcademyScheduleInfoPopup* arg)
		{
			((::System::Void(*)(UIAcademyScheduleInfoPopup*, ::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYSCHEDULEUNIT__ONCLICKBUTTON_B__28_1_OFFSET))(arg, nullptr);
		}

		MXButton* get_Button()
		{
			return ((MXButton*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYSCHEDULEUNIT_GET_BUTTON_OFFSET))(nullptr);
		}

		::System::Void SetThumbnails(Il2CppObject* arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYSCHEDULEUNIT_SETTHUMBNAILS_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYSCHEDULEUNIT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void _OnClickButton_b__28_0(UIAcademyScheduleInfoPopup_event* arg)
		{
			((::System::Void(*)(UIAcademyScheduleInfoPopup_event*, ::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYSCHEDULEUNIT__ONCLICKBUTTON_B__28_0_OFFSET))(arg, nullptr);
		}

		::System::Void set_ScheduleGroupId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYSCHEDULEUNIT_SET_SCHEDULEGROUPID_OFFSET))(arg, nullptr);
		}

	};

