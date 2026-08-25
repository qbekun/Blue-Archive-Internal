#pragma once
#include "../../unitysdk.h"

#define MX_SAVEDATA_SHOPFILTERSAVEDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1CF8530)
#define MX_SAVEDATA_SHOPFILTERSAVEDATA_SETDEFAULTDATA_OFFSET UNITYSDK_OFFSET(0x1CF85B0)
#define MX_SAVEDATA_SHOPFILTERSAVEDATA_VALIDATE_OFFSET UNITYSDK_OFFSET(0x1CF8980)
#define MX_SAVEDATA_SHOPFILTERSAVEDATA_CLONE_OFFSET UNITYSDK_OFFSET(0x1CF8D10)

namespace MX::SaveData
{
	inline static constexpr unsigned int ShopFilterSaveData_TypeDefinitionIndex = 19912;

	class ShopFilterSaveData : public Il2CppObject
	{
	public:
		Il2CppObject* Filter; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_SHOPFILTERSAVEDATA_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetDefaultData()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_SHOPFILTERSAVEDATA_SETDEFAULTDATA_OFFSET))(nullptr);
		}

		::System::Boolean Validate()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_SHOPFILTERSAVEDATA_VALIDATE_OFFSET))(nullptr);
		}

		::System::Object* Clone()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_SHOPFILTERSAVEDATA_CLONE_OFFSET))(nullptr);
		}

	};
}

