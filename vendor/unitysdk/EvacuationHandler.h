#pragma once
#include "unitysdk.h"

class RescueHelicopterController;
namespace MX::Logic::Battles { class Battle; }
class CharacterVisual;
class EvacuationRopeVisual;
namespace MX::Logic::Battles { class GroupTag; }

#define EVACUATIONHANDLER_REENTERBATTLE_OFFSET UNITYSDK_OFFSET(0x13BAD00)
#define EVACUATIONHANDLER_LOADROPERESOURCE_OFFSET UNITYSDK_OFFSET(0x13BAE60)
#define EVACUATIONHANDLER_CHECKEVACUATIONFINISHED_OFFSET UNITYSDK_OFFSET(0x13BAD10)
#define EVACUATIONHANDLER_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x13BB170)
#define EVACUATIONHANDLER_GETRESCUEHELICOPTERCONTROLLER_OFFSET UNITYSDK_OFFSET(0x13BB0E0)
#define EVACUATIONHANDLER_.CTOR_OFFSET UNITYSDK_OFFSET(0x13BB290)
#define EVACUATIONHANDLER_BEGINEVACUATION_OFFSET UNITYSDK_OFFSET(0x13BB3D0)
#define EVACUATIONHANDLER_GETDYINGCHARACTERS_OFFSET UNITYSDK_OFFSET(0x13BB090)

	inline static constexpr unsigned int EvacuationHandler_TypeDefinitionIndex = 1012;

	class EvacuationHandler : public Il2CppObject
	{
	public:
		RescueHelicopterController* playerHelicopterController; // 0x10
		RescueHelicopterController* enemyHelicopterController; // 0x18
		Il2CppObject* dyingPlayerCharacters; // 0x20
		Il2CppObject* dyingEnemyCharacters; // 0x28
		::MX::Logic::Battles::Battle* battle; // 0x30

		::System::Void ReEnterBattle(CharacterVisual* arg)
		{
			((::System::Void(*)(CharacterVisual*, ::PVOID))((::PBYTE)hIl2Cpp + EVACUATIONHANDLER_REENTERBATTLE_OFFSET))(arg, nullptr);
		}

		EvacuationRopeVisual* LoadRopeResource(CharacterVisual* arg, ::System::Int64 arg2)
		{
			return ((EvacuationRopeVisual*(*)(CharacterVisual*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + EVACUATIONHANDLER_LOADROPERESOURCE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void CheckEvacuationFinished(CharacterVisual* arg)
		{
			((::System::Void(*)(CharacterVisual*, ::PVOID))((::PBYTE)hIl2Cpp + EVACUATIONHANDLER_CHECKEVACUATIONFINISHED_OFFSET))(arg, nullptr);
		}

		::System::Void Initialize(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + EVACUATIONHANDLER_INITIALIZE_OFFSET))(arg, nullptr);
		}

		RescueHelicopterController* GetRescueHelicopterController(::MX::Logic::Battles::GroupTag* arg)
		{
			return ((RescueHelicopterController*(*)(::MX::Logic::Battles::GroupTag*, ::PVOID))((::PBYTE)hIl2Cpp + EVACUATIONHANDLER_GETRESCUEHELICOPTERCONTROLLER_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EVACUATIONHANDLER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void BeginEvacuation(CharacterVisual* arg)
		{
			((::System::Void(*)(CharacterVisual*, ::PVOID))((::PBYTE)hIl2Cpp + EVACUATIONHANDLER_BEGINEVACUATION_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetDyingCharacters(::MX::Logic::Battles::GroupTag* arg)
		{
			return ((Il2CppObject*(*)(::MX::Logic::Battles::GroupTag*, ::PVOID))((::PBYTE)hIl2Cpp + EVACUATIONHANDLER_GETDYINGCHARACTERS_OFFSET))(arg, nullptr);
		}

	};

