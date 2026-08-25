#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class RoadPuzzleVoiceCondition; }

#define MX_DATA_EXCEL_MINIGAMEROADPUZZLEVOICEEXCELREPOSITORY_SELECT_EVENTCONTENTIDS_OFFSET UNITYSDK_OFFSET(0x1BF78B0)
#define MX_DATA_EXCEL_MINIGAMEROADPUZZLEVOICEEXCELREPOSITORY_SELECT_UNIQUEIDS_OFFSET UNITYSDK_OFFSET(0x1BF7CB0)
#define MX_DATA_EXCEL_MINIGAMEROADPUZZLEVOICEEXCELREPOSITORY_SELECTFIRST_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1BF80C0)
#define MX_DATA_EXCEL_MINIGAMEROADPUZZLEVOICEEXCELREPOSITORY_SELECTFIRST_VOICECONDITION_OFFSET UNITYSDK_OFFSET(0x1BF83E0)
#define MX_DATA_EXCEL_MINIGAMEROADPUZZLEVOICEEXCELREPOSITORY_SELECT_VOICECONDITIONS_OFFSET UNITYSDK_OFFSET(0x1BF8750)
#define MX_DATA_EXCEL_MINIGAMEROADPUZZLEVOICEEXCELREPOSITORY_SELECT_VOICECONDITION_OFFSET UNITYSDK_OFFSET(0x1BF8B60)
#define MX_DATA_EXCEL_MINIGAMEROADPUZZLEVOICEEXCELREPOSITORY_SELECT_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1BF8EB0)
#define MX_DATA_EXCEL_MINIGAMEROADPUZZLEVOICEEXCELREPOSITORY_SELECTFIRST_UNIQUEID_OFFSET UNITYSDK_OFFSET(0x1BF91B0)
#define MX_DATA_EXCEL_MINIGAMEROADPUZZLEVOICEEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1BF94D0)
#define MX_DATA_EXCEL_MINIGAMEROADPUZZLEVOICEEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x1BF9510)
#define MX_DATA_EXCEL_MINIGAMEROADPUZZLEVOICEEXCELREPOSITORY_SELECT_UNIQUEID_OFFSET UNITYSDK_OFFSET(0x1BF9870)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int MiniGameRoadPuzzleVoiceExcelRepository_TypeDefinitionIndex = 18830;

	class MiniGameRoadPuzzleVoiceExcelRepository : public <co_InternalInvoke>d__3
	{
	public:
		Il2CppObject* Select_EventContentIds(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEROADPUZZLEVOICEEXCELREPOSITORY_SELECT_EVENTCONTENTIDS_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_UniqueIds(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEROADPUZZLEVOICEEXCELREPOSITORY_SELECT_UNIQUEIDS_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* SelectFirst_EventContentId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEROADPUZZLEVOICEEXCELREPOSITORY_SELECTFIRST_EVENTCONTENTID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* SelectFirst_VoiceCondition(::FlatData::RoadPuzzleVoiceCondition* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::FlatData::RoadPuzzleVoiceCondition*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEROADPUZZLEVOICEEXCELREPOSITORY_SELECTFIRST_VOICECONDITION_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_VoiceConditions(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEROADPUZZLEVOICEEXCELREPOSITORY_SELECT_VOICECONDITIONS_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_VoiceCondition(::FlatData::RoadPuzzleVoiceCondition* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::FlatData::RoadPuzzleVoiceCondition*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEROADPUZZLEVOICEEXCELREPOSITORY_SELECT_VOICECONDITION_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_EventContentId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEROADPUZZLEVOICEEXCELREPOSITORY_SELECT_EVENTCONTENTID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* SelectFirst_UniqueId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEROADPUZZLEVOICEEXCELREPOSITORY_SELECTFIRST_UNIQUEID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEROADPUZZLEVOICEEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEROADPUZZLEVOICEEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* Select_UniqueId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEROADPUZZLEVOICEEXCELREPOSITORY_SELECT_UNIQUEID_OFFSET))(arg, arg, nullptr);
		}

	};
}

