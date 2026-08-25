#pragma once
#include "../../unitysdk.h"

#define MX_SAVEDATA_FURNITURESORTINGSAVEDATA_VALIDATE_OFFSET UNITYSDK_OFFSET(0x1CFA270)
#define MX_SAVEDATA_FURNITURESORTINGSAVEDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1CFA280)
#define MX_SAVEDATA_FURNITURESORTINGSAVEDATA_CLONE_OFFSET UNITYSDK_OFFSET(0x1CFA2A0)
#define MX_SAVEDATA_FURNITURESORTINGSAVEDATA_SETDEFAULTDATA_OFFSET UNITYSDK_OFFSET(0x1CFA310)

namespace MX::SaveData
{
	inline static constexpr unsigned int FurnitureSortingSaveData_TypeDefinitionIndex = 19931;

	class FurnitureSortingSaveData : public Il2CppObject
	{
	public:
		SortingRule* SortingRule; // 0x10
		SortingOrder* SortingOrder; // 0x14

		::System::Boolean Validate()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_FURNITURESORTINGSAVEDATA_VALIDATE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_FURNITURESORTINGSAVEDATA_.CTOR_OFFSET))(nullptr);
		}

		::System::Object* Clone()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_FURNITURESORTINGSAVEDATA_CLONE_OFFSET))(nullptr);
		}

		::System::Void SetDefaultData()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_FURNITURESORTINGSAVEDATA_SETDEFAULTDATA_OFFSET))(nullptr);
		}

	};
}

