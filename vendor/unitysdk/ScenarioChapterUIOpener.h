#pragma once
#include "unitysdk.h"

namespace FlatData { class ScenarioModeTypes; }
namespace FlatData { class ScenarioModeSubTypes; }
namespace FlatData { class ScenarioModeReplayTypes; }
namespace MX::Data::Excel { class ScenarioModeExcel; }
class UIScenarioMode_MainChapter;
class UIScenarioMode_Chapter;

#define SCENARIOCHAPTERUIOPENER_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x26C2CD0)
#define SCENARIOCHAPTERUIOPENER_SET_TYPE_OFFSET UNITYSDK_OFFSET(0x26C2CE0)
#define SCENARIOCHAPTERUIOPENER_GET_SUBTYPE_OFFSET UNITYSDK_OFFSET(0x26C2CF0)
#define SCENARIOCHAPTERUIOPENER_SET_SUBTYPE_OFFSET UNITYSDK_OFFSET(0x26C2D00)
#define SCENARIOCHAPTERUIOPENER_GET_REPLAYTYPE_OFFSET UNITYSDK_OFFSET(0x26C2D10)
#define SCENARIOCHAPTERUIOPENER_SET_REPLAYTYPE_OFFSET UNITYSDK_OFFSET(0x26C2D20)
#define SCENARIOCHAPTERUIOPENER_GET_VOLUMEID_OFFSET UNITYSDK_OFFSET(0x26C2D30)
#define SCENARIOCHAPTERUIOPENER_SET_VOLUMEID_OFFSET UNITYSDK_OFFSET(0x26C2D40)
#define SCENARIOCHAPTERUIOPENER_GET_CHAPTERID_OFFSET UNITYSDK_OFFSET(0x26C2D50)
#define SCENARIOCHAPTERUIOPENER_SET_CHAPTERID_OFFSET UNITYSDK_OFFSET(0x26C2D60)
#define SCENARIOCHAPTERUIOPENER_GET_TOTALREWARDS_OFFSET UNITYSDK_OFFSET(0x26C2D70)
#define SCENARIOCHAPTERUIOPENER_SET_TOTALREWARDS_OFFSET UNITYSDK_OFFSET(0x26C2D80)
#define SCENARIOCHAPTERUIOPENER_GET_DISPLAYSEQUENCE_OFFSET UNITYSDK_OFFSET(0x26C2D90)
#define SCENARIOCHAPTERUIOPENER_SET_DISPLAYSEQUENCE_OFFSET UNITYSDK_OFFSET(0x26C2DA0)
#define SCENARIOCHAPTERUIOPENER_GET_CALLBACK_OFFSET UNITYSDK_OFFSET(0x26C2DB0)
#define SCENARIOCHAPTERUIOPENER_SET_CALLBACK_OFFSET UNITYSDK_OFFSET(0x26C2DC0)
#define SCENARIOCHAPTERUIOPENER_.CTOR_OFFSET UNITYSDK_OFFSET(0x26C2DD0)
#define SCENARIOCHAPTERUIOPENER_.CTOR_OFFSET UNITYSDK_OFFSET(0x26C2E80)
#define SCENARIOCHAPTERUIOPENER_.CTOR_OFFSET UNITYSDK_OFFSET(0x26C2FB0)
#define SCENARIOCHAPTERUIOPENER_.CTOR_OFFSET UNITYSDK_OFFSET(0x26C3000)
#define SCENARIOCHAPTERUIOPENER_.CTOR_OFFSET UNITYSDK_OFFSET(0x26C3050)
#define SCENARIOCHAPTERUIOPENER_ISCONTENTSLOCK_OFFSET UNITYSDK_OFFSET(0x26C30A0)
#define SCENARIOCHAPTERUIOPENER_OPENUI_OFFSET UNITYSDK_OFFSET(0x26C30B0)
#define SCENARIOCHAPTERUIOPENER__OPENUI_B__38_0_OFFSET UNITYSDK_OFFSET(0x26C3230)
#define SCENARIOCHAPTERUIOPENER__OPENUI_B__38_2_OFFSET UNITYSDK_OFFSET(0x26C33B0)
#define SCENARIOCHAPTERUIOPENER__OPENUI_B__38_3_OFFSET UNITYSDK_OFFSET(0x26C3400)
#define SCENARIOCHAPTERUIOPENER__OPENUI_B__38_1_OFFSET UNITYSDK_OFFSET(0x26C3420)
#define SCENARIOCHAPTERUIOPENER__OPENUI_B__38_4_OFFSET UNITYSDK_OFFSET(0x26C35A0)
#define SCENARIOCHAPTERUIOPENER__OPENUI_B__38_5_OFFSET UNITYSDK_OFFSET(0x26C35F0)

	inline static constexpr unsigned int ScenarioChapterUIOpener_TypeDefinitionIndex = 6955;

	class ScenarioChapterUIOpener : public Il2CppObject
	{
	public:
		::FlatData::ScenarioModeTypes* _Type_k__BackingField; // 0x18
		::FlatData::ScenarioModeSubTypes* _SubType_k__BackingField; // 0x1C
		::FlatData::ScenarioModeReplayTypes* _ReplayType_k__BackingField; // 0x20
		::System::Int64 _VolumeId_k__BackingField; // 0x28
		::System::Int64 _ChapterId_k__BackingField; // 0x30
		Il2CppObject* _TotalRewards_k__BackingField; // 0x38
		Il2CppObject* _DisplaySequence_k__BackingField; // 0x40
		::System::Action* _Callback_k__BackingField; // 0x48

		::FlatData::ScenarioModeTypes* get_Type()
		{
			return ((::FlatData::ScenarioModeTypes*(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOCHAPTERUIOPENER_GET_TYPE_OFFSET))(nullptr);
		}

		::System::Void set_Type(::FlatData::ScenarioModeTypes* arg)
		{
			((::System::Void(*)(::FlatData::ScenarioModeTypes*, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIOCHAPTERUIOPENER_SET_TYPE_OFFSET))(arg, nullptr);
		}

		::FlatData::ScenarioModeSubTypes* get_SubType()
		{
			return ((::FlatData::ScenarioModeSubTypes*(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOCHAPTERUIOPENER_GET_SUBTYPE_OFFSET))(nullptr);
		}

		::System::Void set_SubType(::FlatData::ScenarioModeSubTypes* arg)
		{
			((::System::Void(*)(::FlatData::ScenarioModeSubTypes*, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIOCHAPTERUIOPENER_SET_SUBTYPE_OFFSET))(arg, nullptr);
		}

		::FlatData::ScenarioModeReplayTypes* get_ReplayType()
		{
			return ((::FlatData::ScenarioModeReplayTypes*(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOCHAPTERUIOPENER_GET_REPLAYTYPE_OFFSET))(nullptr);
		}

		::System::Void set_ReplayType(::FlatData::ScenarioModeReplayTypes* arg)
		{
			((::System::Void(*)(::FlatData::ScenarioModeReplayTypes*, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIOCHAPTERUIOPENER_SET_REPLAYTYPE_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_VolumeId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOCHAPTERUIOPENER_GET_VOLUMEID_OFFSET))(nullptr);
		}

		::System::Void set_VolumeId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIOCHAPTERUIOPENER_SET_VOLUMEID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_ChapterId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOCHAPTERUIOPENER_GET_CHAPTERID_OFFSET))(nullptr);
		}

		::System::Void set_ChapterId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIOCHAPTERUIOPENER_SET_CHAPTERID_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_TotalRewards()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOCHAPTERUIOPENER_GET_TOTALREWARDS_OFFSET))(nullptr);
		}

		::System::Void set_TotalRewards(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIOCHAPTERUIOPENER_SET_TOTALREWARDS_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_DisplaySequence()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOCHAPTERUIOPENER_GET_DISPLAYSEQUENCE_OFFSET))(nullptr);
		}

		::System::Void set_DisplaySequence(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIOCHAPTERUIOPENER_SET_DISPLAYSEQUENCE_OFFSET))(arg, nullptr);
		}

		::System::Action* get_Callback()
		{
			return ((::System::Action*(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOCHAPTERUIOPENER_GET_CALLBACK_OFFSET))(nullptr);
		}

		::System::Void set_Callback(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIOCHAPTERUIOPENER_SET_CALLBACK_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MX::Data::Excel::ScenarioModeExcel* arg, Il2CppObject* arg2, Il2CppObject* arg3, ::System::Action* arg4)
		{
			((::System::Void(*)(::MX::Data::Excel::ScenarioModeExcel*, Il2CppObject*, Il2CppObject*, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIOCHAPTERUIOPENER_.CTOR_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void .ctor(::System::Int64 arg, Il2CppObject* arg2, Il2CppObject* arg3, ::System::Action* arg4)
		{
			((::System::Void(*)(::System::Int64, Il2CppObject*, Il2CppObject*, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIOCHAPTERUIOPENER_.CTOR_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void .ctor(::FlatData::ScenarioModeTypes* arg, ::FlatData::ScenarioModeReplayTypes* arg2, ::System::Int64 arg3, ::System::Int64 arg4)
		{
			((::System::Void(*)(::FlatData::ScenarioModeTypes*, ::FlatData::ScenarioModeReplayTypes*, ::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIOCHAPTERUIOPENER_.CTOR_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void .ctor(::FlatData::ScenarioModeTypes* arg, ::FlatData::ScenarioModeSubTypes* arg2, ::FlatData::ScenarioModeReplayTypes* arg3, ::System::Int64 arg4, ::System::Int64 arg5)
		{
			((::System::Void(*)(::FlatData::ScenarioModeTypes*, ::FlatData::ScenarioModeSubTypes*, ::FlatData::ScenarioModeReplayTypes*, ::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIOCHAPTERUIOPENER_.CTOR_OFFSET))(arg, arg2, arg3, arg4, arg5, nullptr);
		}

		::System::Void .ctor(::FlatData::ScenarioModeReplayTypes* arg, ::System::Int64 arg2, ::System::Action* arg3)
		{
			((::System::Void(*)(::FlatData::ScenarioModeReplayTypes*, ::System::Int64, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIOCHAPTERUIOPENER_.CTOR_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Boolean IsContentsLock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOCHAPTERUIOPENER_ISCONTENTSLOCK_OFFSET))(nullptr);
		}

		::System::Void OpenUI()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOCHAPTERUIOPENER_OPENUI_OFFSET))(nullptr);
		}

		::System::Void _OpenUI_b__38_0(UIScenarioMode_MainChapter* arg)
		{
			((::System::Void(*)(UIScenarioMode_MainChapter*, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIOCHAPTERUIOPENER__OPENUI_B__38_0_OFFSET))(arg, nullptr);
		}

		::System::Void _OpenUI_b__38_2(UIScenarioMode_MainChapter* arg)
		{
			((::System::Void(*)(UIScenarioMode_MainChapter*, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIOCHAPTERUIOPENER__OPENUI_B__38_2_OFFSET))(arg, nullptr);
		}

		::System::Void _OpenUI_b__38_3(UIScenarioMode_MainChapter* arg)
		{
			((::System::Void(*)(UIScenarioMode_MainChapter*, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIOCHAPTERUIOPENER__OPENUI_B__38_3_OFFSET))(arg, nullptr);
		}

		::System::Void _OpenUI_b__38_1(UIScenarioMode_Chapter* arg)
		{
			((::System::Void(*)(UIScenarioMode_Chapter*, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIOCHAPTERUIOPENER__OPENUI_B__38_1_OFFSET))(arg, nullptr);
		}

		::System::Void _OpenUI_b__38_4(UIScenarioMode_Chapter* arg)
		{
			((::System::Void(*)(UIScenarioMode_Chapter*, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIOCHAPTERUIOPENER__OPENUI_B__38_4_OFFSET))(arg, nullptr);
		}

		::System::Void _OpenUI_b__38_5(UIScenarioMode_Chapter* arg)
		{
			((::System::Void(*)(UIScenarioMode_Chapter*, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIOCHAPTERUIOPENER__OPENUI_B__38_5_OFFSET))(arg, nullptr);
		}

	};

