#pragma once
#include "unitysdk.h"

namespace NPA::Editor { class IExternalPlatform; }

#define BOOTSTRAP_ISALLOWED_OFFSET UNITYSDK_OFFSET(0x9D2B7F0)
#define BOOTSTRAP_LOADDEPENDENCIES_OFFSET UNITYSDK_OFFSET(0x9D2B860)
#define BOOTSTRAP_UNLOADDEPENDENCIES_OFFSET UNITYSDK_OFFSET(0x9D2B870)
#define BOOTSTRAP_ACTIVATEBACKEND_OFFSET UNITYSDK_OFFSET(0x9D2B880)
#define BOOTSTRAP_DEACTIVATEBACKEND_OFFSET UNITYSDK_OFFSET(0x9D2B890)
#define BOOTSTRAP_GETPLATFORMFACTORY_OFFSET UNITYSDK_OFFSET(0x9D2B8A0)
#define BOOTSTRAP_SPAWN_OFFSET UNITYSDK_OFFSET(0x9D2B910)
#define BOOTSTRAP_.CTOR_OFFSET UNITYSDK_OFFSET(0x9D2B7E0)

	inline static constexpr unsigned int Bootstrap_TypeDefinitionIndex = 26039;

	class Bootstrap : public Il2CppObject
	{
	public:
		::System::Boolean IsAllowed()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BOOTSTRAP_ISALLOWED_OFFSET))(nullptr);
		}

		::System::Boolean LoadDependencies()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BOOTSTRAP_LOADDEPENDENCIES_OFFSET))(nullptr);
		}

		::System::Boolean UnloadDependencies()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BOOTSTRAP_UNLOADDEPENDENCIES_OFFSET))(nullptr);
		}

		::System::Boolean ActivateBackend()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BOOTSTRAP_ACTIVATEBACKEND_OFFSET))(nullptr);
		}

		::System::Boolean DeactivateBackend()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BOOTSTRAP_DEACTIVATEBACKEND_OFFSET))(nullptr);
		}

		Il2CppObject* GetPlatformFactory()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + BOOTSTRAP_GETPLATFORMFACTORY_OFFSET))(nullptr);
		}

		::NPA::Editor::IExternalPlatform* Spawn()
		{
			return (return (::NPA::Editor::IExternalPlatform*(*)(::PVOID))((::PBYTE)hIl2Cpp + BOOTSTRAP_SPAWN_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BOOTSTRAP_.CTOR_OFFSET))(nullptr);
		}

	};

