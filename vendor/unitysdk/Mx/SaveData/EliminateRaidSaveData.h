#pragma once
#include "../../unitysdk.h"

namespace FlatData { class Difficulty; }

#define MX_SAVEDATA_ELIMINATERAIDSAVEDATA_SAVELASTPLAYEDDIFFICULTY_OFFSET UNITYSDK_OFFSET(0x1CFCAC0)
#define MX_SAVEDATA_ELIMINATERAIDSAVEDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1CFCB60)
#define MX_SAVEDATA_ELIMINATERAIDSAVEDATA_CLONE_OFFSET UNITYSDK_OFFSET(0x1CFCC30)
#define MX_SAVEDATA_ELIMINATERAIDSAVEDATA_VALIDATE_OFFSET UNITYSDK_OFFSET(0x1CFCC80)
#define MX_SAVEDATA_ELIMINATERAIDSAVEDATA_SETCURRENTSEASON_OFFSET UNITYSDK_OFFSET(0x1CFCD30)
#define MX_SAVEDATA_ELIMINATERAIDSAVEDATA_SETDEFAULTDATA_OFFSET UNITYSDK_OFFSET(0x1CFCE00)

namespace MX::SaveData
{
	inline static constexpr unsigned int EliminateRaidSaveData_TypeDefinitionIndex = 19953;

	class EliminateRaidSaveData : public Il2CppObject
	{
	public:
		::System::Int64 CurrentSeasonId; // 0x10
		Il2CppObject* HighestDifficultyDic; // 0x18
		Il2CppObject* lastPlayedDifficultyIndexDic; // 0x20

		::System::Void SaveLastPlayedDifficulty(::System::Int32 arg, ::FlatData::Difficulty* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatData::Difficulty*, ::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_ELIMINATERAIDSAVEDATA_SAVELASTPLAYEDDIFFICULTY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_ELIMINATERAIDSAVEDATA_.CTOR_OFFSET))(nullptr);
		}

		::System::Object* Clone()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_ELIMINATERAIDSAVEDATA_CLONE_OFFSET))(nullptr);
		}

		::System::Boolean Validate()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_ELIMINATERAIDSAVEDATA_VALIDATE_OFFSET))(nullptr);
		}

		::System::Void SetCurrentSeason(::System::Int64 arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::Int64, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_ELIMINATERAIDSAVEDATA_SETCURRENTSEASON_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetDefaultData()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_ELIMINATERAIDSAVEDATA_SETDEFAULTDATA_OFFSET))(nullptr);
		}

	};
}

