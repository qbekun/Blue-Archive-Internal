#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::Playables { class PlayableHandle; }
namespace UnityEngine::Experimental::Playables { class CameraPlayable; }

#define UNITYENGINE_EXPERIMENTAL_PLAYABLES_CAMERAPLAYABLE_GETHANDLE_OFFSET UNITYSDK_OFFSET(0xA2705C0)
#define UNITYENGINE_EXPERIMENTAL_PLAYABLES_CAMERAPLAYABLE_EQUALS_OFFSET UNITYSDK_OFFSET(0xA2705D0)

namespace UnityEngine::Experimental::Playables
{
	inline static constexpr unsigned int CameraPlayable_TypeDefinitionIndex = 31643;

	class CameraPlayable : public Il2CppObject
	{
	public:
		::UnityEngine::Playables::PlayableHandle* m_Handle; // 0x10

		::UnityEngine::Playables::PlayableHandle* GetHandle()
		{
			return (return (::UnityEngine::Playables::PlayableHandle*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_PLAYABLES_CAMERAPLAYABLE_GETHANDLE_OFFSET))(nullptr);
		}

		::System::Boolean Equals(::UnityEngine::Experimental::Playables::CameraPlayable* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Experimental::Playables::CameraPlayable*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_PLAYABLES_CAMERAPLAYABLE_EQUALS_OFFSET))(arg, nullptr);
		}

	};
}

