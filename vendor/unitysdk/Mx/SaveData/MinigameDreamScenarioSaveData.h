#pragma once
#include "../../unitysdk.h"

#define MX_SAVEDATA_MINIGAMEDREAMSCENARIOSAVEDATA_SETDEFAULTDATA_OFFSET UNITYSDK_OFFSET(0x1CFC3F0)
#define MX_SAVEDATA_MINIGAMEDREAMSCENARIOSAVEDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1CFC470)
#define MX_SAVEDATA_MINIGAMEDREAMSCENARIOSAVEDATA_VALIDATE_OFFSET UNITYSDK_OFFSET(0x1CFC480)
#define MX_SAVEDATA_MINIGAMEDREAMSCENARIOSAVEDATA_CLONE_OFFSET UNITYSDK_OFFSET(0x1CFC490)

namespace MX::SaveData
{
	inline static constexpr unsigned int MinigameDreamScenarioSaveData_TypeDefinitionIndex = 19950;

	class MinigameDreamScenarioSaveData : public Il2CppObject
	{
	public:
		::System::Int64 EventContentId; // 0x10
		::System::Int64 CurrentRound; // 0x18
		Il2CppObject* WatchedScenarioIdList; // 0x20

		::System::Void SetDefaultData()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_MINIGAMEDREAMSCENARIOSAVEDATA_SETDEFAULTDATA_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_MINIGAMEDREAMSCENARIOSAVEDATA_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean Validate()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_MINIGAMEDREAMSCENARIOSAVEDATA_VALIDATE_OFFSET))(nullptr);
		}

		::System::Object* Clone()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_MINIGAMEDREAMSCENARIOSAVEDATA_CLONE_OFFSET))(nullptr);
		}

	};
}

