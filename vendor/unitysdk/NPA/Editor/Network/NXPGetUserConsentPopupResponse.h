#pragma once
#include "../../../unitysdk.h"

#define NPA_EDITOR_NETWORK_NXPGETUSERCONSENTPOPUPRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9C29DA0)

namespace NPA::Editor::Network
{
	inline static constexpr unsigned int NXPGetUserConsentPopupResponse_TypeDefinitionIndex = 26725;

	class NXPGetUserConsentPopupResponse : public Il2CppObject
	{
	public:
		ResultSet* result; // 0x38

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NETWORK_NXPGETUSERCONSENTPOPUPRESPONSE_.CTOR_OFFSET))(nullptr);
		}

	};
}

