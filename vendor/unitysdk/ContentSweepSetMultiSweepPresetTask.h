#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define CONTENTSWEEPSETMULTISWEEPPRESETTASK_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F36AB0)
#define CONTENTSWEEPSETMULTISWEEPPRESETTASK_SET_PARCELIDS_OFFSET UNITYSDK_OFFSET(0x1F36AC0)
#define CONTENTSWEEPSETMULTISWEEPPRESETTASK_GET_STAGEIDS_OFFSET UNITYSDK_OFFSET(0x1F36AD0)
#define CONTENTSWEEPSETMULTISWEEPPRESETTASK_PROCESSSESSION_OFFSET UNITYSDK_OFFSET(0x1F36AE0)
#define CONTENTSWEEPSETMULTISWEEPPRESETTASK_GET_PARCELIDS_OFFSET UNITYSDK_OFFSET(0x1F36B70)
#define CONTENTSWEEPSETMULTISWEEPPRESETTASK_SET_PRESETNAME_OFFSET UNITYSDK_OFFSET(0x1F36B80)
#define CONTENTSWEEPSETMULTISWEEPPRESETTASK__PROCESSSESSION_B__16_0_OFFSET UNITYSDK_OFFSET(0x1F36B90)
#define CONTENTSWEEPSETMULTISWEEPPRESETTASK_ERRORHANDLER_OFFSET UNITYSDK_OFFSET(0x1F36BA0)
#define CONTENTSWEEPSETMULTISWEEPPRESETTASK_SET_STAGEIDS_OFFSET UNITYSDK_OFFSET(0x1F36BB0)
#define CONTENTSWEEPSETMULTISWEEPPRESETTASK_HANDLEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1F36BC0)
#define CONTENTSWEEPSETMULTISWEEPPRESETTASK_SET_PRESETID_OFFSET UNITYSDK_OFFSET(0x1F36DB0)
#define CONTENTSWEEPSETMULTISWEEPPRESETTASK_GET_PRESETID_OFFSET UNITYSDK_OFFSET(0x1F36DC0)
#define CONTENTSWEEPSETMULTISWEEPPRESETTASK_GET_PRESETNAME_OFFSET UNITYSDK_OFFSET(0x1F36DD0)

	inline static constexpr unsigned int ContentSweepSetMultiSweepPresetTask_TypeDefinitionIndex = 2273;

	class ContentSweepSetMultiSweepPresetTask : public Il2CppObject
	{
	public:
		::System::Int64 _PresetId_k__BackingField; // 0x40
		::System::String* _PresetName_k__BackingField; // 0x48
		Il2CppObject* _StageIds_k__BackingField; // 0x50
		Il2CppObject* _ParcelIds_k__BackingField; // 0x58

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONTENTSWEEPSETMULTISWEEPPRESETTASK_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_ParcelIds(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + CONTENTSWEEPSETMULTISWEEPPRESETTASK_SET_PARCELIDS_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_StageIds()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CONTENTSWEEPSETMULTISWEEPPRESETTASK_GET_STAGEIDS_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* ProcessSession()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CONTENTSWEEPSETMULTISWEEPPRESETTASK_PROCESSSESSION_OFFSET))(nullptr);
		}

		Il2CppObject* get_ParcelIds()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CONTENTSWEEPSETMULTISWEEPPRESETTASK_GET_PARCELIDS_OFFSET))(nullptr);
		}

		::System::Void set_PresetName(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + CONTENTSWEEPSETMULTISWEEPPRESETTASK_SET_PRESETNAME_OFFSET))(str, nullptr);
		}

		::System::Boolean _ProcessSession_b__16_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CONTENTSWEEPSETMULTISWEEPPRESETTASK__PROCESSSESSION_B__16_0_OFFSET))(nullptr);
		}

		::System::Boolean ErrorHandler()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CONTENTSWEEPSETMULTISWEEPPRESETTASK_ERRORHANDLER_OFFSET))(nullptr);
		}

		::System::Void set_StageIds(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + CONTENTSWEEPSETMULTISWEEPPRESETTASK_SET_STAGEIDS_OFFSET))(arg, nullptr);
		}

		::System::Boolean HandleMessage(::MX::NetworkProtocol::Protocol* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::Protocol*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + CONTENTSWEEPSETMULTISWEEPPRESETTASK_HANDLEMESSAGE_OFFSET))(arg, str, arg2, nullptr);
		}

		::System::Void set_PresetId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + CONTENTSWEEPSETMULTISWEEPPRESETTASK_SET_PRESETID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_PresetId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CONTENTSWEEPSETMULTISWEEPPRESETTASK_GET_PRESETID_OFFSET))(nullptr);
		}

		::System::String* get_PresetName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CONTENTSWEEPSETMULTISWEEPPRESETTASK_GET_PRESETNAME_OFFSET))(nullptr);
		}

	};

