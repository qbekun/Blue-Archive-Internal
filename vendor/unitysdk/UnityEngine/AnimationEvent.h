#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class Object; }
namespace UnityEngine { class AnimationEventSource; }
namespace UnityEngine { class AnimationState; }
namespace UnityEngine { class AnimatorStateInfo; }
namespace UnityEngine { class AnimatorClipInfo; }

#define UNITYENGINE_ANIMATIONEVENT_.CTOR_OFFSET UNITYSDK_OFFSET(0xA1C5A30)
#define UNITYENGINE_ANIMATIONEVENT_GET_OBJECTREFERENCEPARAMETER_OFFSET UNITYSDK_OFFSET(0xA1C5AC0)
#define UNITYENGINE_ANIMATIONEVENT_GET_FUNCTIONNAME_OFFSET UNITYSDK_OFFSET(0xA1C5AD0)
#define UNITYENGINE_ANIMATIONEVENT_GET_TIME_OFFSET UNITYSDK_OFFSET(0xA1C5AE0)
#define UNITYENGINE_ANIMATIONEVENT_GET_ISFIREDBYLEGACY_OFFSET UNITYSDK_OFFSET(0xA1C5AF0)
#define UNITYENGINE_ANIMATIONEVENT_GET_ISFIREDBYANIMATOR_OFFSET UNITYSDK_OFFSET(0xA1C5B00)
#define UNITYENGINE_ANIMATIONEVENT_GET_ANIMATIONSTATE_OFFSET UNITYSDK_OFFSET(0xA1C5B10)
#define UNITYENGINE_ANIMATIONEVENT_GET_ANIMATORCLIPINFO_OFFSET UNITYSDK_OFFSET(0xA1C5B80)

namespace UnityEngine
{
	inline static constexpr unsigned int AnimationEvent_TypeDefinitionIndex = 36452;

	class AnimationEvent : public Il2CppObject
	{
	public:
		::System::Single m_Time; // 0x10
		::System::String* m_FunctionName; // 0x18
		::System::String* m_StringParameter; // 0x20
		::UnityEngine::Object* m_ObjectReferenceParameter; // 0x28
		::System::Single m_FloatParameter; // 0x30
		::System::Int32 m_IntParameter; // 0x34
		::System::Int32 m_MessageOptions; // 0x38
		::UnityEngine::AnimationEventSource* m_Source; // 0x3C
		::UnityEngine::AnimationState* m_StateSender; // 0x40
		::UnityEngine::AnimatorStateInfo* m_AnimatorStateInfo; // 0x48
		::UnityEngine::AnimatorClipInfo* m_AnimatorClipInfo; // 0x6C

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONEVENT_.CTOR_OFFSET))(nullptr);
		}

		::UnityEngine::Object* get_objectReferenceParameter()
		{
			return (return (::UnityEngine::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONEVENT_GET_OBJECTREFERENCEPARAMETER_OFFSET))(nullptr);
		}

		::System::String* get_functionName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONEVENT_GET_FUNCTIONNAME_OFFSET))(nullptr);
		}

		::System::Single get_time()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONEVENT_GET_TIME_OFFSET))(nullptr);
		}

		::System::Boolean get_isFiredByLegacy()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONEVENT_GET_ISFIREDBYLEGACY_OFFSET))(nullptr);
		}

		::System::Boolean get_isFiredByAnimator()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONEVENT_GET_ISFIREDBYANIMATOR_OFFSET))(nullptr);
		}

		::UnityEngine::AnimationState* get_animationState()
		{
			return (return (::UnityEngine::AnimationState*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONEVENT_GET_ANIMATIONSTATE_OFFSET))(nullptr);
		}

		::UnityEngine::AnimatorClipInfo* get_animatorClipInfo()
		{
			return (return (::UnityEngine::AnimatorClipInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONEVENT_GET_ANIMATORCLIPINFO_OFFSET))(nullptr);
		}

	};
}

