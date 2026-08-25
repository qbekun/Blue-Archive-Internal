#pragma once
#include "../../../unitysdk.h"

namespace NPA::Auth { class NXPToyUserInfoResult; }

#define NPA_EDITOR_NETWORK_NXPTOYUSERINFORESPONSE_TOUSERINFORESULT_OFFSET UNITYSDK_OFFSET(0x9C2A530)
#define NPA_EDITOR_NETWORK_NXPTOYUSERINFORESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9C2A8C0)

namespace NPA::Editor::Network
{
	inline static constexpr unsigned int NXPToyUserInfoResponse_TypeDefinitionIndex = 26740;

	class NXPToyUserInfoResponse : public Il2CppObject
	{
	public:
		ResultSet* result; // 0x38

		::NPA::Auth::NXPToyUserInfoResult* ToUserInfoResult()
		{
			return (return (::NPA::Auth::NXPToyUserInfoResult*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NETWORK_NXPTOYUSERINFORESPONSE_TOUSERINFORESULT_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NETWORK_NXPTOYUSERINFORESPONSE_.CTOR_OFFSET))(nullptr);
		}

	};
}

