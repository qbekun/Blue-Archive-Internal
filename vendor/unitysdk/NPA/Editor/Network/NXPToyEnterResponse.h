#pragma once
#include "../../../unitysdk.h"

namespace NPA { class NXPToyInitialInfoResult; }

#define NPA_EDITOR_NETWORK_NXPTOYENTERRESPONSE_TOINITIALINFORESULT_OFFSET UNITYSDK_OFFSET(0x9C29E30)
#define NPA_EDITOR_NETWORK_NXPTOYENTERRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9C29F80)

namespace NPA::Editor::Network
{
	inline static constexpr unsigned int NXPToyEnterResponse_TypeDefinitionIndex = 26728;

	class NXPToyEnterResponse : public Il2CppObject
	{
	public:
		ResultSet* result; // 0x38

		::NPA::NXPToyInitialInfoResult* ToInitialInfoResult()
		{
			return (return (::NPA::NXPToyInitialInfoResult*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NETWORK_NXPTOYENTERRESPONSE_TOINITIALINFORESULT_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NETWORK_NXPTOYENTERRESPONSE_.CTOR_OFFSET))(nullptr);
		}

	};
}

