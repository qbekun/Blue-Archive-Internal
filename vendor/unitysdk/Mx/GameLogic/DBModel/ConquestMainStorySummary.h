#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class StageDifficulty; }

#define MX_GAMELOGIC_DBMODEL_CONQUESTMAINSTORYSUMMARY_SET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0xFEEEE0)
#define MX_GAMELOGIC_DBMODEL_CONQUESTMAINSTORYSUMMARY_.CTOR_OFFSET UNITYSDK_OFFSET(0xFEEEF0)
#define MX_GAMELOGIC_DBMODEL_CONQUESTMAINSTORYSUMMARY_GET_DIFFICULTY_OFFSET UNITYSDK_OFFSET(0xFEEF00)
#define MX_GAMELOGIC_DBMODEL_CONQUESTMAINSTORYSUMMARY_SET_CONQUESTSTEPSUMMARYDICT_OFFSET UNITYSDK_OFFSET(0xFEEF10)
#define MX_GAMELOGIC_DBMODEL_CONQUESTMAINSTORYSUMMARY_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0xFEEF20)
#define MX_GAMELOGIC_DBMODEL_CONQUESTMAINSTORYSUMMARY_GET_CONQUESTSTEPSUMMARYDICT_OFFSET UNITYSDK_OFFSET(0xFEEF30)
#define MX_GAMELOGIC_DBMODEL_CONQUESTMAINSTORYSUMMARY_SET_DIFFICULTY_OFFSET UNITYSDK_OFFSET(0xFEEF40)

namespace MX::GameLogic::DBModel
{
	inline static constexpr unsigned int ConquestMainStorySummary_TypeDefinitionIndex = 12542;

	class ConquestMainStorySummary : public Il2CppObject
	{
	public:
		::System::Int64 _EventContentId_k__BackingField; // 0x10
		::FlatData::StageDifficulty* _Difficulty_k__BackingField; // 0x18
		Il2CppObject* _ConquestStepSummaryDict_k__BackingField; // 0x20

		::System::Void set_EventContentId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CONQUESTMAINSTORYSUMMARY_SET_EVENTCONTENTID_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CONQUESTMAINSTORYSUMMARY_.CTOR_OFFSET))(nullptr);
		}

		::FlatData::StageDifficulty* get_Difficulty()
		{
			return ((::FlatData::StageDifficulty*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CONQUESTMAINSTORYSUMMARY_GET_DIFFICULTY_OFFSET))(nullptr);
		}

		::System::Void set_ConquestStepSummaryDict(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CONQUESTMAINSTORYSUMMARY_SET_CONQUESTSTEPSUMMARYDICT_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_EventContentId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CONQUESTMAINSTORYSUMMARY_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

		Il2CppObject* get_ConquestStepSummaryDict()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CONQUESTMAINSTORYSUMMARY_GET_CONQUESTSTEPSUMMARYDICT_OFFSET))(nullptr);
		}

		::System::Void set_Difficulty(::FlatData::StageDifficulty* arg)
		{
			((::System::Void(*)(::FlatData::StageDifficulty*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CONQUESTMAINSTORYSUMMARY_SET_DIFFICULTY_OFFSET))(arg, nullptr);
		}

	};
}

