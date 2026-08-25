#pragma once
#include "../../../unitysdk.h"

namespace NPA::InfaceSDK::Component
{
	inline static constexpr unsigned int UpdateAccountLinkArgs_TypeDefinitionIndex = 25929;

	class UpdateAccountLinkArgs : public Il2CppObject
	{
	public:
		::System::String* tokenType; // 0x10
		::System::String* token; // 0x18
		::System::String* guid; // 0x20
		::System::String* platformType; // 0x28
		::System::String* platformUserId; // 0x30

	};
}

