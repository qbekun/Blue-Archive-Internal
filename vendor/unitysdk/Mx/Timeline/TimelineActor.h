#pragma once
#include "../../unitysdk.h"

class SingleUnityLayer;
namespace UnityEngine::Playables { class PlayableDirector; }
namespace Mx::Timeline { class TimelineEntityIndex; }
class EntityVisual;
namespace UnityEngine { class Transform; }
class LayerTemporaryChanger;

#define MX_TIMELINE_TIMELINEACTOR_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xE1C0C0)
#define MX_TIMELINE_TIMELINEACTOR_SETENTITYVISIBILITY_OFFSET UNITYSDK_OFFSET(0xE1C580)
#define MX_TIMELINE_TIMELINEACTOR_SET_ENTITYVISUAL_OFFSET UNITYSDK_OFFSET(0xE1D1F0)
#define MX_TIMELINE_TIMELINEACTOR_SETLAYER_OFFSET UNITYSDK_OFFSET(0xE1D0C0)
#define MX_TIMELINE_TIMELINEACTOR_FINDENTITYVISUAL_OFFSET UNITYSDK_OFFSET(0xE1C370)
#define MX_TIMELINE_TIMELINEACTOR_SETENTITYONTRACK_OFFSET UNITYSDK_OFFSET(0xE1CAB0)
#define MX_TIMELINE_TIMELINEACTOR_ONSTOPPED_OFFSET UNITYSDK_OFFSET(0xE1D840)
#define MX_TIMELINE_TIMELINEACTOR_GET_ENTITYPARENT_OFFSET UNITYSDK_OFFSET(0xE1DEA0)
#define MX_TIMELINE_TIMELINEACTOR_SET_COSTUMEID_OFFSET UNITYSDK_OFFSET(0xE1DEB0)
#define MX_TIMELINE_TIMELINEACTOR_GET_USERANDOMANIMATION_OFFSET UNITYSDK_OFFSET(0xE1D2A0)
#define MX_TIMELINE_TIMELINEACTOR_GET_COSTUMEID_OFFSET UNITYSDK_OFFSET(0xE1DEC0)
#define MX_TIMELINE_TIMELINEACTOR_SETENTITYPARENT_OFFSET UNITYSDK_OFFSET(0xE1C8E0)
#define MX_TIMELINE_TIMELINEACTOR_GET_DIRECTOR_OFFSET UNITYSDK_OFFSET(0xE1D210)
#define MX_TIMELINE_TIMELINEACTOR_GET_ENTITYVISUAL_OFFSET UNITYSDK_OFFSET(0xE1DED0)
#define MX_TIMELINE_TIMELINEACTOR_.CTOR_OFFSET UNITYSDK_OFFSET(0xE1DEE0)
#define MX_TIMELINE_TIMELINEACTOR_SET_ENTITYPARENT_OFFSET UNITYSDK_OFFSET(0xE1DF80)
#define MX_TIMELINE_TIMELINEACTOR_ONDRAWGIZMOS_OFFSET UNITYSDK_OFFSET(0xE1DF90)

namespace Mx::Timeline
{
	inline static constexpr unsigned int TimelineActor_TypeDefinitionIndex = 10352;

	class TimelineActor : public Il2CppObject
	{
	public:
		SingleUnityLayer* targetLayer; // 0x18
		::UnityEngine::Playables::PlayableDirector* director; // 0x20
		::Mx::Timeline::TimelineEntityIndex* EntityIndex; // 0x28
		::System::Boolean IsLeader; // 0x2C
		EntityVisual* _EntityVisual_k__BackingField; // 0x30
		::UnityEngine::Transform* _entityParent_k__BackingField; // 0x38
		::System::Int64 _costumeId_k__BackingField; // 0x40
		LayerTemporaryChanger* layerChanger; // 0x48
		Il2CppObject* applyRootMotionCache; // 0x50

		::System::Void Initialize(Il2CppObject* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_TIMELINE_TIMELINEACTOR_INITIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void SetEntityVisibility(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_TIMELINE_TIMELINEACTOR_SETENTITYVISIBILITY_OFFSET))(arg, nullptr);
		}

		::System::Void set_EntityVisual(EntityVisual* arg)
		{
			((::System::Void(*)(EntityVisual*, ::PVOID))((::PBYTE)hIl2Cpp + MX_TIMELINE_TIMELINEACTOR_SET_ENTITYVISUAL_OFFSET))(arg, nullptr);
		}

		::System::Void SetLayer()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_TIMELINE_TIMELINEACTOR_SETLAYER_OFFSET))(nullptr);
		}

		EntityVisual* FindEntityVisual(::Mx::Timeline::TimelineEntityIndex* arg, ::System::Int64 arg2)
		{
			return ((EntityVisual*(*)(::Mx::Timeline::TimelineEntityIndex*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_TIMELINE_TIMELINEACTOR_FINDENTITYVISUAL_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void SetEntityOnTrack(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_TIMELINE_TIMELINEACTOR_SETENTITYONTRACK_OFFSET))(arg, nullptr);
		}

		::System::Void OnStopped(::UnityEngine::Playables::PlayableDirector* arg)
		{
			((::System::Void(*)(::UnityEngine::Playables::PlayableDirector*, ::PVOID))((::PBYTE)hIl2Cpp + MX_TIMELINE_TIMELINEACTOR_ONSTOPPED_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Transform* get_entityParent()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_TIMELINE_TIMELINEACTOR_GET_ENTITYPARENT_OFFSET))(nullptr);
		}

		::System::Void set_costumeId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_TIMELINE_TIMELINEACTOR_SET_COSTUMEID_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_useRandomAnimation()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_TIMELINE_TIMELINEACTOR_GET_USERANDOMANIMATION_OFFSET))(nullptr);
		}

		::System::Int64 get_costumeId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_TIMELINE_TIMELINEACTOR_GET_COSTUMEID_OFFSET))(nullptr);
		}

		::System::Void SetEntityParent()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_TIMELINE_TIMELINEACTOR_SETENTITYPARENT_OFFSET))(nullptr);
		}

		::UnityEngine::Playables::PlayableDirector* get_Director()
		{
			return ((::UnityEngine::Playables::PlayableDirector*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_TIMELINE_TIMELINEACTOR_GET_DIRECTOR_OFFSET))(nullptr);
		}

		EntityVisual* get_EntityVisual()
		{
			return ((EntityVisual*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_TIMELINE_TIMELINEACTOR_GET_ENTITYVISUAL_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_TIMELINE_TIMELINEACTOR_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_entityParent(::UnityEngine::Transform* arg)
		{
			((::System::Void(*)(::UnityEngine::Transform*, ::PVOID))((::PBYTE)hIl2Cpp + MX_TIMELINE_TIMELINEACTOR_SET_ENTITYPARENT_OFFSET))(arg, nullptr);
		}

		::System::Void OnDrawGizmos()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_TIMELINE_TIMELINEACTOR_ONDRAWGIZMOS_OFFSET))(nullptr);
		}

	};
}

