#pragma once
#include "../../unitysdk.h"

#define NPA_INFACESDK_NXPTOYVALIDATESECURITYINFORESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9CFB5B0)

namespace NPA::InfaceSDK
{
	inline static constexpr unsigned int NXPToyValidateSecurityInfoResponse_TypeDefinitionIndex = 25835;

	class NXPToyValidateSecurityInfoResponse : public Il2CppObject
	{
	public:
		ResultSet* result; // 0x38

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_INFACESDK_NXPTOYVALIDATESECURITYINFORESPONSE_.CTOR_OFFSET))(nullptr);
		}

	};
}

