#pragma once
#include "../unitysdk.h"

namespace FlatData { class AccountBanType; }

namespace FlatData
{
	inline static constexpr unsigned int AccountBanType_TypeDefinitionIndex = 9583;

	class AccountBanType : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::FlatData::AccountBanType* None; // 0x0
		::FlatData::AccountBanType* AbuseGamePlay; // 0x0
		::FlatData::AccountBanType* AbuseMarket; // 0x0
		::FlatData::AccountBanType* AbuseGameSystem; // 0x0
		::FlatData::AccountBanType* OperaionPolicyViolate; // 0x0
		::FlatData::AccountBanType* Useillegalprogram; // 0x0
		::FlatData::AccountBanType* Temporaryconstraint; // 0x0

	};
}

