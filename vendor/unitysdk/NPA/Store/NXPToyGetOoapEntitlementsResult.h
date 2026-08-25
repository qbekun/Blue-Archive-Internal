#pragma once
#include "../../unitysdk.h"

#define NPA_STORE_NXPTOYGETOOAPENTITLEMENTSRESULT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9CC3940)

namespace NPA::Store
{
	inline static constexpr unsigned int NXPToyGetOoapEntitlementsResult_TypeDefinitionIndex = 27248;

	class NXPToyGetOoapEntitlementsResult : public Il2CppObject
	{
	public:
		ResultSet* result; // 0x38

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_STORE_NXPTOYGETOOAPENTITLEMENTSRESULT_.CTOR_OFFSET))(nullptr);
		}

	};
}

