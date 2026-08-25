#pragma once
#include "../../../unitysdk.h"

namespace MX::GameLogic::DBModel { class CostumeDB; }

#define MX_GAMELOGIC_FACTORY_COSTUMEDBFACTORY_CREATE_OFFSET UNITYSDK_OFFSET(0xFDFBE0)
#define MX_GAMELOGIC_FACTORY_COSTUMEDBFACTORY_CREATE_OFFSET UNITYSDK_OFFSET(0xFDFEC0)
#define MX_GAMELOGIC_FACTORY_COSTUMEDBFACTORY_ASSERTVALIDPRODUCTIONSTEP_OFFSET UNITYSDK_OFFSET(0xFDFC40)
#define MX_GAMELOGIC_FACTORY_COSTUMEDBFACTORY_.CTOR_OFFSET UNITYSDK_OFFSET(0xFDFF30)

namespace MX::GameLogic::Factory
{
	inline static constexpr unsigned int CostumeDBFactory_TypeDefinitionIndex = 12451;

	class CostumeDBFactory : public Il2CppObject
	{
	public:
		::MX::GameLogic::DBModel::CostumeDB* Create(::System::Int64 arg)
		{
			return ((::MX::GameLogic::DBModel::CostumeDB*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_FACTORY_COSTUMEDBFACTORY_CREATE_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::DBModel::CostumeDB* Create(::System::Int64 arg, ::System::Int64 arg2)
		{
			return ((::MX::GameLogic::DBModel::CostumeDB*(*)(::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_FACTORY_COSTUMEDBFACTORY_CREATE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AssertValidProductionStep(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_FACTORY_COSTUMEDBFACTORY_ASSERTVALIDPRODUCTIONSTEP_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_FACTORY_COSTUMEDBFACTORY_.CTOR_OFFSET))(nullptr);
		}

	};
}

