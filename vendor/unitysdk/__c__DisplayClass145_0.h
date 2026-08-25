#pragma once
#include "unitysdk.h"

namespace FlatData { class LogicEffectCategory; }
namespace MX::Logic::Skills::LogicEffects { class IDispellable; }

#define <>C__DISPLAYCLASS145_0_.CTOR_OFFSET UNITYSDK_OFFSET(0x112D840)
#define <>C__DISPLAYCLASS145_0__DISPELBYCATEGORY_G__PREDICATE|0_OFFSET UNITYSDK_OFFSET(0x112D850)

	inline static constexpr unsigned int <>c__DisplayClass145_0_TypeDefinitionIndex = 13042;

	class <>c__DisplayClass145_0 : public Il2CppObject
	{
	public:
		::FlatData::LogicEffectCategory* category; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS145_0_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean _DispelByCategory_g__Predicate|0(::MX::Logic::Skills::LogicEffects::IDispellable* arg)
		{
			return ((::System::Boolean(*)(::MX::Logic::Skills::LogicEffects::IDispellable*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS145_0__DISPELBYCATEGORY_G__PREDICATE|0_OFFSET))(arg, nullptr);
		}

	};

