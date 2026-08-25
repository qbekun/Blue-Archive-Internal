#pragma once
#include "unitysdk.h"

namespace MX::Logic::Skills::LogicEffects { class IDispellable; }

#define <>C__DISPLAYCLASS144_0_.CTOR_OFFSET UNITYSDK_OFFSET(0x112D770)
#define <>C__DISPLAYCLASS144_0__DISPELBYTEMPLATEID_G__PREDICATE|0_OFFSET UNITYSDK_OFFSET(0x112D780)

	inline static constexpr unsigned int <>c__DisplayClass144_0_TypeDefinitionIndex = 13041;

	class <>c__DisplayClass144_0 : public Il2CppObject
	{
	public:
		Il2CppObject* hashSet; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS144_0_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean _DispelByTemplateId_g__Predicate|0(::MX::Logic::Skills::LogicEffects::IDispellable* arg)
		{
			return ((::System::Boolean(*)(::MX::Logic::Skills::LogicEffects::IDispellable*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS144_0__DISPELBYTEMPLATEID_G__PREDICATE|0_OFFSET))(arg, nullptr);
		}

	};

