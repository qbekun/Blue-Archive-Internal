#pragma once
#include "../../unitysdk.h"

#define NPA_STORE_NXPTOYREQUESTPRODUCTSRESULT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9CC3A30)

namespace NPA::Store
{
	inline static constexpr unsigned int NXPToyRequestProductsResult_TypeDefinitionIndex = 27250;

	class NXPToyRequestProductsResult : public Il2CppObject
	{
	public:
		ResultSet* result; // 0x38

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_STORE_NXPTOYREQUESTPRODUCTSRESULT_.CTOR_OFFSET))(nullptr);
		}

	};
}

