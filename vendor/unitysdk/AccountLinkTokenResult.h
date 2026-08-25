#pragma once
#include "unitysdk.h"

	inline static constexpr unsigned int AccountLinkTokenResult_TypeDefinitionIndex = 26942;

	class AccountLinkTokenResult : public Il2CppObject
	{
	public:
		::System::Int32 Code; // 0x10
		::System::String* Message; // 0x18
		::System::String* authorizationToken; // 0x20
		::System::String* authCode; // 0x28
		::System::String* serviceToken; // 0x30

	};

