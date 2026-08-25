#pragma once
#include "unitysdk.h"

class UIShop_Popup_Gem_Confirm;
namespace UnityEngine { class Texture; }

#define <>C__DISPLAYCLASS77_0_.CTOR_OFFSET UNITYSDK_OFFSET(0xAD1190)
#define <>C__DISPLAYCLASS77_0__SETPRODUCTIMAGE_B__0_OFFSET UNITYSDK_OFFSET(0xAD11A0)

	inline static constexpr unsigned int <>c__DisplayClass77_0_TypeDefinitionIndex = 8049;

	class <>c__DisplayClass77_0 : public Il2CppObject
	{
	public:
		UIShop_Popup_Gem_Confirm* __4__this; // 0x10
		::System::Boolean loaded; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS77_0_.CTOR_OFFSET))(nullptr);
		}

		::System::Void _SetProductImage_b__0(::UnityEngine::Texture* arg)
		{
			((::System::Void(*)(::UnityEngine::Texture*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS77_0__SETPRODUCTIMAGE_B__0_OFFSET))(arg, nullptr);
		}

	};

