#pragma once
#include "unitysdk.h"

class UILoading;

#define <>C__DISPLAYCLASS67_1_.CTOR_OFFSET UNITYSDK_OFFSET(0xE66F60)
#define <>C__DISPLAYCLASS67_1__CO_EVENTLOBBYLOADING_B__2_OFFSET UNITYSDK_OFFSET(0xE66F70)

	inline static constexpr unsigned int <>c__DisplayClass67_1_TypeDefinitionIndex = 10495;

	class <>c__DisplayClass67_1 : public Il2CppObject
	{
	public:
		::System::Boolean loadingOpened; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS67_1_.CTOR_OFFSET))(nullptr);
		}

		::System::Void _Co_EventLobbyLoading_b__2(UILoading* arg)
		{
			((::System::Void(*)(UILoading*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS67_1__CO_EVENTLOBBYLOADING_B__2_OFFSET))(arg, nullptr);
		}

	};

