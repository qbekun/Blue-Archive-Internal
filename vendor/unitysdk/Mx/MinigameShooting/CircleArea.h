#pragma once
#include "../../unitysdk.h"

namespace UnityEngine { class Vector3; }

#define MX_MINIGAMESHOOTING_CIRCLEAREA_GETCONTAINSCHARACTERS_OFFSET UNITYSDK_OFFSET(0x14522D0)
#define MX_MINIGAMESHOOTING_CIRCLEAREA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1452830)

namespace MX::MinigameShooting
{
	inline static constexpr unsigned int CircleArea_TypeDefinitionIndex = 15002;

	class CircleArea : public EmailAddress
	{
	public:
		::System::Single Radius; // 0x20

		Il2CppObject* GetContainsCharacters(::UnityEngine::Vector3* arg, ::UnityEngine::Vector3* arg2)
		{
			return ((Il2CppObject*(*)(::UnityEngine::Vector3*, ::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_CIRCLEAREA_GETCONTAINSCHARACTERS_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_CIRCLEAREA_.CTOR_OFFSET))(nullptr);
		}

	};
}

