#pragma once
#include "../../unitysdk.h"

namespace UnityEngine { class Vector3; }

#define MX_MINIGAMESHOOTING_PHYSICSFAN_.CTOR_OFFSET UNITYSDK_OFFSET(0x1452D30)
#define MX_MINIGAMESHOOTING_PHYSICSFAN_CONTAINS_OFFSET UNITYSDK_OFFSET(0x1452E60)

namespace MX::MinigameShooting
{
	inline static constexpr unsigned int PhysicsFan_TypeDefinitionIndex = 15008;

	class PhysicsFan : public Il2CppObject
	{
	public:
		::UnityEngine::Vector3* Center; // 0x10
		::UnityEngine::Vector3* Forward; // 0x1C
		::System::Single Radius; // 0x28
		::System::Int32 Degree; // 0x2C

		::System::Void .ctor(::UnityEngine::Vector3* arg, ::UnityEngine::Vector3* arg2, ::System::Single arg3, ::System::Int32 arg4)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::UnityEngine::Vector3*, ::System::Single, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_PHYSICSFAN_.CTOR_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		Il2CppObject* Contains(::System::Int32 arg)
		{
			return ((Il2CppObject*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_PHYSICSFAN_CONTAINS_OFFSET))(arg, nullptr);
		}

	};
}

