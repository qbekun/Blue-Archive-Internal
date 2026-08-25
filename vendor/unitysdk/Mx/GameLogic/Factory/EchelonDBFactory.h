#pragma once
#include "../../../unitysdk.h"

namespace MX::GameLogic::DBModel { class EchelonDB; }
namespace FlatData { class EchelonType; }

#define MX_GAMELOGIC_FACTORY_ECHELONDBFACTORY_.CTOR_OFFSET UNITYSDK_OFFSET(0xFDFF40)
#define MX_GAMELOGIC_FACTORY_ECHELONDBFACTORY_CREATE_OFFSET UNITYSDK_OFFSET(0xFDFF50)

namespace MX::GameLogic::Factory
{
	inline static constexpr unsigned int EchelonDBFactory_TypeDefinitionIndex = 12452;

	class EchelonDBFactory : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_FACTORY_ECHELONDBFACTORY_.CTOR_OFFSET))(nullptr);
		}

		::MX::GameLogic::DBModel::EchelonDB* Create(::System::Int64 arg, ::FlatData::EchelonType* arg2, ::System::Int64 arg3)
		{
			return ((::MX::GameLogic::DBModel::EchelonDB*(*)(::System::Int64, ::FlatData::EchelonType*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_FACTORY_ECHELONDBFACTORY_CREATE_OFFSET))(arg, arg2, arg3, nullptr);
		}

	};
}

