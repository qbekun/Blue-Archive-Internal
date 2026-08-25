#pragma once
#include "../../unitysdk.h"

#define NPA_STORE_NXPTOYBILLINGSTOREITEM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9CC3080)
#define NPA_STORE_NXPTOYBILLINGSTOREITEM_.CTOR_OFFSET UNITYSDK_OFFSET(0x9CC3130)

namespace NPA::Store
{
	inline static constexpr unsigned int NXPToyBillingStoreItem_TypeDefinitionIndex = 27232;

	class NXPToyBillingStoreItem : public Il2CppObject
	{
	public:
		::System::String* itemCode; // 0x10
		::System::Boolean isPurchasable; // 0x18

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_STORE_NXPTOYBILLINGSTOREITEM_TOSTRING_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_STORE_NXPTOYBILLINGSTOREITEM_.CTOR_OFFSET))(nullptr);
		}

	};
}

