#pragma once
#include "../../unitysdk.h"

#define MX_SAVEDATA_ITEMINVENTORYSORTINGSAVEDATA1_CLONE_OFFSET UNITYSDK_OFFSET(0x1CFA1D0)
#define MX_SAVEDATA_ITEMINVENTORYSORTINGSAVEDATA1_VALIDATE_OFFSET UNITYSDK_OFFSET(0x1CFA250)
#define MX_SAVEDATA_ITEMINVENTORYSORTINGSAVEDATA1_SETDEFAULTDATA_OFFSET UNITYSDK_OFFSET(0x1CFA260)
#define MX_SAVEDATA_ITEMINVENTORYSORTINGSAVEDATA1_.CTOR_OFFSET UNITYSDK_OFFSET(0x1CFA240)

namespace MX::SaveData
{
	inline static constexpr unsigned int ItemInventorySortingSaveData1_TypeDefinitionIndex = 19930;

	class ItemInventorySortingSaveData1 : public Il2CppObject
	{
	public:
		SortingRule* SortingRule; // 0x10
		SortingOrder* SortingOrder; // 0x14
		ItemFilter* ItemFilter; // 0x18

		::System::Object* Clone()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_ITEMINVENTORYSORTINGSAVEDATA1_CLONE_OFFSET))(nullptr);
		}

		::System::Boolean Validate()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_ITEMINVENTORYSORTINGSAVEDATA1_VALIDATE_OFFSET))(nullptr);
		}

		::System::Void SetDefaultData()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_ITEMINVENTORYSORTINGSAVEDATA1_SETDEFAULTDATA_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_ITEMINVENTORYSORTINGSAVEDATA1_.CTOR_OFFSET))(nullptr);
		}

	};
}

