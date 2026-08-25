#pragma once
#include "../../unitysdk.h"

namespace UnityEngine { class Vector3; }

#define MX_MINIGAMESHOOTING_OBBAREA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1453740)
#define MX_MINIGAMESHOOTING_OBBAREA_GETCONTAINSCHARACTERS_OFFSET UNITYSDK_OFFSET(0x1453750)

namespace MX::MinigameShooting
{
	inline static constexpr unsigned int OBBArea_TypeDefinitionIndex = 15004;

	class OBBArea : public EmailAddress
	{
	public:
		::System::Single Width; // 0x20
		::System::Single Height; // 0x24

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_OBBAREA_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* GetContainsCharacters(::UnityEngine::Vector3* arg, ::UnityEngine::Vector3* arg2)
		{
			return ((Il2CppObject*(*)(::UnityEngine::Vector3*, ::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_OBBAREA_GETCONTAINSCHARACTERS_OFFSET))(arg, arg2, nullptr);
		}

	};
}

