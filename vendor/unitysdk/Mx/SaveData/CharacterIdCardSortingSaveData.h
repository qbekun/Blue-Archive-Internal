#pragma once
#include "../../unitysdk.h"

#define MX_SAVEDATA_CHARACTERIDCARDSORTINGSAVEDATA_VALIDATE_OFFSET UNITYSDK_OFFSET(0x1CF9590)
#define MX_SAVEDATA_CHARACTERIDCARDSORTINGSAVEDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1CF95A0)
#define MX_SAVEDATA_CHARACTERIDCARDSORTINGSAVEDATA_CLONE_OFFSET UNITYSDK_OFFSET(0x1CF95C0)
#define MX_SAVEDATA_CHARACTERIDCARDSORTINGSAVEDATA_SETDEFAULTDATA_OFFSET UNITYSDK_OFFSET(0x1CF9630)

namespace MX::SaveData
{
	inline static constexpr unsigned int CharacterIdCardSortingSaveData_TypeDefinitionIndex = 19922;

	class CharacterIdCardSortingSaveData : public Il2CppObject
	{
	public:
		::System::Boolean Validate()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_CHARACTERIDCARDSORTINGSAVEDATA_VALIDATE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_CHARACTERIDCARDSORTINGSAVEDATA_.CTOR_OFFSET))(nullptr);
		}

		::System::Object* Clone()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_CHARACTERIDCARDSORTINGSAVEDATA_CLONE_OFFSET))(nullptr);
		}

		::System::Void SetDefaultData()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_CHARACTERIDCARDSORTINGSAVEDATA_SETDEFAULTDATA_OFFSET))(nullptr);
		}

	};
}

