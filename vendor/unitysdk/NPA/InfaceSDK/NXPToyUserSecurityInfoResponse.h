#pragma once
#include "../../unitysdk.h"

#define NPA_INFACESDK_NXPTOYUSERSECURITYINFORESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9CFB530)

namespace NPA::InfaceSDK
{
	inline static constexpr unsigned int NXPToyUserSecurityInfoResponse_TypeDefinitionIndex = 25833;

	class NXPToyUserSecurityInfoResponse : public Il2CppObject
	{
	public:
		ResultSet* result; // 0x38

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_INFACESDK_NXPTOYUSERSECURITYINFORESPONSE_.CTOR_OFFSET))(nullptr);
		}

	};
}

