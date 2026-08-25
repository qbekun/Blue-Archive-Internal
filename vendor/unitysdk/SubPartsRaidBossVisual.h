#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Transform; }
namespace MX::Logic::BattleEntities { class SubPartsRaidBossCharacter; }
class SimpleHPBar;
namespace UnityEngine { class Color; }
namespace MX::Logic::BattleEntities { class O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4; }
namespace MX::Visual::Battles { class BattleActorComponent; }
namespace MX::Logic::Battles { class AttackEventArgs; }
namespace MX::Logic::Battles { class LifeGainEventArgs; }

#define SUBPARTSRAIDBOSSVISUAL__INITHPBAR_G__FOREGROUNDCOLORGETTER|7_1_OFFSET UNITYSDK_OFFSET(0x13CC000)
#define SUBPARTSRAIDBOSSVISUAL_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x13CC1C0)
#define SUBPARTSRAIDBOSSVISUAL__INITHPBAR_G__SLIDERVALUEGETTER|7_0_OFFSET UNITYSDK_OFFSET(0x13CC660)
#define SUBPARTSRAIDBOSSVISUAL_APPLYHITRESULT_OFFSET UNITYSDK_OFFSET(0x13CC730)
#define SUBPARTSRAIDBOSSVISUAL_APPLYLIFEGAIN_OFFSET UNITYSDK_OFFSET(0x13CC750)
#define SUBPARTSRAIDBOSSVISUAL_INITHPBAR_OFFSET UNITYSDK_OFFSET(0x13CC770)
#define SUBPARTSRAIDBOSSVISUAL_.CTOR_OFFSET UNITYSDK_OFFSET(0x13CC900)
#define SUBPARTSRAIDBOSSVISUAL_SETPARTSALIVEORDESTROYED_OFFSET UNITYSDK_OFFSET(0x13CC2D0)

	inline static constexpr unsigned int SubPartsRaidBossVisual_TypeDefinitionIndex = 1059;

	class SubPartsRaidBossVisual : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* AliveParts; // 0x2A8
		::Il2CppArray<::System::Object*>* DestroyedParts; // 0x2B0
		::UnityEngine::Transform* PartsHPBarFloater; // 0x2B8
		::Il2CppArray<::System::Object*>* PartsHPBarColors; // 0x2C0
		::MX::Logic::BattleEntities::SubPartsRaidBossCharacter* raidBoss; // 0x2C8
		SimpleHPBar* subPartHPBar; // 0x2D0

		::UnityEngine::Color* _InitHpBar_g__ForeGroundColorGetter|7_1()
		{
			return ((::UnityEngine::Color*(*)(::PVOID))((::PBYTE)hIl2Cpp + SUBPARTSRAIDBOSSVISUAL__INITHPBAR_G__FOREGROUNDCOLORGETTER|7_1_OFFSET))(nullptr);
		}

		::System::Void Initialize(::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4* arg, ::MX::Visual::Battles::BattleActorComponent* arg2, ::System::Action* arg3)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4*, ::MX::Visual::Battles::BattleActorComponent*, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + SUBPARTSRAIDBOSSVISUAL_INITIALIZE_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Single _InitHpBar_g__SliderValueGetter|7_0()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SUBPARTSRAIDBOSSVISUAL__INITHPBAR_G__SLIDERVALUEGETTER|7_0_OFFSET))(nullptr);
		}

		::System::Void ApplyHitResult(::MX::Logic::Battles::AttackEventArgs* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::AttackEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + SUBPARTSRAIDBOSSVISUAL_APPLYHITRESULT_OFFSET))(arg, nullptr);
		}

		::System::Void ApplyLifeGain(::MX::Logic::Battles::LifeGainEventArgs* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::LifeGainEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + SUBPARTSRAIDBOSSVISUAL_APPLYLIFEGAIN_OFFSET))(arg, nullptr);
		}

		::System::Void InitHpBar()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SUBPARTSRAIDBOSSVISUAL_INITHPBAR_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SUBPARTSRAIDBOSSVISUAL_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetPartsAliveOrDestroyed()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SUBPARTSRAIDBOSSVISUAL_SETPARTSALIVEORDESTROYED_OFFSET))(nullptr);
		}

	};

