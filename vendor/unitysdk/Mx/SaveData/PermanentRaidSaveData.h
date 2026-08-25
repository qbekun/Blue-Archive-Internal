#pragma once
#include "../../unitysdk.h"

namespace FlatData { class RaidBossGroupType; }

#define MX_SAVEDATA_PERMANENTRAIDSAVEDATA_SETDEFAULTDATA_OFFSET UNITYSDK_OFFSET(0x1D25740)
#define MX_SAVEDATA_PERMANENTRAIDSAVEDATA_VALIDATE_OFFSET UNITYSDK_OFFSET(0x1D25750)
#define MX_SAVEDATA_PERMANENTRAIDSAVEDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1D25760)
#define MX_SAVEDATA_PERMANENTRAIDSAVEDATA_CLONE_OFFSET UNITYSDK_OFFSET(0x1D25770)

namespace MX::SaveData
{
	inline static constexpr unsigned int PermanentRaidSaveData_TypeDefinitionIndex = 20005;

	class PermanentRaidSaveData : public Il2CppObject
	{
	public:
		::FlatData::RaidBossGroupType* SelectedRaidBoss; // 0x10
		::System::Int32 RaidBossGroupIndex; // 0x14

		::System::Void SetDefaultData()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_PERMANENTRAIDSAVEDATA_SETDEFAULTDATA_OFFSET))(nullptr);
		}

		::System::Boolean Validate()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_PERMANENTRAIDSAVEDATA_VALIDATE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_PERMANENTRAIDSAVEDATA_.CTOR_OFFSET))(nullptr);
		}

		::System::Object* Clone()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_PERMANENTRAIDSAVEDATA_CLONE_OFFSET))(nullptr);
		}

	};
}

