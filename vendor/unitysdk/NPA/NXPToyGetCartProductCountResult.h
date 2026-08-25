#pragma once
#include "../unitysdk.h"

#define NPA_NXPTOYGETCARTPRODUCTCOUNTRESULT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9BBC4A0)

namespace NPA
{
	inline static constexpr unsigned int NXPToyGetCartProductCountResult_TypeDefinitionIndex = 25497;

	class NXPToyGetCartProductCountResult : public Il2CppObject
	{
	public:
		ResultSet* result; // 0x38

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPTOYGETCARTPRODUCTCOUNTRESULT_.CTOR_OFFSET))(nullptr);
		}

	};
}

