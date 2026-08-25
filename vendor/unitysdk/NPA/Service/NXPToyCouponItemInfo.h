#pragma once
#include "../../unitysdk.h"

#define NPA_SERVICE_NXPTOYCOUPONITEMINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x9CC57C0)

namespace NPA::Service
{
	inline static constexpr unsigned int NXPToyCouponItemInfo_TypeDefinitionIndex = 27300;

	class NXPToyCouponItemInfo : public Il2CppObject
	{
	public:
		::System::String* itemID; // 0x10
		::System::String* itemName; // 0x18
		::System::String* serviceID; // 0x20
		::System::Int32 quantity; // 0x28
		::System::Int32 useableLevel; // 0x2C
		::System::Int32 useableDay; // 0x30

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_SERVICE_NXPTOYCOUPONITEMINFO_.CTOR_OFFSET))(nullptr);
		}

	};
}

