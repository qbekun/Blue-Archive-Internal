#pragma once
#include "unitysdk.h"

namespace FlatData { class WorldRaidDifficulty; }

#define WORLDRAIDSEASONSAVEDATA_SETLATESTSELECTEDDIFFICULTY_OFFSET UNITYSDK_OFFSET(0x1CFDD10)
#define WORLDRAIDSEASONSAVEDATA_CLONE_OFFSET UNITYSDK_OFFSET(0x1CFD6E0)
#define WORLDRAIDSEASONSAVEDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1CFD0A0)
#define WORLDRAIDSEASONSAVEDATA_SETSORTINGOPTION_OFFSET UNITYSDK_OFFSET(0x1CFDD20)
#define WORLDRAIDSEASONSAVEDATA_SETPLAYEDUNLOCKSTAGEID_OFFSET UNITYSDK_OFFSET(0x1CFDD40)
#define WORLDRAIDSEASONSAVEDATA_SETSPECIFICBOSSOPENGROUPID_OFFSET UNITYSDK_OFFSET(0x1CFDDE0)
#define WORLDRAIDSEASONSAVEDATA_SETPLAYEDLOCATIONANIMATION_OFFSET UNITYSDK_OFFSET(0x1CFDED0)
#define WORLDRAIDSEASONSAVEDATA_SETAPPEARSTATE_OFFSET UNITYSDK_OFFSET(0x1CFDAD0)
#define WORLDRAIDSEASONSAVEDATA_SAVEFAVORBUFFGUIDE_OFFSET UNITYSDK_OFFSET(0x1CFDEE0)
#define WORLDRAIDSEASONSAVEDATA_VALIDATE_OFFSET UNITYSDK_OFFSET(0x1CFD3A0)

	inline static constexpr unsigned int WorldRaidSeasonSaveData_TypeDefinitionIndex = 19954;

	class WorldRaidSeasonSaveData : public Il2CppObject
	{
	public:
		Il2CppObject* BossAppearDic; // 0x10
		Il2CppObject* PlayedUnlockStageIDs; // 0x18
		SortingRule* SortingRule; // 0x20
		SortingOrder* SortingOrder; // 0x24
		::FlatData::WorldRaidDifficulty* LatestSelectDifficulty; // 0x28
		Il2CppObject* SpecificBossOpenCheckGroupIds; // 0x30
		::System::Boolean PlayedLocationAnimation; // 0x38
		::System::Boolean CheckFavorBuffGuide; // 0x39

		::System::Void SetLatestSelectedDifficulty(::FlatData::WorldRaidDifficulty* arg)
		{
			((::System::Void(*)(::FlatData::WorldRaidDifficulty*, ::PVOID))((::PBYTE)hIl2Cpp + WORLDRAIDSEASONSAVEDATA_SETLATESTSELECTEDDIFFICULTY_OFFSET))(arg, nullptr);
		}

		::System::Object* Clone()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + WORLDRAIDSEASONSAVEDATA_CLONE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + WORLDRAIDSEASONSAVEDATA_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetSortingOption(SortingRule* arg, SortingOrder* arg)
		{
			((::System::Void(*)(SortingRule*, SortingOrder*, ::PVOID))((::PBYTE)hIl2Cpp + WORLDRAIDSEASONSAVEDATA_SETSORTINGOPTION_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetPlayedUnlockStageID(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + WORLDRAIDSEASONSAVEDATA_SETPLAYEDUNLOCKSTAGEID_OFFSET))(arg, nullptr);
		}

		::System::Void SetSpecificBossOpenGroupId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + WORLDRAIDSEASONSAVEDATA_SETSPECIFICBOSSOPENGROUPID_OFFSET))(arg, nullptr);
		}

		::System::Void SetPlayedLocationAnimation()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + WORLDRAIDSEASONSAVEDATA_SETPLAYEDLOCATIONANIMATION_OFFSET))(nullptr);
		}

		::System::Void SetAppearState(::System::Int64 arg, BossAppearState* arg)
		{
			((::System::Void(*)(::System::Int64, BossAppearState*, ::PVOID))((::PBYTE)hIl2Cpp + WORLDRAIDSEASONSAVEDATA_SETAPPEARSTATE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SaveFavorBuffGuide()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + WORLDRAIDSEASONSAVEDATA_SAVEFAVORBUFFGUIDE_OFFSET))(nullptr);
		}

		::System::Boolean Validate()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + WORLDRAIDSEASONSAVEDATA_VALIDATE_OFFSET))(nullptr);
		}

	};

