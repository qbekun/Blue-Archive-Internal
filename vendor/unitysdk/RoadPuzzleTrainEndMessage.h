#pragma once
#include "unitysdk.h"

#define ROADPUZZLETRAINENDMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x27CB660)

	inline static constexpr unsigned int RoadPuzzleTrainEndMessage_TypeDefinitionIndex = 7594;

	class RoadPuzzleTrainEndMessage : public ::TriInspector::TitleAttribute
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROADPUZZLETRAINENDMESSAGE_.CTOR_OFFSET))(nullptr);
		}

	};

