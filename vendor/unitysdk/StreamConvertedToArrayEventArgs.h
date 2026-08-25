#pragma once
#include "unitysdk.h"

#define STREAMCONVERTEDTOARRAYEVENTARGS_.CTOR_OFFSET UNITYSDK_OFFSET(0x90E8090)

	inline static constexpr unsigned int StreamConvertedToArrayEventArgs_TypeDefinitionIndex = 37211;

	class StreamConvertedToArrayEventArgs : public Il2CppObject
	{
	public:
		::System::Guid* _Id_k__BackingField; // 0x10
		::System::String* _Tag_k__BackingField; // 0x20
		::System::String* _Stack_k__BackingField; // 0x28
		::System::Int64 _Length_k__BackingField; // 0x30

		::System::Void .ctor(::System::Guid* arg, ::System::String* str, ::System::String* str, ::System::Int64 arg)
		{
			((::System::Void(*)(::System::Guid*, ::System::String*, ::System::String*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + STREAMCONVERTEDTOARRAYEVENTARGS_.CTOR_OFFSET))(arg, str, str, arg, nullptr);
		}

	};

