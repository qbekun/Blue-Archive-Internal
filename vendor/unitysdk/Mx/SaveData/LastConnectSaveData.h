#pragma once
#include "../../unitysdk.h"

#define MX_SAVEDATA_LASTCONNECTSAVEDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1D27AC0)
#define MX_SAVEDATA_LASTCONNECTSAVEDATA_UPDATE_OFFSET UNITYSDK_OFFSET(0x1D27AD0)
#define MX_SAVEDATA_LASTCONNECTSAVEDATA_SETDEFAULTDATA_OFFSET UNITYSDK_OFFSET(0x1D27DF0)
#define MX_SAVEDATA_LASTCONNECTSAVEDATA_CLONE_OFFSET UNITYSDK_OFFSET(0x1D27EE0)
#define MX_SAVEDATA_LASTCONNECTSAVEDATA_VALIDATE_OFFSET UNITYSDK_OFFSET(0x1D27F70)

namespace MX::SaveData
{
	inline static constexpr unsigned int LastConnectSaveData_TypeDefinitionIndex = 20011;

	class LastConnectSaveData : public Il2CppObject
	{
	public:
		::System::String* UserId; // 0x10
		::System::String* ServerName; // 0x18
		::System::String* Region; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_LASTCONNECTSAVEDATA_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_LASTCONNECTSAVEDATA_UPDATE_OFFSET))(nullptr);
		}

		::System::Void SetDefaultData()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_LASTCONNECTSAVEDATA_SETDEFAULTDATA_OFFSET))(nullptr);
		}

		::System::Object* Clone()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_LASTCONNECTSAVEDATA_CLONE_OFFSET))(nullptr);
		}

		::System::Boolean Validate()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_LASTCONNECTSAVEDATA_VALIDATE_OFFSET))(nullptr);
		}

	};
}

