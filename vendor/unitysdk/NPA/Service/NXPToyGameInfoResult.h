#pragma once
#include "../../unitysdk.h"

#define NPA_SERVICE_NXPTOYGAMEINFORESULT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9CC5EB0)

namespace NPA::Service
{
	inline static constexpr unsigned int NXPToyGameInfoResult_TypeDefinitionIndex = 27313;

	class NXPToyGameInfoResult : public Il2CppObject
	{
	public:
		ResultSet* result; // 0x38

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_SERVICE_NXPTOYGAMEINFORESULT_.CTOR_OFFSET))(nullptr);
		}

	};
}

