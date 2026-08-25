#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::Playables { class PlayableHandle; }
namespace UnityEngine::Playables { class Playable; }
namespace UnityEngine::Playables { class PlayableGraph; }

#define UNITYENGINE_PLAYABLES_PLAYABLE_GET_NULL_OFFSET UNITYSDK_OFFSET(0xA268C00)
#define UNITYENGINE_PLAYABLES_PLAYABLE_CREATE_OFFSET UNITYSDK_OFFSET(0xA268C60)
#define UNITYENGINE_PLAYABLES_PLAYABLE_.CTOR_OFFSET UNITYSDK_OFFSET(0xA268D70)
#define UNITYENGINE_PLAYABLES_PLAYABLE_GETHANDLE_OFFSET UNITYSDK_OFFSET(0xA268D80)
#define UNITYENGINE_PLAYABLES_PLAYABLE_ISPLAYABLEOFTYPE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_PLAYABLES_PLAYABLE_GETPLAYABLETYPE_OFFSET UNITYSDK_OFFSET(0xA268D90)
#define UNITYENGINE_PLAYABLES_PLAYABLE_EQUALS_OFFSET UNITYSDK_OFFSET(0xA268F10)
#define UNITYENGINE_PLAYABLES_PLAYABLE_.CCTOR_OFFSET UNITYSDK_OFFSET(0xA269080)

namespace UnityEngine::Playables
{
	inline static constexpr unsigned int Playable_TypeDefinitionIndex = 31605;

	class Playable : public Il2CppObject
	{
	public:
		::UnityEngine::Playables::PlayableHandle* m_Handle; // 0x10
		::UnityEngine::Playables::Playable* m_NullPlayable; // 0x0

		::UnityEngine::Playables::Playable* get_Null()
		{
			return (return (::UnityEngine::Playables::Playable*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLE_GET_NULL_OFFSET))(nullptr);
		}

		::UnityEngine::Playables::Playable* Create(::UnityEngine::Playables::PlayableGraph* arg, ::System::Int32 arg)
		{
			return (return (::UnityEngine::Playables::Playable*(*)(::UnityEngine::Playables::PlayableGraph*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLE_CREATE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::UnityEngine::Playables::PlayableHandle* arg)
		{
			((::System::Void(*)(::UnityEngine::Playables::PlayableHandle*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLE_.CTOR_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Playables::PlayableHandle* GetHandle()
		{
			return (return (::UnityEngine::Playables::PlayableHandle*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLE_GETHANDLE_OFFSET))(nullptr);
		}

		::System::Boolean IsPlayableOfType()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLE_ISPLAYABLEOFTYPE_OFFSET))(nullptr);
		}

		::System::Type* GetPlayableType()
		{
			return (return (::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLE_GETPLAYABLETYPE_OFFSET))(nullptr);
		}

		::System::Boolean Equals(::UnityEngine::Playables::Playable* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Playables::Playable*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLE_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLE_.CCTOR_OFFSET))(nullptr);
		}

	};
}

