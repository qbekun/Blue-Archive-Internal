#pragma once
#include "unitysdk.h"

namespace UnityEngine { class GameObject; }
class UILabel;
class MXButton;
class UIScenarioMode_MainChapterList;
class StageOpenConditionController;
namespace FlatData { class ScenarioModeTypes; }
namespace FlatData { class ScenarioModeSubTypes; }

#define UISCENARIOMODE_MAINCHAPTERLISTUNIT_AWAKE_OFFSET UNITYSDK_OFFSET(0x2801480)
#define UISCENARIOMODE_MAINCHAPTERLISTUNIT_GET_CHAPTERLIST_OFFSET UNITYSDK_OFFSET(0x28015C0)
#define UISCENARIOMODE_MAINCHAPTERLISTUNIT_GET_STAGEOPENCONDITIONCONTROLLER_OFFSET UNITYSDK_OFFSET(0x2801670)
#define UISCENARIOMODE_MAINCHAPTERLISTUNIT_GET_VOLUMEID_OFFSET UNITYSDK_OFFSET(0x2801700)
#define UISCENARIOMODE_MAINCHAPTERLISTUNIT_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x2801720)
#define UISCENARIOMODE_MAINCHAPTERLISTUNIT_GET_ISOPENED_OFFSET UNITYSDK_OFFSET(0x2801740)
#define UISCENARIOMODE_MAINCHAPTERLISTUNIT_.CTOR_OFFSET UNITYSDK_OFFSET(0x2801750)
#define UISCENARIOMODE_MAINCHAPTERLISTUNIT_GET_SUBTYPE_OFFSET UNITYSDK_OFFSET(0x2801790)
#define UISCENARIOMODE_MAINCHAPTERLISTUNIT_PLAYUNLOCKANIMATION_OFFSET UNITYSDK_OFFSET(0x2800D90)
#define UISCENARIOMODE_MAINCHAPTERLISTUNIT_GET_ISUNLOCKCONTROLLERREADYTOPLAY_OFFSET UNITYSDK_OFFSET(0x2800700)
#define UISCENARIOMODE_MAINCHAPTERLISTUNIT_SET_CHAPTERID_OFFSET UNITYSDK_OFFSET(0x28017B0)
#define UISCENARIOMODE_MAINCHAPTERLISTUNIT_SETDATA_OFFSET UNITYSDK_OFFSET(0x28017C0)
#define UISCENARIOMODE_MAINCHAPTERLISTUNIT_ONCLICKBUTTON_OFFSET UNITYSDK_OFFSET(0x2801C90)
#define UISCENARIOMODE_MAINCHAPTERLISTUNIT_GET_CHAPTERID_OFFSET UNITYSDK_OFFSET(0x2802340)
#define UISCENARIOMODE_MAINCHAPTERLISTUNIT_SET_ISOPENED_OFFSET UNITYSDK_OFFSET(0x2802350)

	inline static constexpr unsigned int UIScenarioMode_MainChapterListUnit_TypeDefinitionIndex = 7758;

	class UIScenarioMode_MainChapterListUnit : public ::System::Xml::XPath::XPathItem
	{
	public:
		::UnityEngine::GameObject* reddot; // 0x28
		UILabel* numberLabel; // 0x30
		UILabel* titleLabel; // 0x38
		MXButton* button; // 0x40
		UIScenarioMode_MainChapterList* chapterList; // 0x48
		StageOpenConditionController* stageOpenConditionController; // 0x50
		::System::Int64 _ChapterId_k__BackingField; // 0x58
		::System::Boolean _IsOpened_k__BackingField; // 0x60
		Il2CppObject* openConditions; // 0x68

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_MAINCHAPTERLISTUNIT_AWAKE_OFFSET))(nullptr);
		}

		UIScenarioMode_MainChapterList* get_ChapterList()
		{
			return ((UIScenarioMode_MainChapterList*(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_MAINCHAPTERLISTUNIT_GET_CHAPTERLIST_OFFSET))(nullptr);
		}

		StageOpenConditionController* get_StageOpenConditionController()
		{
			return ((StageOpenConditionController*(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_MAINCHAPTERLISTUNIT_GET_STAGEOPENCONDITIONCONTROLLER_OFFSET))(nullptr);
		}

		::System::Int64 get_VolumeId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_MAINCHAPTERLISTUNIT_GET_VOLUMEID_OFFSET))(nullptr);
		}

		::FlatData::ScenarioModeTypes* get_Type()
		{
			return ((::FlatData::ScenarioModeTypes*(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_MAINCHAPTERLISTUNIT_GET_TYPE_OFFSET))(nullptr);
		}

		::System::Boolean get_IsOpened()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_MAINCHAPTERLISTUNIT_GET_ISOPENED_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_MAINCHAPTERLISTUNIT_.CTOR_OFFSET))(nullptr);
		}

		::FlatData::ScenarioModeSubTypes* get_SubType()
		{
			return ((::FlatData::ScenarioModeSubTypes*(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_MAINCHAPTERLISTUNIT_GET_SUBTYPE_OFFSET))(nullptr);
		}

		::System::Single PlayUnlockAnimation()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_MAINCHAPTERLISTUNIT_PLAYUNLOCKANIMATION_OFFSET))(nullptr);
		}

		::System::Boolean get_IsUnlockControllerReadyToPlay()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_MAINCHAPTERLISTUNIT_GET_ISUNLOCKCONTROLLERREADYTOPLAY_OFFSET))(nullptr);
		}

		::System::Void set_ChapterId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_MAINCHAPTERLISTUNIT_SET_CHAPTERID_OFFSET))(arg, nullptr);
		}

		::System::Void SetData(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_MAINCHAPTERLISTUNIT_SETDATA_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_MAINCHAPTERLISTUNIT_ONCLICKBUTTON_OFFSET))(nullptr);
		}

		::System::Int64 get_ChapterId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_MAINCHAPTERLISTUNIT_GET_CHAPTERID_OFFSET))(nullptr);
		}

		::System::Void set_IsOpened(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_MAINCHAPTERLISTUNIT_SET_ISOPENED_OFFSET))(arg, nullptr);
		}

	};

