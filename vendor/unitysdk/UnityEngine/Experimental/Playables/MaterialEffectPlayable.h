#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::Playables { class PlayableHandle; }
namespace UnityEngine::Experimental::Playables { class MaterialEffectPlayable; }

#define UNITYENGINE_EXPERIMENTAL_PLAYABLES_MATERIALEFFECTPLAYABLE_GETHANDLE_OFFSET UNITYSDK_OFFSET(0xA2706A0)
#define UNITYENGINE_EXPERIMENTAL_PLAYABLES_MATERIALEFFECTPLAYABLE_EQUALS_OFFSET UNITYSDK_OFFSET(0xA2706B0)

namespace UnityEngine::Experimental::Playables
{
	inline static constexpr unsigned int MaterialEffectPlayable_TypeDefinitionIndex = 31644;

	class MaterialEffectPlayable : public Il2CppObject
	{
	public:
		::UnityEngine::Playables::PlayableHandle* m_Handle; // 0x10

		::UnityEngine::Playables::PlayableHandle* GetHandle()
		{
			return (return (::UnityEngine::Playables::PlayableHandle*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_PLAYABLES_MATERIALEFFECTPLAYABLE_GETHANDLE_OFFSET))(nullptr);
		}

		::System::Boolean Equals(::UnityEngine::Experimental::Playables::MaterialEffectPlayable* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Experimental::Playables::MaterialEffectPlayable*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_PLAYABLES_MATERIALEFFECTPLAYABLE_EQUALS_OFFSET))(arg, nullptr);
		}

	};
}

