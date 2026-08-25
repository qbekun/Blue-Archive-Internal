#pragma once
#include "../../unitysdk.h"

namespace FlatData { class StageDifficulty; }

#define MX_SAVEDATA_CONQUESTSAVEDATA_ADDTILEMAPEVENTDBS_OFFSET UNITYSDK_OFFSET(0x1CFDEF0)
#define MX_SAVEDATA_CONQUESTSAVEDATA_CLONE_OFFSET UNITYSDK_OFFSET(0x1CFE190)
#define MX_SAVEDATA_CONQUESTSAVEDATA_VALIDATE_OFFSET UNITYSDK_OFFSET(0x1CFE2B0)
#define MX_SAVEDATA_CONQUESTSAVEDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1CFE2A0)
#define MX_SAVEDATA_CONQUESTSAVEDATA_SETDEFAULTDATA_OFFSET UNITYSDK_OFFSET(0x1CFE820)
#define MX_SAVEDATA_CONQUESTSAVEDATA_GET_TILEMAPEVENTDBS_OFFSET UNITYSDK_OFFSET(0x1CFEDC0)

namespace MX::SaveData
{
	inline static constexpr unsigned int ConquestSaveData_TypeDefinitionIndex = 19958;

	class ConquestSaveData : public Il2CppObject
	{
	public:
		::System::Int64 EventContentId; // 0x10
		::FlatData::StageDifficulty* StageDifficulty; // 0x18
		Il2CppObject* CurrentViewingStepDict; // 0x20
		Il2CppObject* MaxOpenedStepDict; // 0x28
		Il2CppObject* TileMapEventDBList; // 0x30
		Il2CppObject* ErosionToPlayList; // 0x38
		SortingRule* SortingRule; // 0x40
		SortingOrder* SortingOrder; // 0x44
		Il2CppObject* StepToStateDict; // 0x48
		Il2CppObject* StepToIndividualErosion; // 0x50

		::System::Void AddTileMapEventDBs(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_CONQUESTSAVEDATA_ADDTILEMAPEVENTDBS_OFFSET))(arg, nullptr);
		}

		::System::Object* Clone()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_CONQUESTSAVEDATA_CLONE_OFFSET))(nullptr);
		}

		::System::Boolean Validate()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_CONQUESTSAVEDATA_VALIDATE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_CONQUESTSAVEDATA_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetDefaultData()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_CONQUESTSAVEDATA_SETDEFAULTDATA_OFFSET))(nullptr);
		}

		Il2CppObject* get_TileMapEventDBs()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_CONQUESTSAVEDATA_GET_TILEMAPEVENTDBS_OFFSET))(nullptr);
		}

	};
}

