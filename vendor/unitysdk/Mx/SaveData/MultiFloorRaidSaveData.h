#pragma once
#include "../../unitysdk.h"

#define MX_SAVEDATA_MULTIFLOORRAIDSAVEDATA_VALIDATE_OFFSET UNITYSDK_OFFSET(0x1D03E60)
#define MX_SAVEDATA_MULTIFLOORRAIDSAVEDATA_SETDEFAULTDATA_OFFSET UNITYSDK_OFFSET(0x1D04020)
#define MX_SAVEDATA_MULTIFLOORRAIDSAVEDATA_GETSEASONSAVEDATA_OFFSET UNITYSDK_OFFSET(0x1D040A0)
#define MX_SAVEDATA_MULTIFLOORRAIDSAVEDATA_SAVEUNLOCKFLOOR_OFFSET UNITYSDK_OFFSET(0x1D04220)
#define MX_SAVEDATA_MULTIFLOORRAIDSAVEDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1D04270)
#define MX_SAVEDATA_MULTIFLOORRAIDSAVEDATA_SAVEUNLOCKEDSECTIONS_OFFSET UNITYSDK_OFFSET(0x1D042F0)
#define MX_SAVEDATA_MULTIFLOORRAIDSAVEDATA_CLONE_OFFSET UNITYSDK_OFFSET(0x1D04920)
#define MX_SAVEDATA_MULTIFLOORRAIDSAVEDATA_SAVESELECTFLOOR_OFFSET UNITYSDK_OFFSET(0x1D04B90)

namespace MX::SaveData
{
	inline static constexpr unsigned int MultiFloorRaidSaveData_TypeDefinitionIndex = 19989;

	class MultiFloorRaidSaveData : public Il2CppObject
	{
	public:
		Il2CppObject* SeasonSaveDataDic; // 0x10

		::System::Boolean Validate()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_MULTIFLOORRAIDSAVEDATA_VALIDATE_OFFSET))(nullptr);
		}

		::System::Void SetDefaultData()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_MULTIFLOORRAIDSAVEDATA_SETDEFAULTDATA_OFFSET))(nullptr);
		}

		MultiFloorRaidSeasonSaveData* GetSeasonSaveData()
		{
			return (return (MultiFloorRaidSeasonSaveData*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_MULTIFLOORRAIDSAVEDATA_GETSEASONSAVEDATA_OFFSET))(nullptr);
		}

		::System::Void SaveUnlockFloor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_MULTIFLOORRAIDSAVEDATA_SAVEUNLOCKFLOOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_MULTIFLOORRAIDSAVEDATA_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SaveUnlockedSections(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_MULTIFLOORRAIDSAVEDATA_SAVEUNLOCKEDSECTIONS_OFFSET))(arg, nullptr);
		}

		::System::Object* Clone()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_MULTIFLOORRAIDSAVEDATA_CLONE_OFFSET))(nullptr);
		}

		::System::Void SaveSelectFloor(::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_MULTIFLOORRAIDSAVEDATA_SAVESELECTFLOOR_OFFSET))(arg, arg, nullptr);
		}

	};
}

