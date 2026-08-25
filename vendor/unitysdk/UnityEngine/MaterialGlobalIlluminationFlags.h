#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class MaterialGlobalIlluminationFlags; }

namespace UnityEngine
{
	inline static constexpr unsigned int MaterialGlobalIlluminationFlags_TypeDefinitionIndex = 31055;

	class MaterialGlobalIlluminationFlags : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::MaterialGlobalIlluminationFlags* None; // 0x0
		::UnityEngine::MaterialGlobalIlluminationFlags* RealtimeEmissive; // 0x0
		::UnityEngine::MaterialGlobalIlluminationFlags* BakedEmissive; // 0x0
		::UnityEngine::MaterialGlobalIlluminationFlags* EmissiveIsBlack; // 0x0
		::UnityEngine::MaterialGlobalIlluminationFlags* AnyEmissive; // 0x0

	};
}

