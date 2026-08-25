#pragma once
#include "../../../unitysdk.h"

namespace MX::GameLogic::DBModel { class GearDB; }

#define MX_GAMELOGIC_FACTORY_GEARDBFACTORY_CREATE_OFFSET UNITYSDK_OFFSET(0xFE0570)
#define MX_GAMELOGIC_FACTORY_GEARDBFACTORY_CREATE_OFFSET UNITYSDK_OFFSET(0xFE05E0)
#define MX_GAMELOGIC_FACTORY_GEARDBFACTORY_CREATE_OFFSET UNITYSDK_OFFSET(0xFE0660)
#define MX_GAMELOGIC_FACTORY_GEARDBFACTORY_CREATE_OFFSET UNITYSDK_OFFSET(0xFE06E0)
#define MX_GAMELOGIC_FACTORY_GEARDBFACTORY_.CTOR_OFFSET UNITYSDK_OFFSET(0xFE0760)

namespace MX::GameLogic::Factory
{
	inline static constexpr unsigned int GearDBFactory_TypeDefinitionIndex = 12456;

	class GearDBFactory : public Il2CppObject
	{
	public:
		::MX::GameLogic::DBModel::GearDB* Create(::System::Int64 arg)
		{
			return ((::MX::GameLogic::DBModel::GearDB*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_FACTORY_GEARDBFACTORY_CREATE_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::DBModel::GearDB* Create(::System::Int64 arg, ::System::Int64 arg2)
		{
			return ((::MX::GameLogic::DBModel::GearDB*(*)(::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_FACTORY_GEARDBFACTORY_CREATE_OFFSET))(arg, arg2, nullptr);
		}

		::MX::GameLogic::DBModel::GearDB* Create(::System::Int64 arg, ::System::Int32 arg2, ::System::Int32 arg3, ::System::Int64 arg4)
		{
			return ((::MX::GameLogic::DBModel::GearDB*(*)(::System::Int64, ::System::Int32, ::System::Int32, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_FACTORY_GEARDBFACTORY_CREATE_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::MX::GameLogic::DBModel::GearDB* Create(::System::Int64 arg, ::System::Int32 arg2, ::System::Int64 arg3, ::System::Int32 arg4)
		{
			return ((::MX::GameLogic::DBModel::GearDB*(*)(::System::Int64, ::System::Int32, ::System::Int64, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_FACTORY_GEARDBFACTORY_CREATE_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_FACTORY_GEARDBFACTORY_.CTOR_OFFSET))(nullptr);
		}

	};
}

