#pragma once
#include "unitysdk.h"

class SubPartVisualController;
namespace MX::Visual::Battles { class BattleActorComponent; }
namespace MX::Logic::BattleEntities { class ActionChangedEventArgs; }
namespace MX::Logic::BattleEntities { class O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4; }

#define SUBPARTDUMMYCHARACTERVISUAL_.CTOR_OFFSET UNITYSDK_OFFSET(0x13CB530)
#define SUBPARTDUMMYCHARACTERVISUAL_CREATEENTITIES_OFFSET UNITYSDK_OFFSET(0x13CB540)
#define SUBPARTDUMMYCHARACTERVISUAL_INITIALIZEANIMATOR_OFFSET UNITYSDK_OFFSET(0x13CB550)
#define SUBPARTDUMMYCHARACTERVISUAL_APPLYACTIONCHANGED_OFFSET UNITYSDK_OFFSET(0x13CB560)
#define SUBPARTDUMMYCHARACTERVISUAL_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x13CB7F0)
#define SUBPARTDUMMYCHARACTERVISUAL_INITSUBPARTVISUALCONTROLLER_OFFSET UNITYSDK_OFFSET(0x13CB8F0)
#define SUBPARTDUMMYCHARACTERVISUAL_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x13CBA30)
#define SUBPARTDUMMYCHARACTERVISUAL___N__0_OFFSET UNITYSDK_OFFSET(0x13CBC20)
#define SUBPARTDUMMYCHARACTERVISUAL_INITIALIZERENDERERS_OFFSET UNITYSDK_OFFSET(0x13CBC40)

	inline static constexpr unsigned int SubPartDummyCharacterVisual_TypeDefinitionIndex = 1057;

	class SubPartDummyCharacterVisual : public Il2CppObject
	{
	public:
		SubPartVisualController* subPartVisualController; // 0x2A8

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SUBPARTDUMMYCHARACTERVISUAL_.CTOR_OFFSET))(nullptr);
		}

		::System::Void CreateEntities(::MX::Visual::Battles::BattleActorComponent* arg)
		{
			((::System::Void(*)(::MX::Visual::Battles::BattleActorComponent*, ::PVOID))((::PBYTE)hIl2Cpp + SUBPARTDUMMYCHARACTERVISUAL_CREATEENTITIES_OFFSET))(arg, nullptr);
		}

		::System::Void InitializeAnimator()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SUBPARTDUMMYCHARACTERVISUAL_INITIALIZEANIMATOR_OFFSET))(nullptr);
		}

		::System::Void ApplyActionChanged(::MX::Logic::BattleEntities::ActionChangedEventArgs* arg)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::ActionChangedEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + SUBPARTDUMMYCHARACTERVISUAL_APPLYACTIONCHANGED_OFFSET))(arg, nullptr);
		}

		::System::Void LateUpdate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SUBPARTDUMMYCHARACTERVISUAL_LATEUPDATE_OFFSET))(nullptr);
		}

		::System::Void InitSubPartVisualController()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SUBPARTDUMMYCHARACTERVISUAL_INITSUBPARTVISUALCONTROLLER_OFFSET))(nullptr);
		}

		::System::Void Initialize(::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4* arg, ::MX::Visual::Battles::BattleActorComponent* arg2, ::System::Action* arg3)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4*, ::MX::Visual::Battles::BattleActorComponent*, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + SUBPARTDUMMYCHARACTERVISUAL_INITIALIZE_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void __n__0(::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4* arg, ::MX::Visual::Battles::BattleActorComponent* arg2, ::System::Action* arg3)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4*, ::MX::Visual::Battles::BattleActorComponent*, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + SUBPARTDUMMYCHARACTERVISUAL___N__0_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void InitializeRenderers()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SUBPARTDUMMYCHARACTERVISUAL_INITIALIZERENDERERS_OFFSET))(nullptr);
		}

	};

