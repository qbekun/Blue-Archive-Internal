#pragma once
#include "../../unitysdk.h"

namespace UnityEngine { class Vector3; }

#define MX_MINIGAMESHOOTING_PHYSICSBOX_.CTOR_OFFSET UNITYSDK_OFFSET(0x1453D00)
#define MX_MINIGAMESHOOTING_PHYSICSBOX_CONTAINS_OFFSET UNITYSDK_OFFSET(0x1453E40)

namespace MX::MinigameShooting
{
	inline static constexpr unsigned int PhysicsBox_TypeDefinitionIndex = 15006;

	class PhysicsBox : public Il2CppObject
	{
	public:
		::UnityEngine::Vector3* Center; // 0x10
		::UnityEngine::Vector3* Forward; // 0x1C
		::System::Single Width; // 0x28
		::System::Single Height; // 0x2C

		::System::Void .ctor(::UnityEngine::Vector3* arg, ::UnityEngine::Vector3* arg2, ::System::Single arg3, ::System::Single arg4)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::UnityEngine::Vector3*, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_PHYSICSBOX_.CTOR_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		Il2CppObject* Contains(::System::Int32 arg)
		{
			return ((Il2CppObject*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_PHYSICSBOX_CONTAINS_OFFSET))(arg, nullptr);
		}

	};
}

