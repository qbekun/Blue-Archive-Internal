#pragma once
#include "unitysdk.h"

#define ROADPUZZLEUISELECTTILECHANGEDMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x27C92B0)

	inline static constexpr unsigned int RoadPuzzleUISelectTileChangedMessage_TypeDefinitionIndex = 7582;

	class RoadPuzzleUISelectTileChangedMessage : public ::TriInspector::TitleAttribute
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROADPUZZLEUISELECTTILECHANGEDMESSAGE_.CTOR_OFFSET))(nullptr);
		}

	};

