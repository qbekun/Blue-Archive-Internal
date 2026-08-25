#pragma once
#include "unitysdk.h"

namespace MX::Campaign { class HexLocation; }

#define ROADPUZZLETRAINPASSEDREWARDTILEMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x27CB670)

	inline static constexpr unsigned int RoadPuzzleTrainPassedRewardTileMessage_TypeDefinitionIndex = 7595;

	class RoadPuzzleTrainPassedRewardTileMessage : public ::TriInspector::TitleAttribute
	{
	public:
		::MX::Campaign::HexLocation* TileLocation; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROADPUZZLETRAINPASSEDREWARDTILEMESSAGE_.CTOR_OFFSET))(nullptr);
		}

	};

