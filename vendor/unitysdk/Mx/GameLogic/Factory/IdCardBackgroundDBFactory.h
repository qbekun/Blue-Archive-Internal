#pragma once
#include "../../../unitysdk.h"

namespace MX::GameLogic::DBModel { class IdCardBackgroundDB; }

#define MX_GAMELOGIC_FACTORY_IDCARDBACKGROUNDDBFACTORY_CREATE_OFFSET UNITYSDK_OFFSET(0xFE0770)
#define MX_GAMELOGIC_FACTORY_IDCARDBACKGROUNDDBFACTORY_.CTOR_OFFSET UNITYSDK_OFFSET(0xFE07D0)

namespace MX::GameLogic::Factory
{
	inline static constexpr unsigned int IdCardBackgroundDBFactory_TypeDefinitionIndex = 12457;

	class IdCardBackgroundDBFactory : public Il2CppObject
	{
	public:
		::MX::GameLogic::DBModel::IdCardBackgroundDB* Create(::System::Int64 arg)
		{
			return ((::MX::GameLogic::DBModel::IdCardBackgroundDB*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_FACTORY_IDCARDBACKGROUNDDBFACTORY_CREATE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_FACTORY_IDCARDBACKGROUNDDBFACTORY_.CTOR_OFFSET))(nullptr);
		}

	};
}

