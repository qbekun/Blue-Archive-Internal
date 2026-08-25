#pragma once
#include "../../unitysdk.h"

#define NPA_PUSH_NXPTOYPUSHINITIALIZERESULT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9CCAD90)

namespace NPA::Push
{
	inline static constexpr unsigned int NXPToyPushInitializeResult_TypeDefinitionIndex = 27355;

	class NXPToyPushInitializeResult : public Il2CppObject
	{
	public:
		ResultSet* result; // 0x38

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_PUSH_NXPTOYPUSHINITIALIZERESULT_.CTOR_OFFSET))(nullptr);
		}

	};
}

