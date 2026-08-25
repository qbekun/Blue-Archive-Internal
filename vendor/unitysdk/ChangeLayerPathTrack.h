#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Transform; }
namespace UnityEngine::Playables { class Playable; }
namespace UnityEngine::Playables { class PlayableGraph; }
namespace UnityEngine { class GameObject; }

#define CHANGELAYERPATHTRACK_GETTRANSFORMBYINDEXPATH_OFFSET UNITYSDK_OFFSET(0x20EC9D0)
#define CHANGELAYERPATHTRACK_GET_TARGETPATHS_OFFSET UNITYSDK_OFFSET(0x20ED060)
#define CHANGELAYERPATHTRACK_CREATETRACKMIXER_OFFSET UNITYSDK_OFFSET(0x20ED070)
#define CHANGELAYERPATHTRACK_.CTOR_OFFSET UNITYSDK_OFFSET(0x20ED170)

	inline static constexpr unsigned int ChangeLayerPathTrack_TypeDefinitionIndex = 3809;

	class ChangeLayerPathTrack : public Il2CppObject
	{
	public:
		::System::String* targetLayerName; // 0xA0
		::System::Boolean includeChildren; // 0xA8
		::Il2CppArray<::System::Object*>* targetPaths; // 0xB0

		::UnityEngine::Transform* GetTransformByIndexPath(::UnityEngine::Transform* arg, ::System::String* str)
		{
			return ((::UnityEngine::Transform*(*)(::UnityEngine::Transform*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + CHANGELAYERPATHTRACK_GETTRANSFORMBYINDEXPATH_OFFSET))(arg, str, nullptr);
		}

		::Il2CppArray<::System::Object*>* get_TargetPaths()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHANGELAYERPATHTRACK_GET_TARGETPATHS_OFFSET))(nullptr);
		}

		::UnityEngine::Playables::Playable* CreateTrackMixer(::UnityEngine::Playables::PlayableGraph* arg, ::UnityEngine::GameObject* arg2, ::System::Int32 arg3)
		{
			return ((::UnityEngine::Playables::Playable*(*)(::UnityEngine::Playables::PlayableGraph*, ::UnityEngine::GameObject*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + CHANGELAYERPATHTRACK_CREATETRACKMIXER_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHANGELAYERPATHTRACK_.CTOR_OFFSET))(nullptr);
		}

	};

