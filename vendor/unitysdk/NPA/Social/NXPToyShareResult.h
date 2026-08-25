#pragma once
#include "../../unitysdk.h"

#define NPA_SOCIAL_NXPTOYSHARERESULT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9CC4A50)

namespace NPA::Social
{
	inline static constexpr unsigned int NXPToyShareResult_TypeDefinitionIndex = 27288;

	class NXPToyShareResult : public Il2CppObject
	{
	public:
		ResultSet* result; // 0x38

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_SOCIAL_NXPTOYSHARERESULT_.CTOR_OFFSET))(nullptr);
		}

	};
}

