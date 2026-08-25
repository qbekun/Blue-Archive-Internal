#pragma once
#include "unitysdk.h"

#define MOMOTALKHISTORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1EBDE80)

	inline static constexpr unsigned int MomotalkHistory_TypeDefinitionIndex = 1750;

	class MomotalkHistory : public Il2CppObject
	{
	public:
		::System::Int64 ServerId; // 0x10
		::System::Int64 MessageGroupId; // 0x18
		::System::Int64 ChosenMessageId; // 0x20
		::System::Boolean IsRead; // 0x28
		::System::Int32 NewMessageCount; // 0x2C
		::System::Boolean IsFeedBack; // 0x30

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOMOTALKHISTORY_.CTOR_OFFSET))(nullptr);
		}

	};

