#pragma once
#include "../../unitysdk.h"

#define NPA_SERVICE_NXPTOYCOUPONINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x9CC57B0)

namespace NPA::Service
{
	inline static constexpr unsigned int NXPToyCouponInfo_TypeDefinitionIndex = 27299;

	class NXPToyCouponInfo : public Il2CppObject
	{
	public:
		::System::String* contractID; // 0x10
		Il2CppObject* items; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_SERVICE_NXPTOYCOUPONINFO_.CTOR_OFFSET))(nullptr);
		}

	};
}

