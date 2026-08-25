#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine { class Camera; }
namespace UnityEngine { class Light; }
namespace UnityEngine { class GameObject; }

#define UNITYENGINE_RENDERING_LOOKDEV_STAGERUNTIMEINTERFACE_GET_CAMERA_OFFSET UNITYSDK_OFFSET(0x9FE6690)
#define UNITYENGINE_RENDERING_LOOKDEV_STAGERUNTIMEINTERFACE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9FE66B0)
#define UNITYENGINE_RENDERING_LOOKDEV_STAGERUNTIMEINTERFACE_GET_SUNLIGHT_OFFSET UNITYSDK_OFFSET(0x9FE6710)
#define UNITYENGINE_RENDERING_LOOKDEV_STAGERUNTIMEINTERFACE_ADDGAMEOBJECT_OFFSET UNITYSDK_OFFSET(0x9FE6730)

namespace UnityEngine::Rendering::LookDev
{
	inline static constexpr unsigned int StageRuntimeInterface_TypeDefinitionIndex = 34139;

	class StageRuntimeInterface : public Il2CppObject
	{
	public:
		Il2CppObject* m_AddGameObject; // 0x10
		Il2CppObject* m_GetCamera; // 0x18
		Il2CppObject* m_GetSunLight; // 0x20
		::System::Object* SRPData; // 0x28

		::UnityEngine::Camera* get_camera()
		{
			return (return (::UnityEngine::Camera*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_LOOKDEV_STAGERUNTIMEINTERFACE_GET_CAMERA_OFFSET))(nullptr);
		}

		::System::Void .ctor(Il2CppObject* arg, Il2CppObject* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_LOOKDEV_STAGERUNTIMEINTERFACE_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::UnityEngine::Light* get_sunLight()
		{
			return (return (::UnityEngine::Light*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_LOOKDEV_STAGERUNTIMEINTERFACE_GET_SUNLIGHT_OFFSET))(nullptr);
		}

		::UnityEngine::GameObject* AddGameObject(::System::Boolean arg)
		{
			return (return (::UnityEngine::GameObject*(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_LOOKDEV_STAGERUNTIMEINTERFACE_ADDGAMEOBJECT_OFFSET))(arg, nullptr);
		}

	};
}

