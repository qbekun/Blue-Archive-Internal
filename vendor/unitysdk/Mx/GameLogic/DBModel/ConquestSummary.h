#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class StageDifficulty; }

#define MX_GAMELOGIC_DBMODEL_CONQUESTSUMMARY_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0xFEED60)
#define MX_GAMELOGIC_DBMODEL_CONQUESTSUMMARY_SET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0xFEED70)
#define MX_GAMELOGIC_DBMODEL_CONQUESTSUMMARY_GET_DIFFICULTY_OFFSET UNITYSDK_OFFSET(0xFEED80)
#define MX_GAMELOGIC_DBMODEL_CONQUESTSUMMARY_SET_DIFFICULTY_OFFSET UNITYSDK_OFFSET(0xFEED90)
#define MX_GAMELOGIC_DBMODEL_CONQUESTSUMMARY_GET_CONQUESTSTEPSUMMARYDICT_OFFSET UNITYSDK_OFFSET(0xFEEDA0)
#define MX_GAMELOGIC_DBMODEL_CONQUESTSUMMARY_SET_CONQUESTSTEPSUMMARYDICT_OFFSET UNITYSDK_OFFSET(0xFEEDB0)
#define MX_GAMELOGIC_DBMODEL_CONQUESTSUMMARY_.CTOR_OFFSET UNITYSDK_OFFSET(0xFEEDC0)
#define MX_GAMELOGIC_DBMODEL_CONQUESTSUMMARY_.CTOR_OFFSET UNITYSDK_OFFSET(0xFEEDD0)

namespace MX::GameLogic::DBModel
{
	inline static constexpr unsigned int ConquestSummary_TypeDefinitionIndex = 12540;

	class ConquestSummary : public Il2CppObject
	{
	public:
		::System::Int64 _EventContentId_k__BackingField; // 0x10
		::FlatData::StageDifficulty* _Difficulty_k__BackingField; // 0x18
		Il2CppObject* _ConquestStepSummaryDict_k__BackingField; // 0x20

		::System::Int64 get_EventContentId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CONQUESTSUMMARY_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

		::System::Void set_EventContentId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CONQUESTSUMMARY_SET_EVENTCONTENTID_OFFSET))(arg, nullptr);
		}

		::FlatData::StageDifficulty* get_Difficulty()
		{
			return ((::FlatData::StageDifficulty*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CONQUESTSUMMARY_GET_DIFFICULTY_OFFSET))(nullptr);
		}

		::System::Void set_Difficulty(::FlatData::StageDifficulty* arg)
		{
			((::System::Void(*)(::FlatData::StageDifficulty*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CONQUESTSUMMARY_SET_DIFFICULTY_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_ConquestStepSummaryDict()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CONQUESTSUMMARY_GET_CONQUESTSTEPSUMMARYDICT_OFFSET))(nullptr);
		}

		::System::Void set_ConquestStepSummaryDict(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CONQUESTSUMMARY_SET_CONQUESTSTEPSUMMARYDICT_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CONQUESTSUMMARY_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Int64 arg, ::FlatData::StageDifficulty* arg2, Il2CppObject* arg3)
		{
			((::System::Void(*)(::System::Int64, ::FlatData::StageDifficulty*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CONQUESTSUMMARY_.CTOR_OFFSET))(arg, arg2, arg3, nullptr);
		}

	};
}

