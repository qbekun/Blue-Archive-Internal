#pragma once
#include "../unitysdk.h"

#define NPA_NXPPURCHASEPRODUCTRESULT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9BE6770)

namespace NPA
{
	inline static constexpr unsigned int NXPPurchaseProductResult_TypeDefinitionIndex = 25769;

	class NXPPurchaseProductResult : public Il2CppObject
	{
	public:
		Il2CppObject* Transactions; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPPURCHASEPRODUCTRESULT_.CTOR_OFFSET))(nullptr);
		}

	};
}

