#pragma once
#include "../../../unitysdk.h"

#define MX_GAMELOGIC_SERVICE_OPTIONSERVICE_.CTOR_OFFSET UNITYSDK_OFFSET(0xFB9090)

namespace MX::GameLogic::Service
{
	inline static constexpr unsigned int OptionService_TypeDefinitionIndex = 12388;

	class OptionService : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_OPTIONSERVICE_.CTOR_OFFSET))(nullptr);
		}

	};
}

