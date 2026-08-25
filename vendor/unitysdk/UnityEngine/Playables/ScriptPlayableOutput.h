#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::Playables { class PlayableOutputHandle; }
namespace UnityEngine::Playables { class ScriptPlayableOutput; }
namespace UnityEngine::Playables { class PlayableGraph; }
namespace UnityEngine::Playables { class PlayableOutput; }

#define UNITYENGINE_PLAYABLES_SCRIPTPLAYABLEOUTPUT_CREATE_OFFSET UNITYSDK_OFFSET(0xA26DB60)
#define UNITYENGINE_PLAYABLES_SCRIPTPLAYABLEOUTPUT_.CTOR_OFFSET UNITYSDK_OFFSET(0xA26DD00)
#define UNITYENGINE_PLAYABLES_SCRIPTPLAYABLEOUTPUT_GET_NULL_OFFSET UNITYSDK_OFFSET(0xA26DC10)
#define UNITYENGINE_PLAYABLES_SCRIPTPLAYABLEOUTPUT_GETHANDLE_OFFSET UNITYSDK_OFFSET(0xA26DE80)
#define UNITYENGINE_PLAYABLES_SCRIPTPLAYABLEOUTPUT_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0xA26DC00)

namespace UnityEngine::Playables
{
	inline static constexpr unsigned int ScriptPlayableOutput_TypeDefinitionIndex = 31622;

	class ScriptPlayableOutput : public Il2CppObject
	{
	public:
		::UnityEngine::Playables::PlayableOutputHandle* m_Handle; // 0x10

		::UnityEngine::Playables::ScriptPlayableOutput* Create(::UnityEngine::Playables::PlayableGraph* arg, ::System::String* str)
		{
			return (return (::UnityEngine::Playables::ScriptPlayableOutput*(*)(::UnityEngine::Playables::PlayableGraph*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_SCRIPTPLAYABLEOUTPUT_CREATE_OFFSET))(arg, str, nullptr);
		}

		::System::Void .ctor(::UnityEngine::Playables::PlayableOutputHandle* arg)
		{
			((::System::Void(*)(::UnityEngine::Playables::PlayableOutputHandle*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_SCRIPTPLAYABLEOUTPUT_.CTOR_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Playables::ScriptPlayableOutput* get_Null()
		{
			return (return (::UnityEngine::Playables::ScriptPlayableOutput*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_SCRIPTPLAYABLEOUTPUT_GET_NULL_OFFSET))(nullptr);
		}

		::UnityEngine::Playables::PlayableOutputHandle* GetHandle()
		{
			return (return (::UnityEngine::Playables::PlayableOutputHandle*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_SCRIPTPLAYABLEOUTPUT_GETHANDLE_OFFSET))(nullptr);
		}

		::UnityEngine::Playables::PlayableOutput* op_Implicit(::UnityEngine::Playables::ScriptPlayableOutput* arg)
		{
			return (return (::UnityEngine::Playables::PlayableOutput*(*)(::UnityEngine::Playables::ScriptPlayableOutput*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_SCRIPTPLAYABLEOUTPUT_OP_IMPLICIT_OFFSET))(arg, nullptr);
		}

	};
}

