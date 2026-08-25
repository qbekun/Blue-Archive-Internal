#pragma once
#include "unitysdk.h"

	inline static constexpr unsigned int MessageType_TypeDefinitionIndex = 28499;

	class MessageType : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		MessageType* Connect; // 0x0
		MessageType* Disconnect; // 0x0
		MessageType* NewLayout; // 0x0
		MessageType* NewDevice; // 0x0
		MessageType* NewEvents; // 0x0
		MessageType* RemoveDevice; // 0x0
		MessageType* RemoveLayout; // 0x0
		MessageType* ChangeUsages; // 0x0
		MessageType* StartSending; // 0x0
		MessageType* StopSending; // 0x0

	};

