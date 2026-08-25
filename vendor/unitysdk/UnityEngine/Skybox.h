#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class Material; }

#define UNITYENGINE_SKYBOX_GET_MATERIAL_OFFSET UNITYSDK_OFFSET(0xA206920)

namespace UnityEngine
{
	inline static constexpr unsigned int Skybox_TypeDefinitionIndex = 31021;

	class Skybox : public Il2CppObject
	{
	public:
		::UnityEngine::Material* get_material()
		{
			return (return (::UnityEngine::Material*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SKYBOX_GET_MATERIAL_OFFSET))(nullptr);
		}

	};
}

