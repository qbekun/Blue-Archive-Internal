#pragma once
#include "unitysdk.h"

#define ROADPUZZLETRAINSTARTMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x27CB650)

	inline static constexpr unsigned int RoadPuzzleTrainStartMessage_TypeDefinitionIndex = 7593;

	class RoadPuzzleTrainStartMessage : public ::TriInspector::TitleAttribute
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROADPUZZLETRAINSTARTMESSAGE_.CTOR_OFFSET))(nullptr);
		}

	};

