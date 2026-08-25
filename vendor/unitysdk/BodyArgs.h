#pragma once
#include "unitysdk.h"

	inline static constexpr unsigned int BodyArgs_TypeDefinitionIndex = 26719;

	class BodyArgs : public Il2CppObject
	{
	public:
		::System::String* svcID; // 0x10
		::System::String* npToken; // 0x18
		::System::String* udid; // 0x20
		::System::String* ldid; // 0x28
		::System::String* pushToken; // 0x30
		::System::String* country; // 0x38
		::System::String* loc; // 0x40
		::System::String* platform; // 0x48
		::System::String* appId; // 0x50

	};

