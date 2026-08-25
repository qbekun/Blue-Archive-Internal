#pragma once
#include "../../unitysdk.h"

namespace UnityEngine { class RuntimeInitializeLoadType; }
namespace NPA::Ex { class IPlatformBootstrap; }

#define NPA_EX_BOOTSTRAPENTRYPOINT_ONSUBSYSTEMREGISTRATION_OFFSET UNITYSDK_OFFSET(0x9D1E120)
#define NPA_EX_BOOTSTRAPENTRYPOINT_CONFIGUREREGISTRATIONS_OFFSET UNITYSDK_OFFSET(0x9D1E220)
#define NPA_EX_BOOTSTRAPENTRYPOINT_BOOTSTRAP_OFFSET UNITYSDK_OFFSET(0x9D1E6E0)
#define NPA_EX_BOOTSTRAPENTRYPOINT_ONBEFORESPLASHSCREEN_OFFSET UNITYSDK_OFFSET(0x9D1EBB0)
#define NPA_EX_BOOTSTRAPENTRYPOINT_ONAFTERSCENELOAD_OFFSET UNITYSDK_OFFSET(0x9D1EBC0)
#define NPA_EX_BOOTSTRAPENTRYPOINT_ONBEFORESCENELOAD_OFFSET UNITYSDK_OFFSET(0x9D1EBD0)

namespace NPA::Ex
{
	inline static constexpr unsigned int BootstrapEntrypoint_TypeDefinitionIndex = 25988;

	class BootstrapEntrypoint : public Il2CppObject
	{
	public:
		::System::Boolean isConfigured; // 0x0
		::UnityEngine::RuntimeInitializeLoadType* Registration; // 0x0
		::UnityEngine::RuntimeInitializeLoadType* Configuration; // 0x0

		::System::Void OnSubsystemRegistration()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_BOOTSTRAPENTRYPOINT_ONSUBSYSTEMREGISTRATION_OFFSET))(nullptr);
		}

		::System::Void ConfigureRegistrations()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_BOOTSTRAPENTRYPOINT_CONFIGUREREGISTRATIONS_OFFSET))(nullptr);
		}

		::System::Boolean Bootstrap(::NPA::Ex::IPlatformBootstrap* arg)
		{
			return (return (::System::Boolean(*)(::NPA::Ex::IPlatformBootstrap*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_BOOTSTRAPENTRYPOINT_BOOTSTRAP_OFFSET))(arg, nullptr);
		}

		::System::Void OnBeforeSplashScreen()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_BOOTSTRAPENTRYPOINT_ONBEFORESPLASHSCREEN_OFFSET))(nullptr);
		}

		::System::Void OnAfterSceneLoad()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_BOOTSTRAPENTRYPOINT_ONAFTERSCENELOAD_OFFSET))(nullptr);
		}

		::System::Void OnBeforeSceneLoad()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_BOOTSTRAPENTRYPOINT_ONBEFORESCENELOAD_OFFSET))(nullptr);
		}

	};
}

