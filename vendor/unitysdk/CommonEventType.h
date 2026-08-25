#pragma once
#include "unitysdk.h"

class CommonEventType;

	inline static constexpr unsigned int CommonEventType_TypeDefinitionIndex = 14880;

	class CommonEventType : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		CommonEventType* Invalid; // 0x0
		CommonEventType* TileConquer; // 0x0
		CommonEventType* TileUpgrade; // 0x0
		CommonEventType* BossOpen; // 0x0
		CommonEventType* StepComplete; // 0x0
		CommonEventType* MassErosion; // 0x0
		CommonEventType* Erosion; // 0x0
		CommonEventType* ErosionRemove; // 0x0
		CommonEventType* UnexpectedEvent; // 0x0
		CommonEventType* TileConquerReward; // 0x0

	};

