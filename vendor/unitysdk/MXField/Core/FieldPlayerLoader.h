#pragma once
#include "../../unitysdk.h"

namespace MXField::Core { class FieldPlayerController; }

#define MXFIELD_CORE_FIELDPLAYERLOADER_SPAWN_OFFSET UNITYSDK_OFFSET(0xED72E0)
#define MXFIELD_CORE_FIELDPLAYERLOADER_.CTOR_OFFSET UNITYSDK_OFFSET(0xED7370)

namespace MXField::Core
{
	inline static constexpr unsigned int FieldPlayerLoader_TypeDefinitionIndex = 10952;

	class FieldPlayerLoader : public Il2CppObject
	{
	public:
		::MXField::Core::FieldPlayerController* fieldPlayer; // 0x18

		::MXField::Core::FieldPlayerController* Spawn()
		{
			return ((::MXField::Core::FieldPlayerController*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_FIELDPLAYERLOADER_SPAWN_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_FIELDPLAYERLOADER_.CTOR_OFFSET))(nullptr);
		}

	};
}

