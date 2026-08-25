#pragma once
#include "../../unitysdk.h"

#define MX_SAVEDATA_INFOMATIONGROUPCHECKSAVEDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1D02BF0)
#define MX_SAVEDATA_INFOMATIONGROUPCHECKSAVEDATA_VALIDATE_OFFSET UNITYSDK_OFFSET(0x1D02C70)
#define MX_SAVEDATA_INFOMATIONGROUPCHECKSAVEDATA_CLONE_OFFSET UNITYSDK_OFFSET(0x1D02C80)
#define MX_SAVEDATA_INFOMATIONGROUPCHECKSAVEDATA_SETDEFAULTDATA_OFFSET UNITYSDK_OFFSET(0x1D02CF0)

namespace MX::SaveData
{
	inline static constexpr unsigned int InfomationGroupCheckSaveData_TypeDefinitionIndex = 19981;

	class InfomationGroupCheckSaveData : public Il2CppObject
	{
	public:
		Il2CppObject* GroupIds; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_INFOMATIONGROUPCHECKSAVEDATA_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean Validate()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_INFOMATIONGROUPCHECKSAVEDATA_VALIDATE_OFFSET))(nullptr);
		}

		::System::Object* Clone()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_INFOMATIONGROUPCHECKSAVEDATA_CLONE_OFFSET))(nullptr);
		}

		::System::Void SetDefaultData()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_INFOMATIONGROUPCHECKSAVEDATA_SETDEFAULTDATA_OFFSET))(nullptr);
		}

	};
}

