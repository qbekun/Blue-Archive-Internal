#pragma once
#include "unitysdk.h"

	inline static constexpr unsigned int RemoteSender_TypeDefinitionIndex = 28502;

	class RemoteSender : public Il2CppObject
	{
	public:
		::System::Int32 senderId; // 0x10
		::Il2CppArray<::System::Object*>* layouts; // 0x18
		::Il2CppArray<::System::Object*>* devices; // 0x20

	};

