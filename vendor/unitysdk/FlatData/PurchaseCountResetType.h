#pragma once
#include "../unitysdk.h"

namespace FlatData { class PurchaseCountResetType; }

namespace FlatData
{
	inline static constexpr unsigned int PurchaseCountResetType_TypeDefinitionIndex = 9622;

	class PurchaseCountResetType : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::FlatData::PurchaseCountResetType* None; // 0x0
		::FlatData::PurchaseCountResetType* Day; // 0x0
		::FlatData::PurchaseCountResetType* Week; // 0x0
		::FlatData::PurchaseCountResetType* Month; // 0x0

	};
}

