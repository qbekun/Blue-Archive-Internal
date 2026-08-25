#pragma once
#include "../unitysdk.h"

#define NPA_NXPPRODUCTPRICE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9BE6700)

namespace NPA
{
	inline static constexpr unsigned int NXPProductPrice_TypeDefinitionIndex = 25762;

	class NXPProductPrice : public Il2CppObject
	{
	public:
		::System::String* CurrencyCode; // 0x10
		::System::String* FormattedPrice; // 0x18
		::System::String* PriceAmount; // 0x20
		::System::String* MicroUnitsPriceAmount; // 0x28
		::System::String* OriginPrice; // 0x30
		::System::String* OriginDisplayPrice; // 0x38

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPPRODUCTPRICE_.CTOR_OFFSET))(nullptr);
		}

	};
}

