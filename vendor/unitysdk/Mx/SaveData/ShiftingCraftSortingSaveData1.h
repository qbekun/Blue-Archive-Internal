#pragma once
#include "../../unitysdk.h"

#define MX_SAVEDATA_SHIFTINGCRAFTSORTINGSAVEDATA1_VALIDATE_OFFSET UNITYSDK_OFFSET(0x1CFA6B0)
#define MX_SAVEDATA_SHIFTINGCRAFTSORTINGSAVEDATA1_SETDEFAULTDATA_OFFSET UNITYSDK_OFFSET(0x1CFA6C0)
#define MX_SAVEDATA_SHIFTINGCRAFTSORTINGSAVEDATA1_.CTOR_OFFSET UNITYSDK_OFFSET(0x1CFA6E0)
#define MX_SAVEDATA_SHIFTINGCRAFTSORTINGSAVEDATA1_CLONE_OFFSET UNITYSDK_OFFSET(0x1CFA700)

namespace MX::SaveData
{
	inline static constexpr unsigned int ShiftingCraftSortingSaveData1_TypeDefinitionIndex = 19937;

	class ShiftingCraftSortingSaveData1 : public Il2CppObject
	{
	public:
		SortingRule* SortingRule; // 0x10
		SortingOrder* SortingOrder; // 0x14
		CraftFilter* CraftFilter; // 0x18

		::System::Boolean Validate()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_SHIFTINGCRAFTSORTINGSAVEDATA1_VALIDATE_OFFSET))(nullptr);
		}

		::System::Void SetDefaultData()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_SHIFTINGCRAFTSORTINGSAVEDATA1_SETDEFAULTDATA_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_SHIFTINGCRAFTSORTINGSAVEDATA1_.CTOR_OFFSET))(nullptr);
		}

		::System::Object* Clone()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_SHIFTINGCRAFTSORTINGSAVEDATA1_CLONE_OFFSET))(nullptr);
		}

	};
}

