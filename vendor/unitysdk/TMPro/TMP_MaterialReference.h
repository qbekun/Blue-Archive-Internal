#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class Material; }

namespace TMPro
{
	inline static constexpr unsigned int TMP_MaterialReference_TypeDefinitionIndex = 33605;

	class TMP_MaterialReference : public Il2CppObject
	{
	public:
		::UnityEngine::Material* material; // 0x10
		::System::Int32 referenceCount; // 0x18

	};
}

