#pragma once
#include "../../unitysdk.h"

namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define NPA_EDITOR_NXPCACHEDPREFAB_.CTOR_OFFSET UNITYSDK_OFFSET(0x9DA2980)
#define NPA_EDITOR_NXPCACHEDPREFAB_.CTOR_OFFSET UNITYSDK_OFFSET(0x9DA29B0)
#define NPA_EDITOR_NXPCACHEDPREFAB_GETCACHEDPREFABOBJECT_OFFSET UNITYSDK_OFFSET(0x9DA2A00)
#define NPA_EDITOR_NXPCACHEDPREFAB_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9DA2B10)
#define NPA_EDITOR_NXPCACHEDPREFAB_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9DA2B70)
#define NPA_EDITOR_NXPCACHEDPREFAB_FINALIZE_OFFSET UNITYSDK_OFFSET(0x9DA2BF0)

namespace NPA::Editor
{
	inline static constexpr unsigned int NXPCachedPrefab_TypeDefinitionIndex = 26355;

	class NXPCachedPrefab : public Il2CppObject
	{
	public:
		::UnityEngine::GameObject* prefabObject; // 0x10
		::UnityEngine::Transform* parentTransform; // 0x18
		::System::Boolean disposed; // 0x20

		::System::Void .ctor(::UnityEngine::GameObject* arg)
		{
			((::System::Void(*)(::UnityEngine::GameObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPCACHEDPREFAB_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::UnityEngine::GameObject* arg, ::UnityEngine::Transform* arg)
		{
			((::System::Void(*)(::UnityEngine::GameObject*, ::UnityEngine::Transform*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPCACHEDPREFAB_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::GameObject* GetCachedPrefabObject()
		{
			return (return (::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPCACHEDPREFAB_GETCACHEDPREFABOBJECT_OFFSET))(nullptr);
		}

		::System::Void Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPCACHEDPREFAB_DISPOSE_OFFSET))(nullptr);
		}

		::System::Void Dispose(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPCACHEDPREFAB_DISPOSE_OFFSET))(arg, nullptr);
		}

		::System::Void Finalize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPCACHEDPREFAB_FINALIZE_OFFSET))(nullptr);
		}

	};
}

