#pragma once
#include "../../../unitysdk.h"

namespace MX::GameLogic::DBModel { class ItemDB; }

#define MX_GAMELOGIC_FACTORY_ITEMDBFACTORY_CREATE_OFFSET UNITYSDK_OFFSET(0xFE07E0)
#define MX_GAMELOGIC_FACTORY_ITEMDBFACTORY_.CTOR_OFFSET UNITYSDK_OFFSET(0xFE0840)

namespace MX::GameLogic::Factory
{
	inline static constexpr unsigned int ItemDBFactory_TypeDefinitionIndex = 12458;

	class ItemDBFactory : public Il2CppObject
	{
	public:
		::MX::GameLogic::DBModel::ItemDB* Create(::System::Int64 arg, ::System::Int64 arg2)
		{
			return ((::MX::GameLogic::DBModel::ItemDB*(*)(::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_FACTORY_ITEMDBFACTORY_CREATE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_FACTORY_ITEMDBFACTORY_.CTOR_OFFSET))(nullptr);
		}

	};
}

