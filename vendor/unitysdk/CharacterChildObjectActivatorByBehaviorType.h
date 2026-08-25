#pragma once
#include "unitysdk.h"

namespace MX::Logic::BattleEntities { class BehaviorType; }
namespace MX::Logic::BattleEntities { class ActionChangedEventArgs; }

#define CHARACTERCHILDOBJECTACTIVATORBYBEHAVIORTYPE_ONCHANGEDBEHAVIOR_OFFSET UNITYSDK_OFFSET(0x10B2440)
#define CHARACTERCHILDOBJECTACTIVATORBYBEHAVIORTYPE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x10B24A0)
#define CHARACTERCHILDOBJECTACTIVATORBYBEHAVIORTYPE_AWAKE_OFFSET UNITYSDK_OFFSET(0x10B2660)
#define CHARACTERCHILDOBJECTACTIVATORBYBEHAVIORTYPE_APPLYACTIONCHANGED_OFFSET UNITYSDK_OFFSET(0x10B26C0)
#define CHARACTERCHILDOBJECTACTIVATORBYBEHAVIORTYPE_.CTOR_OFFSET UNITYSDK_OFFSET(0x10B2730)
#define CHARACTERCHILDOBJECTACTIVATORBYBEHAVIORTYPE_START_OFFSET UNITYSDK_OFFSET(0x10B2740)

	inline static constexpr unsigned int CharacterChildObjectActivatorByBehaviorType_TypeDefinitionIndex = 914;

	class CharacterChildObjectActivatorByBehaviorType : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* ActivateInfos; // 0x18
		::System::Boolean IsSupportActor; // 0x20
		::System::Boolean SetOnStart; // 0x21

		::System::Void OnChangedBehavior(::MX::Logic::BattleEntities::BehaviorType* arg)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::BehaviorType*, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERCHILDOBJECTACTIVATORBYBEHAVIORTYPE_ONCHANGEDBEHAVIOR_OFFSET))(arg, nullptr);
		}

		::System::Void OnDestroy()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERCHILDOBJECTACTIVATORBYBEHAVIORTYPE_ONDESTROY_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERCHILDOBJECTACTIVATORBYBEHAVIORTYPE_AWAKE_OFFSET))(nullptr);
		}

		::System::Void ApplyActionChanged(::System::Object* arg, ::MX::Logic::BattleEntities::ActionChangedEventArgs* arg2)
		{
			((::System::Void(*)(::System::Object*, ::MX::Logic::BattleEntities::ActionChangedEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERCHILDOBJECTACTIVATORBYBEHAVIORTYPE_APPLYACTIONCHANGED_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERCHILDOBJECTACTIVATORBYBEHAVIORTYPE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Start()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERCHILDOBJECTACTIVATORBYBEHAVIORTYPE_START_OFFSET))(nullptr);
		}

	};

