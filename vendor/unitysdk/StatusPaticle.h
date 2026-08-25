#pragma once
#include "unitysdk.h"

namespace MX::Logic::BattleEntities { class HeroStatus; }
class CharacterVisual;
namespace MX::Data::Excel { class LogicEffectCommonVisualExcel; }

#define STATUSPATICLE_.CTOR_OFFSET UNITYSDK_OFFSET(0x10AE2F0)
#define STATUSPATICLE_SET_STATUS_OFFSET UNITYSDK_OFFSET(0x10AE320)
#define STATUSPATICLE_GET_STATUS_OFFSET UNITYSDK_OFFSET(0x10AE330)

	inline static constexpr unsigned int StatusPaticle_TypeDefinitionIndex = 902;

	class StatusPaticle : public Il2CppObject
	{
	public:
		::MX::Logic::BattleEntities::HeroStatus* _Status_k__BackingField; // 0x50

		::System::Void .ctor(::MX::Logic::BattleEntities::HeroStatus* arg, CharacterVisual* arg2, ::MX::Data::Excel::LogicEffectCommonVisualExcel* arg3)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::HeroStatus*, CharacterVisual*, ::MX::Data::Excel::LogicEffectCommonVisualExcel*, ::PVOID))((::PBYTE)hIl2Cpp + STATUSPATICLE_.CTOR_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void set_Status(::MX::Logic::BattleEntities::HeroStatus* arg)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::HeroStatus*, ::PVOID))((::PBYTE)hIl2Cpp + STATUSPATICLE_SET_STATUS_OFFSET))(arg, nullptr);
		}

		::MX::Logic::BattleEntities::HeroStatus* get_Status()
		{
			return ((::MX::Logic::BattleEntities::HeroStatus*(*)(::PVOID))((::PBYTE)hIl2Cpp + STATUSPATICLE_GET_STATUS_OFFSET))(nullptr);
		}

	};

