#pragma once
#include "unitysdk.h"

class UIBattle;
namespace MX::Logic::Battles { class O62dbaf47331b6f99fedd218f5096959e643297fc365acf681560548111b1962c; }
class UIOperator;

#define <>C__DISPLAYCLASS149_0_.CTOR_OFFSET UNITYSDK_OFFSET(0x222BB70)
#define <>C__DISPLAYCLASS149_0__SHOWBULLETTIMEUI_B__0_OFFSET UNITYSDK_OFFSET(0x2230330)

	inline static constexpr unsigned int <>c__DisplayClass149_0_TypeDefinitionIndex = 4436;

	class <>c__DisplayClass149_0 : public Il2CppObject
	{
	public:
		UIBattle* __4__this; // 0x10
		::MX::Logic::Battles::O62dbaf47331b6f99fedd218f5096959e643297fc365acf681560548111b1962c* skillCard; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS149_0_.CTOR_OFFSET))(nullptr);
		}

		::System::Void _ShowBulletTimeUI_b__0(UIOperator* arg)
		{
			((::System::Void(*)(UIOperator*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS149_0__SHOWBULLETTIMEUI_B__0_OFFSET))(arg, nullptr);
		}

	};

