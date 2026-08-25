#pragma once
#include "unitysdk.h"

#define PAYLOAD_CLONE_OFFSET UNITYSDK_OFFSET(0x9BB3C40)

	inline static constexpr unsigned int Payload_TypeDefinitionIndex = 25424;

	class Payload : public Il2CppObject
	{
	public:
		::System::String* uuid; // 0x10
		::System::String* guid; // 0x18
		::System::String* gid; // 0x20
		::System::String* version; // 0x28
		::System::String* source; // 0x30
		::System::String* name; // 0x38
		::System::String* message; // 0x40
		Tracer* tracer; // 0x48
		Annotations* annotations; // 0x68

		Payload* Clone()
		{
			return (return (Payload*(*)(::PVOID))((::PBYTE)hIl2Cpp + PAYLOAD_CLONE_OFFSET))(nullptr);
		}

	};

