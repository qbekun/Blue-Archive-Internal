#pragma once
#include "unitysdk.h"

namespace MX::Visual::Data { class HeliState; }
class RescueHelicopterVisual;
namespace MX::Logic::Battles { class GroupTag; }
class CharacterVisual;

#define RESCUEHELICOPTERCONTROLLER_.CTOR_OFFSET UNITYSDK_OFFSET(0x13BB3C0)
#define RESCUEHELICOPTERCONTROLLER_LOADRESOURCES_OFFSET UNITYSDK_OFFSET(0x13C1380)
#define RESCUEHELICOPTERCONTROLLER_DISAPPEAR_OFFSET UNITYSDK_OFFSET(0x13C1690)
#define RESCUEHELICOPTERCONTROLLER_PREPARE_OFFSET UNITYSDK_OFFSET(0x13C16C0)
#define RESCUEHELICOPTERCONTROLLER_LOOP_OFFSET UNITYSDK_OFFSET(0x13C16F0)
#define RESCUEHELICOPTERCONTROLLER__SETHELIPOSITION_B__11_0_OFFSET UNITYSDK_OFFSET(0x13C1820)
#define RESCUEHELICOPTERCONTROLLER_SETHELIPOSITION_OFFSET UNITYSDK_OFFSET(0x13C1880)
#define RESCUEHELICOPTERCONTROLLER_PLAY_OFFSET UNITYSDK_OFFSET(0x13BB130)
#define RESCUEHELICOPTERCONTROLLER_APPEAR_OFFSET UNITYSDK_OFFSET(0x13C1C80)
#define RESCUEHELICOPTERCONTROLLER__LOOP_B__9_0_OFFSET UNITYSDK_OFFSET(0x13C1D30)
#define RESCUEHELICOPTERCONTROLLER_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x13BB280)

	inline static constexpr unsigned int RescueHelicopterController_TypeDefinitionIndex = 1035;

	class RescueHelicopterController : public Il2CppObject
	{
	public:
		::MX::Visual::Data::HeliState* heliState; // 0x10
		RescueHelicopterVisual* appearEffect; // 0x18
		RescueHelicopterVisual* idleEffect; // 0x20
		RescueHelicopterVisual* disappearEffect; // 0x28
		::MX::Logic::Battles::GroupTag* groupTag; // 0x30

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RESCUEHELICOPTERCONTROLLER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void LoadResources()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RESCUEHELICOPTERCONTROLLER_LOADRESOURCES_OFFSET))(nullptr);
		}

		::System::Void Disappear()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RESCUEHELICOPTERCONTROLLER_DISAPPEAR_OFFSET))(nullptr);
		}

		::System::Void Prepare()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RESCUEHELICOPTERCONTROLLER_PREPARE_OFFSET))(nullptr);
		}

		::System::Void Loop()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RESCUEHELICOPTERCONTROLLER_LOOP_OFFSET))(nullptr);
		}

		::System::Boolean _SetHeliPosition_b__11_0(CharacterVisual* arg)
		{
			return ((::System::Boolean(*)(CharacterVisual*, ::PVOID))((::PBYTE)hIl2Cpp + RESCUEHELICOPTERCONTROLLER__SETHELIPOSITION_B__11_0_OFFSET))(arg, nullptr);
		}

		::System::Void SetHeliPosition()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RESCUEHELICOPTERCONTROLLER_SETHELIPOSITION_OFFSET))(nullptr);
		}

		::System::Void Play(::MX::Visual::Data::HeliState* arg)
		{
			((::System::Void(*)(::MX::Visual::Data::HeliState*, ::PVOID))((::PBYTE)hIl2Cpp + RESCUEHELICOPTERCONTROLLER_PLAY_OFFSET))(arg, nullptr);
		}

		::System::Void Appear()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RESCUEHELICOPTERCONTROLLER_APPEAR_OFFSET))(nullptr);
		}

		::System::Void _Loop_b__9_0()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RESCUEHELICOPTERCONTROLLER__LOOP_B__9_0_OFFSET))(nullptr);
		}

		::System::Void Initialize(::MX::Logic::Battles::GroupTag* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::GroupTag*, ::PVOID))((::PBYTE)hIl2Cpp + RESCUEHELICOPTERCONTROLLER_INITIALIZE_OFFSET))(arg, nullptr);
		}

	};

