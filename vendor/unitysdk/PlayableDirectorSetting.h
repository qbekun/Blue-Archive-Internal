#pragma once
#include "unitysdk.h"

namespace UnityEngine::Playables { class PlayableAsset; }

#define PLAYABLEDIRECTORSETTING_.CTOR_OFFSET UNITYSDK_OFFSET(0x13D1DB0)

	inline static constexpr unsigned int PlayableDirectorSetting_TypeDefinitionIndex = 1071;

	class PlayableDirectorSetting : public Il2CppObject
	{
	public:
		::System::Int64 CharacterId; // 0x10
		::System::String* Key; // 0x18
		::UnityEngine::Playables::PlayableAsset* playableAsset; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLAYABLEDIRECTORSETTING_.CTOR_OFFSET))(nullptr);
		}

	};

