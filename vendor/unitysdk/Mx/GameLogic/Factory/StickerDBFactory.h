#pragma once
#include "../../../unitysdk.h"

namespace MX::GameLogic::DBModel { class StickerDB; }

#define MX_GAMELOGIC_FACTORY_STICKERDBFACTORY_.CTOR_OFFSET UNITYSDK_OFFSET(0xFE09E0)
#define MX_GAMELOGIC_FACTORY_STICKERDBFACTORY_CREATE_OFFSET UNITYSDK_OFFSET(0xFE09F0)

namespace MX::GameLogic::Factory
{
	inline static constexpr unsigned int StickerDBFactory_TypeDefinitionIndex = 12461;

	class StickerDBFactory : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_FACTORY_STICKERDBFACTORY_.CTOR_OFFSET))(nullptr);
		}

		::MX::GameLogic::DBModel::StickerDB* Create(::System::Int64 arg)
		{
			return ((::MX::GameLogic::DBModel::StickerDB*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_FACTORY_STICKERDBFACTORY_CREATE_OFFSET))(arg, nullptr);
		}

	};
}

