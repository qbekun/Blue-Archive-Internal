#pragma once
#include "../unitysdk.h"

namespace FlatData { class AccountState; }

namespace FlatData
{
	inline static constexpr unsigned int AccountState_TypeDefinitionIndex = 9645;

	class AccountState : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::FlatData::AccountState* WaitingSignIn; // 0x0
		::FlatData::AccountState* Normal; // 0x0
		::FlatData::AccountState* Dormant; // 0x0
		::FlatData::AccountState* Comeback; // 0x0
		::FlatData::AccountState* Newbie; // 0x0

	};
}

