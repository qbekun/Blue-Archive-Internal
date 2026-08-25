#pragma once
#include "unitysdk.h"

#define NXPMTKMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9C33940)

	inline static constexpr unsigned int NXPMTKMessage_TypeDefinitionIndex = 26764;

	class NXPMTKMessage : public Il2CppObject
	{
	public:
		::System::UInt64 Main; // 0x10
		::System::Int64 Sub; // 0x18
		::System::String* Detail; // 0x20
		::System::String* LocaleCode; // 0x28

		::System::Void .ctor(::System::UInt64 arg, ::System::Int64 arg, ::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::UInt64, ::System::Int64, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NXPMTKMESSAGE_.CTOR_OFFSET))(arg, arg, str, str, nullptr);
		}

	};

