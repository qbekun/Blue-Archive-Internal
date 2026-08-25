#pragma once
#include "../../../../unitysdk.h"

namespace UnityEngine::Rendering::Universal::Internal { class StencilUsage; }

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int StencilUsage_TypeDefinitionIndex = 32892;

	class StencilUsage : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::Rendering::Universal::Internal::StencilUsage* UserMask; // 0x0
		::UnityEngine::Rendering::Universal::Internal::StencilUsage* StencilLight; // 0x0
		::UnityEngine::Rendering::Universal::Internal::StencilUsage* MaterialMask; // 0x0
		::UnityEngine::Rendering::Universal::Internal::StencilUsage* MaterialUnlit; // 0x0
		::UnityEngine::Rendering::Universal::Internal::StencilUsage* MaterialLit; // 0x0
		::UnityEngine::Rendering::Universal::Internal::StencilUsage* MaterialSimpleLit; // 0x0

	};
}

