#pragma once
#include "../../unitysdk.h"

#define MX_SAVEDATA_DEVICESAVEDATA_SAVE_OFFSET UNITYSDK_OFFSET(0x1D279D0)
#define MX_SAVEDATA_DEVICESAVEDATA_CLONE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_SAVEDATA_DEVICESAVEDATA_VALIDATE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_SAVEDATA_DEVICESAVEDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1D27AB0)
#define MX_SAVEDATA_DEVICESAVEDATA_SETDEFAULTDATA_OFFSET UNITYSDK_OFFSET(0x000000)

namespace MX::SaveData
{
	inline static constexpr unsigned int DeviceSaveData_TypeDefinitionIndex = 20010;

	class DeviceSaveData : public Il2CppObject
	{
	public:
		::System::Void Save()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_DEVICESAVEDATA_SAVE_OFFSET))(nullptr);
		}

		::System::Object* Clone()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_DEVICESAVEDATA_CLONE_OFFSET))(nullptr);
		}

		::System::Boolean Validate()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_DEVICESAVEDATA_VALIDATE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_DEVICESAVEDATA_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetDefaultData()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_DEVICESAVEDATA_SETDEFAULTDATA_OFFSET))(nullptr);
		}

	};
}

