#pragma once
#include "../../unitysdk.h"

#define MX_SAVEDATA_RAIDSTAGEUNLOCKSAVEDATA_CLONE_OFFSET UNITYSDK_OFFSET(0x1CFC900)
#define MX_SAVEDATA_RAIDSTAGEUNLOCKSAVEDATA_VALIDATE_OFFSET UNITYSDK_OFFSET(0x1CFCA30)
#define MX_SAVEDATA_RAIDSTAGEUNLOCKSAVEDATA_SETDEFAULTDATA_OFFSET UNITYSDK_OFFSET(0x1CFCA40)
#define MX_SAVEDATA_RAIDSTAGEUNLOCKSAVEDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1CFC9B0)

namespace MX::SaveData
{
	inline static constexpr unsigned int RaidStageUnlockSaveData_TypeDefinitionIndex = 19952;

	class RaidStageUnlockSaveData : public Il2CppObject
	{
	public:
		Il2CppObject* AlreadyUnlock; // 0x10

		::System::Object* Clone()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_RAIDSTAGEUNLOCKSAVEDATA_CLONE_OFFSET))(nullptr);
		}

		::System::Boolean Validate()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_RAIDSTAGEUNLOCKSAVEDATA_VALIDATE_OFFSET))(nullptr);
		}

		::System::Void SetDefaultData()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_RAIDSTAGEUNLOCKSAVEDATA_SETDEFAULTDATA_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_RAIDSTAGEUNLOCKSAVEDATA_.CTOR_OFFSET))(nullptr);
		}

	};
}

