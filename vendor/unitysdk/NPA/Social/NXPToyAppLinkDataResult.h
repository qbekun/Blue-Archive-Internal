#pragma once
#include "../../unitysdk.h"

#define NPA_SOCIAL_NXPTOYAPPLINKDATARESULT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9CC4460)

namespace NPA::Social
{
	inline static constexpr unsigned int NXPToyAppLinkDataResult_TypeDefinitionIndex = 27265;

	class NXPToyAppLinkDataResult : public Il2CppObject
	{
	public:
		ResultSet* result; // 0x38

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_SOCIAL_NXPTOYAPPLINKDATARESULT_.CTOR_OFFSET))(nullptr);
		}

	};
}

