#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Mesh; }

#define CUSTOMPARTICLESYSTEMSHAPEMESHSCRIPTABLEOBJECT_.CTOR_OFFSET UNITYSDK_OFFSET(0x20B3BB0)
#define CUSTOMPARTICLESYSTEMSHAPEMESHSCRIPTABLEOBJECT_GETCUSTOMMESH_OFFSET UNITYSDK_OFFSET(0x20B3AC0)

	inline static constexpr unsigned int CustomParticleSystemShapeMeshScriptableObject_TypeDefinitionIndex = 3592;

	class CustomParticleSystemShapeMeshScriptableObject : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* CachedVertexArray; // 0x18
		::Il2CppArray<::System::Object*>* CachedIndexArray; // 0x20
		::UnityEngine::Mesh* InstanceMeshData; // 0x28

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMPARTICLESYSTEMSHAPEMESHSCRIPTABLEOBJECT_.CTOR_OFFSET))(nullptr);
		}

		::UnityEngine::Mesh* GetCustomMesh()
		{
			return ((::UnityEngine::Mesh*(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMPARTICLESYSTEMSHAPEMESHSCRIPTABLEOBJECT_GETCUSTOMMESH_OFFSET))(nullptr);
		}

	};

