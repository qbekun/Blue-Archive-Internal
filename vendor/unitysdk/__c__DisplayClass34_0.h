#pragma once
#include "unitysdk.h"

namespace MX::Logic::Skills::LogicEffects { class StatChangeEffect; }

#define <>C__DISPLAYCLASS34_0_.CTOR_OFFSET UNITYSDK_OFFSET(0x11667A0)
#define <>C__DISPLAYCLASS34_0__ADDRUNTIMEEFFECT_B__0_OFFSET UNITYSDK_OFFSET(0x11667B0)
#define <>C__DISPLAYCLASS34_0__ADDRUNTIMEEFFECT_B__2_OFFSET UNITYSDK_OFFSET(0x1166820)

	inline static constexpr unsigned int <>c__DisplayClass34_0_TypeDefinitionIndex = 13170;

	class <>c__DisplayClass34_0 : public Il2CppObject
	{
	public:
		::MX::Logic::Skills::LogicEffects::StatChangeEffect* effect; // 0x10
		Il2CppObject* expirable; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS34_0_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean _AddRuntimeEffect_b__0(Il2CppObject* arg)
		{
			return ((::System::Boolean(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS34_0__ADDRUNTIMEEFFECT_B__0_OFFSET))(arg, nullptr);
		}

		::System::Void _AddRuntimeEffect_b__2()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS34_0__ADDRUNTIMEEFFECT_B__2_OFFSET))(nullptr);
		}

	};

