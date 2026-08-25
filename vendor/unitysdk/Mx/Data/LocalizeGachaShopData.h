#pragma once
#include "../../unitysdk.h"

namespace MX::Data::Excel { class LocalizeGachaShopExcel&; }

#define MX_DATA_LOCALIZEGACHASHOPDATA_TRYGETVALUE_OFFSET UNITYSDK_OFFSET(0x18ED840)
#define MX_DATA_LOCALIZEGACHASHOPDATA_INITIALIZECLIENT_OFFSET UNITYSDK_OFFSET(0x18ED8F0)
#define MX_DATA_LOCALIZEGACHASHOPDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x18ED930)

namespace MX::Data
{
	inline static constexpr unsigned int LocalizeGachaShopData_TypeDefinitionIndex = 16173;

	class LocalizeGachaShopData : public Il2CppObject
	{
	public:
		::System::Boolean TryGetValue(::System::Int64 arg, ::MX::Data::Excel::LocalizeGachaShopExcel&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::MX::Data::Excel::LocalizeGachaShopExcel&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_LOCALIZEGACHASHOPDATA_TRYGETVALUE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void InitializeClient()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_LOCALIZEGACHASHOPDATA_INITIALIZECLIENT_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_LOCALIZEGACHASHOPDATA_.CTOR_OFFSET))(nullptr);
		}

	};
}

