#pragma once
#include "unitysdk.h"

namespace FlatData { class ShopCategoryType; }

#define UISHOPRESOURCE_SETDATA_OFFSET UNITYSDK_OFFSET(0xAAE410)
#define UISHOPRESOURCE_REFRESH_OFFSET UNITYSDK_OFFSET(0xAACCD0)
#define UISHOPRESOURCE_.CTOR_OFFSET UNITYSDK_OFFSET(0xAB9DA0)

	inline static constexpr unsigned int UIShopResource_TypeDefinitionIndex = 8016;

	class UIShopResource : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* resourceDisplay; // 0x18

		::System::Void SetData(::FlatData::ShopCategoryType* arg)
		{
			((::System::Void(*)(::FlatData::ShopCategoryType*, ::PVOID))((::PBYTE)hIl2Cpp + UISHOPRESOURCE_SETDATA_OFFSET))(arg, nullptr);
		}

		::System::Void Refresh()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISHOPRESOURCE_REFRESH_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISHOPRESOURCE_.CTOR_OFFSET))(nullptr);
		}

	};

