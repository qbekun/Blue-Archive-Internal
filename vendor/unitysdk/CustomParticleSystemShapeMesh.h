#pragma once
#include "unitysdk.h"

namespace UnityEngine { class ParticleSystem; }
class CustomParticleSystemShapeMeshScriptableObject;

#define CUSTOMPARTICLESYSTEMSHAPEMESH_.CTOR_OFFSET UNITYSDK_OFFSET(0x20B3970)
#define CUSTOMPARTICLESYSTEMSHAPEMESH_ONVALIDATE_OFFSET UNITYSDK_OFFSET(0x20B3980)
#define CUSTOMPARTICLESYSTEMSHAPEMESH_INIT_OFFSET UNITYSDK_OFFSET(0x20B3A20)
#define CUSTOMPARTICLESYSTEMSHAPEMESH_ONENABLE_OFFSET UNITYSDK_OFFSET(0x20B3BA0)

	inline static constexpr unsigned int CustomParticleSystemShapeMesh_TypeDefinitionIndex = 3591;

	class CustomParticleSystemShapeMesh : public Il2CppObject
	{
	public:
		::UnityEngine::ParticleSystem* SelfParticleSystem; // 0x18
		CustomParticleSystemShapeMeshScriptableObject* CustomMeshScriptableObject; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMPARTICLESYSTEMSHAPEMESH_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnValidate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMPARTICLESYSTEMSHAPEMESH_ONVALIDATE_OFFSET))(nullptr);
		}

		::System::Void Init()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMPARTICLESYSTEMSHAPEMESH_INIT_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMPARTICLESYSTEMSHAPEMESH_ONENABLE_OFFSET))(nullptr);
		}

	};

