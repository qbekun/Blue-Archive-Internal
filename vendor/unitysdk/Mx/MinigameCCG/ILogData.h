#pragma once
#include "../../unitysdk.h"

#define MX_MINIGAMECCG_ILOGDATA_GET_TURNPLAYERID_OFFSET UNITYSDK_OFFSET(0x000000)

namespace MX::MinigameCCG
{
	inline static constexpr unsigned int ILogData_TypeDefinitionIndex = 20484;

	class ILogData : public Il2CppObject
	{
	public:
		::System::Int32 get_TurnPlayerId()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_ILOGDATA_GET_TURNPLAYERID_OFFSET))(nullptr);
		}

	};
}

