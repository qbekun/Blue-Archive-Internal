#pragma once
#include "unitysdk.h"

namespace FlatData { class ScenarioModeTypes; }
namespace FlatData { class ScenarioModeSubTypes; }
namespace FlatData { class ScenarioModeReplayTypes; }
class UIScenarioMode_MainVolume;
class UIScenarioMode_MainVolume_Series2;
class UIScenarioMode_ModeSelect;

#define SCENARIOVOLUMEUIOPENER_GET_SCENARIOMODEID_OFFSET UNITYSDK_OFFSET(0x26C1D90)
#define SCENARIOVOLUMEUIOPENER_SET_SCENARIOMODEID_OFFSET UNITYSDK_OFFSET(0x26C1DA0)
#define SCENARIOVOLUMEUIOPENER_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x26C1DB0)
#define SCENARIOVOLUMEUIOPENER_SET_TYPE_OFFSET UNITYSDK_OFFSET(0x26C1DC0)
#define SCENARIOVOLUMEUIOPENER_GET_SUBTYPE_OFFSET UNITYSDK_OFFSET(0x26C1DD0)
#define SCENARIOVOLUMEUIOPENER_SET_SUBTYPE_OFFSET UNITYSDK_OFFSET(0x26C1DE0)
#define SCENARIOVOLUMEUIOPENER_GET_REPLAYTYPE_OFFSET UNITYSDK_OFFSET(0x26C1DF0)
#define SCENARIOVOLUMEUIOPENER_SET_REPLAYTYPE_OFFSET UNITYSDK_OFFSET(0x26C1E00)
#define SCENARIOVOLUMEUIOPENER_GET_OPENUIENDCALLBACK_OFFSET UNITYSDK_OFFSET(0x26C1E10)
#define SCENARIOVOLUMEUIOPENER_SET_OPENUIENDCALLBACK_OFFSET UNITYSDK_OFFSET(0x26C1E20)
#define SCENARIOVOLUMEUIOPENER_GET_CANCELFORCEENTERCALLBACK_OFFSET UNITYSDK_OFFSET(0x26C1E30)
#define SCENARIOVOLUMEUIOPENER_SET_CANCELFORCEENTERCALLBACK_OFFSET UNITYSDK_OFFSET(0x26C1E40)
#define SCENARIOVOLUMEUIOPENER_GET_FROMSHORTCUT_OFFSET UNITYSDK_OFFSET(0x26C1E50)
#define SCENARIOVOLUMEUIOPENER_SET_FROMSHORTCUT_OFFSET UNITYSDK_OFFSET(0x26C1E60)
#define SCENARIOVOLUMEUIOPENER_.CTOR_OFFSET UNITYSDK_OFFSET(0x26C1E70)
#define SCENARIOVOLUMEUIOPENER_.CTOR_OFFSET UNITYSDK_OFFSET(0x26C1EE0)
#define SCENARIOVOLUMEUIOPENER_ISCONTENTSLOCK_OFFSET UNITYSDK_OFFSET(0x26C1F20)
#define SCENARIOVOLUMEUIOPENER_OPENUI_OFFSET UNITYSDK_OFFSET(0x26C1F30)
#define SCENARIOVOLUMEUIOPENER_ENTERSERIES1_OFFSET UNITYSDK_OFFSET(0x26C2330)
#define SCENARIOVOLUMEUIOPENER_ENTERSERIES2_OFFSET UNITYSDK_OFFSET(0x26C2500)
#define SCENARIOVOLUMEUIOPENER_SHOWSERIES2NOTICEOPERATION_OFFSET UNITYSDK_OFFSET(0x000000)
#define SCENARIOVOLUMEUIOPENER__ENTERSERIES1_B__32_0_OFFSET UNITYSDK_OFFSET(0x26C2A40)
#define SCENARIOVOLUMEUIOPENER__ENTERSERIES2_B__33_2_OFFSET UNITYSDK_OFFSET(0x26C2A60)
#define SCENARIOVOLUMEUIOPENER__ENTERSERIES2_B__33_3_OFFSET UNITYSDK_OFFSET(0x26C2A80)
#define SCENARIOVOLUMEUIOPENER__ENTERSERIES2_G__OPENSERIES2UI|33_0_OFFSET UNITYSDK_OFFSET(0x26C2950)
#define SCENARIOVOLUMEUIOPENER__ENTERSERIES2_B__33_4_OFFSET UNITYSDK_OFFSET(0x26C2AA0)
#define SCENARIOVOLUMEUIOPENER__SHOWSERIES2NOTICEOPERATION_B__34_0_OFFSET UNITYSDK_OFFSET(0x000000)
#define SCENARIOVOLUMEUIOPENER__SHOWSERIES2NOTICEOPERATION_B__34_1_OFFSET UNITYSDK_OFFSET(0x000000)
#define SCENARIOVOLUMEUIOPENER__SHOWSERIES2NOTICEOPERATION_B__34_2_OFFSET UNITYSDK_OFFSET(0x000000)

	inline static constexpr unsigned int ScenarioVolumeUIOpener_TypeDefinitionIndex = 6954;

	class ScenarioVolumeUIOpener : public Il2CppObject
	{
	public:
		Il2CppObject* _ScenarioModeId_k__BackingField; // 0x18
		::FlatData::ScenarioModeTypes* _Type_k__BackingField; // 0x28
		::FlatData::ScenarioModeSubTypes* _SubType_k__BackingField; // 0x2C
		::FlatData::ScenarioModeReplayTypes* _ReplayType_k__BackingField; // 0x30
		::System::Action* _OpenUIEndCallBack_k__BackingField; // 0x38
		::System::Action* _CancelForceEnterCallBack_k__BackingField; // 0x40
		::System::Boolean _FromShortcut_k__BackingField; // 0x48

		Il2CppObject* get_ScenarioModeId()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOVOLUMEUIOPENER_GET_SCENARIOMODEID_OFFSET))(nullptr);
		}

		::System::Void set_ScenarioModeId(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIOVOLUMEUIOPENER_SET_SCENARIOMODEID_OFFSET))(arg, nullptr);
		}

		::FlatData::ScenarioModeTypes* get_Type()
		{
			return ((::FlatData::ScenarioModeTypes*(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOVOLUMEUIOPENER_GET_TYPE_OFFSET))(nullptr);
		}

		::System::Void set_Type(::FlatData::ScenarioModeTypes* arg)
		{
			((::System::Void(*)(::FlatData::ScenarioModeTypes*, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIOVOLUMEUIOPENER_SET_TYPE_OFFSET))(arg, nullptr);
		}

		::FlatData::ScenarioModeSubTypes* get_SubType()
		{
			return ((::FlatData::ScenarioModeSubTypes*(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOVOLUMEUIOPENER_GET_SUBTYPE_OFFSET))(nullptr);
		}

		::System::Void set_SubType(::FlatData::ScenarioModeSubTypes* arg)
		{
			((::System::Void(*)(::FlatData::ScenarioModeSubTypes*, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIOVOLUMEUIOPENER_SET_SUBTYPE_OFFSET))(arg, nullptr);
		}

		::FlatData::ScenarioModeReplayTypes* get_ReplayType()
		{
			return ((::FlatData::ScenarioModeReplayTypes*(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOVOLUMEUIOPENER_GET_REPLAYTYPE_OFFSET))(nullptr);
		}

		::System::Void set_ReplayType(::FlatData::ScenarioModeReplayTypes* arg)
		{
			((::System::Void(*)(::FlatData::ScenarioModeReplayTypes*, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIOVOLUMEUIOPENER_SET_REPLAYTYPE_OFFSET))(arg, nullptr);
		}

		::System::Action* get_OpenUIEndCallBack()
		{
			return ((::System::Action*(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOVOLUMEUIOPENER_GET_OPENUIENDCALLBACK_OFFSET))(nullptr);
		}

		::System::Void set_OpenUIEndCallBack(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIOVOLUMEUIOPENER_SET_OPENUIENDCALLBACK_OFFSET))(arg, nullptr);
		}

		::System::Action* get_CancelForceEnterCallBack()
		{
			return ((::System::Action*(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOVOLUMEUIOPENER_GET_CANCELFORCEENTERCALLBACK_OFFSET))(nullptr);
		}

		::System::Void set_CancelForceEnterCallBack(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIOVOLUMEUIOPENER_SET_CANCELFORCEENTERCALLBACK_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_FromShortcut()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOVOLUMEUIOPENER_GET_FROMSHORTCUT_OFFSET))(nullptr);
		}

		::System::Void set_FromShortcut(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIOVOLUMEUIOPENER_SET_FROMSHORTCUT_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIOVOLUMEUIOPENER_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::FlatData::ScenarioModeTypes* arg, ::FlatData::ScenarioModeSubTypes* arg2, ::FlatData::ScenarioModeReplayTypes* arg3)
		{
			((::System::Void(*)(::FlatData::ScenarioModeTypes*, ::FlatData::ScenarioModeSubTypes*, ::FlatData::ScenarioModeReplayTypes*, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIOVOLUMEUIOPENER_.CTOR_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Boolean IsContentsLock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOVOLUMEUIOPENER_ISCONTENTSLOCK_OFFSET))(nullptr);
		}

		::System::Void OpenUI()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOVOLUMEUIOPENER_OPENUI_OFFSET))(nullptr);
		}

		::System::Void EnterSeries1()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOVOLUMEUIOPENER_ENTERSERIES1_OFFSET))(nullptr);
		}

		::System::Void EnterSeries2()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOVOLUMEUIOPENER_ENTERSERIES2_OFFSET))(nullptr);
		}

		::System::Void ShowSeries2NoticeOperation()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOVOLUMEUIOPENER_SHOWSERIES2NOTICEOPERATION_OFFSET))(nullptr);
		}

		::System::Void _EnterSeries1_b__32_0(UIScenarioMode_MainVolume* arg)
		{
			((::System::Void(*)(UIScenarioMode_MainVolume*, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIOVOLUMEUIOPENER__ENTERSERIES1_B__32_0_OFFSET))(arg, nullptr);
		}

		::System::Void _EnterSeries2_b__33_2()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOVOLUMEUIOPENER__ENTERSERIES2_B__33_2_OFFSET))(nullptr);
		}

		::System::Void _EnterSeries2_b__33_3()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOVOLUMEUIOPENER__ENTERSERIES2_B__33_3_OFFSET))(nullptr);
		}

		::System::Void _EnterSeries2_g__OpenSeries2UI|33_0()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOVOLUMEUIOPENER__ENTERSERIES2_G__OPENSERIES2UI|33_0_OFFSET))(nullptr);
		}

		::System::Void _EnterSeries2_b__33_4(UIScenarioMode_MainVolume_Series2* arg)
		{
			((::System::Void(*)(UIScenarioMode_MainVolume_Series2*, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIOVOLUMEUIOPENER__ENTERSERIES2_B__33_4_OFFSET))(arg, nullptr);
		}

		::System::Void _ShowSeries2NoticeOperation_b__34_0(UIScenarioMode_ModeSelect* arg)
		{
			((::System::Void(*)(UIScenarioMode_ModeSelect*, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIOVOLUMEUIOPENER__SHOWSERIES2NOTICEOPERATION_B__34_0_OFFSET))(arg, nullptr);
		}

		::System::Void _ShowSeries2NoticeOperation_b__34_1()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOVOLUMEUIOPENER__SHOWSERIES2NOTICEOPERATION_B__34_1_OFFSET))(nullptr);
		}

		::System::Void _ShowSeries2NoticeOperation_b__34_2(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIOVOLUMEUIOPENER__SHOWSERIES2NOTICEOPERATION_B__34_2_OFFSET))(arg, nullptr);
		}

	};

