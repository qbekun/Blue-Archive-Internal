#pragma once
#include "../../unitysdk.h"

#define MX_SAVEDATA_ISAVEDATA_SETDEFAULTDATA_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_SAVEDATA_ISAVEDATA_VALIDATE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_SAVEDATA_ISAVEDATA_SAVE_OFFSET UNITYSDK_OFFSET(0x000000)

namespace MX::SaveData
{
	inline static constexpr unsigned int ISaveData_TypeDefinitionIndex = 20019;

	class ISaveData : public Il2CppObject
	{
	public:
		::System::Void SetDefaultData()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_ISAVEDATA_SETDEFAULTDATA_OFFSET))(nullptr);
		}

		::System::Boolean Validate()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_ISAVEDATA_VALIDATE_OFFSET))(nullptr);
		}

		::System::Void Save()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_ISAVEDATA_SAVE_OFFSET))(nullptr);
		}

	};
}

