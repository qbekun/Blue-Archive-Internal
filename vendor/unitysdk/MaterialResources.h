#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Material; }

#define MATERIALRESOURCES_.CTOR_OFFSET UNITYSDK_OFFSET(0xA02D150)

	inline static constexpr unsigned int MaterialResources_TypeDefinitionIndex = 32525;

	class MaterialResources : public Il2CppObject
	{
	public:
		::UnityEngine::Material* lit; // 0x10
		::UnityEngine::Material* particleLit; // 0x18
		::UnityEngine::Material* terrainLit; // 0x20
		::UnityEngine::Material* decal; // 0x28

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MATERIALRESOURCES_.CTOR_OFFSET))(nullptr);
		}

	};

