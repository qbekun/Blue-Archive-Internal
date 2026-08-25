#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::Rendering::Universal { class TEdge; }
namespace UnityEngine::Rendering::Universal { class IntPoint; }

#define UNITYENGINE_RENDERING_UNIVERSAL_INTERSECTNODE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9FF9B50)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int IntersectNode_TypeDefinitionIndex = 32444;

	class IntersectNode : public Il2CppObject
	{
	public:
		::UnityEngine::Rendering::Universal::TEdge* Edge1; // 0x10
		::UnityEngine::Rendering::Universal::TEdge* Edge2; // 0x18
		::UnityEngine::Rendering::Universal::IntPoint* Pt; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERSECTNODE_.CTOR_OFFSET))(nullptr);
		}

	};
}

