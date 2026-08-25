#pragma once
#include "../../unitysdk.h"

namespace MX::Data::Excel { class StoryStrategyExcel; }

#define MX_DATA_STORYSTRATEGYSTAGEINFO_GET_STORYWHITELISTCHARACTERIDS_OFFSET UNITYSDK_OFFSET(0x185F230)
#define MX_DATA_STORYSTRATEGYSTAGEINFO_GET_SCENARIOMODEID_OFFSET UNITYSDK_OFFSET(0x185F2D0)
#define MX_DATA_STORYSTRATEGYSTAGEINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x185F2E0)
#define MX_DATA_STORYSTRATEGYSTAGEINFO_SET_FIXEDSTRATEGYID_OFFSET UNITYSDK_OFFSET(0x185F970)
#define MX_DATA_STORYSTRATEGYSTAGEINFO_GETSTAGENUMBER_OFFSET UNITYSDK_OFFSET(0x185F980)
#define MX_DATA_STORYSTRATEGYSTAGEINFO_SET_SCENARIOMODEID_OFFSET UNITYSDK_OFFSET(0x185F990)
#define MX_DATA_STORYSTRATEGYSTAGEINFO_GET_FIXEDSTRATEGYID_OFFSET UNITYSDK_OFFSET(0x185F9A0)
#define MX_DATA_STORYSTRATEGYSTAGEINFO_GET_FIXEDECHELONDATALIST_OFFSET UNITYSDK_OFFSET(0x185F9B0)
#define MX_DATA_STORYSTRATEGYSTAGEINFO_GET_WHITELISTID_OFFSET UNITYSDK_OFFSET(0x185FA60)
#define MX_DATA_STORYSTRATEGYSTAGEINFO_GETSTAGENAME_OFFSET UNITYSDK_OFFSET(0x185FA70)
#define MX_DATA_STORYSTRATEGYSTAGEINFO_SET_WHITELISTID_OFFSET UNITYSDK_OFFSET(0x185FB10)

namespace MX::Data
{
	inline static constexpr unsigned int StoryStrategyStageInfo_TypeDefinitionIndex = 15898;

	class StoryStrategyStageInfo : public Il2CppObject
	{
	public:
		::System::Int64 _FixedStrategyId_k__BackingField; // 0x138
		::System::Int64 _ScenarioModeId_k__BackingField; // 0x140
		::System::Int64 _WhiteListId_k__BackingField; // 0x148
		::System::String* FirstClearReportEventName; // 0x150
		::System::String* stageNameLocalizeKey; // 0x158

		Il2CppObject* get_StoryWhiteListCharacterIds()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_STORYSTRATEGYSTAGEINFO_GET_STORYWHITELISTCHARACTERIDS_OFFSET))(nullptr);
		}

		::System::Int64 get_ScenarioModeId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_STORYSTRATEGYSTAGEINFO_GET_SCENARIOMODEID_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::String* str, ::MX::Data::Excel::StoryStrategyExcel* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::String*, ::MX::Data::Excel::StoryStrategyExcel*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_STORYSTRATEGYSTAGEINFO_.CTOR_OFFSET))(str, arg, arg, nullptr);
		}

		::System::Void set_FixedStrategyId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_STORYSTRATEGYSTAGEINFO_SET_FIXEDSTRATEGYID_OFFSET))(arg, nullptr);
		}

		::System::String* GetStageNumber()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_STORYSTRATEGYSTAGEINFO_GETSTAGENUMBER_OFFSET))(nullptr);
		}

		::System::Void set_ScenarioModeId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_STORYSTRATEGYSTAGEINFO_SET_SCENARIOMODEID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_FixedStrategyId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_STORYSTRATEGYSTAGEINFO_GET_FIXEDSTRATEGYID_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* get_FixedEchelonDataList()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_STORYSTRATEGYSTAGEINFO_GET_FIXEDECHELONDATALIST_OFFSET))(nullptr);
		}

		::System::Int64 get_WhiteListId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_STORYSTRATEGYSTAGEINFO_GET_WHITELISTID_OFFSET))(nullptr);
		}

		::System::String* GetStageName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_STORYSTRATEGYSTAGEINFO_GETSTAGENAME_OFFSET))(nullptr);
		}

		::System::Void set_WhiteListId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_STORYSTRATEGYSTAGEINFO_SET_WHITELISTID_OFFSET))(arg, nullptr);
		}

	};
}

