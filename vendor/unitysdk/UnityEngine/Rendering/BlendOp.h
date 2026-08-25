#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::Rendering { class BlendOp; }

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int BlendOp_TypeDefinitionIndex = 31490;

	class BlendOp : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::Rendering::BlendOp* Add; // 0x0
		::UnityEngine::Rendering::BlendOp* Subtract; // 0x0
		::UnityEngine::Rendering::BlendOp* ReverseSubtract; // 0x0
		::UnityEngine::Rendering::BlendOp* Min; // 0x0
		::UnityEngine::Rendering::BlendOp* Max; // 0x0
		::UnityEngine::Rendering::BlendOp* LogicalClear; // 0x0
		::UnityEngine::Rendering::BlendOp* LogicalSet; // 0x0
		::UnityEngine::Rendering::BlendOp* LogicalCopy; // 0x0
		::UnityEngine::Rendering::BlendOp* LogicalCopyInverted; // 0x0
		::UnityEngine::Rendering::BlendOp* LogicalNoop; // 0x0
		::UnityEngine::Rendering::BlendOp* LogicalInvert; // 0x0
		::UnityEngine::Rendering::BlendOp* LogicalAnd; // 0x0
		::UnityEngine::Rendering::BlendOp* LogicalNand; // 0x0
		::UnityEngine::Rendering::BlendOp* LogicalOr; // 0x0
		::UnityEngine::Rendering::BlendOp* LogicalNor; // 0x0
		::UnityEngine::Rendering::BlendOp* LogicalXor; // 0x0
		::UnityEngine::Rendering::BlendOp* LogicalEquivalence; // 0x0
		::UnityEngine::Rendering::BlendOp* LogicalAndReverse; // 0x0
		::UnityEngine::Rendering::BlendOp* LogicalAndInverted; // 0x0
		::UnityEngine::Rendering::BlendOp* LogicalOrReverse; // 0x0
		::UnityEngine::Rendering::BlendOp* LogicalOrInverted; // 0x0
		::UnityEngine::Rendering::BlendOp* Multiply; // 0x0
		::UnityEngine::Rendering::BlendOp* Screen; // 0x0
		::UnityEngine::Rendering::BlendOp* Overlay; // 0x0
		::UnityEngine::Rendering::BlendOp* Darken; // 0x0
		::UnityEngine::Rendering::BlendOp* Lighten; // 0x0
		::UnityEngine::Rendering::BlendOp* ColorDodge; // 0x0
		::UnityEngine::Rendering::BlendOp* ColorBurn; // 0x0
		::UnityEngine::Rendering::BlendOp* HardLight; // 0x0
		::UnityEngine::Rendering::BlendOp* SoftLight; // 0x0
		::UnityEngine::Rendering::BlendOp* Difference; // 0x0
		::UnityEngine::Rendering::BlendOp* Exclusion; // 0x0
		::UnityEngine::Rendering::BlendOp* HSLHue; // 0x0
		::UnityEngine::Rendering::BlendOp* HSLSaturation; // 0x0
		::UnityEngine::Rendering::BlendOp* HSLColor; // 0x0
		::UnityEngine::Rendering::BlendOp* HSLLuminosity; // 0x0

	};
}

