#pragma once
#include "../../unitysdk.h"

namespace MX::SaveData { class RandomLobby; }

namespace MX::SaveData
{
	inline static constexpr unsigned int RandomLobby_TypeDefinitionIndex = 20033;

	class RandomLobby : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::MX::SaveData::RandomLobby* Always; // 0x0
		::MX::SaveData::RandomLobby* OnceADay; // 0x0
		::MX::SaveData::RandomLobby* Never; // 0x0

	};
}

