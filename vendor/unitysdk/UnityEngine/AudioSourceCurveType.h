#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class AudioSourceCurveType; }

namespace UnityEngine
{
	inline static constexpr unsigned int AudioSourceCurveType_TypeDefinitionIndex = 37464;

	class AudioSourceCurveType : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::AudioSourceCurveType* CustomRolloff; // 0x0
		::UnityEngine::AudioSourceCurveType* SpatialBlend; // 0x0
		::UnityEngine::AudioSourceCurveType* ReverbZoneMix; // 0x0
		::UnityEngine::AudioSourceCurveType* Spread; // 0x0

	};
}

