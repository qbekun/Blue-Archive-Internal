#pragma once
#include "../../unitysdk.h"

#define MX_SAVEDATA_CHARACTERSORTINGSAVEDATA_VALIDATE_OFFSET UNITYSDK_OFFSET(0x1CF9640)
#define MX_SAVEDATA_CHARACTERSORTINGSAVEDATA_SETDEFAULTDATA_OFFSET UNITYSDK_OFFSET(0x1CF9650)
#define MX_SAVEDATA_CHARACTERSORTINGSAVEDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1CF9140)

namespace MX::SaveData
{
	inline static constexpr unsigned int CharacterSortingSaveData_TypeDefinitionIndex = 19923;

	class CharacterSortingSaveData : public Il2CppObject
	{
	public:
		SortingRule* SortingRule; // 0x10
		SortingOrder* SortingOrder; // 0x14

		::System::Boolean Validate()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_CHARACTERSORTINGSAVEDATA_VALIDATE_OFFSET))(nullptr);
		}

		::System::Void SetDefaultData()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_CHARACTERSORTINGSAVEDATA_SETDEFAULTDATA_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_CHARACTERSORTINGSAVEDATA_.CTOR_OFFSET))(nullptr);
		}

	};
}

