#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_SHOPFILTERCLASSIFIEDEXCELREPOSITORY_SELECT_GOODSIDS_OFFSET UNITYSDK_OFFSET(0x1C773A0)
#define MX_DATA_EXCEL_SHOPFILTERCLASSIFIEDEXCELREPOSITORY_SELECTFIRST_GOODSID_OFFSET UNITYSDK_OFFSET(0x1C777A0)
#define MX_DATA_EXCEL_SHOPFILTERCLASSIFIEDEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x1C77AC0)
#define MX_DATA_EXCEL_SHOPFILTERCLASSIFIEDEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1C77C30)
#define MX_DATA_EXCEL_SHOPFILTERCLASSIFIEDEXCELREPOSITORY_SELECT_GOODSID_OFFSET UNITYSDK_OFFSET(0x1C77C70)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int ShopFilterClassifiedExcelRepository_TypeDefinitionIndex = 19397;

	class ShopFilterClassifiedExcelRepository : public ::MXUnderCover::PlayerInputAsset
	{
	public:
		Il2CppObject* Select_GoodsIds(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPFILTERCLASSIFIEDEXCELREPOSITORY_SELECT_GOODSIDS_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* SelectFirst_GoodsId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPFILTERCLASSIFIEDEXCELREPOSITORY_SELECTFIRST_GOODSID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPFILTERCLASSIFIEDEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPFILTERCLASSIFIEDEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* Select_GoodsId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPFILTERCLASSIFIEDEXCELREPOSITORY_SELECT_GOODSID_OFFSET))(arg, arg, nullptr);
		}

	};
}

