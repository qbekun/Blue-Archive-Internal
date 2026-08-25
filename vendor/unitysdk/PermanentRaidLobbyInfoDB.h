#pragma once
#include "unitysdk.h"

#define PERMANENTRAIDLOBBYINFODB_.CTOR_OFFSET UNITYSDK_OFFSET(0x1ECD580)

	inline static constexpr unsigned int PermanentRaidLobbyInfoDB_TypeDefinitionIndex = 1780;

	class PermanentRaidLobbyInfoDB : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PERMANENTRAIDLOBBYINFODB_.CTOR_OFFSET))(nullptr);
		}

	};

