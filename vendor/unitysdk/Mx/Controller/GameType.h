#pragma once
#include "../../unitysdk.h"

namespace MX::Controller { class GameType; }

namespace MX::Controller
{
	inline static constexpr unsigned int GameType_TypeDefinitionIndex = 11145;

	class GameType : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::MX::Controller::GameType* None; // 0x0
		::MX::Controller::GameType* Field; // 0x0
		::MX::Controller::GameType* FieldInteraction; // 0x0
		::MX::Controller::GameType* UnderCover; // 0x0
		::MX::Controller::GameType* Shooting; // 0x0
		::MX::Controller::GameType* ShootingCharSelect; // 0x0

	};
}

