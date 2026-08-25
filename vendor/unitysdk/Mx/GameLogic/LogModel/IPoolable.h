#pragma once
#include "../../../unitysdk.h"

#define MX_GAMELOGIC_LOGMODEL_IPOOLABLE_RESET_OFFSET UNITYSDK_OFFSET(0x000000)

namespace MX::GameLogic::LogModel
{
	inline static constexpr unsigned int IPoolable_TypeDefinitionIndex = 12444;

	class IPoolable : public Il2CppObject
	{
	public:
		::System::Void Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_LOGMODEL_IPOOLABLE_RESET_OFFSET))(nullptr);
		}

	};
}

