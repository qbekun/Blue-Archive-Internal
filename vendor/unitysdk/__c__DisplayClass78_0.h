#pragma once
#include "unitysdk.h"

namespace MX::TableBoard { class TBGItemEffectDB; }

#define <>C__DISPLAYCLASS78_0_.CTOR_OFFSET UNITYSDK_OFFSET(0xF0C0A0)
#define <>C__DISPLAYCLASS78_0__ADDITEMEFFECT_B__0_OFFSET UNITYSDK_OFFSET(0xF0D830)

	inline static constexpr unsigned int <>c__DisplayClass78_0_TypeDefinitionIndex = 11214;

	class <>c__DisplayClass78_0 : public Il2CppObject
	{
	public:
		::MX::TableBoard::TBGItemEffectDB* effectDB; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS78_0_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean _AddItemEffect_b__0(::MX::TableBoard::TBGItemEffectDB* arg)
		{
			return ((::System::Boolean(*)(::MX::TableBoard::TBGItemEffectDB*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS78_0__ADDITEMEFFECT_B__0_OFFSET))(arg, nullptr);
		}

	};

