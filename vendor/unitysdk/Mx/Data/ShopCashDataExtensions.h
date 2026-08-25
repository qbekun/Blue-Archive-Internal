#pragma once
#include "../../unitysdk.h"

namespace MX::Data::Excel { class ShopCashExcel; }
namespace MX::GameLogic::DBModel { class AccountDB; }
namespace FlatData { class StoreType; }
namespace FlatData { class PurchasePeriodType; }
namespace FlatData { class MailType; }
namespace MX::Data::Excel { class ProductMonthlyExcel; }

#define MX_DATA_SHOPCASHDATAEXTENSIONS_ISOPEN_OFFSET UNITYSDK_OFFSET(0x197D110)
#define MX_DATA_SHOPCASHDATAEXTENSIONS_ISNEWPRODUCTSOPEN_OFFSET UNITYSDK_OFFSET(0x197D2C0)
#define MX_DATA_SHOPCASHDATAEXTENSIONS_GETSTORETYPE_OFFSET UNITYSDK_OFFSET(0x197D400)
#define MX_DATA_SHOPCASHDATAEXTENSIONS_GETPURCHASEPERIODTYPE_OFFSET UNITYSDK_OFFSET(0x197D780)
#define MX_DATA_SHOPCASHDATAEXTENSIONS_GETPRICE_OFFSET UNITYSDK_OFFSET(0x197D960)
#define MX_DATA_SHOPCASHDATAEXTENSIONS_GETPURCHASECOUNTLIMIT_OFFSET UNITYSDK_OFFSET(0x197DD10)
#define MX_DATA_SHOPCASHDATAEXTENSIONS_GETPRODUCTID_OFFSET UNITYSDK_OFFSET(0x197E0C0)
#define MX_DATA_SHOPCASHDATAEXTENSIONS_GETMAILTYPE_OFFSET UNITYSDK_OFFSET(0x197E450)
#define MX_DATA_SHOPCASHDATAEXTENSIONS_GETMAILTYPE_OFFSET UNITYSDK_OFFSET(0x197E4D0)
#define MX_DATA_SHOPCASHDATAEXTENSIONS_ISEXPIRED_OFFSET UNITYSDK_OFFSET(0x197E5A0)
#define MX_DATA_SHOPCASHDATAEXTENSIONS_GETSALEPERIODTOFORMAILEXPIRATION_OFFSET UNITYSDK_OFFSET(0x197E670)
#define MX_DATA_SHOPCASHDATAEXTENSIONS_SHOULDCONTAINIMMEDIATEREWARDPARCEL_OFFSET UNITYSDK_OFFSET(0x197E840)

namespace MX::Data
{
	inline static constexpr unsigned int ShopCashDataExtensions_TypeDefinitionIndex = 16511;

	class ShopCashDataExtensions : public Il2CppObject
	{
	public:
		::System::Boolean IsOpen(::MX::Data::Excel::ShopCashExcel* arg, ::System::DateTime* arg)
		{
			return (return (::System::Boolean(*)(::MX::Data::Excel::ShopCashExcel*, ::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPCASHDATAEXTENSIONS_ISOPEN_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean IsNewProductsOpen(::MX::Data::Excel::ShopCashExcel* arg, ::MX::GameLogic::DBModel::AccountDB* arg, ::System::DateTime* arg)
		{
			return (return (::System::Boolean(*)(::MX::Data::Excel::ShopCashExcel*, ::MX::GameLogic::DBModel::AccountDB*, ::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPCASHDATAEXTENSIONS_ISNEWPRODUCTSOPEN_OFFSET))(arg, arg, arg, nullptr);
		}

		::FlatData::StoreType* GetStoreType(::MX::Data::Excel::ShopCashExcel* arg)
		{
			return (return (::FlatData::StoreType*(*)(::MX::Data::Excel::ShopCashExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPCASHDATAEXTENSIONS_GETSTORETYPE_OFFSET))(arg, nullptr);
		}

		::FlatData::PurchasePeriodType* GetPurchasePeriodType(::MX::Data::Excel::ShopCashExcel* arg)
		{
			return (return (::FlatData::PurchasePeriodType*(*)(::MX::Data::Excel::ShopCashExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPCASHDATAEXTENSIONS_GETPURCHASEPERIODTYPE_OFFSET))(arg, nullptr);
		}

		::System::Int64 GetPrice(::MX::Data::Excel::ShopCashExcel* arg)
		{
			return (return (::System::Int64(*)(::MX::Data::Excel::ShopCashExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPCASHDATAEXTENSIONS_GETPRICE_OFFSET))(arg, nullptr);
		}

		::System::Int64 GetPurchaseCountLimit(::MX::Data::Excel::ShopCashExcel* arg)
		{
			return (return (::System::Int64(*)(::MX::Data::Excel::ShopCashExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPCASHDATAEXTENSIONS_GETPURCHASECOUNTLIMIT_OFFSET))(arg, nullptr);
		}

		::System::String* GetProductId(::MX::Data::Excel::ShopCashExcel* arg)
		{
			return (return (::System::String*(*)(::MX::Data::Excel::ShopCashExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPCASHDATAEXTENSIONS_GETPRODUCTID_OFFSET))(arg, nullptr);
		}

		::FlatData::MailType* GetMailType(Il2CppObject* arg)
		{
			return (return (::FlatData::MailType*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPCASHDATAEXTENSIONS_GETMAILTYPE_OFFSET))(arg, nullptr);
		}

		::FlatData::MailType* GetMailType(::MX::Data::Excel::ProductMonthlyExcel* arg)
		{
			return (return (::FlatData::MailType*(*)(::MX::Data::Excel::ProductMonthlyExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPCASHDATAEXTENSIONS_GETMAILTYPE_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsExpired(::MX::Data::Excel::ShopCashExcel* arg, ::System::DateTime* arg)
		{
			return (return (::System::Boolean(*)(::MX::Data::Excel::ShopCashExcel*, ::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPCASHDATAEXTENSIONS_ISEXPIRED_OFFSET))(arg, arg, nullptr);
		}

		::System::DateTime* GetSalePeriodToForMailExpiration(::MX::Data::Excel::ShopCashExcel* arg)
		{
			return (return (::System::DateTime*(*)(::MX::Data::Excel::ShopCashExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPCASHDATAEXTENSIONS_GETSALEPERIODTOFORMAILEXPIRATION_OFFSET))(arg, nullptr);
		}

		::System::Boolean ShouldContainImmediateRewardParcel(::MX::Data::Excel::ShopCashExcel* arg)
		{
			return (return (::System::Boolean(*)(::MX::Data::Excel::ShopCashExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPCASHDATAEXTENSIONS_SHOULDCONTAINIMMEDIATEREWARDPARCEL_OFFSET))(arg, nullptr);
		}

	};
}

