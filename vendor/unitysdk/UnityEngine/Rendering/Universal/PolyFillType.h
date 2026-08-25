#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::Rendering::Universal { class PolyFillType; }

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int PolyFillType_TypeDefinitionIndex = 32438;

	class PolyFillType : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::Rendering::Universal::PolyFillType* pftEvenOdd; // 0x0
		::UnityEngine::Rendering::Universal::PolyFillType* pftNonZero; // 0x0
		::UnityEngine::Rendering::Universal::PolyFillType* pftPositive; // 0x0
		::UnityEngine::Rendering::Universal::PolyFillType* pftNegative; // 0x0

	};
}

