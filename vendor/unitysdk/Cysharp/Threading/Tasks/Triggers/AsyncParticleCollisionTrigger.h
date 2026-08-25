#pragma once
#include "../../../../unitysdk.h"

namespace UnityEngine { class GameObject; }
namespace Cysharp::Threading::Tasks::Triggers { class IAsyncOnParticleCollisionHandler; }

#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPARTICLECOLLISIONTRIGGER_ONPARTICLECOLLISION_OFFSET UNITYSDK_OFFSET(0x9DE96F0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPARTICLECOLLISIONTRIGGER_GETONPARTICLECOLLISIONASYNCHANDLER_OFFSET UNITYSDK_OFFSET(0x9DE9740)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPARTICLECOLLISIONTRIGGER_GETONPARTICLECOLLISIONASYNCHANDLER_OFFSET UNITYSDK_OFFSET(0x9DE97B0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPARTICLECOLLISIONTRIGGER_ONPARTICLECOLLISIONASYNC_OFFSET UNITYSDK_OFFSET(0x9DE9830)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPARTICLECOLLISIONTRIGGER_ONPARTICLECOLLISIONASYNC_OFFSET UNITYSDK_OFFSET(0x9DE9910)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPARTICLECOLLISIONTRIGGER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9DE9A00)

namespace Cysharp::Threading::Tasks::Triggers
{
	inline static constexpr unsigned int AsyncParticleCollisionTrigger_TypeDefinitionIndex = 36044;

	class AsyncParticleCollisionTrigger : public ::FlatData::ContentResultType
	{
	public:
		::System::Void OnParticleCollision(::UnityEngine::GameObject* arg)
		{
			((::System::Void(*)(::UnityEngine::GameObject*, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPARTICLECOLLISIONTRIGGER_ONPARTICLECOLLISION_OFFSET))(arg, nullptr);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnParticleCollisionHandler* GetOnParticleCollisionAsyncHandler()
		{
			return (return (::Cysharp::Threading::Tasks::Triggers::IAsyncOnParticleCollisionHandler*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPARTICLECOLLISIONTRIGGER_GETONPARTICLECOLLISIONASYNCHANDLER_OFFSET))(nullptr);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnParticleCollisionHandler* GetOnParticleCollisionAsyncHandler(::System::Threading::CancellationToken* arg)
		{
			return (return (::Cysharp::Threading::Tasks::Triggers::IAsyncOnParticleCollisionHandler*(*)(::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPARTICLECOLLISIONTRIGGER_GETONPARTICLECOLLISIONASYNCHANDLER_OFFSET))(arg, nullptr);
		}

		Il2CppObject* OnParticleCollisionAsync()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPARTICLECOLLISIONTRIGGER_ONPARTICLECOLLISIONASYNC_OFFSET))(nullptr);
		}

		Il2CppObject* OnParticleCollisionAsync(::System::Threading::CancellationToken* arg)
		{
			return (return (Il2CppObject*(*)(::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPARTICLECOLLISIONTRIGGER_ONPARTICLECOLLISIONASYNC_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPARTICLECOLLISIONTRIGGER_.CTOR_OFFSET))(nullptr);
		}

	};
}

