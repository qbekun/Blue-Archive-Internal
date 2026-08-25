#pragma once
#include "../../../unitysdk.h"

namespace MX::GameLogic::DBModel { class ShopCashBlockType; }

namespace MX::GameLogic::DBModel
{
	inline static constexpr unsigned int ShopCashBlockType_TypeDefinitionIndex = 12494;

	class ShopCashBlockType : public Il2CppObject
	{
	public:
		::System::Int64 value__; // 0x10
		::MX::GameLogic::DBModel::ShopCashBlockType* All; // 0x0
		::MX::GameLogic::DBModel::ShopCashBlockType* AppStore; // 0x0
		::MX::GameLogic::DBModel::ShopCashBlockType* GooglePlay; // 0x0
		::MX::GameLogic::DBModel::ShopCashBlockType* PaymentCenter; // 0x0
		::MX::GameLogic::DBModel::ShopCashBlockType* PCStore; // 0x0
		::MX::GameLogic::DBModel::ShopCashBlockType* None; // 0x0

	};
}

