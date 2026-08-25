#pragma once
#include "../../unitysdk.h"

#define MX_SAVEDATA_CRAFTSORTINGSAVEDATA1_SETDEFAULTDATA_OFFSET UNITYSDK_OFFSET(0x1CFA510)
#define MX_SAVEDATA_CRAFTSORTINGSAVEDATA1_VALIDATE_OFFSET UNITYSDK_OFFSET(0x1CFA530)
#define MX_SAVEDATA_CRAFTSORTINGSAVEDATA1_CLONE_OFFSET UNITYSDK_OFFSET(0x1CFA540)
#define MX_SAVEDATA_CRAFTSORTINGSAVEDATA1_.CTOR_OFFSET UNITYSDK_OFFSET(0x1CFA5C0)

namespace MX::SaveData
{
	inline static constexpr unsigned int CraftSortingSaveData1_TypeDefinitionIndex = 19935;

	class CraftSortingSaveData1 : public Il2CppObject
	{
	public:
		SortingRule* SortingRule; // 0x10
		SortingOrder* SortingOrder; // 0x14
		CraftFilter* CraftFilter; // 0x18

		::System::Void SetDefaultData()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_CRAFTSORTINGSAVEDATA1_SETDEFAULTDATA_OFFSET))(nullptr);
		}

		::System::Boolean Validate()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_CRAFTSORTINGSAVEDATA1_VALIDATE_OFFSET))(nullptr);
		}

		::System::Object* Clone()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_CRAFTSORTINGSAVEDATA1_CLONE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_CRAFTSORTINGSAVEDATA1_.CTOR_OFFSET))(nullptr);
		}

	};
}

