#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::Playables { class PlayableBinding; }
namespace UnityEngine { class Object; }
namespace UnityEngine::Playables { class PlayableOutput; }
namespace UnityEngine::Playables { class PlayableGraph; }

#define UNITYENGINE_PLAYABLES_SCRIPTPLAYABLEBINDING_CREATE_OFFSET UNITYSDK_OFFSET(0xA26D9A0)
#define UNITYENGINE_PLAYABLES_SCRIPTPLAYABLEBINDING_CREATESCRIPTOUTPUT_OFFSET UNITYSDK_OFFSET(0xA26DAC0)

namespace UnityEngine::Playables
{
	inline static constexpr unsigned int ScriptPlayableBinding_TypeDefinitionIndex = 31621;

	class ScriptPlayableBinding : public Il2CppObject
	{
	public:
		::UnityEngine::Playables::PlayableBinding* Create(::System::String* str, ::UnityEngine::Object* arg, ::System::Type* arg)
		{
			return (return (::UnityEngine::Playables::PlayableBinding*(*)(::System::String*, ::UnityEngine::Object*, ::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_SCRIPTPLAYABLEBINDING_CREATE_OFFSET))(str, arg, arg, nullptr);
		}

		::UnityEngine::Playables::PlayableOutput* CreateScriptOutput(::UnityEngine::Playables::PlayableGraph* arg, ::System::String* str)
		{
			return (return (::UnityEngine::Playables::PlayableOutput*(*)(::UnityEngine::Playables::PlayableGraph*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_SCRIPTPLAYABLEBINDING_CREATESCRIPTOUTPUT_OFFSET))(arg, str, nullptr);
		}

	};
}

