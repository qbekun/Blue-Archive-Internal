#pragma once
#include "../../../unitysdk.h"

namespace MX::GameLogic::DBModel { class SNSPostDB; }

#define MX_GAMELOGIC_FACTORY_SNSPOSTDBFACTORY_CREATE_OFFSET UNITYSDK_OFFSET(0xFE0970)
#define MX_GAMELOGIC_FACTORY_SNSPOSTDBFACTORY_.CTOR_OFFSET UNITYSDK_OFFSET(0xFE09D0)

namespace MX::GameLogic::Factory
{
	inline static constexpr unsigned int SNSPostDBFactory_TypeDefinitionIndex = 12460;

	class SNSPostDBFactory : public Il2CppObject
	{
	public:
		::MX::GameLogic::DBModel::SNSPostDB* Create(::System::Int64 arg)
		{
			return ((::MX::GameLogic::DBModel::SNSPostDB*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_FACTORY_SNSPOSTDBFACTORY_CREATE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_FACTORY_SNSPOSTDBFACTORY_.CTOR_OFFSET))(nullptr);
		}

	};
}

