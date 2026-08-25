#pragma once
#include "../../unitysdk.h"

#define MX_SAVEDATA_ARENACLIENTSAVEDATA_VALIDATE_OFFSET UNITYSDK_OFFSET(0x1CFADE0)
#define MX_SAVEDATA_ARENACLIENTSAVEDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1CFADF0)
#define MX_SAVEDATA_ARENACLIENTSAVEDATA_SETDEFAULTDATA_OFFSET UNITYSDK_OFFSET(0x1CFAE00)
#define MX_SAVEDATA_ARENACLIENTSAVEDATA_CLONE_OFFSET UNITYSDK_OFFSET(0x1CFAE10)

namespace MX::SaveData
{
	inline static constexpr unsigned int ArenaClientSaveData_TypeDefinitionIndex = 19943;

	class ArenaClientSaveData : public Il2CppObject
	{
	public:
		::System::Int64 Rank; // 0x10

		::System::Boolean Validate()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_ARENACLIENTSAVEDATA_VALIDATE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_ARENACLIENTSAVEDATA_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetDefaultData()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_ARENACLIENTSAVEDATA_SETDEFAULTDATA_OFFSET))(nullptr);
		}

		::System::Object* Clone()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_ARENACLIENTSAVEDATA_CLONE_OFFSET))(nullptr);
		}

	};
}

