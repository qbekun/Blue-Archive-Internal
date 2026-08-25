#pragma once
#include "../../unitysdk.h"

namespace NPA::Auth { class NXPToyEmailUserInfo; }

#define NPA_AUTH_NXPTOYEMAILUSERINFORESULT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9CDB530)

namespace NPA::Auth
{
	inline static constexpr unsigned int NXPToyEmailUserInfoResult_TypeDefinitionIndex = 27527;

	class NXPToyEmailUserInfoResult : public Il2CppObject
	{
	public:
		::System::String* npsn; // 0x38
		::System::String* auth_type; // 0x40
		::System::String* email; // 0x48
		::System::Int32 verified; // 0x50
		::NPA::Auth::NXPToyEmailUserInfo* extend; // 0x58

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_AUTH_NXPTOYEMAILUSERINFORESULT_.CTOR_OFFSET))(nullptr);
		}

	};
}

