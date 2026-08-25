#pragma once
#include "unitysdk.h"

namespace FlatData { class ShopGroupType; }

#define SHOPSUBCATEGORYTABCONTROLLER_SETNAME_OFFSET UNITYSDK_OFFSET(0xA7F400)
#define SHOPSUBCATEGORYTABCONTROLLER_.CTOR_OFFSET UNITYSDK_OFFSET(0xA7F690)

	inline static constexpr unsigned int ShopSubCategoryTabController_TypeDefinitionIndex = 7893;

	class ShopSubCategoryTabController : public ::MS::Internal::Xml::XPath::CacheChildrenQuery
	{
	public:
		::System::Void SetName(::FlatData::ShopGroupType* arg)
		{
			((::System::Void(*)(::FlatData::ShopGroupType*, ::PVOID))((::PBYTE)hIl2Cpp + SHOPSUBCATEGORYTABCONTROLLER_SETNAME_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SHOPSUBCATEGORYTABCONTROLLER_.CTOR_OFFSET))(nullptr);
		}

	};

