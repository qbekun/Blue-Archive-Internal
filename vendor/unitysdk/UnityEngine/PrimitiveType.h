#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class PrimitiveType; }

namespace UnityEngine
{
	inline static constexpr unsigned int PrimitiveType_TypeDefinitionIndex = 30933;

	class PrimitiveType : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::PrimitiveType* Sphere; // 0x0
		::UnityEngine::PrimitiveType* Capsule; // 0x0
		::UnityEngine::PrimitiveType* Cylinder; // 0x0
		::UnityEngine::PrimitiveType* Cube; // 0x0
		::UnityEngine::PrimitiveType* Plane; // 0x0
		::UnityEngine::PrimitiveType* Quad; // 0x0

	};
}

