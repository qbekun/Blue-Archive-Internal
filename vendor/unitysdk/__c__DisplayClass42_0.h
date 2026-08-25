#pragma once
#include "unitysdk.h"

namespace MX::Core::Services { class Hash64; }
namespace MX::Logic::Skills::LogicEffects { class StatChangeEffect; }

#define <>C__DISPLAYCLASS42_0_.CTOR_OFFSET UNITYSDK_OFFSET(0x1166CC0)
#define <>C__DISPLAYCLASS42_0__HASLOGICEFFECTTEMPLATEID_B__0_OFFSET UNITYSDK_OFFSET(0x1166CD0)

	inline static constexpr unsigned int <>c__DisplayClass42_0_TypeDefinitionIndex = 13177;

	class <>c__DisplayClass42_0 : public Il2CppObject
	{
	public:
		::MX::Core::Services::Hash64* templateIdHash; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS42_0_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean _HasLogicEffectTemplateId_b__0(::MX::Logic::Skills::LogicEffects::StatChangeEffect* arg)
		{
			return ((::System::Boolean(*)(::MX::Logic::Skills::LogicEffects::StatChangeEffect*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS42_0__HASLOGICEFFECTTEMPLATEID_B__0_OFFSET))(arg, nullptr);
		}

	};

