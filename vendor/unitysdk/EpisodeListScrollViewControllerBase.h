#pragma once
#include "unitysdk.h"

namespace FlatData { class ScenarioModeTypes; }
namespace FlatData { class ScenarioModeReplayTypes; }
namespace MX::Sequencer { class UISequencer; }

#define EPISODELISTSCROLLVIEWCONTROLLERBASE_ADDOPENSEQUENCE_OFFSET UNITYSDK_OFFSET(0x27EBFD0)
#define EPISODELISTSCROLLVIEWCONTROLLERBASE_GET_VOLUMEID_OFFSET UNITYSDK_OFFSET(0x27EC0D0)
#define EPISODELISTSCROLLVIEWCONTROLLERBASE_SET_CHAPTERID_OFFSET UNITYSDK_OFFSET(0x27EC0E0)
#define EPISODELISTSCROLLVIEWCONTROLLERBASE_.CCTOR_OFFSET UNITYSDK_OFFSET(0x27EC0F0)
#define EPISODELISTSCROLLVIEWCONTROLLERBASE_GETMODEIDLIST_OFFSET UNITYSDK_OFFSET(0x27EC180)
#define EPISODELISTSCROLLVIEWCONTROLLERBASE_SET_REPLAYTYPES_OFFSET UNITYSDK_OFFSET(0x27EC540)
#define EPISODELISTSCROLLVIEWCONTROLLERBASE_SAVELASTENTEREDINDEX_OFFSET UNITYSDK_OFFSET(0x27EC550)
#define EPISODELISTSCROLLVIEWCONTROLLERBASE_GET_CHAPTERID_OFFSET UNITYSDK_OFFSET(0x27EC640)
#define EPISODELISTSCROLLVIEWCONTROLLERBASE_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x27EC650)
#define EPISODELISTSCROLLVIEWCONTROLLERBASE_SETUI_OFFSET UNITYSDK_OFFSET(0x27EC660)
#define EPISODELISTSCROLLVIEWCONTROLLERBASE_CO_PLAYSTAGEUNLOCKING_OFFSET UNITYSDK_OFFSET(0x27EC670)
#define EPISODELISTSCROLLVIEWCONTROLLERBASE_SETDATA_OFFSET UNITYSDK_OFFSET(0x27EC700)
#define EPISODELISTSCROLLVIEWCONTROLLERBASE_GET_REPLAYTYPES_OFFSET UNITYSDK_OFFSET(0x27ECEF0)
#define EPISODELISTSCROLLVIEWCONTROLLERBASE_CO_SHOWEARNINGSTAGECLEARSTAR_OFFSET UNITYSDK_OFFSET(0x27ECF00)
#define EPISODELISTSCROLLVIEWCONTROLLERBASE_SET_TYPE_OFFSET UNITYSDK_OFFSET(0x27ECF90)
#define EPISODELISTSCROLLVIEWCONTROLLERBASE_SET_VOLUMEID_OFFSET UNITYSDK_OFFSET(0x27ECFA0)
#define EPISODELISTSCROLLVIEWCONTROLLERBASE_.CTOR_OFFSET UNITYSDK_OFFSET(0x27EBF90)

	inline static constexpr unsigned int EpisodeListScrollViewControllerBase_TypeDefinitionIndex = 7708;

	class EpisodeListScrollViewControllerBase : public ::System::Xml::XmlDocument
	{
	public:
		Il2CppObject* lastEnteredIndexDict; // 0x0
		::FlatData::ScenarioModeTypes* _Type_k__BackingField; // 0x90
		::FlatData::ScenarioModeReplayTypes* _ReplayTypes_k__BackingField; // 0x94
		::System::Int64 _VolumeId_k__BackingField; // 0x98
		::System::Int64 _ChapterId_k__BackingField; // 0xA0

		::System::Void AddOpenSequence(::MX::Sequencer::UISequencer* arg)
		{
			((::System::Void(*)(::MX::Sequencer::UISequencer*, ::PVOID))((::PBYTE)hIl2Cpp + EPISODELISTSCROLLVIEWCONTROLLERBASE_ADDOPENSEQUENCE_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_VolumeId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + EPISODELISTSCROLLVIEWCONTROLLERBASE_GET_VOLUMEID_OFFSET))(nullptr);
		}

		::System::Void set_ChapterId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + EPISODELISTSCROLLVIEWCONTROLLERBASE_SET_CHAPTERID_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPISODELISTSCROLLVIEWCONTROLLERBASE_.CCTOR_OFFSET))(nullptr);
		}

		Il2CppObject* GetModeIdList(::System::DateTime* arg)
		{
			return ((Il2CppObject*(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + EPISODELISTSCROLLVIEWCONTROLLERBASE_GETMODEIDLIST_OFFSET))(arg, nullptr);
		}

		::System::Void set_ReplayTypes(::FlatData::ScenarioModeReplayTypes* arg)
		{
			((::System::Void(*)(::FlatData::ScenarioModeReplayTypes*, ::PVOID))((::PBYTE)hIl2Cpp + EPISODELISTSCROLLVIEWCONTROLLERBASE_SET_REPLAYTYPES_OFFSET))(arg, nullptr);
		}

		::System::Void SaveLastEnteredIndex(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + EPISODELISTSCROLLVIEWCONTROLLERBASE_SAVELASTENTEREDINDEX_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_ChapterId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + EPISODELISTSCROLLVIEWCONTROLLERBASE_GET_CHAPTERID_OFFSET))(nullptr);
		}

		::FlatData::ScenarioModeTypes* get_Type()
		{
			return ((::FlatData::ScenarioModeTypes*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPISODELISTSCROLLVIEWCONTROLLERBASE_GET_TYPE_OFFSET))(nullptr);
		}

		::System::Void SetUI(::System::Boolean arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + EPISODELISTSCROLLVIEWCONTROLLERBASE_SETUI_OFFSET))(arg, arg2, nullptr);
		}

		::System::Collections::IEnumerator* Co_PlayStageUnlocking()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPISODELISTSCROLLVIEWCONTROLLERBASE_CO_PLAYSTAGEUNLOCKING_OFFSET))(nullptr);
		}

		::System::Void SetData(::FlatData::ScenarioModeTypes* arg, ::FlatData::ScenarioModeReplayTypes* arg2, ::System::Int64 arg3, ::System::Int64 arg4, ::System::DateTime* arg5)
		{
			((::System::Void(*)(::FlatData::ScenarioModeTypes*, ::FlatData::ScenarioModeReplayTypes*, ::System::Int64, ::System::Int64, ::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + EPISODELISTSCROLLVIEWCONTROLLERBASE_SETDATA_OFFSET))(arg, arg2, arg3, arg4, arg5, nullptr);
		}

		::FlatData::ScenarioModeReplayTypes* get_ReplayTypes()
		{
			return ((::FlatData::ScenarioModeReplayTypes*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPISODELISTSCROLLVIEWCONTROLLERBASE_GET_REPLAYTYPES_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* Co_ShowEarningStageClearStar()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPISODELISTSCROLLVIEWCONTROLLERBASE_CO_SHOWEARNINGSTAGECLEARSTAR_OFFSET))(nullptr);
		}

		::System::Void set_Type(::FlatData::ScenarioModeTypes* arg)
		{
			((::System::Void(*)(::FlatData::ScenarioModeTypes*, ::PVOID))((::PBYTE)hIl2Cpp + EPISODELISTSCROLLVIEWCONTROLLERBASE_SET_TYPE_OFFSET))(arg, nullptr);
		}

		::System::Void set_VolumeId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + EPISODELISTSCROLLVIEWCONTROLLERBASE_SET_VOLUMEID_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPISODELISTSCROLLVIEWCONTROLLERBASE_.CTOR_OFFSET))(nullptr);
		}

	};

