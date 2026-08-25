#pragma once
#include "../../../unitysdk.h"

namespace MX::GameLogic::DBModel { class WeaponDB; }

#define MX_GAMELOGIC_FACTORY_WEAPONDBFACTORY_CREATE_OFFSET UNITYSDK_OFFSET(0xFE0A50)
#define MX_GAMELOGIC_FACTORY_WEAPONDBFACTORY_CREATE_OFFSET UNITYSDK_OFFSET(0xFE0AC0)
#define MX_GAMELOGIC_FACTORY_WEAPONDBFACTORY_CREATE_OFFSET UNITYSDK_OFFSET(0xFE0B40)
#define MX_GAMELOGIC_FACTORY_WEAPONDBFACTORY_CREATE_OFFSET UNITYSDK_OFFSET(0xFE0BC0)
#define MX_GAMELOGIC_FACTORY_WEAPONDBFACTORY_.CTOR_OFFSET UNITYSDK_OFFSET(0xFE0C40)

namespace MX::GameLogic::Factory
{
	inline static constexpr unsigned int WeaponDBFactory_TypeDefinitionIndex = 12462;

	class WeaponDBFactory : public Il2CppObject
	{
	public:
		::MX::GameLogic::DBModel::WeaponDB* Create(::System::Int64 arg)
		{
			return ((::MX::GameLogic::DBModel::WeaponDB*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_FACTORY_WEAPONDBFACTORY_CREATE_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::DBModel::WeaponDB* Create(::System::Int64 arg, ::System::Int64 arg2)
		{
			return ((::MX::GameLogic::DBModel::WeaponDB*(*)(::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_FACTORY_WEAPONDBFACTORY_CREATE_OFFSET))(arg, arg2, nullptr);
		}

		::MX::GameLogic::DBModel::WeaponDB* Create(::System::Int64 arg, ::System::Int32 arg2, ::System::Int32 arg3, ::System::Int64 arg4)
		{
			return ((::MX::GameLogic::DBModel::WeaponDB*(*)(::System::Int64, ::System::Int32, ::System::Int32, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_FACTORY_WEAPONDBFACTORY_CREATE_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::MX::GameLogic::DBModel::WeaponDB* Create(::System::Int64 arg, ::System::Int32 arg2, ::System::Int64 arg3, ::System::Int32 arg4)
		{
			return ((::MX::GameLogic::DBModel::WeaponDB*(*)(::System::Int64, ::System::Int32, ::System::Int64, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_FACTORY_WEAPONDBFACTORY_CREATE_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_FACTORY_WEAPONDBFACTORY_.CTOR_OFFSET))(nullptr);
		}

	};
}

