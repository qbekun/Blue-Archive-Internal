#pragma once
#include "../../../../unitysdk.h"

namespace UnityEngine { class RenderTexture; }
namespace Cysharp::Threading::Tasks::Triggers { class IAsyncOnRenderImageHandler; }

#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCRENDERIMAGETRIGGER_ONRENDERIMAGE_OFFSET UNITYSDK_OFFSET(0x9DEB540)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCRENDERIMAGETRIGGER_GETONRENDERIMAGEASYNCHANDLER_OFFSET UNITYSDK_OFFSET(0x9DEB5C0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCRENDERIMAGETRIGGER_GETONRENDERIMAGEASYNCHANDLER_OFFSET UNITYSDK_OFFSET(0x9DEB630)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCRENDERIMAGETRIGGER_ONRENDERIMAGEASYNC_OFFSET UNITYSDK_OFFSET(0x9DEB6B0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCRENDERIMAGETRIGGER_ONRENDERIMAGEASYNC_OFFSET UNITYSDK_OFFSET(0x9DEB790)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCRENDERIMAGETRIGGER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9DEB880)

namespace Cysharp::Threading::Tasks::Triggers
{
	inline static constexpr unsigned int AsyncRenderImageTrigger_TypeDefinitionIndex = 36062;

	class AsyncRenderImageTrigger : public ::FlatData::OpenCondition
	{
	public:
		::System::Void OnRenderImage(::UnityEngine::RenderTexture* arg, ::UnityEngine::RenderTexture* arg)
		{
			((::System::Void(*)(::UnityEngine::RenderTexture*, ::UnityEngine::RenderTexture*, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCRENDERIMAGETRIGGER_ONRENDERIMAGE_OFFSET))(arg, arg, nullptr);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnRenderImageHandler* GetOnRenderImageAsyncHandler()
		{
			return (return (::Cysharp::Threading::Tasks::Triggers::IAsyncOnRenderImageHandler*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCRENDERIMAGETRIGGER_GETONRENDERIMAGEASYNCHANDLER_OFFSET))(nullptr);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnRenderImageHandler* GetOnRenderImageAsyncHandler(::System::Threading::CancellationToken* arg)
		{
			return (return (::Cysharp::Threading::Tasks::Triggers::IAsyncOnRenderImageHandler*(*)(::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCRENDERIMAGETRIGGER_GETONRENDERIMAGEASYNCHANDLER_OFFSET))(arg, nullptr);
		}

		Il2CppObject* OnRenderImageAsync()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCRENDERIMAGETRIGGER_ONRENDERIMAGEASYNC_OFFSET))(nullptr);
		}

		Il2CppObject* OnRenderImageAsync(::System::Threading::CancellationToken* arg)
		{
			return (return (Il2CppObject*(*)(::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCRENDERIMAGETRIGGER_ONRENDERIMAGEASYNC_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCRENDERIMAGETRIGGER_.CTOR_OFFSET))(nullptr);
		}

	};
}

