#pragma once
#include "unitysdk.h"

namespace FlatData { class ShopCategoryType; }
namespace MX::Data::Excel { class ShopExcel; }

#define <>C__DISPLAYCLASS138_0_.CTOR_OFFSET UNITYSDK_OFFSET(0x1956190)
#define <>C__DISPLAYCLASS138_0__GETCATEGORYSHOPPARCELCOST_B__0_OFFSET UNITYSDK_OFFSET(0x1959540)

	inline static constexpr unsigned int <>c__DisplayClass138_0_TypeDefinitionIndex = 16392;

	class <>c__DisplayClass138_0 : public Il2CppObject
	{
	public:
		::FlatData::ShopCategoryType* categoryType; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS138_0_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean _GetCategoryShopParcelCost_b__0(::MX::Data::Excel::ShopExcel* arg)
		{
			return (return (::System::Boolean(*)(::MX::Data::Excel::ShopExcel*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS138_0__GETCATEGORYSHOPPARCELCOST_B__0_OFFSET))(arg, nullptr);
		}

	};

