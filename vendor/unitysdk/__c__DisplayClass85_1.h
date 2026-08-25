#pragma once
#include "unitysdk.h"

#define <>C__DISPLAYCLASS85_1_.CTOR_OFFSET UNITYSDK_OFFSET(0x2034350)
#define <>C__DISPLAYCLASS85_1__PRELOADRESOURCES_B__1_OFFSET UNITYSDK_OFFSET(0x2035390)

	inline static constexpr unsigned int <>c__DisplayClass85_1_TypeDefinitionIndex = 3227;

	class <>c__DisplayClass85_1 : public Il2CppObject
	{
	public:
		::System::String* resPath; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS85_1_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean _PreloadResources_b__1(Il2CppObject* arg)
		{
			return ((::System::Boolean(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS85_1__PRELOADRESOURCES_B__1_OFFSET))(arg, nullptr);
		}

	};

