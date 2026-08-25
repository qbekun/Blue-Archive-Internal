#pragma once
#include "unitysdk.h"

namespace UnityEngine::Playables { class Playable; }
namespace UnityEngine::Playables { class FrameData; }

#define UILOBBYCONTROLLER_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0x2050950)
#define UILOBBYCONTROLLER_.CTOR_OFFSET UNITYSDK_OFFSET(0x2050AA0)
#define UILOBBYCONTROLLER_SET_ISSHOW_OFFSET UNITYSDK_OFFSET(0x2050AB0)
#define UILOBBYCONTROLLER_GET_ISSHOW_OFFSET UNITYSDK_OFFSET(0x2050AC0)

	inline static constexpr unsigned int UILobbyController_TypeDefinitionIndex = 3314;

	class UILobbyController : public Il2CppObject
	{
	public:
		::System::Boolean _IsShow_k__BackingField; // 0x10

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable* arg, ::UnityEngine::Playables::FrameData* arg2)
		{
			((::System::Void(*)(::UnityEngine::Playables::Playable*, ::UnityEngine::Playables::FrameData*, ::PVOID))((::PBYTE)hIl2Cpp + UILOBBYCONTROLLER_ONBEHAVIOURPLAY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UILOBBYCONTROLLER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_IsShow(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UILOBBYCONTROLLER_SET_ISSHOW_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsShow()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UILOBBYCONTROLLER_GET_ISSHOW_OFFSET))(nullptr);
		}

	};

