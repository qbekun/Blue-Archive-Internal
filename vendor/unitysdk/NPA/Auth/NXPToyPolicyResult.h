#pragma once
#include "../../unitysdk.h"

#define NPA_AUTH_NXPTOYPOLICYRESULT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9CDDA10)
#define NPA_AUTH_NXPTOYPOLICYRESULT_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9CDDA90)

namespace NPA::Auth
{
	inline static constexpr unsigned int NXPToyPolicyResult_TypeDefinitionIndex = 27565;

	class NXPToyPolicyResult : public Il2CppObject
	{
	public:
		::System::Int32 CODE_POLICY_NONE; // 0x0
		::System::Int32 CODE_POLICY_NONE_TARGET_USER; // 0x4
		::System::Int32 CODE_POLICY_JAPAN_SETTLEMENT_FOUND_YEARS; // 0x8
		::System::Int32 CODE_POLICY_JAPAN_SETTLEMENT_FOUND_UNDER_AGE; // 0xC
		::System::Int32 CODE_POLICY_JAPAN_SETTLEMENT_FOUND_OVER_AGE; // 0x10
		::System::Int32 CODE_POLICY_KOREA_COLLECTION_PHONE_NUMBER; // 0x14
		ResultSet* result; // 0x38

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_AUTH_NXPTOYPOLICYRESULT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_AUTH_NXPTOYPOLICYRESULT_.CCTOR_OFFSET))(nullptr);
		}

	};
}

