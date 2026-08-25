#pragma once
#include "../../unitysdk.h"

#define MX_SAVEDATA_EQUIPMENTSORTINGSAVEDATA_SETDEFAULTDATA_OFFSET UNITYSDK_OFFSET(0x1CF9E60)
#define MX_SAVEDATA_EQUIPMENTSORTINGSAVEDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1CF9E70)
#define MX_SAVEDATA_EQUIPMENTSORTINGSAVEDATA_CLONE_OFFSET UNITYSDK_OFFSET(0x1CF9E80)
#define MX_SAVEDATA_EQUIPMENTSORTINGSAVEDATA_VALIDATE_OFFSET UNITYSDK_OFFSET(0x1CF9EF0)

namespace MX::SaveData
{
	inline static constexpr unsigned int EquipmentSortingSaveData_TypeDefinitionIndex = 19928;

	class EquipmentSortingSaveData : public Il2CppObject
	{
	public:
		SortingRule* SortingRule; // 0x10
		SortingOrder* SortingOrder; // 0x14
		EquipmentFilter* EquipmentFilter; // 0x18

		::System::Void SetDefaultData()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_EQUIPMENTSORTINGSAVEDATA_SETDEFAULTDATA_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_EQUIPMENTSORTINGSAVEDATA_.CTOR_OFFSET))(nullptr);
		}

		::System::Object* Clone()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_EQUIPMENTSORTINGSAVEDATA_CLONE_OFFSET))(nullptr);
		}

		::System::Boolean Validate()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_EQUIPMENTSORTINGSAVEDATA_VALIDATE_OFFSET))(nullptr);
		}

	};
}

