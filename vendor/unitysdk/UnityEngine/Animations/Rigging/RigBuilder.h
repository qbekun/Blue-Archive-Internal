#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::Animations::Rigging { class SyncSceneToStreamLayer; }
namespace UnityEngine::Playables { class PlayableGraph; }
namespace UnityEngine::Playables { class Playable; }

#define UNITYENGINE_ANIMATIONS_RIGGING_RIGBUILDER_STOPPREVIEW_OFFSET UNITYSDK_OFFSET(0x9E24350)
#define UNITYENGINE_ANIMATIONS_RIGGING_RIGBUILDER_GET_LAYERS_OFFSET UNITYSDK_OFFSET(0x9E24520)
#define UNITYENGINE_ANIMATIONS_RIGGING_RIGBUILDER_UPDATE_OFFSET UNITYSDK_OFFSET(0x9E245A0)
#define UNITYENGINE_ANIMATIONS_RIGGING_RIGBUILDER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9E24D20)
#define UNITYENGINE_ANIMATIONS_RIGGING_RIGBUILDER_SET_SYNCSCENETOSTREAMLAYER_OFFSET UNITYSDK_OFFSET(0x9E24DA0)
#define UNITYENGINE_ANIMATIONS_RIGGING_RIGBUILDER_BUILD_OFFSET UNITYSDK_OFFSET(0x9E24DB0)
#define UNITYENGINE_ANIMATIONS_RIGGING_RIGBUILDER_UPDATEPREVIEWGRAPH_OFFSET UNITYSDK_OFFSET(0x9E25590)
#define UNITYENGINE_ANIMATIONS_RIGGING_RIGBUILDER_BUILDPREVIEWGRAPH_OFFSET UNITYSDK_OFFSET(0x9E257F0)
#define UNITYENGINE_ANIMATIONS_RIGGING_RIGBUILDER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x9E26500)
#define UNITYENGINE_ANIMATIONS_RIGGING_RIGBUILDER_GET_SYNCSCENETOSTREAMLAYER_OFFSET UNITYSDK_OFFSET(0x9E24830)
#define UNITYENGINE_ANIMATIONS_RIGGING_RIGBUILDER_STARTPREVIEW_OFFSET UNITYSDK_OFFSET(0x9E26580)
#define UNITYENGINE_ANIMATIONS_RIGGING_RIGBUILDER_CLEAR_OFFSET UNITYSDK_OFFSET(0x9E24390)
#define UNITYENGINE_ANIMATIONS_RIGGING_RIGBUILDER_SET_LAYERS_OFFSET UNITYSDK_OFFSET(0x9E26970)
#define UNITYENGINE_ANIMATIONS_RIGGING_RIGBUILDER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x9E26980)
#define UNITYENGINE_ANIMATIONS_RIGGING_RIGBUILDER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x9E26990)
#define UNITYENGINE_ANIMATIONS_RIGGING_RIGBUILDER_GET_GRAPH_OFFSET UNITYSDK_OFFSET(0x9E26A00)
#define UNITYENGINE_ANIMATIONS_RIGGING_RIGBUILDER_SET_GRAPH_OFFSET UNITYSDK_OFFSET(0x9E26A10)

namespace UnityEngine::Animations::Rigging
{
	inline static constexpr unsigned int RigBuilder_TypeDefinitionIndex = 37174;

	class RigBuilder : public Il2CppObject
	{
	public:
		Il2CppObject* m_RigLayers; // 0x18
		::Il2CppArray<::System::Object*>* m_RuntimeRigLayers; // 0x20
		::UnityEngine::Animations::Rigging::SyncSceneToStreamLayer* m_SyncSceneToStreamLayer; // 0x28
		Il2CppObject* m_Effectors; // 0x30
		OnAddRigBuilderCallback* onAddRigBuilder; // 0x0
		OnRemoveRigBuilderCallback* onRemoveRigBuilder; // 0x8
		::UnityEngine::Playables::PlayableGraph* _graph_k__BackingField; // 0x38

		::System::Void StopPreview()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_RIGGING_RIGBUILDER_STOPPREVIEW_OFFSET))(nullptr);
		}

		Il2CppObject* get_layers()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_RIGGING_RIGBUILDER_GET_LAYERS_OFFSET))(nullptr);
		}

		::System::Void Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_RIGGING_RIGBUILDER_UPDATE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_RIGGING_RIGBUILDER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_syncSceneToStreamLayer(::UnityEngine::Animations::Rigging::SyncSceneToStreamLayer* arg)
		{
			((::System::Void(*)(::UnityEngine::Animations::Rigging::SyncSceneToStreamLayer*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_RIGGING_RIGBUILDER_SET_SYNCSCENETOSTREAMLAYER_OFFSET))(arg, nullptr);
		}

		::System::Boolean Build()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_RIGGING_RIGBUILDER_BUILD_OFFSET))(nullptr);
		}

		::System::Void UpdatePreviewGraph(::UnityEngine::Playables::PlayableGraph* arg)
		{
			((::System::Void(*)(::UnityEngine::Playables::PlayableGraph*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_RIGGING_RIGBUILDER_UPDATEPREVIEWGRAPH_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Playables::Playable* BuildPreviewGraph(::UnityEngine::Playables::PlayableGraph* arg, ::UnityEngine::Playables::Playable* arg)
		{
			return (return (::UnityEngine::Playables::Playable*(*)(::UnityEngine::Playables::PlayableGraph*, ::UnityEngine::Playables::Playable*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_RIGGING_RIGBUILDER_BUILDPREVIEWGRAPH_OFFSET))(arg, arg, nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_RIGGING_RIGBUILDER_ONDISABLE_OFFSET))(nullptr);
		}

		::UnityEngine::Animations::Rigging::SyncSceneToStreamLayer* get_syncSceneToStreamLayer()
		{
			return (return (::UnityEngine::Animations::Rigging::SyncSceneToStreamLayer*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_RIGGING_RIGBUILDER_GET_SYNCSCENETOSTREAMLAYER_OFFSET))(nullptr);
		}

		::System::Void StartPreview()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_RIGGING_RIGBUILDER_STARTPREVIEW_OFFSET))(nullptr);
		}

		::System::Void Clear()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_RIGGING_RIGBUILDER_CLEAR_OFFSET))(nullptr);
		}

		::System::Void set_layers(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_RIGGING_RIGBUILDER_SET_LAYERS_OFFSET))(arg, nullptr);
		}

		::System::Void OnDestroy()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_RIGGING_RIGBUILDER_ONDESTROY_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_RIGGING_RIGBUILDER_ONENABLE_OFFSET))(nullptr);
		}

		::UnityEngine::Playables::PlayableGraph* get_graph()
		{
			return (return (::UnityEngine::Playables::PlayableGraph*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_RIGGING_RIGBUILDER_GET_GRAPH_OFFSET))(nullptr);
		}

		::System::Void set_graph(::UnityEngine::Playables::PlayableGraph* arg)
		{
			((::System::Void(*)(::UnityEngine::Playables::PlayableGraph*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_RIGGING_RIGBUILDER_SET_GRAPH_OFFSET))(arg, nullptr);
		}

	};
}

