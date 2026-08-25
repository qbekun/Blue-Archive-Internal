#pragma once
#include "../../../../unitysdk.h"

namespace UnityEngine::Rendering::Universal::LibTessDotNet { class ElementType; }

namespace UnityEngine::Rendering::Universal::LibTessDotNet
{
	inline static constexpr unsigned int ElementType_TypeDefinitionIndex = 32840;

	class ElementType : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::Rendering::Universal::LibTessDotNet::ElementType* Polygons; // 0x0
		::UnityEngine::Rendering::Universal::LibTessDotNet::ElementType* ConnectedPolygons; // 0x0
		::UnityEngine::Rendering::Universal::LibTessDotNet::ElementType* BoundaryContours; // 0x0

	};
}

