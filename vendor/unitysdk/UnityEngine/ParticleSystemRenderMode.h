#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class ParticleSystemRenderMode; }

namespace UnityEngine
{
	inline static constexpr unsigned int ParticleSystemRenderMode_TypeDefinitionIndex = 36952;

	class ParticleSystemRenderMode : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::ParticleSystemRenderMode* Billboard; // 0x0
		::UnityEngine::ParticleSystemRenderMode* Stretch; // 0x0
		::UnityEngine::ParticleSystemRenderMode* HorizontalBillboard; // 0x0
		::UnityEngine::ParticleSystemRenderMode* VerticalBillboard; // 0x0
		::UnityEngine::ParticleSystemRenderMode* Mesh; // 0x0
		::UnityEngine::ParticleSystemRenderMode* None; // 0x0

	};
}

