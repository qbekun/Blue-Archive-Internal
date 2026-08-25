#pragma once
#include "../../../unitysdk.h"

namespace MX::GameLogic::DBModel { class ProductPurchaseCountDB; }
namespace MX::Data { class ShopExcelData; }
namespace FlatData { class ShopCategoryType; }

#define MX_GAMELOGIC_SERVICE_PRODUCTPURCHASECOUNTSERVICE_TRYRESETPURCHASECOUNTANDUPDATELASTPURCHASEDATE_OFFSET UNITYSDK_OFFSET(0xFC3B30)
#define MX_GAMELOGIC_SERVICE_PRODUCTPURCHASECOUNTSERVICE_CANRESET_OFFSET UNITYSDK_OFFSET(0xFC3BE0)
#define MX_GAMELOGIC_SERVICE_PRODUCTPURCHASECOUNTSERVICE_FINDEXCELANDCOSTFORREFRESHPRODUCTLIST_OFFSET UNITYSDK_OFFSET(0xFC3F20)
#define MX_GAMELOGIC_SERVICE_PRODUCTPURCHASECOUNTSERVICE_CALCULATEPURCHASECOUNTRESETDATE_OFFSET UNITYSDK_OFFSET(0xFC4060)

namespace MX::GameLogic::Service
{
	inline static constexpr unsigned int ProductPurchaseCountService_TypeDefinitionIndex = 12402;

	class ProductPurchaseCountService : public Il2CppObject
	{
	public:
		::System::Boolean TryResetPurchaseCountAndUpdateLastPurchaseDate(::MX::GameLogic::DBModel::ProductPurchaseCountDB* arg, ::MX::Data::ShopExcelData* arg2, ::System::Int32 arg3, ::System::DateTime* arg4)
		{
			return ((::System::Boolean(*)(::MX::GameLogic::DBModel::ProductPurchaseCountDB*, ::MX::Data::ShopExcelData*, ::System::Int32, ::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_PRODUCTPURCHASECOUNTSERVICE_TRYRESETPURCHASECOUNTANDUPDATELASTPURCHASEDATE_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Boolean CanReset(::MX::GameLogic::DBModel::ProductPurchaseCountDB* arg, ::System::DateTime* arg2)
		{
			return ((::System::Boolean(*)(::MX::GameLogic::DBModel::ProductPurchaseCountDB*, ::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_PRODUCTPURCHASECOUNTSERVICE_CANRESET_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* FindExcelAndCostForRefreshProductList(::System::Int64 arg, ::FlatData::ShopCategoryType* arg2, ::System::Int64 arg3)
		{
			return ((Il2CppObject*(*)(::System::Int64, ::FlatData::ShopCategoryType*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_PRODUCTPURCHASECOUNTSERVICE_FINDEXCELANDCOSTFORREFRESHPRODUCTLIST_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::DateTime* CalculatePurchaseCountResetDate(::MX::Data::ShopExcelData* arg, ::System::DateTime* arg2)
		{
			return ((::System::DateTime*(*)(::MX::Data::ShopExcelData*, ::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_PRODUCTPURCHASECOUNTSERVICE_CALCULATEPURCHASECOUNTRESETDATE_OFFSET))(arg, arg2, nullptr);
		}

	};
}

