#pragma once
#include "unitysdk.h"

class IResourceSwitcher;
namespace MX::Logic::BattleEntities { class BattleEntity; }
namespace MX::Logic::Battles { class Battle; }
namespace MX::Logic::Battles { class LogicEffectHitEventArgs; }
namespace MX::Logic::Battles { class LogicEffectExpiredEventArgs; }

#define LOGICEFFECTMATERIALMAPPING_.CTOR_OFFSET UNITYSDK_OFFSET(0x13BD990)
#define LOGICEFFECTMATERIALMAPPING_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x13BD9A0)
#define LOGICEFFECTMATERIALMAPPING_CHANGEMATERIALMAPPING_OFFSET UNITYSDK_OFFSET(0x13BDB40)
#define LOGICEFFECTMATERIALMAPPING_LOGICEFFECTPROCESSOR_LOGICEFFECTHIT_OFFSET UNITYSDK_OFFSET(0x13BDCA0)
#define LOGICEFFECTMATERIALMAPPING_BATTLE_LOGICEFFECTEXPIRED_OFFSET UNITYSDK_OFFSET(0x13BDEE0)

	inline static constexpr unsigned int LogicEffectMaterialMapping_TypeDefinitionIndex = 1027;

	class LogicEffectMaterialMapping : public Il2CppObject
	{
	public:
		IResourceSwitcher* ResourceSwitcher; // 0x18
		Il2CppObject* Mapping; // 0x20
		::MX::Logic::BattleEntities::BattleEntity* ownerEntiy; // 0x28
		Il2CppObject* currentMappingList; // 0x30

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOGICEFFECTMATERIALMAPPING_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Initialize(::MX::Logic::Battles::Battle* arg, ::MX::Logic::BattleEntities::BattleEntity* arg2)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::MX::Logic::BattleEntities::BattleEntity*, ::PVOID))((::PBYTE)hIl2Cpp + LOGICEFFECTMATERIALMAPPING_INITIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void ChangeMaterialMapping()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOGICEFFECTMATERIALMAPPING_CHANGEMATERIALMAPPING_OFFSET))(nullptr);
		}

		::System::Void LogicEffectProcessor_LogicEffectHit(::System::Object* arg, ::MX::Logic::Battles::LogicEffectHitEventArgs* arg2)
		{
			((::System::Void(*)(::System::Object*, ::MX::Logic::Battles::LogicEffectHitEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + LOGICEFFECTMATERIALMAPPING_LOGICEFFECTPROCESSOR_LOGICEFFECTHIT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Battle_LogicEffectExpired(::System::Object* arg, ::MX::Logic::Battles::LogicEffectExpiredEventArgs* arg2)
		{
			((::System::Void(*)(::System::Object*, ::MX::Logic::Battles::LogicEffectExpiredEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + LOGICEFFECTMATERIALMAPPING_BATTLE_LOGICEFFECTEXPIRED_OFFSET))(arg, arg2, nullptr);
		}

	};

