#pragma once
#include "unitysdk.h"

namespace MX::Logic::Skills::LogicEffects { class IDispellable; }

#define <>C__DISPLAYCLASS146_0_.CTOR_OFFSET UNITYSDK_OFFSET(0x112D8F0)
#define <>C__DISPLAYCLASS146_0__DISPELBYGROUPID_G__PREDICATE|0_OFFSET UNITYSDK_OFFSET(0x112D900)

	inline static constexpr unsigned int <>c__DisplayClass146_0_TypeDefinitionIndex = 13043;

	class <>c__DisplayClass146_0 : public Il2CppObject
	{
	public:
		::System::String* logicEffectGroupId; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS146_0_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean _DispelByGroupId_g__Predicate|0(::MX::Logic::Skills::LogicEffects::IDispellable* arg)
		{
			return ((::System::Boolean(*)(::MX::Logic::Skills::LogicEffects::IDispellable*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS146_0__DISPELBYGROUPID_G__PREDICATE|0_OFFSET))(arg, nullptr);
		}

	};

