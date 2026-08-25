#pragma once
#include "unitysdk.h"

#define <>C__DISPLAYCLASS82_1_.CTOR_OFFSET UNITYSDK_OFFSET(0x2034C80)
#define <>C__DISPLAYCLASS82_1__PRELOADRESOURCES_B__2_OFFSET UNITYSDK_OFFSET(0x2034D40)

	inline static constexpr unsigned int <>c__DisplayClass82_1_TypeDefinitionIndex = 3222;

	class <>c__DisplayClass82_1 : public Il2CppObject
	{
	public:
		::System::String* resPath; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS82_1_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean _PreloadResources_b__2(Il2CppObject* arg)
		{
			return ((::System::Boolean(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS82_1__PRELOADRESOURCES_B__2_OFFSET))(arg, nullptr);
		}

	};

