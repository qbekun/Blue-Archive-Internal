#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class ShopGroupType; }

#define MX_DATA_EXCEL_SHOPTABGROUPEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x1C84AC0)
#define MX_DATA_EXCEL_SHOPTABGROUPEXCELREPOSITORY_SELECTFIRST_SHOPGROUPTYPE_OFFSET UNITYSDK_OFFSET(0x1C84C30)
#define MX_DATA_EXCEL_SHOPTABGROUPEXCELREPOSITORY_SELECT_SHOPGROUPTYPE_OFFSET UNITYSDK_OFFSET(0x1C84F90)
#define MX_DATA_EXCEL_SHOPTABGROUPEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1C852E0)
#define MX_DATA_EXCEL_SHOPTABGROUPEXCELREPOSITORY_SELECT_SHOPGROUPTYPES_OFFSET UNITYSDK_OFFSET(0x1C85320)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int ShopTabGroupExcelRepository_TypeDefinitionIndex = 19456;

	class ShopTabGroupExcelRepository : public ::MXUnderCover::UCPlayerStartPoint
	{
	public:
		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPTABGROUPEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* SelectFirst_ShopGroupType(::FlatData::ShopGroupType* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::FlatData::ShopGroupType*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPTABGROUPEXCELREPOSITORY_SELECTFIRST_SHOPGROUPTYPE_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_ShopGroupType(::FlatData::ShopGroupType* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::FlatData::ShopGroupType*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPTABGROUPEXCELREPOSITORY_SELECT_SHOPGROUPTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPTABGROUPEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* Select_ShopGroupTypes(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPTABGROUPEXCELREPOSITORY_SELECT_SHOPGROUPTYPES_OFFSET))(arg, arg, nullptr);
		}

	};
}

