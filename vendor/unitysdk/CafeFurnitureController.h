#pragma once
#include "unitysdk.h"

class FurnitureTimelineType;
namespace UnityEngine::Playables { class Playable; }
namespace UnityEngine::Playables { class FrameData; }

#define CAFEFURNITURECONTROLLER_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0x19BE4C0)
#define CAFEFURNITURECONTROLLER_GET_SERVERID_OFFSET UNITYSDK_OFFSET(0x19BE5B0)
#define CAFEFURNITURECONTROLLER_.CTOR_OFFSET UNITYSDK_OFFSET(0x19BE5C0)
#define CAFEFURNITURECONTROLLER_SET_SERVERID_OFFSET UNITYSDK_OFFSET(0x19BE5D0)
#define CAFEFURNITURECONTROLLER_GET_TIMELINETYPE_OFFSET UNITYSDK_OFFSET(0x19BE5E0)
#define CAFEFURNITURECONTROLLER_SET_TIMELINETYPE_OFFSET UNITYSDK_OFFSET(0x19BE5F0)

	inline static constexpr unsigned int CafeFurnitureController_TypeDefinitionIndex = 1364;

	class CafeFurnitureController : public Il2CppObject
	{
	public:
		FurnitureTimelineType* _TimelineType_k__BackingField; // 0x10
		::System::Int64 _ServerId_k__BackingField; // 0x18

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable* arg, ::UnityEngine::Playables::FrameData* arg2)
		{
			((::System::Void(*)(::UnityEngine::Playables::Playable*, ::UnityEngine::Playables::FrameData*, ::PVOID))((::PBYTE)hIl2Cpp + CAFEFURNITURECONTROLLER_ONBEHAVIOURPLAY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Int64 get_ServerId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFEFURNITURECONTROLLER_GET_SERVERID_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFEFURNITURECONTROLLER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_ServerId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + CAFEFURNITURECONTROLLER_SET_SERVERID_OFFSET))(arg, nullptr);
		}

		FurnitureTimelineType* get_TimelineType()
		{
			return ((FurnitureTimelineType*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFEFURNITURECONTROLLER_GET_TIMELINETYPE_OFFSET))(nullptr);
		}

		::System::Void set_TimelineType(FurnitureTimelineType* arg)
		{
			((::System::Void(*)(FurnitureTimelineType*, ::PVOID))((::PBYTE)hIl2Cpp + CAFEFURNITURECONTROLLER_SET_TIMELINETYPE_OFFSET))(arg, nullptr);
		}

	};

