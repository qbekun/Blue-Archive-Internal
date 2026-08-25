#pragma once
#include "../unitysdk.h"

#define NPA_NXPTOYINITCARTRESULT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9BBC5C0)

namespace NPA
{
	inline static constexpr unsigned int NXPToyInitCartResult_TypeDefinitionIndex = 25499;

	class NXPToyInitCartResult : public Il2CppObject
	{
	public:
		ResultSet* result; // 0x38

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPTOYINITCARTRESULT_.CTOR_OFFSET))(nullptr);
		}

	};
}

