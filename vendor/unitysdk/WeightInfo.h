#pragma once
#include "unitysdk.h"

namespace UnityEngine::Playables { class Playable; }

	inline static constexpr unsigned int WeightInfo_TypeDefinitionIndex = 36242;

	class WeightInfo : public Il2CppObject
	{
	public:
		::UnityEngine::Playables::Playable* mixer; // 0x10
		::UnityEngine::Playables::Playable* parentMixer; // 0x20
		::System::Int32 port; // 0x30

	};

