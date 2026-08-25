#pragma once
#include "../../unitysdk.h"

#define NPA_AUTH_NXPTOYEMAILACCOUNTRESETPASSWORDRESULT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9CDB520)

namespace NPA::Auth
{
	inline static constexpr unsigned int NXPToyEmailAccountResetPasswordResult_TypeDefinitionIndex = 27526;

	class NXPToyEmailAccountResetPasswordResult : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_AUTH_NXPTOYEMAILACCOUNTRESETPASSWORDRESULT_.CTOR_OFFSET))(nullptr);
		}

	};
}

