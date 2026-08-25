#pragma once
#include "../../unitysdk.h"

#define NPA_STORE_NXPTOYMULTIPRODUCTPURCHASELIMITERRORSET_.CTOR_OFFSET UNITYSDK_OFFSET(0x9CC3920)

namespace NPA::Store
{
	inline static constexpr unsigned int NXPToyMultiProductPurchaseLimitErrorSet_TypeDefinitionIndex = 27245;

	class NXPToyMultiProductPurchaseLimitErrorSet : public Il2CppObject
	{
	public:
		::System::String* failType; // 0x10
		::System::String* pId; // 0x18
		::System::Int32 quantity; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_STORE_NXPTOYMULTIPRODUCTPURCHASELIMITERRORSET_.CTOR_OFFSET))(nullptr);
		}

	};
}

