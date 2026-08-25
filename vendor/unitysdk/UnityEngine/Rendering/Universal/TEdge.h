#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::Rendering::Universal { class IntPoint; }
namespace UnityEngine::Rendering::Universal { class PolyType; }
namespace UnityEngine::Rendering::Universal { class EdgeSide; }
namespace UnityEngine::Rendering::Universal { class TEdge; }

#define UNITYENGINE_RENDERING_UNIVERSAL_TEDGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9FF9B40)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int TEdge_TypeDefinitionIndex = 32443;

	class TEdge : public Il2CppObject
	{
	public:
		::UnityEngine::Rendering::Universal::IntPoint* Bot; // 0x10
		::UnityEngine::Rendering::Universal::IntPoint* Curr; // 0x40
		::UnityEngine::Rendering::Universal::IntPoint* Top; // 0x70
		::UnityEngine::Rendering::Universal::IntPoint* Delta; // 0xA0
		::System::Double Dx; // 0xD0
		::UnityEngine::Rendering::Universal::PolyType* PolyTyp; // 0xD8
		::UnityEngine::Rendering::Universal::EdgeSide* Side; // 0xDC
		::System::Int32 WindDelta; // 0xE0
		::System::Int32 WindCnt; // 0xE4
		::System::Int32 WindCnt2; // 0xE8
		::System::Int32 OutIdx; // 0xEC
		::UnityEngine::Rendering::Universal::TEdge* Next; // 0xF0
		::UnityEngine::Rendering::Universal::TEdge* Prev; // 0xF8
		::UnityEngine::Rendering::Universal::TEdge* NextInLML; // 0x100
		::UnityEngine::Rendering::Universal::TEdge* NextInAEL; // 0x108
		::UnityEngine::Rendering::Universal::TEdge* PrevInAEL; // 0x110
		::UnityEngine::Rendering::Universal::TEdge* NextInSEL; // 0x118
		::UnityEngine::Rendering::Universal::TEdge* PrevInSEL; // 0x120

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_TEDGE_.CTOR_OFFSET))(nullptr);
		}

	};
}

