#pragma once
#include "unitysdk.h"

class UILoading;

#define <>C__DISPLAYCLASS142_0_.CTOR_OFFSET UNITYSDK_OFFSET(0x235CE10)
#define <>C__DISPLAYCLASS142_0__CO_LOADING_B__0_OFFSET UNITYSDK_OFFSET(0x235CE20)

	inline static constexpr unsigned int <>c__DisplayClass142_0_TypeDefinitionIndex = 5026;

	class <>c__DisplayClass142_0 : public Il2CppObject
	{
	public:
		::System::Boolean isOpenComplete; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS142_0_.CTOR_OFFSET))(nullptr);
		}

		::System::Void _Co_Loading_b__0(UILoading* arg)
		{
			((::System::Void(*)(UILoading*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS142_0__CO_LOADING_B__0_OFFSET))(arg, nullptr);
		}

	};

