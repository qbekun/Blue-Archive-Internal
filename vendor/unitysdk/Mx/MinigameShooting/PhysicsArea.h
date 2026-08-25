#pragma once
#include "../../unitysdk.h"

#define MX_MINIGAMESHOOTING_PHYSICSAREA_CONTAINS_OFFSET UNITYSDK_OFFSET(0x000000)

namespace MX::MinigameShooting
{
	inline static constexpr unsigned int PhysicsArea_TypeDefinitionIndex = 15005;

	class PhysicsArea : public Il2CppObject
	{
	public:
		Il2CppObject* Contains(::System::Int32 arg)
		{
			return ((Il2CppObject*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_PHYSICSAREA_CONTAINS_OFFSET))(arg, nullptr);
		}

	};
}

