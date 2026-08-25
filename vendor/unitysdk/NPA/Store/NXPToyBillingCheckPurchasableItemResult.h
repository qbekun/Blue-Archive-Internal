#pragma once
#include "../../unitysdk.h"

#define NPA_STORE_NXPTOYBILLINGCHECKPURCHASABLEITEMRESULT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9CC3750)

namespace NPA::Store
{
	inline static constexpr unsigned int NXPToyBillingCheckPurchasableItemResult_TypeDefinitionIndex = 27240;

	class NXPToyBillingCheckPurchasableItemResult : public Il2CppObject
	{
	public:
		ResultSet* result; // 0x38

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_STORE_NXPTOYBILLINGCHECKPURCHASABLEITEMRESULT_.CTOR_OFFSET))(nullptr);
		}

	};
}

