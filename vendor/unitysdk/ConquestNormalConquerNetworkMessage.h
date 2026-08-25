#pragma once
#include "unitysdk.h"

#define CONQUESTNORMALCONQUERNETWORKMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F30F50)

	inline static constexpr unsigned int ConquestNormalConquerNetworkMessage_TypeDefinitionIndex = 2241;

	class ConquestNormalConquerNetworkMessage : public Il2CppObject
	{
	public:
		::System::Boolean IsLevelUp; // 0x20

		::System::Void .ctor(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + CONQUESTNORMALCONQUERNETWORKMESSAGE_.CTOR_OFFSET))(arg, nullptr);
		}

	};

