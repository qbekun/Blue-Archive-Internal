#pragma once
#include "../../unitysdk.h"

#define MX_SAVEDATA_CHARACTERLOBBYMEMORIALSORTINGSAVEDATA_CLONE_OFFSET UNITYSDK_OFFSET(0x1CF92D0)
#define MX_SAVEDATA_CHARACTERLOBBYMEMORIALSORTINGSAVEDATA_VALIDATE_OFFSET UNITYSDK_OFFSET(0x1CF9360)
#define MX_SAVEDATA_CHARACTERLOBBYMEMORIALSORTINGSAVEDATA_SETDEFAULTDATA_OFFSET UNITYSDK_OFFSET(0x1CF9370)
#define MX_SAVEDATA_CHARACTERLOBBYMEMORIALSORTINGSAVEDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1CF9340)

namespace MX::SaveData
{
	inline static constexpr unsigned int CharacterLobbyMemorialSortingSaveData_TypeDefinitionIndex = 19918;

	class CharacterLobbyMemorialSortingSaveData : public Il2CppObject
	{
	public:
		::System::Object* Clone()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_CHARACTERLOBBYMEMORIALSORTINGSAVEDATA_CLONE_OFFSET))(nullptr);
		}

		::System::Boolean Validate()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_CHARACTERLOBBYMEMORIALSORTINGSAVEDATA_VALIDATE_OFFSET))(nullptr);
		}

		::System::Void SetDefaultData()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_CHARACTERLOBBYMEMORIALSORTINGSAVEDATA_SETDEFAULTDATA_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_CHARACTERLOBBYMEMORIALSORTINGSAVEDATA_.CTOR_OFFSET))(nullptr);
		}

	};
}

