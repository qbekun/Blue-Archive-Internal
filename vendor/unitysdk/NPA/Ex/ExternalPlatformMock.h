#pragma once
#include "../../unitysdk.h"

namespace NPA::Editor { class IExternalPlatform; }

#define NPA_EX_EXTERNALPLATFORMMOCK_SPAWN_OFFSET UNITYSDK_OFFSET(0x9D1CEA0)
#define NPA_EX_EXTERNALPLATFORMMOCK_.CTOR_OFFSET UNITYSDK_OFFSET(0x9D1CEF0)

namespace NPA::Ex
{
	inline static constexpr unsigned int ExternalPlatformMock_TypeDefinitionIndex = 25977;

	class ExternalPlatformMock : public Il2CppObject
	{
	public:
		::NPA::Editor::IExternalPlatform* Spawn()
		{
			return (return (::NPA::Editor::IExternalPlatform*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_EXTERNALPLATFORMMOCK_SPAWN_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_EXTERNALPLATFORMMOCK_.CTOR_OFFSET))(nullptr);
		}

	};
}

