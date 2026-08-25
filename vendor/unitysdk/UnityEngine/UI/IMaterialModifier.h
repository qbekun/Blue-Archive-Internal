#pragma once
#include "../../unitysdk.h"

namespace UnityEngine { class Material; }

#define UNITYENGINE_UI_IMATERIALMODIFIER_GETMODIFIEDMATERIAL_OFFSET UNITYSDK_OFFSET(0x000000)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int IMaterialModifier_TypeDefinitionIndex = 34826;

	class IMaterialModifier : public Il2CppObject
	{
	public:
		::UnityEngine::Material* GetModifiedMaterial(::UnityEngine::Material* arg)
		{
			return (return (::UnityEngine::Material*(*)(::UnityEngine::Material*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_IMATERIALMODIFIER_GETMODIFIEDMATERIAL_OFFSET))(arg, nullptr);
		}

	};
}

