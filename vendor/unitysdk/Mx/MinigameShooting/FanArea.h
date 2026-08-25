#pragma once
#include "../../unitysdk.h"

namespace UnityEngine { class Vector3; }

#define MX_MINIGAMESHOOTING_FANAREA_GETCONTAINSCHARACTERS_OFFSET UNITYSDK_OFFSET(0x1452840)
#define MX_MINIGAMESHOOTING_FANAREA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1453730)

namespace MX::MinigameShooting
{
	inline static constexpr unsigned int FanArea_TypeDefinitionIndex = 15003;

	class FanArea : public EmailAddress
	{
	public:
		::System::Single Radius; // 0x20
		::System::Int32 Degree; // 0x24

		Il2CppObject* GetContainsCharacters(::UnityEngine::Vector3* arg, ::UnityEngine::Vector3* arg2)
		{
			return ((Il2CppObject*(*)(::UnityEngine::Vector3*, ::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_FANAREA_GETCONTAINSCHARACTERS_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_FANAREA_.CTOR_OFFSET))(nullptr);
		}

	};
}

