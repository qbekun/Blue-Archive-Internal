#pragma once
#include "unitysdk.h"

class UILabel;
class UITexture;
namespace UnityEngine { class GameObject; }
namespace FlatData { class ScenarioModeTypes; }
namespace FlatData { class ScenarioModeReplayTypes; }
namespace UnityEngine { class BoxCollider; }
namespace MX::Data::Excel { class ScenarioModeExcel; }

#define UISCENARIOMODE_VOLUMEUNIT_GETVOLUMEINFOTEXT_OFFSET UNITYSDK_OFFSET(0x28159A0)
#define UISCENARIOMODE_VOLUMEUNIT_SET_CANWATCH_OFFSET UNITYSDK_OFFSET(0x2815B00)
#define UISCENARIOMODE_VOLUMEUNIT_GET_LOCKOBJECT_OFFSET UNITYSDK_OFFSET(0x2815B10)
#define UISCENARIOMODE_VOLUMEUNIT_SETTITLE_OFFSET UNITYSDK_OFFSET(0x2815B20)
#define UISCENARIOMODE_VOLUMEUNIT_OPENCHAPTER_OFFSET UNITYSDK_OFFSET(0x2815C10)
#define UISCENARIOMODE_VOLUMEUNIT_GET_CANWATCH_OFFSET UNITYSDK_OFFSET(0x2815CD0)
#define UISCENARIOMODE_VOLUMEUNIT_SETIMAGE_OFFSET UNITYSDK_OFFSET(0x2815CE0)
#define UISCENARIOMODE_VOLUMEUNIT_GET_REPLAYTYPE_OFFSET UNITYSDK_OFFSET(0x2815F30)
#define UISCENARIOMODE_VOLUMEUNIT_SET_REPLAYTYPE_OFFSET UNITYSDK_OFFSET(0x2815F40)
#define UISCENARIOMODE_VOLUMEUNIT_SET_TYPE_OFFSET UNITYSDK_OFFSET(0x2815F50)
#define UISCENARIOMODE_VOLUMEUNIT_BLOCKINPUT_OFFSET UNITYSDK_OFFSET(0x2815220)
#define UISCENARIOMODE_VOLUMEUNIT_SET_VOLUMEID_OFFSET UNITYSDK_OFFSET(0x2815FF0)
#define UISCENARIOMODE_VOLUMEUNIT_SETTEXTANDLOCK_OFFSET UNITYSDK_OFFSET(0x2816000)
#define UISCENARIOMODE_VOLUMEUNIT_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x28167D0)
#define UISCENARIOMODE_VOLUMEUNIT_GETIMAGEPATH_OFFSET UNITYSDK_OFFSET(0x28167E0)
#define UISCENARIOMODE_VOLUMEUNIT_SETUI_OFFSET UNITYSDK_OFFSET(0x2816A70)
#define UISCENARIOMODE_VOLUMEUNIT_SETINFO_OFFSET UNITYSDK_OFFSET(0x2816AB0)
#define UISCENARIOMODE_VOLUMEUNIT_SETCONDITIONANDLOCKREPLAY_OFFSET UNITYSDK_OFFSET(0x2816540)
#define UISCENARIOMODE_VOLUMEUNIT_SET_ISOPENED_OFFSET UNITYSDK_OFFSET(0x2816C10)
#define UISCENARIOMODE_VOLUMEUNIT_ISNEWCHAPTER_OFFSET UNITYSDK_OFFSET(0x280A390)
#define UISCENARIOMODE_VOLUMEUNIT_GETLASTMODEID_OFFSET UNITYSDK_OFFSET(0x2816C20)
#define UISCENARIOMODE_VOLUMEUNIT_GET_VOLUMEID_OFFSET UNITYSDK_OFFSET(0x2816CF0)
#define UISCENARIOMODE_VOLUMEUNIT_SETCONDITIONANDLOCKMAIN_OFFSET UNITYSDK_OFFSET(0x2816D00)
#define UISCENARIOMODE_VOLUMEUNIT_GET_COL_OFFSET UNITYSDK_OFFSET(0x2815F60)
#define UISCENARIOMODE_VOLUMEUNIT_.CTOR_OFFSET UNITYSDK_OFFSET(0x2809750)
#define UISCENARIOMODE_VOLUMEUNIT_SETDATA_OFFSET UNITYSDK_OFFSET(0x280A620)
#define UISCENARIOMODE_VOLUMEUNIT_SETCONDITIONANDLOCKSUB_OFFSET UNITYSDK_OFFSET(0x28160C0)
#define UISCENARIOMODE_VOLUMEUNIT_ONCLICK_OFFSET UNITYSDK_OFFSET(0x2817A00)
#define UISCENARIOMODE_VOLUMEUNIT_GET_ISOPENED_OFFSET UNITYSDK_OFFSET(0x2817E00)
#define UISCENARIOMODE_VOLUMEUNIT_SETEMPTY_OFFSET UNITYSDK_OFFSET(0x2814960)

	inline static constexpr unsigned int UIScenarioMode_VolumeUnit_TypeDefinitionIndex = 7808;

	class UIScenarioMode_VolumeUnit : public Il2CppObject
	{
	public:
		UILabel* title; // 0x18
		UITexture* image; // 0x20
		Il2CppObject* infos; // 0x28
		::UnityEngine::GameObject* openObject; // 0x30
		::UnityEngine::GameObject* openPlaying; // 0x38
		::UnityEngine::GameObject* openFinish; // 0x40
		::UnityEngine::GameObject* newObject; // 0x48
		::UnityEngine::GameObject* lockObject; // 0x50
		::UnityEngine::GameObject* notOpenObject; // 0x58
		Il2CppObject* conditions; // 0x60
		Il2CppObject* chapterEpisodes; // 0x68
		::UnityEngine::GameObject* normal; // 0x70
		::UnityEngine::GameObject* empty; // 0x78
		::FlatData::ScenarioModeTypes* _Type_k__BackingField; // 0x80
		::FlatData::ScenarioModeReplayTypes* _ReplayType_k__BackingField; // 0x84
		::System::Int64 _VolumeId_k__BackingField; // 0x88
		::System::Boolean _IsOpened_k__BackingField; // 0x90
		::System::Boolean _CanWatch_k__BackingField; // 0x91
		::UnityEngine::BoxCollider* col; // 0x98

		::System::String* GetVolumeInfoText()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_VOLUMEUNIT_GETVOLUMEINFOTEXT_OFFSET))(nullptr);
		}

		::System::Void set_CanWatch(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_VOLUMEUNIT_SET_CANWATCH_OFFSET))(arg, nullptr);
		}

		::UnityEngine::GameObject* get_LockObject()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_VOLUMEUNIT_GET_LOCKOBJECT_OFFSET))(nullptr);
		}

		::System::Void SetTitle()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_VOLUMEUNIT_SETTITLE_OFFSET))(nullptr);
		}

		::System::Void OpenChapter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_VOLUMEUNIT_OPENCHAPTER_OFFSET))(nullptr);
		}

		::System::Boolean get_CanWatch()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_VOLUMEUNIT_GET_CANWATCH_OFFSET))(nullptr);
		}

		::System::Void SetImage(::System::DateTime* arg)
		{
			((::System::Void(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_VOLUMEUNIT_SETIMAGE_OFFSET))(arg, nullptr);
		}

		::FlatData::ScenarioModeReplayTypes* get_ReplayType()
		{
			return ((::FlatData::ScenarioModeReplayTypes*(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_VOLUMEUNIT_GET_REPLAYTYPE_OFFSET))(nullptr);
		}

		::System::Void set_ReplayType(::FlatData::ScenarioModeReplayTypes* arg)
		{
			((::System::Void(*)(::FlatData::ScenarioModeReplayTypes*, ::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_VOLUMEUNIT_SET_REPLAYTYPE_OFFSET))(arg, nullptr);
		}

		::System::Void set_Type(::FlatData::ScenarioModeTypes* arg)
		{
			((::System::Void(*)(::FlatData::ScenarioModeTypes*, ::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_VOLUMEUNIT_SET_TYPE_OFFSET))(arg, nullptr);
		}

		::System::Void BlockInput()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_VOLUMEUNIT_BLOCKINPUT_OFFSET))(nullptr);
		}

		::System::Void set_VolumeId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_VOLUMEUNIT_SET_VOLUMEID_OFFSET))(arg, nullptr);
		}

		::System::Void SetTextAndLock(::System::DateTime* arg)
		{
			((::System::Void(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_VOLUMEUNIT_SETTEXTANDLOCK_OFFSET))(arg, nullptr);
		}

		::FlatData::ScenarioModeTypes* get_Type()
		{
			return ((::FlatData::ScenarioModeTypes*(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_VOLUMEUNIT_GET_TYPE_OFFSET))(nullptr);
		}

		::System::String* GetImagePath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_VOLUMEUNIT_GETIMAGEPATH_OFFSET))(nullptr);
		}

		::System::Void SetUI(::System::DateTime* arg)
		{
			((::System::Void(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_VOLUMEUNIT_SETUI_OFFSET))(arg, nullptr);
		}

		::System::Void SetInfo()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_VOLUMEUNIT_SETINFO_OFFSET))(nullptr);
		}

		::System::Void SetConditionAndLockReplay()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_VOLUMEUNIT_SETCONDITIONANDLOCKREPLAY_OFFSET))(nullptr);
		}

		::System::Void set_IsOpened(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_VOLUMEUNIT_SET_ISOPENED_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsNewChapter(::System::Int64 arg, ::MX::Data::Excel::ScenarioModeExcel* arg2, int64_t&* arg3)
		{
			return ((::System::Boolean(*)(::System::Int64, ::MX::Data::Excel::ScenarioModeExcel*, int64_t&*, ::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_VOLUMEUNIT_ISNEWCHAPTER_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Int64 GetLastModeId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_VOLUMEUNIT_GETLASTMODEID_OFFSET))(nullptr);
		}

		::System::Int64 get_VolumeId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_VOLUMEUNIT_GET_VOLUMEID_OFFSET))(nullptr);
		}

		::System::Void SetConditionAndLockMain(::System::DateTime* arg)
		{
			((::System::Void(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_VOLUMEUNIT_SETCONDITIONANDLOCKMAIN_OFFSET))(arg, nullptr);
		}

		::UnityEngine::BoxCollider* get_Col()
		{
			return ((::UnityEngine::BoxCollider*(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_VOLUMEUNIT_GET_COL_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_VOLUMEUNIT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetData(::FlatData::ScenarioModeTypes* arg, ::FlatData::ScenarioModeReplayTypes* arg2, ::System::Int64 arg3, ::System::DateTime* arg4)
		{
			((::System::Void(*)(::FlatData::ScenarioModeTypes*, ::FlatData::ScenarioModeReplayTypes*, ::System::Int64, ::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_VOLUMEUNIT_SETDATA_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void SetConditionAndLockSub(::System::DateTime* arg)
		{
			((::System::Void(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_VOLUMEUNIT_SETCONDITIONANDLOCKSUB_OFFSET))(arg, nullptr);
		}

		::System::Void OnClick()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_VOLUMEUNIT_ONCLICK_OFFSET))(nullptr);
		}

		::System::Boolean get_IsOpened()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_VOLUMEUNIT_GET_ISOPENED_OFFSET))(nullptr);
		}

		::System::Void SetEmpty()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_VOLUMEUNIT_SETEMPTY_OFFSET))(nullptr);
		}

	};

