#pragma once
#include "../unitysdk.h"

namespace FlatData { class PurchaseStatusCode; }

namespace FlatData
{
	inline static constexpr unsigned int PurchaseStatusCode_TypeDefinitionIndex = 9626;

	class PurchaseStatusCode : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::FlatData::PurchaseStatusCode* None; // 0x0
		::FlatData::PurchaseStatusCode* Start; // 0x0
		::FlatData::PurchaseStatusCode* PublishSuccess; // 0x0
		::FlatData::PurchaseStatusCode* End; // 0x0
		::FlatData::PurchaseStatusCode* Error; // 0x0
		::FlatData::PurchaseStatusCode* DuplicateOrder; // 0x0
		::FlatData::PurchaseStatusCode* Refund; // 0x0

	};
}

