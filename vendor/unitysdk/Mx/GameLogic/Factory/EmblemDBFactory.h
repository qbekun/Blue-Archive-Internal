#pragma once
#include "../../../unitysdk.h"

namespace MX::GameLogic::DBModel { class EmblemDB; }

#define MX_GAMELOGIC_FACTORY_EMBLEMDBFACTORY_CREATE_OFFSET UNITYSDK_OFFSET(0xFDFFC0)
#define MX_GAMELOGIC_FACTORY_EMBLEMDBFACTORY_.CTOR_OFFSET UNITYSDK_OFFSET(0xFE0020)

namespace MX::GameLogic::Factory
{
	inline static constexpr unsigned int EmblemDBFactory_TypeDefinitionIndex = 12453;

	class EmblemDBFactory : public Il2CppObject
	{
	public:
		::MX::GameLogic::DBModel::EmblemDB* Create(::System::Int64 arg)
		{
			return ((::MX::GameLogic::DBModel::EmblemDB*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_FACTORY_EMBLEMDBFACTORY_CREATE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_FACTORY_EMBLEMDBFACTORY_.CTOR_OFFSET))(nullptr);
		}

	};
}

