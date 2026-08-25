#pragma once
#include "unitysdk.h"

namespace UnityEngine { class ParticleSystem; }
namespace UnityEngine { class ParticleSystemShapeType; }
namespace UnityEngine { class Mesh; }

#define SHAPEMODULE_.CTOR_OFFSET UNITYSDK_OFFSET(0xA2970B0)
#define SHAPEMODULE_SET_ENABLED_OFFSET UNITYSDK_OFFSET(0xA298010)
#define SHAPEMODULE_SET_SHAPETYPE_OFFSET UNITYSDK_OFFSET(0xA298090)
#define SHAPEMODULE_SET_MESH_OFFSET UNITYSDK_OFFSET(0xA298110)
#define SHAPEMODULE_SET_ENABLED_INJECTED_OFFSET UNITYSDK_OFFSET(0xA298050)
#define SHAPEMODULE_SET_SHAPETYPE_INJECTED_OFFSET UNITYSDK_OFFSET(0xA2980D0)
#define SHAPEMODULE_SET_MESH_INJECTED_OFFSET UNITYSDK_OFFSET(0xA298150)

	inline static constexpr unsigned int ShapeModule_TypeDefinitionIndex = 36914;

	class ShapeModule : public Il2CppObject
	{
	public:
		::UnityEngine::ParticleSystem* m_ParticleSystem; // 0x10

		::System::Void .ctor(::UnityEngine::ParticleSystem* arg)
		{
			((::System::Void(*)(::UnityEngine::ParticleSystem*, ::PVOID))((::PBYTE)hIl2Cpp + SHAPEMODULE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void set_enabled(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SHAPEMODULE_SET_ENABLED_OFFSET))(arg, nullptr);
		}

		::System::Void set_shapeType(::UnityEngine::ParticleSystemShapeType* arg)
		{
			((::System::Void(*)(::UnityEngine::ParticleSystemShapeType*, ::PVOID))((::PBYTE)hIl2Cpp + SHAPEMODULE_SET_SHAPETYPE_OFFSET))(arg, nullptr);
		}

		::System::Void set_mesh(::UnityEngine::Mesh* arg)
		{
			((::System::Void(*)(::UnityEngine::Mesh*, ::PVOID))((::PBYTE)hIl2Cpp + SHAPEMODULE_SET_MESH_OFFSET))(arg, nullptr);
		}

		::System::Void set_enabled_Injected(ShapeModule&* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(ShapeModule&*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SHAPEMODULE_SET_ENABLED_INJECTED_OFFSET))(arg, arg, nullptr);
		}

		::System::Void set_shapeType_Injected(ShapeModule&* arg, ::UnityEngine::ParticleSystemShapeType* arg)
		{
			((::System::Void(*)(ShapeModule&*, ::UnityEngine::ParticleSystemShapeType*, ::PVOID))((::PBYTE)hIl2Cpp + SHAPEMODULE_SET_SHAPETYPE_INJECTED_OFFSET))(arg, arg, nullptr);
		}

		::System::Void set_mesh_Injected(ShapeModule&* arg, ::UnityEngine::Mesh* arg)
		{
			((::System::Void(*)(ShapeModule&*, ::UnityEngine::Mesh*, ::PVOID))((::PBYTE)hIl2Cpp + SHAPEMODULE_SET_MESH_INJECTED_OFFSET))(arg, arg, nullptr);
		}

	};

