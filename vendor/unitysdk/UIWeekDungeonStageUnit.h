#pragma once
#include "unitysdk.h"

namespace UnityEngine { class GameObject; }
class MXButton;
class StageClearIconPlayer;
class StageOpenConditionController;
namespace MX::Data::Excel { class WeekDungeonExcel; }
namespace MX::Data::Excel { class SchoolDungeonStageExcel; }
namespace FlatData { class ContentType; }
class UIScrollView;
class UIPopup_System;
class UIWeekDungeonEnterPopup;

#define UIWEEKDUNGEONSTAGEUNIT_GET_STAGEOPENCONDITIONCONTROLLER_OFFSET UNITYSDK_OFFSET(0xBD09F0)
#define UIWEEKDUNGEONSTAGEUNIT_GET_STAGEID_OFFSET UNITYSDK_OFFSET(0xBD0A60)
#define UIWEEKDUNGEONSTAGEUNIT_SET_STAGEID_OFFSET UNITYSDK_OFFSET(0xBD0A70)
#define UIWEEKDUNGEONSTAGEUNIT_GET_ISWEEKDUNGEON_OFFSET UNITYSDK_OFFSET(0xBD0A80)
#define UIWEEKDUNGEONSTAGEUNIT_SET_ISWEEKDUNGEON_OFFSET UNITYSDK_OFFSET(0xBD0A90)
#define UIWEEKDUNGEONSTAGEUNIT_GET_CONTENTTYPE_OFFSET UNITYSDK_OFFSET(0xBD0AA0)
#define UIWEEKDUNGEONSTAGEUNIT_SET_CONTENTTYPE_OFFSET UNITYSDK_OFFSET(0xBD0AB0)
#define UIWEEKDUNGEONSTAGEUNIT_AWAKE_OFFSET UNITYSDK_OFFSET(0xBD0AC0)
#define UIWEEKDUNGEONSTAGEUNIT_SETDATA_OFFSET UNITYSDK_OFFSET(0xBCD000)
#define UIWEEKDUNGEONSTAGEUNIT_SETDATA_OFFSET UNITYSDK_OFFSET(0xBD0CD0)
#define UIWEEKDUNGEONSTAGEUNIT_NEEDTOPLAYUNLOCKING_OFFSET UNITYSDK_OFFSET(0xBCE890)
#define UIWEEKDUNGEONSTAGEUNIT_PLAYUNLOCKANIMATION_OFFSET UNITYSDK_OFFSET(0xBCF600)
#define UIWEEKDUNGEONSTAGEUNIT_PLAYCLEARANIMATION_OFFSET UNITYSDK_OFFSET(0xBCEE30)
#define UIWEEKDUNGEONSTAGEUNIT_ONCLICKENTER_OFFSET UNITYSDK_OFFSET(0xBD1120)
#define UIWEEKDUNGEONSTAGEUNIT_ONCLICKDISABLE_OFFSET UNITYSDK_OFFSET(0xBD14C0)
#define UIWEEKDUNGEONSTAGEUNIT_.CTOR_OFFSET UNITYSDK_OFFSET(0xBD1820)
#define UIWEEKDUNGEONSTAGEUNIT__ONCLICKENTER_B__31_0_OFFSET UNITYSDK_OFFSET(0xBD1830)
#define UIWEEKDUNGEONSTAGEUNIT__ONCLICKENTER_B__31_2_OFFSET UNITYSDK_OFFSET(0xBD18D0)
#define UIWEEKDUNGEONSTAGEUNIT__ONCLICKENTER_B__31_1_OFFSET UNITYSDK_OFFSET(0xBD19C0)
#define UIWEEKDUNGEONSTAGEUNIT__ONCLICKENTER_B__31_4_OFFSET UNITYSDK_OFFSET(0xBD19F0)

	inline static constexpr unsigned int UIWeekDungeonStageUnit_TypeDefinitionIndex = 8666;

	class UIWeekDungeonStageUnit : public Il2CppObject
	{
	public:
		::UnityEngine::GameObject* able; // 0x18
		::UnityEngine::GameObject* disable; // 0x20
		Il2CppObject* stageNumbers; // 0x28
		Il2CppObject* starsOn; // 0x30
		Il2CppObject* stageNames; // 0x38
		MXButton* enterButton; // 0x40
		MXButton* disableButton; // 0x48
		StageClearIconPlayer* clearIconPlayer; // 0x50
		StageOpenConditionController* _stageOpenConditionController; // 0x58
		::MX::Data::Excel::WeekDungeonExcel* weekDungeonExcel; // 0x60
		::MX::Data::Excel::SchoolDungeonStageExcel* schoolDungeonExcel; // 0x70
		::System::Int64 _StageId_k__BackingField; // 0x80
		::System::Boolean _IsWeekDungeon_k__BackingField; // 0x88
		::FlatData::ContentType* _ContentType_k__BackingField; // 0x8C

		StageOpenConditionController* get_stageOpenConditionController()
		{
			return ((StageOpenConditionController*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWEEKDUNGEONSTAGEUNIT_GET_STAGEOPENCONDITIONCONTROLLER_OFFSET))(nullptr);
		}

		::System::Int64 get_StageId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWEEKDUNGEONSTAGEUNIT_GET_STAGEID_OFFSET))(nullptr);
		}

		::System::Void set_StageId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UIWEEKDUNGEONSTAGEUNIT_SET_STAGEID_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsWeekDungeon()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWEEKDUNGEONSTAGEUNIT_GET_ISWEEKDUNGEON_OFFSET))(nullptr);
		}

		::System::Void set_IsWeekDungeon(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIWEEKDUNGEONSTAGEUNIT_SET_ISWEEKDUNGEON_OFFSET))(arg, nullptr);
		}

		::FlatData::ContentType* get_ContentType()
		{
			return ((::FlatData::ContentType*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWEEKDUNGEONSTAGEUNIT_GET_CONTENTTYPE_OFFSET))(nullptr);
		}

		::System::Void set_ContentType(::FlatData::ContentType* arg)
		{
			((::System::Void(*)(::FlatData::ContentType*, ::PVOID))((::PBYTE)hIl2Cpp + UIWEEKDUNGEONSTAGEUNIT_SET_CONTENTTYPE_OFFSET))(arg, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWEEKDUNGEONSTAGEUNIT_AWAKE_OFFSET))(nullptr);
		}

		::System::Void SetData(::System::Boolean arg, ::MX::Data::Excel::WeekDungeonExcel* arg2, UIScrollView* arg3)
		{
			((::System::Void(*)(::System::Boolean, ::MX::Data::Excel::WeekDungeonExcel*, UIScrollView*, ::PVOID))((::PBYTE)hIl2Cpp + UIWEEKDUNGEONSTAGEUNIT_SETDATA_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void SetData(::System::Boolean arg, ::MX::Data::Excel::SchoolDungeonStageExcel* arg2, UIScrollView* arg3)
		{
			((::System::Void(*)(::System::Boolean, ::MX::Data::Excel::SchoolDungeonStageExcel*, UIScrollView*, ::PVOID))((::PBYTE)hIl2Cpp + UIWEEKDUNGEONSTAGEUNIT_SETDATA_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Boolean NeedToPlayUnlocking()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWEEKDUNGEONSTAGEUNIT_NEEDTOPLAYUNLOCKING_OFFSET))(nullptr);
		}

		::System::Single PlayUnlockAnimation()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWEEKDUNGEONSTAGEUNIT_PLAYUNLOCKANIMATION_OFFSET))(nullptr);
		}

		::System::Single PlayClearAnimation()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWEEKDUNGEONSTAGEUNIT_PLAYCLEARANIMATION_OFFSET))(nullptr);
		}

		::System::Void OnClickEnter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWEEKDUNGEONSTAGEUNIT_ONCLICKENTER_OFFSET))(nullptr);
		}

		::System::Void OnClickDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWEEKDUNGEONSTAGEUNIT_ONCLICKDISABLE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWEEKDUNGEONSTAGEUNIT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void _OnClickEnter_b__31_0(UIPopup_System* arg)
		{
			((::System::Void(*)(UIPopup_System*, ::PVOID))((::PBYTE)hIl2Cpp + UIWEEKDUNGEONSTAGEUNIT__ONCLICKENTER_B__31_0_OFFSET))(arg, nullptr);
		}

		::System::Void _OnClickEnter_b__31_2()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWEEKDUNGEONSTAGEUNIT__ONCLICKENTER_B__31_2_OFFSET))(nullptr);
		}

		::System::Void _OnClickEnter_b__31_1(UIWeekDungeonEnterPopup* arg)
		{
			((::System::Void(*)(UIWeekDungeonEnterPopup*, ::PVOID))((::PBYTE)hIl2Cpp + UIWEEKDUNGEONSTAGEUNIT__ONCLICKENTER_B__31_1_OFFSET))(arg, nullptr);
		}

		::System::Void _OnClickEnter_b__31_4(UIWeekDungeonEnterPopup* arg)
		{
			((::System::Void(*)(UIWeekDungeonEnterPopup*, ::PVOID))((::PBYTE)hIl2Cpp + UIWEEKDUNGEONSTAGEUNIT__ONCLICKENTER_B__31_4_OFFSET))(arg, nullptr);
		}

	};

