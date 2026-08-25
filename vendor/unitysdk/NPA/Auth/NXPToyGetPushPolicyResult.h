#pragma once
#include "../../unitysdk.h"

#define NPA_AUTH_NXPTOYGETPUSHPOLICYRESULT_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9CDB690)
#define NPA_AUTH_NXPTOYGETPUSHPOLICYRESULT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9CDBD60)
#define NPA_AUTH_NXPTOYGETPUSHPOLICYRESULT_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9CDBDE0)

namespace NPA::Auth
{
	inline static constexpr unsigned int NXPToyGetPushPolicyResult_TypeDefinitionIndex = 27533;

	class NXPToyGetPushPolicyResult : public Il2CppObject
	{
	public:
		ResultSet* result; // 0x38
		::System::Text::StringBuilder* SharedStringBuilder; // 0x0

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_AUTH_NXPTOYGETPUSHPOLICYRESULT_TOSTRING_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_AUTH_NXPTOYGETPUSHPOLICYRESULT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_AUTH_NXPTOYGETPUSHPOLICYRESULT_.CCTOR_OFFSET))(nullptr);
		}

	};
}

