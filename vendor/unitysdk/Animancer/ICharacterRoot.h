#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class Transform; }

#define ANIMANCER_ICHARACTERROOT_GET_TRANSFORM_OFFSET UNITYSDK_OFFSET(0x000000)

namespace Animancer
{
	inline static constexpr unsigned int ICharacterRoot_TypeDefinitionIndex = 35146;

	class ICharacterRoot : public Il2CppObject
	{
	public:
		::UnityEngine::Transform* get_transform()
		{
			return (return (::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ICHARACTERROOT_GET_TRANSFORM_OFFSET))(nullptr);
		}

	};
}

