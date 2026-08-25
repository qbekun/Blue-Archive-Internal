#pragma once
#include "../../../unitysdk.h"

namespace MX::Data { class CafeData; }
namespace MX::GameLogic::DBModel { class FurnitureDB; }
namespace FlatData { class FurnitureLocation; }

#define MX_GAMELOGIC_FACTORY_FURNITUREDBFACTORY_CREATE_OFFSET UNITYSDK_OFFSET(0xFE01C0)
#define MX_GAMELOGIC_FACTORY_FURNITUREDBFACTORY_CREATE_OFFSET UNITYSDK_OFFSET(0xFE0280)
#define MX_GAMELOGIC_FACTORY_FURNITUREDBFACTORY_CREATE_OFFSET UNITYSDK_OFFSET(0xFE0390)
#define MX_GAMELOGIC_FACTORY_FURNITUREDBFACTORY_.CTOR_OFFSET UNITYSDK_OFFSET(0xFE04D0)
#define MX_GAMELOGIC_FACTORY_FURNITUREDBFACTORY_.CCTOR_OFFSET UNITYSDK_OFFSET(0xFE04E0)

namespace MX::GameLogic::Factory
{
	inline static constexpr unsigned int FurnitureDBFactory_TypeDefinitionIndex = 12455;

	class FurnitureDBFactory : public Il2CppObject
	{
	public:
		::MX::Data::CafeData* CafeData; // 0x0

		::MX::GameLogic::DBModel::FurnitureDB* Create(::System::Int64 arg, ::System::Int64 arg2)
		{
			return ((::MX::GameLogic::DBModel::FurnitureDB*(*)(::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_FACTORY_FURNITUREDBFACTORY_CREATE_OFFSET))(arg, arg2, nullptr);
		}

		::MX::GameLogic::DBModel::FurnitureDB* Create(::System::Int64 arg, ::FlatData::FurnitureLocation* arg2, ::System::Single arg3, ::System::Single arg4, ::System::Single arg5, ::System::Int64 arg6)
		{
			return ((::MX::GameLogic::DBModel::FurnitureDB*(*)(::System::Int64, ::FlatData::FurnitureLocation*, ::System::Single, ::System::Single, ::System::Single, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_FACTORY_FURNITUREDBFACTORY_CREATE_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, nullptr);
		}

		::MX::GameLogic::DBModel::FurnitureDB* Create(::System::Int64 arg, ::System::Int64 arg2, ::System::Int32 arg3, ::System::String* str, ::System::Int64 arg4)
		{
			return ((::MX::GameLogic::DBModel::FurnitureDB*(*)(::System::Int64, ::System::Int64, ::System::Int32, ::System::String*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_FACTORY_FURNITUREDBFACTORY_CREATE_OFFSET))(arg, arg2, arg3, str, arg4, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_FACTORY_FURNITUREDBFACTORY_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_FACTORY_FURNITUREDBFACTORY_.CCTOR_OFFSET))(nullptr);
		}

	};
}

