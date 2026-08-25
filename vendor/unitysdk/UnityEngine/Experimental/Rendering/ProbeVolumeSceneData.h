#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine { class Object; }
namespace UnityEngine::SceneManagement { class Scene; }

#define UNITYENGINE_EXPERIMENTAL_RENDERING_PROBEVOLUMESCENEDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x9F8D010)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_PROBEVOLUMESCENEDATA_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9F8D690)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_PROBEVOLUMESCENEDATA_GETSCENEGUID_OFFSET UNITYSDK_OFFSET(0x9F8D750)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_PROBEVOLUMESCENEDATA_SETPARENTOBJECT_OFFSET UNITYSDK_OFFSET(0x9F8D810)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_PROBEVOLUMESCENEDATA_ONBEFORESERIALIZE_OFFSET UNITYSDK_OFFSET(0x9F8D850)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_PROBEVOLUMESCENEDATA_CREATENEWBAKINGSET_OFFSET UNITYSDK_OFFSET(0x9F8E4A0)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_PROBEVOLUMESCENEDATA_SYNCBAKINGSETSETTINGS_OFFSET UNITYSDK_OFFSET(0x9F8E6B0)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_PROBEVOLUMESCENEDATA_INITIALIZEBAKINGSET_OFFSET UNITYSDK_OFFSET(0x9F8E600)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_PROBEVOLUMESCENEDATA_UPDATEBAKINGSETS_OFFSET UNITYSDK_OFFSET(0x9F8D340)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_PROBEVOLUMESCENEDATA_ONAFTERDESERIALIZE_OFFSET UNITYSDK_OFFSET(0x9F8E9F0)

namespace UnityEngine::Experimental::Rendering
{
	inline static constexpr unsigned int ProbeVolumeSceneData_TypeDefinitionIndex = 33826;

	class ProbeVolumeSceneData : public Il2CppObject
	{
	public:
		::System::Reflection::PropertyInfo* s_SceneGUID; // 0x0
		Il2CppObject* serializedBounds; // 0x10
		Il2CppObject* serializedHasVolumes; // 0x18
		Il2CppObject* serializedProfiles; // 0x20
		Il2CppObject* serializedBakeSettings; // 0x28
		Il2CppObject* serializedBakingSets; // 0x30
		::UnityEngine::Object* parentAsset; // 0x38
		::System::String* parentSceneDataPropertyName; // 0x40
		Il2CppObject* sceneBounds; // 0x48
		Il2CppObject* hasProbeVolumes; // 0x50
		Il2CppObject* sceneProfiles; // 0x58
		Il2CppObject* sceneBakingSettings; // 0x60
		Il2CppObject* bakingSets; // 0x68

		::System::Void .ctor(::UnityEngine::Object* arg, ::System::String* str)
		{
			((::System::Void(*)(::UnityEngine::Object*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_PROBEVOLUMESCENEDATA_.CTOR_OFFSET))(arg, str, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_PROBEVOLUMESCENEDATA_.CCTOR_OFFSET))(nullptr);
		}

		::System::String* GetSceneGUID(::UnityEngine::SceneManagement::Scene* arg)
		{
			return (return (::System::String*(*)(::UnityEngine::SceneManagement::Scene*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_PROBEVOLUMESCENEDATA_GETSCENEGUID_OFFSET))(arg, nullptr);
		}

		::System::Void SetParentObject(::UnityEngine::Object* arg, ::System::String* str)
		{
			((::System::Void(*)(::UnityEngine::Object*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_PROBEVOLUMESCENEDATA_SETPARENTOBJECT_OFFSET))(arg, str, nullptr);
		}

		::System::Void OnBeforeSerialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_PROBEVOLUMESCENEDATA_ONBEFORESERIALIZE_OFFSET))(nullptr);
		}

		BakingSet* CreateNewBakingSet(::System::String* str)
		{
			return (return (BakingSet*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_PROBEVOLUMESCENEDATA_CREATENEWBAKINGSET_OFFSET))(str, nullptr);
		}

		::System::Void SyncBakingSetSettings()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_PROBEVOLUMESCENEDATA_SYNCBAKINGSETSETTINGS_OFFSET))(nullptr);
		}

		::System::Void InitializeBakingSet(BakingSet* arg, ::System::String* str)
		{
			((::System::Void(*)(BakingSet*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_PROBEVOLUMESCENEDATA_INITIALIZEBAKINGSET_OFFSET))(arg, str, nullptr);
		}

		::System::Void UpdateBakingSets()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_PROBEVOLUMESCENEDATA_UPDATEBAKINGSETS_OFFSET))(nullptr);
		}

		::System::Void OnAfterDeserialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_PROBEVOLUMESCENEDATA_ONAFTERDESERIALIZE_OFFSET))(nullptr);
		}

	};
}

