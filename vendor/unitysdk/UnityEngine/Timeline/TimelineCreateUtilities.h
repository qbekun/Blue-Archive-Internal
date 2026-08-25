#pragma once
#include "../../unitysdk.h"

namespace UnityEngine { class Object; }
namespace UnityEngine { class AnimationClip; }
namespace UnityEngine::Timeline { class TrackAsset; }

#define UNITYENGINE_TIMELINE_TIMELINECREATEUTILITIES_SAVEASSETINTOOBJECT_OFFSET UNITYSDK_OFFSET(0xA1AEA70)
#define UNITYENGINE_TIMELINE_TIMELINECREATEUTILITIES_GENERATEUNIQUEACTORNAME_OFFSET UNITYSDK_OFFSET(0xA1AEB40)
#define UNITYENGINE_TIMELINE_TIMELINECREATEUTILITIES_CREATEANIMATIONCLIPFORTRACK_OFFSET UNITYSDK_OFFSET(0xA1AEE30)
#define UNITYENGINE_TIMELINE_TIMELINECREATEUTILITIES_VALIDATEPARENTTRACK_OFFSET UNITYSDK_OFFSET(0xA1AEFF0)

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int TimelineCreateUtilities_TypeDefinitionIndex = 36339;

	class TimelineCreateUtilities : public Il2CppObject
	{
	public:
		::System::Void SaveAssetIntoObject(::UnityEngine::Object* arg, ::UnityEngine::Object* arg)
		{
			((::System::Void(*)(::UnityEngine::Object*, ::UnityEngine::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINECREATEUTILITIES_SAVEASSETINTOOBJECT_OFFSET))(arg, arg, nullptr);
		}

		::System::String* GenerateUniqueActorName(Il2CppObject* arg, ::System::String* str)
		{
			return (return (::System::String*(*)(Il2CppObject*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINECREATEUTILITIES_GENERATEUNIQUEACTORNAME_OFFSET))(arg, str, nullptr);
		}

		::UnityEngine::AnimationClip* CreateAnimationClipForTrack(::System::String* str, ::UnityEngine::Timeline::TrackAsset* arg, ::System::Boolean arg)
		{
			return (return (::UnityEngine::AnimationClip*(*)(::System::String*, ::UnityEngine::Timeline::TrackAsset*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINECREATEUTILITIES_CREATEANIMATIONCLIPFORTRACK_OFFSET))(str, arg, arg, nullptr);
		}

		::System::Boolean ValidateParentTrack(::UnityEngine::Timeline::TrackAsset* arg, ::System::Type* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Timeline::TrackAsset*, ::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINECREATEUTILITIES_VALIDATEPARENTTRACK_OFFSET))(arg, arg, nullptr);
		}

	};
}

