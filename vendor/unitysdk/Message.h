#pragma once
#include "unitysdk.h"

	inline static constexpr unsigned int Message_TypeDefinitionIndex = 28500;

	class Message : public Il2CppObject
	{
	public:
		::System::Int32 participantId; // 0x10
		MessageType* type; // 0x14
		::Il2CppArray<::System::Object*>* data; // 0x18

	};

