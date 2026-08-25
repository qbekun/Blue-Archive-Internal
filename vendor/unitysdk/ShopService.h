#pragma once
#include "unitysdk.h"

namespace FlatData { class StoreType; }
namespace MX::Data::Excel { class ShopRecruitExcel; }
namespace FlatData { class GachaTicketType; }
namespace MX::GameLogic::Parcel { class ParcelKeyPair; }
namespace FlatData { class PurchaseSourceType; }

#define SHOPSERVICE_GETSTORETYPE_OFFSET UNITYSDK_OFFSET(0xC4B510)
#define SHOPSERVICE_GETTHREESTARGACHAPACKAGEPRODUCT_OFFSET UNITYSDK_OFFSET(0xC4B5A0)
#define SHOPSERVICE_GETPRODUCTID_OFFSET UNITYSDK_OFFSET(0xC4B630)
#define SHOPSERVICE_TRYGETTHREESTARGACHAPACKAGEITEMEXCEL_OFFSET UNITYSDK_OFFSET(0xC4B7C0)
#define SHOPSERVICE_ISVISIBLEOPENGACHASLOT_OFFSET UNITYSDK_OFFSET(0xC4BB20)
#define SHOPSERVICE_ISCANBUYTHREESTARGACHATICKET_OFFSET UNITYSDK_OFFSET(0xC4BCB0)
#define SHOPSERVICE_GETTICKETGACHAGOODSID_OFFSET UNITYSDK_OFFSET(0xC4C9D0)
#define SHOPSERVICE_SETBILLINGPRODUCTPRICELABEL_OFFSET UNITYSDK_OFFSET(0xC4CA20)
#define SHOPSERVICE_WASBOUGHTSPECIALGACHATICKET_OFFSET UNITYSDK_OFFSET(0xC4DDC0)
#define SHOPSERVICE_HAVETICKETINMAILBOX_OFFSET UNITYSDK_OFFSET(0xC4E1E0)
#define SHOPSERVICE_HAVETICKETINMAILBOX_OFFSET UNITYSDK_OFFSET(0xC4E330)
#define SHOPSERVICE_CALCNEWBIEPERIODSTARTDATE_OFFSET UNITYSDK_OFFSET(0xC4E450)
#define SHOPSERVICE_CALCNEWBIEPERIODENDDATE_OFFSET UNITYSDK_OFFSET(0xC4E570)
#define SHOPSERVICE_GETNEWBIEPERIODTEXT_OFFSET UNITYSDK_OFFSET(0xC4E690)
#define SHOPSERVICE_HASEXPIRATIONDATETIME_OFFSET UNITYSDK_OFFSET(0xC4E8D0)
#define SHOPSERVICE_GETEXPIRATIONDATETIME_OFFSET UNITYSDK_OFFSET(0xC4E980)
#define SHOPSERVICE_GETTHREESTARGACHAPACKAGEPRODUCTS_OFFSET UNITYSDK_OFFSET(0xC4C2A0)
#define SHOPSERVICE_ISINCLUDEINCASHMERCHANDISE_OFFSET UNITYSDK_OFFSET(0xC4EAA0)
#define SHOPSERVICE_ISLIMITEDITEMINCLUDE_OFFSET UNITYSDK_OFFSET(0xC4ED20)
#define SHOPSERVICE__GETNEWBIEPERIODTEXT_G__FORMATDATE|13_0_OFFSET UNITYSDK_OFFSET(0xC4E7F0)

	inline static constexpr unsigned int ShopService_TypeDefinitionIndex = 8940;

	class ShopService : public Il2CppObject
	{
	public:
		::FlatData::StoreType* GetStoreType()
		{
			return ((::FlatData::StoreType*(*)(::PVOID))((::PBYTE)hIl2Cpp + SHOPSERVICE_GETSTORETYPE_OFFSET))(nullptr);
		}

		Il2CppObject* GetThreeStarGachaPackageProduct(::System::Int64 arg)
		{
			return ((Il2CppObject*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + SHOPSERVICE_GETTHREESTARGACHAPACKAGEPRODUCT_OFFSET))(arg, nullptr);
		}

		::System::Int64 GetProductId(::System::Int64 arg)
		{
			return ((::System::Int64(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + SHOPSERVICE_GETPRODUCTID_OFFSET))(arg, nullptr);
		}

		::System::Boolean TryGetThreeStarGachaPackageItemExcel(::System::Int64 arg, Il2CppObject&* arg2)
		{
			return ((::System::Boolean(*)(::System::Int64, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + SHOPSERVICE_TRYGETTHREESTARGACHAPACKAGEITEMEXCEL_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean IsVisibleOpenGachaSlot(::System::Int64 arg)
		{
			return ((::System::Boolean(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + SHOPSERVICE_ISVISIBLEOPENGACHASLOT_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsCanBuyThreeStarGachaTicket(::System::Int64 arg)
		{
			return ((::System::Boolean(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + SHOPSERVICE_ISCANBUYTHREESTARGACHATICKET_OFFSET))(arg, nullptr);
		}

		::System::Int64 GetTicketGachaGoodsId(::MX::Data::Excel::ShopRecruitExcel* arg)
		{
			return ((::System::Int64(*)(::MX::Data::Excel::ShopRecruitExcel*, ::PVOID))((::PBYTE)hIl2Cpp + SHOPSERVICE_GETTICKETGACHAGOODSID_OFFSET))(arg, nullptr);
		}

		::System::Void SetBillingProductPriceLabel(::System::Int64 arg, ::System::Boolean arg2, ::System::Int64 arg3, Il2CppObject* arg4, Il2CppObject* arg5)
		{
			((::System::Void(*)(::System::Int64, ::System::Boolean, ::System::Int64, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SHOPSERVICE_SETBILLINGPRODUCTPRICELABEL_OFFSET))(arg, arg2, arg3, arg4, arg5, nullptr);
		}

		::System::Boolean WasBoughtSpecialGachaTicket(::System::Int64 arg)
		{
			return ((::System::Boolean(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + SHOPSERVICE_WASBOUGHTSPECIALGACHATICKET_OFFSET))(arg, nullptr);
		}

		::System::Boolean HaveTicketInMailBox(::System::Int64 arg)
		{
			return ((::System::Boolean(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + SHOPSERVICE_HAVETICKETINMAILBOX_OFFSET))(arg, nullptr);
		}

		::System::Boolean HaveTicketInMailBox(::FlatData::GachaTicketType* arg)
		{
			return ((::System::Boolean(*)(::FlatData::GachaTicketType*, ::PVOID))((::PBYTE)hIl2Cpp + SHOPSERVICE_HAVETICKETINMAILBOX_OFFSET))(arg, nullptr);
		}

		::System::DateTime* CalcNewbiePeriodStartDate(::System::String* str, ::System::DateTime* arg)
		{
			return ((::System::DateTime*(*)(::System::String*, ::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + SHOPSERVICE_CALCNEWBIEPERIODSTARTDATE_OFFSET))(str, arg, nullptr);
		}

		::System::DateTime* CalcNewbiePeriodEndDate(::System::String* str, ::System::DateTime* arg)
		{
			return ((::System::DateTime*(*)(::System::String*, ::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + SHOPSERVICE_CALCNEWBIEPERIODENDDATE_OFFSET))(str, arg, nullptr);
		}

		::System::String* GetNewbiePeriodText(::System::Boolean arg, ::System::DateTime* arg2, ::System::DateTime* arg3)
		{
			return ((::System::String*(*)(::System::Boolean, ::System::DateTime*, ::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + SHOPSERVICE_GETNEWBIEPERIODTEXT_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Boolean HasExpirationDateTime(::System::Int64 arg)
		{
			return ((::System::Boolean(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + SHOPSERVICE_HASEXPIRATIONDATETIME_OFFSET))(arg, nullptr);
		}

		::System::DateTime* GetExpirationDateTime(::System::Int64 arg)
		{
			return ((::System::DateTime*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + SHOPSERVICE_GETEXPIRATIONDATETIME_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetThreeStarGachaPackageProducts(::System::Int64 arg)
		{
			return ((Il2CppObject*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + SHOPSERVICE_GETTHREESTARGACHAPACKAGEPRODUCTS_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsIncludeInCashMerchandise(::MX::GameLogic::Parcel::ParcelKeyPair* arg, ::System::Int64 arg2)
		{
			return ((::System::Boolean(*)(::MX::GameLogic::Parcel::ParcelKeyPair*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + SHOPSERVICE_ISINCLUDEINCASHMERCHANDISE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean IsLimitedItemInclude(::FlatData::PurchaseSourceType* arg, ::System::Int64 arg2)
		{
			return ((::System::Boolean(*)(::FlatData::PurchaseSourceType*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + SHOPSERVICE_ISLIMITEDITEMINCLUDE_OFFSET))(arg, arg2, nullptr);
		}

		::System::String* _GetNewbiePeriodText_g__FormatDate|13_0(::System::DateTime* arg, <>c__DisplayClass13_0&* arg2)
		{
			return ((::System::String*(*)(::System::DateTime*, <>c__DisplayClass13_0&*, ::PVOID))((::PBYTE)hIl2Cpp + SHOPSERVICE__GETNEWBIEPERIODTEXT_G__FORMATDATE|13_0_OFFSET))(arg, arg2, nullptr);
		}

	};

