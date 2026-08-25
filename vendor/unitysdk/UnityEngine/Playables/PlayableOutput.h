#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::Playables { class PlayableOutputHandle; }
namespace UnityEngine::Playables { class PlayableOutput; }

#define UNITYENGINE_PLAYABLES_PLAYABLEOUTPUT_GET_NULL_OFFSET UNITYSDK_OFFSET(0xA269590)
#define UNITYENGINE_PLAYABLES_PLAYABLEOUTPUT_.CTOR_OFFSET UNITYSDK_OFFSET(0xA269A40)
#define UNITYENGINE_PLAYABLES_PLAYABLEOUTPUT_GETHANDLE_OFFSET UNITYSDK_OFFSET(0xA26CC50)
#define UNITYENGINE_PLAYABLES_PLAYABLEOUTPUT_ISPLAYABLEOUTPUTOFTYPE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_PLAYABLES_PLAYABLEOUTPUT_EQUALS_OFFSET UNITYSDK_OFFSET(0xA26CC60)
#define UNITYENGINE_PLAYABLES_PLAYABLEOUTPUT_.CCTOR_OFFSET UNITYSDK_OFFSET(0xA26CDD0)

namespace UnityEngine::Playables
{
	inline static constexpr unsigned int PlayableOutput_TypeDefinitionIndex = 31617;

	class PlayableOutput : public Il2CppObject
	{
	public:
		::UnityEngine::Playables::PlayableOutputHandle* m_Handle; // 0x10
		::UnityEngine::Playables::PlayableOutput* m_NullPlayableOutput; // 0x0

		::UnityEngine::Playables::PlayableOutput* get_Null()
		{
			return (return (::UnityEngine::Playables::PlayableOutput*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEOUTPUT_GET_NULL_OFFSET))(nullptr);
		}

		::System::Void .ctor(::UnityEngine::Playables::PlayableOutputHandle* arg)
		{
			((::System::Void(*)(::UnityEngine::Playables::PlayableOutputHandle*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEOUTPUT_.CTOR_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Playables::PlayableOutputHandle* GetHandle()
		{
			return (return (::UnityEngine::Playables::PlayableOutputHandle*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEOUTPUT_GETHANDLE_OFFSET))(nullptr);
		}

		::System::Boolean IsPlayableOutputOfType()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEOUTPUT_ISPLAYABLEOUTPUTOFTYPE_OFFSET))(nullptr);
		}

		::System::Boolean Equals(::UnityEngine::Playables::PlayableOutput* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Playables::PlayableOutput*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEOUTPUT_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEOUTPUT_.CCTOR_OFFSET))(nullptr);
		}

	};
}

