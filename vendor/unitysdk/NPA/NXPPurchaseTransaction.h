#pragma once
#include "../unitysdk.h"

namespace NPA
{
	inline static constexpr unsigned int NXPPurchaseTransaction_TypeDefinitionIndex = 25768;

	class NXPPurchaseTransaction : public Il2CppObject
	{
	public:
		::System::String* ItemInstanceId; // 0x10
		::System::String* ItemDefinitionId; // 0x18
		::System::Int32 Quantity; // 0x20
		::System::String* OrderId; // 0x28
		::System::String* AppId; // 0x30

	};
}

