#pragma once
#include "../../unitysdk.h"

#define MX_SAVEDATA_FORMATIONCHAREDITSETTINGSSAVEDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1D00A40)
#define MX_SAVEDATA_FORMATIONCHAREDITSETTINGSSAVEDATA_CLONE_OFFSET UNITYSDK_OFFSET(0x1D00A50)
#define MX_SAVEDATA_FORMATIONCHAREDITSETTINGSSAVEDATA_VALIDATE_OFFSET UNITYSDK_OFFSET(0x1D00AB0)
#define MX_SAVEDATA_FORMATIONCHAREDITSETTINGSSAVEDATA_SETDEFAULTDATA_OFFSET UNITYSDK_OFFSET(0x1D00AC0)

namespace MX::SaveData
{
	inline static constexpr unsigned int FormationCharEditSettingsSaveData_TypeDefinitionIndex = 19970;

	class FormationCharEditSettingsSaveData : public Il2CppObject
	{
	public:
		::System::Boolean SmallScrollView; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_FORMATIONCHAREDITSETTINGSSAVEDATA_.CTOR_OFFSET))(nullptr);
		}

		::System::Object* Clone()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_FORMATIONCHAREDITSETTINGSSAVEDATA_CLONE_OFFSET))(nullptr);
		}

		::System::Boolean Validate()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_FORMATIONCHAREDITSETTINGSSAVEDATA_VALIDATE_OFFSET))(nullptr);
		}

		::System::Void SetDefaultData()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_FORMATIONCHAREDITSETTINGSSAVEDATA_SETDEFAULTDATA_OFFSET))(nullptr);
		}

	};
}

