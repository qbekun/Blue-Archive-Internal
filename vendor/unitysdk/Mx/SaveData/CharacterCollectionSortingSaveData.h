#pragma once
#include "../../unitysdk.h"

namespace FlatData { class SquadType; }

#define MX_SAVEDATA_CHARACTERCOLLECTIONSORTINGSAVEDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1CF9120)
#define MX_SAVEDATA_CHARACTERCOLLECTIONSORTINGSAVEDATA_VALIDATE_OFFSET UNITYSDK_OFFSET(0x1CF9160)
#define MX_SAVEDATA_CHARACTERCOLLECTIONSORTINGSAVEDATA_CLONE_OFFSET UNITYSDK_OFFSET(0x1CF9170)
#define MX_SAVEDATA_CHARACTERCOLLECTIONSORTINGSAVEDATA_SETDEFAULTDATA_OFFSET UNITYSDK_OFFSET(0x1CF91F0)

namespace MX::SaveData
{
	inline static constexpr unsigned int CharacterCollectionSortingSaveData_TypeDefinitionIndex = 19916;

	class CharacterCollectionSortingSaveData : public Il2CppObject
	{
	public:
		::FlatData::SquadType* SquadType; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_CHARACTERCOLLECTIONSORTINGSAVEDATA_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean Validate()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_CHARACTERCOLLECTIONSORTINGSAVEDATA_VALIDATE_OFFSET))(nullptr);
		}

		::System::Object* Clone()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_CHARACTERCOLLECTIONSORTINGSAVEDATA_CLONE_OFFSET))(nullptr);
		}

		::System::Void SetDefaultData()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_CHARACTERCOLLECTIONSORTINGSAVEDATA_SETDEFAULTDATA_OFFSET))(nullptr);
		}

	};
}

