#pragma once
#include "../../unitysdk.h"

namespace UnityEngine { class Vector3; }

#define MX_MINIGAMESHOOTING_PHYSICSCIRCLE_CONTAINS_OFFSET UNITYSDK_OFFSET(0x1452800)
#define MX_MINIGAMESHOOTING_PHYSICSCIRCLE_.CTOR_OFFSET UNITYSDK_OFFSET(0x14527C0)

namespace MX::MinigameShooting
{
	inline static constexpr unsigned int PhysicsCircle_TypeDefinitionIndex = 15007;

	class PhysicsCircle : public Il2CppObject
	{
	public:
		::UnityEngine::Vector3* Center; // 0x10
		::System::Single Radius; // 0x1C

		Il2CppObject* Contains(::System::Int32 arg)
		{
			return ((Il2CppObject*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_PHYSICSCIRCLE_CONTAINS_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::UnityEngine::Vector3* arg, ::System::Single arg2)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_PHYSICSCIRCLE_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

	};
}

