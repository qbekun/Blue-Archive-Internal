#pragma once
#include "../../unitysdk.h"

#define MX_SAVEDATA_CRAFTAUTOFILLSAVEDATA_VALIDATE_OFFSET UNITYSDK_OFFSET(0x1CFA480)
#define MX_SAVEDATA_CRAFTAUTOFILLSAVEDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1CFA490)
#define MX_SAVEDATA_CRAFTAUTOFILLSAVEDATA_CLONE_OFFSET UNITYSDK_OFFSET(0x1CFA4A0)
#define MX_SAVEDATA_CRAFTAUTOFILLSAVEDATA_SETDEFAULTDATA_OFFSET UNITYSDK_OFFSET(0x1CFA500)

namespace MX::SaveData
{
	inline static constexpr unsigned int CraftAutoFillSaveData_TypeDefinitionIndex = 19934;

	class CraftAutoFillSaveData : public Il2CppObject
	{
	public:
		::System::Boolean IsAutoFillOn; // 0x10

		::System::Boolean Validate()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_CRAFTAUTOFILLSAVEDATA_VALIDATE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_CRAFTAUTOFILLSAVEDATA_.CTOR_OFFSET))(nullptr);
		}

		::System::Object* Clone()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_CRAFTAUTOFILLSAVEDATA_CLONE_OFFSET))(nullptr);
		}

		::System::Void SetDefaultData()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_CRAFTAUTOFILLSAVEDATA_SETDEFAULTDATA_OFFSET))(nullptr);
		}

	};
}

