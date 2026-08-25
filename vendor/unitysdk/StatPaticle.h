#pragma once
#include "unitysdk.h"

namespace MX::Logic::Skills::LogicEffects { class StatChangeEffect; }
class CharacterVisual;
namespace MX::Data::Excel { class LogicEffectCommonVisualExcel; }

#define STATPATICLE_SET_EFFECT_OFFSET UNITYSDK_OFFSET(0x10AE2D0)
#define STATPATICLE_.CTOR_OFFSET UNITYSDK_OFFSET(0x10ABA30)
#define STATPATICLE_GET_EFFECT_OFFSET UNITYSDK_OFFSET(0x10AE2E0)

	inline static constexpr unsigned int StatPaticle_TypeDefinitionIndex = 901;

	class StatPaticle : public Il2CppObject
	{
	public:
		::MX::Logic::Skills::LogicEffects::StatChangeEffect* _Effect_k__BackingField; // 0x50

		::System::Void set_Effect(::MX::Logic::Skills::LogicEffects::StatChangeEffect* arg)
		{
			((::System::Void(*)(::MX::Logic::Skills::LogicEffects::StatChangeEffect*, ::PVOID))((::PBYTE)hIl2Cpp + STATPATICLE_SET_EFFECT_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MX::Logic::Skills::LogicEffects::StatChangeEffect* arg, CharacterVisual* arg2, ::MX::Data::Excel::LogicEffectCommonVisualExcel* arg3)
		{
			((::System::Void(*)(::MX::Logic::Skills::LogicEffects::StatChangeEffect*, CharacterVisual*, ::MX::Data::Excel::LogicEffectCommonVisualExcel*, ::PVOID))((::PBYTE)hIl2Cpp + STATPATICLE_.CTOR_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::MX::Logic::Skills::LogicEffects::StatChangeEffect* get_Effect()
		{
			return ((::MX::Logic::Skills::LogicEffects::StatChangeEffect*(*)(::PVOID))((::PBYTE)hIl2Cpp + STATPATICLE_GET_EFFECT_OFFSET))(nullptr);
		}

	};

