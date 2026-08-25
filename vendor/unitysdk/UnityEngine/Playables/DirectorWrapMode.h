#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::Playables { class DirectorWrapMode; }

namespace UnityEngine::Playables
{
	inline static constexpr unsigned int DirectorWrapMode_TypeDefinitionIndex = 31604;

	class DirectorWrapMode : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::Playables::DirectorWrapMode* Hold; // 0x0
		::UnityEngine::Playables::DirectorWrapMode* Loop; // 0x0
		::UnityEngine::Playables::DirectorWrapMode* None; // 0x0

	};
}

