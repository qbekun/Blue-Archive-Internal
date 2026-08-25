#pragma once
#include "unitysdk.h"

	inline static constexpr unsigned int BakingStateCache_TypeDefinitionIndex = 34323;

	class BakingStateCache : public Il2CppObject
	{
	public:
		ClipperOffset* offsetter; // 0x10
		Il2CppObject* solutions; // 0x18
		PolygonSolution* rightCandidate; // 0x20
		PolygonSolution* leftCandidate; // 0x30
		Il2CppObject* maxCandidate; // 0x40
		::System::Single stepSize; // 0x48
		::System::Single maxFrustumHeight; // 0x4C
		::System::Single currentFrustumHeight; // 0x50
		::System::Single bakeTime; // 0x54

	};

