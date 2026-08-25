#pragma once
#include "../../../unitysdk.h"

namespace MX::GameLogic::DBModel { class ShopProductType; }

namespace MX::GameLogic::DBModel
{
	inline static constexpr unsigned int ShopProductType_TypeDefinitionIndex = 12725;

	class ShopProductType : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::MX::GameLogic::DBModel::ShopProductType* None; // 0x0
		::MX::GameLogic::DBModel::ShopProductType* General; // 0x0
		::MX::GameLogic::DBModel::ShopProductType* Refresh; // 0x0

	};
}

