#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Material; }

#define IRENDERERFEATUREWITHMATERIAL_GETFEATUREMATERIAL_OFFSET UNITYSDK_OFFSET(0x000000)

	inline static constexpr unsigned int IRendererFeatureWithMaterial_TypeDefinitionIndex = 32414;

	class IRendererFeatureWithMaterial : public Il2CppObject
	{
	public:
		::UnityEngine::Material* GetFeatureMaterial()
		{
			return (return (::UnityEngine::Material*(*)(::PVOID))((::PBYTE)hIl2Cpp + IRENDERERFEATUREWITHMATERIAL_GETFEATUREMATERIAL_OFFSET))(nullptr);
		}

	};

