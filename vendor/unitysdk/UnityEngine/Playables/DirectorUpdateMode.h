#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::Playables { class DirectorUpdateMode; }

namespace UnityEngine::Playables
{
	inline static constexpr unsigned int DirectorUpdateMode_TypeDefinitionIndex = 31613;

	class DirectorUpdateMode : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::Playables::DirectorUpdateMode* DSPClock; // 0x0
		::UnityEngine::Playables::DirectorUpdateMode* GameTime; // 0x0
		::UnityEngine::Playables::DirectorUpdateMode* UnscaledGameTime; // 0x0
		::UnityEngine::Playables::DirectorUpdateMode* Manual; // 0x0

	};
}

