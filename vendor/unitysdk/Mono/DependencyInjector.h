#pragma once
#include "../unitysdk.h"

namespace Mono { class ISystemDependencyProvider; }

#define MONO_DEPENDENCYINJECTOR_GET_SYSTEMPROVIDER_OFFSET UNITYSDK_OFFSET(0x91206D0)
#define MONO_DEPENDENCYINJECTOR_REGISTER_OFFSET UNITYSDK_OFFSET(0x9120AA0)
#define MONO_DEPENDENCYINJECTOR_REFLECTIONLOAD_OFFSET UNITYSDK_OFFSET(0x9120960)
#define MONO_DEPENDENCYINJECTOR_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9120C80)

namespace Mono
{
	inline static constexpr unsigned int DependencyInjector_TypeDefinitionIndex = 23566;

	class DependencyInjector : public Il2CppObject
	{
	public:
		::System::Object* locker; // 0x0
		::Mono::ISystemDependencyProvider* systemDependency; // 0x8

		::Mono::ISystemDependencyProvider* get_SystemProvider()
		{
			return (return (::Mono::ISystemDependencyProvider*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_DEPENDENCYINJECTOR_GET_SYSTEMPROVIDER_OFFSET))(nullptr);
		}

		::System::Void Register(::Mono::ISystemDependencyProvider* arg)
		{
			((::System::Void(*)(::Mono::ISystemDependencyProvider*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_DEPENDENCYINJECTOR_REGISTER_OFFSET))(arg, nullptr);
		}

		::Mono::ISystemDependencyProvider* ReflectionLoad()
		{
			return (return (::Mono::ISystemDependencyProvider*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_DEPENDENCYINJECTOR_REFLECTIONLOAD_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_DEPENDENCYINJECTOR_.CCTOR_OFFSET))(nullptr);
		}

	};
}

