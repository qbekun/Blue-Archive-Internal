#pragma once
#include "../unitysdk.h"

#define NPA_NXPGETPURCHASABLEPRODUCTRESULT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9BE6730)

namespace NPA
{
	inline static constexpr unsigned int NXPGetPurchasableProductResult_TypeDefinitionIndex = 25764;

	class NXPGetPurchasableProductResult : public Il2CppObject
	{
	public:
		Il2CppObject* Products; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPGETPURCHASABLEPRODUCTRESULT_.CTOR_OFFSET))(nullptr);
		}

	};
}

