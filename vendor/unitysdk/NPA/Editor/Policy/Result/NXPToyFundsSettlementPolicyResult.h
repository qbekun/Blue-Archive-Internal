#pragma once
#include "../../../../unitysdk.h"

#define NPA_EDITOR_POLICY_RESULT_NXPTOYFUNDSSETTLEMENTPOLICYRESULT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9C0B500)

namespace NPA::Editor::Policy::Result
{
	inline static constexpr unsigned int NXPToyFundsSettlementPolicyResult_TypeDefinitionIndex = 26587;

	class NXPToyFundsSettlementPolicyResult : public Il2CppObject
	{
	public:
		ResultSet* result; // 0x38

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_POLICY_RESULT_NXPTOYFUNDSSETTLEMENTPOLICYRESULT_.CTOR_OFFSET))(nullptr);
		}

	};
}

