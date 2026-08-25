#pragma once
#include "../../unitysdk.h"

#define MX_SAVEDATA_CLIENTSAVEDATA_VALIDATE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_SAVEDATA_CLIENTSAVEDATA_SAVE_OFFSET UNITYSDK_OFFSET(0x1CEEAE0)
#define MX_SAVEDATA_CLIENTSAVEDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1CEEBC0)
#define MX_SAVEDATA_CLIENTSAVEDATA_SETDEFAULTDATA_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_SAVEDATA_CLIENTSAVEDATA_CLONE_OFFSET UNITYSDK_OFFSET(0x000000)

namespace MX::SaveData
{
	inline static constexpr unsigned int ClientSaveData_TypeDefinitionIndex = 19879;

	class ClientSaveData : public Il2CppObject
	{
	public:
		::System::Boolean Validate()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_CLIENTSAVEDATA_VALIDATE_OFFSET))(nullptr);
		}

		::System::Void Save()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_CLIENTSAVEDATA_SAVE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_CLIENTSAVEDATA_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetDefaultData()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_CLIENTSAVEDATA_SETDEFAULTDATA_OFFSET))(nullptr);
		}

		::System::Object* Clone()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_CLIENTSAVEDATA_CLONE_OFFSET))(nullptr);
		}

	};
}

