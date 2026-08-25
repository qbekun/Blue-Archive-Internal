#pragma once
#include "../../unitysdk.h"

#define NPA_AUTH_NXPTOYCHECKMAINTENANCERESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9CDE0F0)

namespace NPA::Auth
{
	inline static constexpr unsigned int NXPToyCheckMaintenanceResponse_TypeDefinitionIndex = 27589;

	class NXPToyCheckMaintenanceResponse : public Il2CppObject
	{
	public:
		ResultSet* result; // 0x38

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_AUTH_NXPTOYCHECKMAINTENANCERESPONSE_.CTOR_OFFSET))(nullptr);
		}

	};
}

