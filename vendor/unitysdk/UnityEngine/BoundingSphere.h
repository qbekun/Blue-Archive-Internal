#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class Vector3; }

#define UNITYENGINE_BOUNDINGSPHERE_.CTOR_OFFSET UNITYSDK_OFFSET(0xA1EA380)

namespace UnityEngine
{
	inline static constexpr unsigned int BoundingSphere_TypeDefinitionIndex = 30964;

	class BoundingSphere : public Il2CppObject
	{
	public:
		::UnityEngine::Vector3* position; // 0x10
		::System::Single radius; // 0x1C

		::System::Void .ctor(::UnityEngine::Vector3* arg, ::System::Single arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_BOUNDINGSPHERE_.CTOR_OFFSET))(arg, arg, nullptr);
		}

	};
}

