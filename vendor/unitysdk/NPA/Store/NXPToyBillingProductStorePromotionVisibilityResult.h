#pragma once
#include "../../unitysdk.h"

#define NPA_STORE_NXPTOYBILLINGPRODUCTSTOREPROMOTIONVISIBILITYRESULT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9CC37D0)

namespace NPA::Store
{
	inline static constexpr unsigned int NXPToyBillingProductStorePromotionVisibilityResult_TypeDefinitionIndex = 27242;

	class NXPToyBillingProductStorePromotionVisibilityResult : public Il2CppObject
	{
	public:
		ResultSet* result; // 0x38

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_STORE_NXPTOYBILLINGPRODUCTSTOREPROMOTIONVISIBILITYRESULT_.CTOR_OFFSET))(nullptr);
		}

	};
}

