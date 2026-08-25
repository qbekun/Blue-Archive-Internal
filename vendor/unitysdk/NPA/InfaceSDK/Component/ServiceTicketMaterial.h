#pragma once
#include "../../../unitysdk.h"

namespace NPA::InfaceSDK::Component
{
	inline static constexpr unsigned int ServiceTicketMaterial_TypeDefinitionIndex = 25935;

	class ServiceTicketMaterial : public Il2CppObject
	{
	public:
		::System::String* token; // 0x10
		::System::String* titleStoreId; // 0x18
		::System::Int32 claimNewToken; // 0x20

	};
}

