#pragma once
#include "../../../unitysdk.h"

namespace MX::GameLogic::DBModel { class MemoryLobbyDB; }

#define MX_GAMELOGIC_FACTORY_MEMORYLOBBYDBFACTORY_.CTOR_OFFSET UNITYSDK_OFFSET(0xFE0850)
#define MX_GAMELOGIC_FACTORY_MEMORYLOBBYDBFACTORY_CREATE_OFFSET UNITYSDK_OFFSET(0xFE0860)

namespace MX::GameLogic::Factory
{
	inline static constexpr unsigned int MemoryLobbyDBFactory_TypeDefinitionIndex = 12459;

	class MemoryLobbyDBFactory : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_FACTORY_MEMORYLOBBYDBFACTORY_.CTOR_OFFSET))(nullptr);
		}

		::MX::GameLogic::DBModel::MemoryLobbyDB* Create(::System::Int64 arg)
		{
			return ((::MX::GameLogic::DBModel::MemoryLobbyDB*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_FACTORY_MEMORYLOBBYDBFACTORY_CREATE_OFFSET))(arg, nullptr);
		}

	};
}

