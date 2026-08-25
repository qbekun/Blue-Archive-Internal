#pragma once
#include "../../unitysdk.h"

namespace NPA::Engine { class TickerObject; }
namespace NPA::Engine { class IUpdatable; }
namespace NPA::Engine { class ITickerObject; }

#define NPA_ENGINE_TICKSYSTEM_ONDOMAINRESET_OFFSET UNITYSDK_OFFSET(0x9CD5050)
#define NPA_ENGINE_TICKSYSTEM_ADD_OFFSET UNITYSDK_OFFSET(0x9CD51F0)
#define NPA_ENGINE_TICKSYSTEM_REMOVE_OFFSET UNITYSDK_OFFSET(0x9CD56A0)
#define NPA_ENGINE_TICKSYSTEM_BOOTSTRAP_OFFSET UNITYSDK_OFFSET(0x9CD5540)
#define NPA_ENGINE_TICKSYSTEM_GETENTITIES_OFFSET UNITYSDK_OFFSET(0x9CD4E80)
#define NPA_ENGINE_TICKSYSTEM_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9CD5920)

namespace NPA::Engine
{
	inline static constexpr unsigned int TickSystem_TypeDefinitionIndex = 27455;

	class TickSystem : public Il2CppObject
	{
	public:
		::System::Object* Lock; // 0x0
		Il2CppObject* TargetList; // 0x8
		::NPA::Engine::TickerObject* _tickerObject; // 0x10

		::System::Void OnDomainReset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_ENGINE_TICKSYSTEM_ONDOMAINRESET_OFFSET))(nullptr);
		}

		EResult* Add(::NPA::Engine::IUpdatable* arg)
		{
			return (return (EResult*(*)(::NPA::Engine::IUpdatable*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_ENGINE_TICKSYSTEM_ADD_OFFSET))(arg, nullptr);
		}

		EResult* Remove(::NPA::Engine::IUpdatable* arg)
		{
			return (return (EResult*(*)(::NPA::Engine::IUpdatable*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_ENGINE_TICKSYSTEM_REMOVE_OFFSET))(arg, nullptr);
		}

		::System::Void Bootstrap()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_ENGINE_TICKSYSTEM_BOOTSTRAP_OFFSET))(nullptr);
		}

		Il2CppObject* GetEntities(::NPA::Engine::ITickerObject* arg)
		{
			return (return (Il2CppObject*(*)(::NPA::Engine::ITickerObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_ENGINE_TICKSYSTEM_GETENTITIES_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_ENGINE_TICKSYSTEM_.CCTOR_OFFSET))(nullptr);
		}

	};
}

