#pragma once
#include "../../unitysdk.h"

#define NPA_STORE_NXPTOYBILLINGRESULT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9CC3850)

namespace NPA::Store
{
	inline static constexpr unsigned int NXPToyBillingResult_TypeDefinitionIndex = 27244;

	class NXPToyBillingResult : public Il2CppObject
	{
	public:
		ResultSet* result; // 0x38
		Il2CppObject* errorReasons; // 0x40

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_STORE_NXPTOYBILLINGRESULT_.CTOR_OFFSET))(nullptr);
		}

	};
}

