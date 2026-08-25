#pragma once
#include "unitysdk.h"

class UILoading;

#define <>C__DISPLAYCLASS153_0_.CTOR_OFFSET UNITYSDK_OFFSET(0x2694380)
#define <>C__DISPLAYCLASS153_0__COOPENLOADINGUIWITHFADEOUT_B__0_OFFSET UNITYSDK_OFFSET(0x2694390)

	inline static constexpr unsigned int <>c__DisplayClass153_0_TypeDefinitionIndex = 6792;

	class <>c__DisplayClass153_0 : public Il2CppObject
	{
	public:
		::System::Action* afterUIOpenedAction; // 0x10
		::System::Boolean open; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS153_0_.CTOR_OFFSET))(nullptr);
		}

		::System::Void _CoOpenLoadingUIWithFadeOut_b__0(UILoading* arg)
		{
			((::System::Void(*)(UILoading*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS153_0__COOPENLOADINGUIWITHFADEOUT_B__0_OFFSET))(arg, nullptr);
		}

	};

