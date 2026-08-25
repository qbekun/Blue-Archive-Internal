#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Material; }
namespace UnityEngine::Rendering::Universal { class ScriptableRenderer; }
namespace UnityEngine::Rendering::Universal { class RenderingData&; }

#define SIMPLEPOSTBLITFEATURE_GETFEATUREMATERIAL_OFFSET UNITYSDK_OFFSET(0x9FF5CD0)
#define SIMPLEPOSTBLITFEATURE_ADDRENDERPASSES_OFFSET UNITYSDK_OFFSET(0x9FF5CF0)
#define SIMPLEPOSTBLITFEATURE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9FF5E20)
#define SIMPLEPOSTBLITFEATURE_CREATE_OFFSET UNITYSDK_OFFSET(0x9FF5EA0)

	inline static constexpr unsigned int SimplePostBlitFeature_TypeDefinitionIndex = 32417;

	class SimplePostBlitFeature : public Il2CppObject
	{
	public:
		Settings* settings; // 0x20
		PostBlitPass* _postBlitPass; // 0x28

		::UnityEngine::Material* GetFeatureMaterial()
		{
			return (return (::UnityEngine::Material*(*)(::PVOID))((::PBYTE)hIl2Cpp + SIMPLEPOSTBLITFEATURE_GETFEATUREMATERIAL_OFFSET))(nullptr);
		}

		::System::Void AddRenderPasses(::UnityEngine::Rendering::Universal::ScriptableRenderer* arg, ::UnityEngine::Rendering::Universal::RenderingData&* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::Universal::ScriptableRenderer*, ::UnityEngine::Rendering::Universal::RenderingData&*, ::PVOID))((::PBYTE)hIl2Cpp + SIMPLEPOSTBLITFEATURE_ADDRENDERPASSES_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIMPLEPOSTBLITFEATURE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Create()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIMPLEPOSTBLITFEATURE_CREATE_OFFSET))(nullptr);
		}

	};

