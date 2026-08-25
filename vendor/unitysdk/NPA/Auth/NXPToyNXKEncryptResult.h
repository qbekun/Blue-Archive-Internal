#pragma once
#include "../../unitysdk.h"

#define NPA_AUTH_NXPTOYNXKENCRYPTRESULT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9CDC640)

namespace NPA::Auth
{
	inline static constexpr unsigned int NXPToyNXKEncryptResult_TypeDefinitionIndex = 27555;

	class NXPToyNXKEncryptResult : public Il2CppObject
	{
	public:
		ResultSet* result; // 0x38

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_AUTH_NXPTOYNXKENCRYPTRESULT_.CTOR_OFFSET))(nullptr);
		}

	};
}

