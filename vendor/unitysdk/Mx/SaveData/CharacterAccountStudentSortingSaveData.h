#pragma once
#include "../../unitysdk.h"

#define MX_SAVEDATA_CHARACTERACCOUNTSTUDENTSORTINGSAVEDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1CF9430)
#define MX_SAVEDATA_CHARACTERACCOUNTSTUDENTSORTINGSAVEDATA_VALIDATE_OFFSET UNITYSDK_OFFSET(0x1CF9450)
#define MX_SAVEDATA_CHARACTERACCOUNTSTUDENTSORTINGSAVEDATA_SETDEFAULTDATA_OFFSET UNITYSDK_OFFSET(0x1CF9460)
#define MX_SAVEDATA_CHARACTERACCOUNTSTUDENTSORTINGSAVEDATA_CLONE_OFFSET UNITYSDK_OFFSET(0x1CF9470)

namespace MX::SaveData
{
	inline static constexpr unsigned int CharacterAccountStudentSortingSaveData_TypeDefinitionIndex = 19920;

	class CharacterAccountStudentSortingSaveData : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_CHARACTERACCOUNTSTUDENTSORTINGSAVEDATA_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean Validate()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_CHARACTERACCOUNTSTUDENTSORTINGSAVEDATA_VALIDATE_OFFSET))(nullptr);
		}

		::System::Void SetDefaultData()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_CHARACTERACCOUNTSTUDENTSORTINGSAVEDATA_SETDEFAULTDATA_OFFSET))(nullptr);
		}

		::System::Object* Clone()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_CHARACTERACCOUNTSTUDENTSORTINGSAVEDATA_CLONE_OFFSET))(nullptr);
		}

	};
}

