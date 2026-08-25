#pragma once
#include "unitysdk.h"

#define TRAILS_ALLOCATE_OFFSET UNITYSDK_OFFSET(0xA296380)

	inline static constexpr unsigned int Trails_TypeDefinitionIndex = 36934;

	class Trails : public Il2CppObject
	{
	public:
		Il2CppObject* positions; // 0x10
		Il2CppObject* frontPositions; // 0x18
		Il2CppObject* backPositions; // 0x20
		Il2CppObject* positionCounts; // 0x28
		::System::Int32 maxTrailCount; // 0x30
		::System::Int32 maxPositionsPerTrailCount; // 0x34

		::System::Void Allocate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TRAILS_ALLOCATE_OFFSET))(nullptr);
		}

	};

