#pragma once
#include "../../unitysdk.h"

namespace MX::SaveData { class MemoryLobbyAni; }

namespace MX::SaveData
{
	inline static constexpr unsigned int MemoryLobbyAni_TypeDefinitionIndex = 20032;

	class MemoryLobbyAni : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::MX::SaveData::MemoryLobbyAni* Always; // 0x0
		::MX::SaveData::MemoryLobbyAni* OnceADay; // 0x0
		::MX::SaveData::MemoryLobbyAni* Never; // 0x0

	};
}

