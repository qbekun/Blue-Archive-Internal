#pragma once
#include "unitysdk.h"

namespace UnityEngine::Playables { class Playable; }
namespace UnityEngine::Playables { class FrameData; }

#define OPENUICONTROLLER_GET_UINAME_OFFSET UNITYSDK_OFFSET(0x204DB60)
#define OPENUICONTROLLER_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0x204DB70)
#define OPENUICONTROLLER_SET_UINAME_OFFSET UNITYSDK_OFFSET(0x204DC40)
#define OPENUICONTROLLER_.CTOR_OFFSET UNITYSDK_OFFSET(0x204DC50)

	inline static constexpr unsigned int OpenUIController_TypeDefinitionIndex = 3304;

	class OpenUIController : public Il2CppObject
	{
	public:
		::System::String* _UIName_k__BackingField; // 0x10

		::System::String* get_UIName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OPENUICONTROLLER_GET_UINAME_OFFSET))(nullptr);
		}

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable* arg, ::UnityEngine::Playables::FrameData* arg2)
		{
			((::System::Void(*)(::UnityEngine::Playables::Playable*, ::UnityEngine::Playables::FrameData*, ::PVOID))((::PBYTE)hIl2Cpp + OPENUICONTROLLER_ONBEHAVIOURPLAY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void set_UIName(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + OPENUICONTROLLER_SET_UINAME_OFFSET))(str, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OPENUICONTROLLER_.CTOR_OFFSET))(nullptr);
		}

	};

