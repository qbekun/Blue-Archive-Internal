#pragma once
#include "../../../unitysdk.h"

namespace NPA::InfaceSDK::Component
{
	inline static constexpr unsigned int FetchAccountLinkArgs_TypeDefinitionIndex = 25928;

	class FetchAccountLinkArgs : public Il2CppObject
	{
	public:
		::System::String* tokenType; // 0x10
		::System::String* token; // 0x18

	};
}

