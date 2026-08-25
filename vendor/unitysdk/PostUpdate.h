#pragma once
#include "unitysdk.h"

namespace Animancer { class AnimancerPlayable; }
namespace UnityEngine::Playables { class Playable; }
namespace UnityEngine::Playables { class FrameData; }

#define POSTUPDATE_GET_ISCONNECTED_OFFSET UNITYSDK_OFFSET(0x4A0D80)
#define POSTUPDATE_CREATE_OFFSET UNITYSDK_OFFSET(0x49E880)
#define POSTUPDATE_.CTOR_OFFSET UNITYSDK_OFFSET(0x4A0D90)
#define POSTUPDATE_.CCTOR_OFFSET UNITYSDK_OFFSET(0x4A0DA0)
#define POSTUPDATE_PREPAREFRAME_OFFSET UNITYSDK_OFFSET(0x4A0E20)
#define POSTUPDATE_SET_ISCONNECTED_OFFSET UNITYSDK_OFFSET(0x49E320)
#define POSTUPDATE_ONPLAYABLECREATE_OFFSET UNITYSDK_OFFSET(0x4A0E80)

	inline static constexpr unsigned int PostUpdate_TypeDefinitionIndex = 35114;

	class PostUpdate : public Il2CppObject
	{
	public:
		PostUpdate* Template; // 0x0
		::Animancer::AnimancerPlayable* _Root; // 0x10
		::UnityEngine::Playables::Playable* _Playable; // 0x18
		::System::Boolean _IsConnected; // 0x28

		::System::Boolean get_IsConnected()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + POSTUPDATE_GET_ISCONNECTED_OFFSET))(nullptr);
		}

		PostUpdate* Create(::Animancer::AnimancerPlayable* arg)
		{
			return (return (PostUpdate*(*)(::Animancer::AnimancerPlayable*, ::PVOID))((::PBYTE)hIl2Cpp + POSTUPDATE_CREATE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POSTUPDATE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POSTUPDATE_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void PrepareFrame(::UnityEngine::Playables::Playable* arg, ::UnityEngine::Playables::FrameData* arg)
		{
			((::System::Void(*)(::UnityEngine::Playables::Playable*, ::UnityEngine::Playables::FrameData*, ::PVOID))((::PBYTE)hIl2Cpp + POSTUPDATE_PREPAREFRAME_OFFSET))(arg, arg, nullptr);
		}

		::System::Void set_IsConnected(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + POSTUPDATE_SET_ISCONNECTED_OFFSET))(arg, nullptr);
		}

		::System::Void OnPlayableCreate(::UnityEngine::Playables::Playable* arg)
		{
			((::System::Void(*)(::UnityEngine::Playables::Playable*, ::PVOID))((::PBYTE)hIl2Cpp + POSTUPDATE_ONPLAYABLECREATE_OFFSET))(arg, nullptr);
		}

	};

