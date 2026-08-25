#pragma once
#include "unitysdk.h"

#define PERMANENTRAIDROOMENDMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x26D6E80)

	inline static constexpr unsigned int PermanentRaidRoomEndMessage_TypeDefinitionIndex = 7032;

	class PermanentRaidRoomEndMessage : public ::TriInspector::TitleAttribute
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PERMANENTRAIDROOMENDMESSAGE_.CTOR_OFFSET))(nullptr);
		}

	};

