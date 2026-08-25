#pragma once
#include "../../unitysdk.h"

#define MX_SAVEDATA_TROPHYCOLLECTIONSORTINGSAVEDATA_VALIDATE_OFFSET UNITYSDK_OFFSET(0x1CFA320)
#define MX_SAVEDATA_TROPHYCOLLECTIONSORTINGSAVEDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1CFA330)
#define MX_SAVEDATA_TROPHYCOLLECTIONSORTINGSAVEDATA_CLONE_OFFSET UNITYSDK_OFFSET(0x1CFA340)
#define MX_SAVEDATA_TROPHYCOLLECTIONSORTINGSAVEDATA_SETDEFAULTDATA_OFFSET UNITYSDK_OFFSET(0x1CFA3B0)

namespace MX::SaveData
{
	inline static constexpr unsigned int TrophyCollectionSortingSaveData_TypeDefinitionIndex = 19932;

	class TrophyCollectionSortingSaveData : public Il2CppObject
	{
	public:
		SortingRule* SortingRule; // 0x10
		SortingOrder* SortingOrder; // 0x14

		::System::Boolean Validate()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_TROPHYCOLLECTIONSORTINGSAVEDATA_VALIDATE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_TROPHYCOLLECTIONSORTINGSAVEDATA_.CTOR_OFFSET))(nullptr);
		}

		::System::Object* Clone()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_TROPHYCOLLECTIONSORTINGSAVEDATA_CLONE_OFFSET))(nullptr);
		}

		::System::Void SetDefaultData()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_TROPHYCOLLECTIONSORTINGSAVEDATA_SETDEFAULTDATA_OFFSET))(nullptr);
		}

	};
}

