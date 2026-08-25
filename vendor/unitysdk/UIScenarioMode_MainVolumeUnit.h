#pragma once
#include "unitysdk.h"

class UILabel;
class UISprite;
namespace UnityEngine { class GameObject; }
class NGUITextureBlur;
namespace UnityEngine { class Color; }
class UIScenarioMode_MainVolume;
class StageOpenConditionController;
class UIWidget;
namespace FlatData { class ScenarioModeSubTypes; }
namespace FlatData { class ScenarioModeTypes; }
namespace FlatData { class ScenarioModeReplayTypes; }

#define UISCENARIOMODE_MAINVOLUMEUNIT_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x2808F00)
#define UISCENARIOMODE_MAINVOLUMEUNIT_SET_SUBTYPE_OFFSET UNITYSDK_OFFSET(0x2808F10)
#define UISCENARIOMODE_MAINVOLUMEUNIT_INITSTAGEOPENCONDITIONCONTROLLER_OFFSET UNITYSDK_OFFSET(0x2808F20)
#define UISCENARIOMODE_MAINVOLUMEUNIT_GETLASTMODEID_OFFSET UNITYSDK_OFFSET(0x28092C0)
#define UISCENARIOMODE_MAINVOLUMEUNIT_GET_VOLUMEID_OFFSET UNITYSDK_OFFSET(0x28093A0)
#define UISCENARIOMODE_MAINVOLUMEUNIT_GET_SUBTYPE_OFFSET UNITYSDK_OFFSET(0x28093B0)
#define UISCENARIOMODE_MAINVOLUMEUNIT_SETTITLE_OFFSET UNITYSDK_OFFSET(0x28093C0)
#define UISCENARIOMODE_MAINVOLUMEUNIT_ONSELECTVOLUME_OFFSET UNITYSDK_OFFSET(0x2807B20)
#define UISCENARIOMODE_MAINVOLUMEUNIT_PLAYUNLOCKANIMATION_OFFSET UNITYSDK_OFFSET(0x2808B60)
#define UISCENARIOMODE_MAINVOLUMEUNIT_GET_REPLAYTYPE_OFFSET UNITYSDK_OFFSET(0x2809550)
#define UISCENARIOMODE_MAINVOLUMEUNIT_GETIMAGEPATH_OFFSET UNITYSDK_OFFSET(0x2809560)
#define UISCENARIOMODE_MAINVOLUMEUNIT_.CTOR_OFFSET UNITYSDK_OFFSET(0x28096C0)
#define UISCENARIOMODE_MAINVOLUMEUNIT_GET_MAINVOLUME_OFFSET UNITYSDK_OFFSET(0x2809760)
#define UISCENARIOMODE_MAINVOLUMEUNIT_GET_STAGEOPENCONDITIONCONTROLLER_OFFSET UNITYSDK_OFFSET(0x2809230)
#define UISCENARIOMODE_MAINVOLUMEUNIT_ONCLICK_OFFSET UNITYSDK_OFFSET(0x28097F0)
#define UISCENARIOMODE_MAINVOLUMEUNIT_SETCONDITIONANDLOCKMAIN_OFFSET UNITYSDK_OFFSET(0x28098E0)
#define UISCENARIOMODE_MAINVOLUMEUNIT_OPENCHAPTER_OFFSET UNITYSDK_OFFSET(0x280A550)
#define UISCENARIOMODE_MAINVOLUMEUNIT_INIT_OFFSET UNITYSDK_OFFSET(0x2803ED0)
#define UISCENARIOMODE_MAINVOLUMEUNIT_GETVOLUMEINFOTEXT_OFFSET UNITYSDK_OFFSET(0x280A890)
#define UISCENARIOMODE_MAINVOLUMEUNIT_GET_ISUNLOCKCONTROLLERREADYTOPLAY_OFFSET UNITYSDK_OFFSET(0x2807410)

	inline static constexpr unsigned int UIScenarioMode_MainVolumeUnit_TypeDefinitionIndex = 7775;

	class UIScenarioMode_MainVolumeUnit : public Il2CppObject
	{
	public:
		::System::Int32 Volume; // 0xA0
		UILabel* StatusLabel; // 0xA8
		UISprite* StatusBg; // 0xB0
		::UnityEngine::GameObject* ComingSoon; // 0xB8
		::UnityEngine::GameObject* LockIcon; // 0xC0
		::System::Single DeltaToCenter; // 0xC8
		::UnityEngine::GameObject* selected; // 0xD0
		NGUITextureBlur* blurComponent; // 0xD8
		::UnityEngine::Color* BgColor_Clear; // 0xE0
		::UnityEngine::Color* BgColor_New; // 0xF0
		::System::String* LabelColorTag_Clear; // 0x100
		::System::String* LabelColorTag_New; // 0x108
		UIScenarioMode_MainVolume* mainVolume; // 0x110
		StageOpenConditionController* stageOpenConditionController; // 0x118
		UIWidget* widget; // 0x120
		::FlatData::ScenarioModeSubTypes* _SubType_k__BackingField; // 0x128

		::FlatData::ScenarioModeTypes* get_Type()
		{
			return ((::FlatData::ScenarioModeTypes*(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_MAINVOLUMEUNIT_GET_TYPE_OFFSET))(nullptr);
		}

		::System::Void set_SubType(::FlatData::ScenarioModeSubTypes* arg)
		{
			((::System::Void(*)(::FlatData::ScenarioModeSubTypes*, ::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_MAINVOLUMEUNIT_SET_SUBTYPE_OFFSET))(arg, nullptr);
		}

		::System::Void InitStageOpenConditionController(::System::DateTime* arg)
		{
			((::System::Void(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_MAINVOLUMEUNIT_INITSTAGEOPENCONDITIONCONTROLLER_OFFSET))(arg, nullptr);
		}

		::System::Int64 GetLastModeId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_MAINVOLUMEUNIT_GETLASTMODEID_OFFSET))(nullptr);
		}

		::System::Int64 get_VolumeId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_MAINVOLUMEUNIT_GET_VOLUMEID_OFFSET))(nullptr);
		}

		::FlatData::ScenarioModeSubTypes* get_SubType()
		{
			return ((::FlatData::ScenarioModeSubTypes*(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_MAINVOLUMEUNIT_GET_SUBTYPE_OFFSET))(nullptr);
		}

		::System::Void SetTitle()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_MAINVOLUMEUNIT_SETTITLE_OFFSET))(nullptr);
		}

		::System::Void OnSelectVolume(::FlatData::ScenarioModeTypes* arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::FlatData::ScenarioModeTypes*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_MAINVOLUMEUNIT_ONSELECTVOLUME_OFFSET))(arg, arg2, nullptr);
		}

		::System::Single PlayUnlockAnimation()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_MAINVOLUMEUNIT_PLAYUNLOCKANIMATION_OFFSET))(nullptr);
		}

		::FlatData::ScenarioModeReplayTypes* get_ReplayType()
		{
			return ((::FlatData::ScenarioModeReplayTypes*(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_MAINVOLUMEUNIT_GET_REPLAYTYPE_OFFSET))(nullptr);
		}

		::System::String* GetImagePath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_MAINVOLUMEUNIT_GETIMAGEPATH_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_MAINVOLUMEUNIT_.CTOR_OFFSET))(nullptr);
		}

		UIScenarioMode_MainVolume* get_MainVolume()
		{
			return ((UIScenarioMode_MainVolume*(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_MAINVOLUMEUNIT_GET_MAINVOLUME_OFFSET))(nullptr);
		}

		StageOpenConditionController* get_StageOpenConditionController()
		{
			return ((StageOpenConditionController*(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_MAINVOLUMEUNIT_GET_STAGEOPENCONDITIONCONTROLLER_OFFSET))(nullptr);
		}

		::System::Void OnClick()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_MAINVOLUMEUNIT_ONCLICK_OFFSET))(nullptr);
		}

		::System::Void SetConditionAndLockMain(::System::DateTime* arg)
		{
			((::System::Void(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_MAINVOLUMEUNIT_SETCONDITIONANDLOCKMAIN_OFFSET))(arg, nullptr);
		}

		::System::Void OpenChapter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_MAINVOLUMEUNIT_OPENCHAPTER_OFFSET))(nullptr);
		}

		::System::Void Init(::FlatData::ScenarioModeSubTypes* arg, ::System::DateTime* arg2)
		{
			((::System::Void(*)(::FlatData::ScenarioModeSubTypes*, ::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_MAINVOLUMEUNIT_INIT_OFFSET))(arg, arg2, nullptr);
		}

		::System::String* GetVolumeInfoText()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_MAINVOLUMEUNIT_GETVOLUMEINFOTEXT_OFFSET))(nullptr);
		}

		::System::Boolean get_IsUnlockControllerReadyToPlay()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_MAINVOLUMEUNIT_GET_ISUNLOCKCONTROLLERREADYTOPLAY_OFFSET))(nullptr);
		}

	};

