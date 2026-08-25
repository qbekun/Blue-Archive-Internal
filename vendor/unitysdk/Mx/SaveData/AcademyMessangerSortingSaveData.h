#pragma once
#include "../../unitysdk.h"

#define MX_SAVEDATA_ACADEMYMESSANGERSORTINGSAVEDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1CFA3C0)
#define MX_SAVEDATA_ACADEMYMESSANGERSORTINGSAVEDATA_CLONE_OFFSET UNITYSDK_OFFSET(0x1CFA3E0)
#define MX_SAVEDATA_ACADEMYMESSANGERSORTINGSAVEDATA_SETDEFAULTDATA_OFFSET UNITYSDK_OFFSET(0x1CFA460)
#define MX_SAVEDATA_ACADEMYMESSANGERSORTINGSAVEDATA_VALIDATE_OFFSET UNITYSDK_OFFSET(0x1CFA470)

namespace MX::SaveData
{
	inline static constexpr unsigned int AcademyMessangerSortingSaveData_TypeDefinitionIndex = 19933;

	class AcademyMessangerSortingSaveData : public Il2CppObject
	{
	public:
		SortingRule* StudentSortingRule; // 0x10
		ChatSortingRule* ChatSortingRule; // 0x14
		SortingOrder* StudentSortingOrder; // 0x18
		SortingOrder* ChatSortingOrder; // 0x1C

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_ACADEMYMESSANGERSORTINGSAVEDATA_.CTOR_OFFSET))(nullptr);
		}

		::System::Object* Clone()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_ACADEMYMESSANGERSORTINGSAVEDATA_CLONE_OFFSET))(nullptr);
		}

		::System::Void SetDefaultData()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_ACADEMYMESSANGERSORTINGSAVEDATA_SETDEFAULTDATA_OFFSET))(nullptr);
		}

		::System::Boolean Validate()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_ACADEMYMESSANGERSORTINGSAVEDATA_VALIDATE_OFFSET))(nullptr);
		}

	};
}

