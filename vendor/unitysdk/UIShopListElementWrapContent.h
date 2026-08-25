#pragma once
#include "unitysdk.h"

#define UISHOPLISTELEMENTWRAPCONTENT_.CTOR_OFFSET UNITYSDK_OFFSET(0xAB4DE0)
#define UISHOPLISTELEMENTWRAPCONTENT_START_OFFSET UNITYSDK_OFFSET(0xAB4DF0)

	inline static constexpr unsigned int UIShopListElementWrapContent_TypeDefinitionIndex = 8001;

	class UIShopListElementWrapContent : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISHOPLISTELEMENTWRAPCONTENT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Start()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISHOPLISTELEMENTWRAPCONTENT_START_OFFSET))(nullptr);
		}

	};

