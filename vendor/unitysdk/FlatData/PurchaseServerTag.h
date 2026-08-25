#pragma once
#include "../unitysdk.h"

namespace FlatData { class PurchaseServerTag; }

namespace FlatData
{
	inline static constexpr unsigned int PurchaseServerTag_TypeDefinitionIndex = 9625;

	class PurchaseServerTag : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::FlatData::PurchaseServerTag* Audit; // 0x0
		::FlatData::PurchaseServerTag* PreAudit; // 0x0
		::FlatData::PurchaseServerTag* Production; // 0x0
		::FlatData::PurchaseServerTag* Hotfix; // 0x0
		::FlatData::PurchaseServerTag* Standby2; // 0x0
		::FlatData::PurchaseServerTag* Standby1; // 0x0
		::FlatData::PurchaseServerTag* Major; // 0x0
		::FlatData::PurchaseServerTag* Minor; // 0x0
		::FlatData::PurchaseServerTag* Temp; // 0x0
		::FlatData::PurchaseServerTag* Test; // 0x0
		::FlatData::PurchaseServerTag* TestIn; // 0x0

	};
}

