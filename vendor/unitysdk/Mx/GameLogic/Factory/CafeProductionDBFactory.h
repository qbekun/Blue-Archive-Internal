#pragma once
#include "../../../unitysdk.h"

namespace MX::GameLogic::DBModel { class CafeProductionDB; }

#define MX_GAMELOGIC_FACTORY_CAFEPRODUCTIONDBFACTORY_.CTOR_OFFSET UNITYSDK_OFFSET(0xFDE350)
#define MX_GAMELOGIC_FACTORY_CAFEPRODUCTIONDBFACTORY_CREATE_OFFSET UNITYSDK_OFFSET(0xFDE360)

namespace MX::GameLogic::Factory
{
	inline static constexpr unsigned int CafeProductionDBFactory_TypeDefinitionIndex = 12448;

	class CafeProductionDBFactory : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_FACTORY_CAFEPRODUCTIONDBFACTORY_.CTOR_OFFSET))(nullptr);
		}

		::MX::GameLogic::DBModel::CafeProductionDB* Create(::System::Int64 arg, ::System::Int64 arg2, Il2CppObject* arg3, ::System::Int64 arg4, ::System::DateTime* arg5)
		{
			return ((::MX::GameLogic::DBModel::CafeProductionDB*(*)(::System::Int64, ::System::Int64, Il2CppObject*, ::System::Int64, ::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_FACTORY_CAFEPRODUCTIONDBFACTORY_CREATE_OFFSET))(arg, arg2, arg3, arg4, arg5, nullptr);
		}

	};
}

