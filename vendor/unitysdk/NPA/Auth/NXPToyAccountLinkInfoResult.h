#pragma once
#include "../../unitysdk.h"

#define NPA_AUTH_NXPTOYACCOUNTLINKINFORESULT_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9CDAC80)
#define NPA_AUTH_NXPTOYACCOUNTLINKINFORESULT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9CDAEB0)

namespace NPA::Auth
{
	inline static constexpr unsigned int NXPToyAccountLinkInfoResult_TypeDefinitionIndex = 27507;

	class NXPToyAccountLinkInfoResult : public Il2CppObject
	{
	public:
		ResultSet* result; // 0x38

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_AUTH_NXPTOYACCOUNTLINKINFORESULT_TOSTRING_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_AUTH_NXPTOYACCOUNTLINKINFORESULT_.CTOR_OFFSET))(nullptr);
		}

	};
}

