#pragma once
#include "unitysdk.h"

class UIBase;

#define <>C__DISPLAYCLASS89_0`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define <>C__DISPLAYCLASS89_0`1__OPENASYNC_B__0_OFFSET UNITYSDK_OFFSET(0x000000)
#define <>C__DISPLAYCLASS89_0`1__OPENASYNC_B__1_OFFSET UNITYSDK_OFFSET(0x000000)

	inline static constexpr unsigned int <>c__DisplayClass89_0`1_TypeDefinitionIndex = 6773;

	class <>c__DisplayClass89_0`1 : public Il2CppObject
	{
	public:
		Il2CppObject* afterLoadingCallback; // 0x0
		Il2CppObject* opendCallback; // 0x0

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS89_0`1_.CTOR_OFFSET))(nullptr);
		}

		::System::Void _OpenAsync_b__0(UIBase* arg)
		{
			((::System::Void(*)(UIBase*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS89_0`1__OPENASYNC_B__0_OFFSET))(arg, nullptr);
		}

		::System::Void _OpenAsync_b__1(UIBase* arg)
		{
			((::System::Void(*)(UIBase*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS89_0`1__OPENASYNC_B__1_OFFSET))(arg, nullptr);
		}

	};

