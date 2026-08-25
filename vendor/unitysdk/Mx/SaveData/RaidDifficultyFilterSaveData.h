#pragma once
#include "../../unitysdk.h"

namespace FlatData { class ContentType; }

#define MX_SAVEDATA_RAIDDIFFICULTYFILTERSAVEDATA_SAVERAIDFILTER_OFFSET UNITYSDK_OFFSET(0x1D02070)
#define MX_SAVEDATA_RAIDDIFFICULTYFILTERSAVEDATA_SAVEELIMINATERAIDFILTER_OFFSET UNITYSDK_OFFSET(0x1D02090)
#define MX_SAVEDATA_RAIDDIFFICULTYFILTERSAVEDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1D02130)
#define MX_SAVEDATA_RAIDDIFFICULTYFILTERSAVEDATA_CHECKCURRENTSEASON_OFFSET UNITYSDK_OFFSET(0x1D02140)
#define MX_SAVEDATA_RAIDDIFFICULTYFILTERSAVEDATA_CLONE_OFFSET UNITYSDK_OFFSET(0x1D022F0)
#define MX_SAVEDATA_RAIDDIFFICULTYFILTERSAVEDATA_SETDEFAULTDATA_OFFSET UNITYSDK_OFFSET(0x1D02370)
#define MX_SAVEDATA_RAIDDIFFICULTYFILTERSAVEDATA_VALIDATE_OFFSET UNITYSDK_OFFSET(0x1D02390)
#define MX_SAVEDATA_RAIDDIFFICULTYFILTERSAVEDATA_RESETFILTER_OFFSET UNITYSDK_OFFSET(0x1D024A0)

namespace MX::SaveData
{
	inline static constexpr unsigned int RaidDifficultyFilterSaveData_TypeDefinitionIndex = 19975;

	class RaidDifficultyFilterSaveData : public Il2CppObject
	{
	public:
		::System::Int64 SeasonId; // 0x10
		RaidDifficultyFilter* Filter; // 0x18
		::System::Int64 SeasonId_EliminateRaid; // 0x20
		Il2CppObject* BossIndex_EliminateRaid; // 0x28
		RaidDifficultyFilter* Filter_EliminateRaid; // 0x30

		::System::Void SaveRaidFilter(RaidDifficultyFilter* arg)
		{
			((::System::Void(*)(RaidDifficultyFilter*, ::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_RAIDDIFFICULTYFILTERSAVEDATA_SAVERAIDFILTER_OFFSET))(arg, nullptr);
		}

		::System::Void SaveEliminateRaidFilter(Il2CppObject* arg, RaidDifficultyFilter* arg)
		{
			((::System::Void(*)(Il2CppObject*, RaidDifficultyFilter*, ::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_RAIDDIFFICULTYFILTERSAVEDATA_SAVEELIMINATERAIDFILTER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_RAIDDIFFICULTYFILTERSAVEDATA_.CTOR_OFFSET))(nullptr);
		}

		::System::Void CheckCurrentSeason(::FlatData::ContentType* arg)
		{
			((::System::Void(*)(::FlatData::ContentType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_RAIDDIFFICULTYFILTERSAVEDATA_CHECKCURRENTSEASON_OFFSET))(arg, nullptr);
		}

		::System::Object* Clone()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_RAIDDIFFICULTYFILTERSAVEDATA_CLONE_OFFSET))(nullptr);
		}

		::System::Void SetDefaultData()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_RAIDDIFFICULTYFILTERSAVEDATA_SETDEFAULTDATA_OFFSET))(nullptr);
		}

		::System::Boolean Validate()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_RAIDDIFFICULTYFILTERSAVEDATA_VALIDATE_OFFSET))(nullptr);
		}

		::System::Void ResetFilter(::FlatData::ContentType* arg)
		{
			((::System::Void(*)(::FlatData::ContentType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_RAIDDIFFICULTYFILTERSAVEDATA_RESETFILTER_OFFSET))(arg, nullptr);
		}

	};
}

