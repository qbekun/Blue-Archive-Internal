#pragma once
#include "../../../unitysdk.h"

namespace NPA::Auth { class NXPToyLoginResult; }

#define NPA_EDITOR_NETWORK_NXPTOYLOGINRESPONSE_TOLOGINRESULT_OFFSET UNITYSDK_OFFSET(0x9C2A110)
#define NPA_EDITOR_NETWORK_NXPTOYLOGINRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9C2A430)

namespace NPA::Editor::Network
{
	inline static constexpr unsigned int NXPToyLoginResponse_TypeDefinitionIndex = 26736;

	class NXPToyLoginResponse : public Il2CppObject
	{
	public:
		ResultSet* result; // 0x38

		::NPA::Auth::NXPToyLoginResult* ToLoginResult()
		{
			return (return (::NPA::Auth::NXPToyLoginResult*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NETWORK_NXPTOYLOGINRESPONSE_TOLOGINRESULT_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NETWORK_NXPTOYLOGINRESPONSE_.CTOR_OFFSET))(nullptr);
		}

	};
}

