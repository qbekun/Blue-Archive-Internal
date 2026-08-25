#pragma once
#include "../../../unitysdk.h"

namespace MX::GameLogic::DBModel { class EquipmentDB; }

#define MX_GAMELOGIC_FACTORY_EQUIPMENTDBFACTORY_CREATE_OFFSET UNITYSDK_OFFSET(0xFE0030)
#define MX_GAMELOGIC_FACTORY_EQUIPMENTDBFACTORY_CREATE_OFFSET UNITYSDK_OFFSET(0xFE00A0)
#define MX_GAMELOGIC_FACTORY_EQUIPMENTDBFACTORY_CREATE_OFFSET UNITYSDK_OFFSET(0xFE0130)
#define MX_GAMELOGIC_FACTORY_EQUIPMENTDBFACTORY_.CTOR_OFFSET UNITYSDK_OFFSET(0xFE01B0)

namespace MX::GameLogic::Factory
{
	inline static constexpr unsigned int EquipmentDBFactory_TypeDefinitionIndex = 12454;

	class EquipmentDBFactory : public Il2CppObject
	{
	public:
		::MX::GameLogic::DBModel::EquipmentDB* Create(::System::Int64 arg, ::System::Int64 arg2)
		{
			return ((::MX::GameLogic::DBModel::EquipmentDB*(*)(::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_FACTORY_EQUIPMENTDBFACTORY_CREATE_OFFSET))(arg, arg2, nullptr);
		}

		::MX::GameLogic::DBModel::EquipmentDB* Create(::System::Int64 arg, ::System::Int64 arg2, ::System::Int32 arg3, ::System::Int64 arg4, ::System::Int64 arg5)
		{
			return ((::MX::GameLogic::DBModel::EquipmentDB*(*)(::System::Int64, ::System::Int64, ::System::Int32, ::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_FACTORY_EQUIPMENTDBFACTORY_CREATE_OFFSET))(arg, arg2, arg3, arg4, arg5, nullptr);
		}

		::MX::GameLogic::DBModel::EquipmentDB* Create(::System::Int64 arg, ::System::Int32 arg2, ::System::Int64 arg3, ::System::Int64 arg4)
		{
			return ((::MX::GameLogic::DBModel::EquipmentDB*(*)(::System::Int64, ::System::Int32, ::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_FACTORY_EQUIPMENTDBFACTORY_CREATE_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_FACTORY_EQUIPMENTDBFACTORY_.CTOR_OFFSET))(nullptr);
		}

	};
}

