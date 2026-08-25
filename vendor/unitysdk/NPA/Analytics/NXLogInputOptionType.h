#pragma once
#include "../../unitysdk.h"

namespace NPA::Analytics { class NXLogInputOptionType; }

namespace NPA::Analytics
{
	inline static constexpr unsigned int NXLogInputOptionType_TypeDefinitionIndex = 27595;

	class NXLogInputOptionType : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::NPA::Analytics::NXLogInputOptionType* InputOptionKeyDownCheckInterval; // 0x0
		::NPA::Analytics::NXLogInputOptionType* InputOptionMouseButtonDownCheckInterval; // 0x0
		::NPA::Analytics::NXLogInputOptionType* InputOptionMouseMoveCheckInterval; // 0x0
		::NPA::Analytics::NXLogInputOptionType* InputOptionGamePadCheckInterval; // 0x0
		::NPA::Analytics::NXLogInputOptionType* InputOptionSendInterval; // 0x0
		::NPA::Analytics::NXLogInputOptionType* InputOptionBatchCount; // 0x0
		::NPA::Analytics::NXLogInputOptionType* InputOptionMouseDeltaPreRecordDuration; // 0x0
		::NPA::Analytics::NXLogInputOptionType* InputOptionMouseDeltaAccumulationInterval; // 0x0
		::NPA::Analytics::NXLogInputOptionType* InputOptionMax; // 0x0

	};
}

