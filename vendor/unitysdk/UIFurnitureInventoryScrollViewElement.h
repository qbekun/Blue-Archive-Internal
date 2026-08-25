#pragma once
#include "unitysdk.h"

#define UIFURNITUREINVENTORYSCROLLVIEWELEMENT_SETDATA_OFFSET UNITYSDK_OFFSET(0x2589130)
#define UIFURNITUREINVENTORYSCROLLVIEWELEMENT_.CTOR_OFFSET UNITYSDK_OFFSET(0x25893E0)

	inline static constexpr unsigned int UIFurnitureInventoryScrollViewElement_TypeDefinitionIndex = 6228;

	class UIFurnitureInventoryScrollViewElement : public LiteralType
	{
	public:
		Il2CppObject* furnitureCards; // 0x28

		::System::Void SetData(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIFURNITUREINVENTORYSCROLLVIEWELEMENT_SETDATA_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFURNITUREINVENTORYSCROLLVIEWELEMENT_.CTOR_OFFSET))(nullptr);
		}

	};

