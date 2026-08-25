#pragma once
#include "unitysdk.h"

#define STREAMCREATEDEVENTARGS_.CTOR_OFFSET UNITYSDK_OFFSET(0x90E6AF0)

	inline static constexpr unsigned int StreamCreatedEventArgs_TypeDefinitionIndex = 37207;

	class StreamCreatedEventArgs : public Il2CppObject
	{
	public:
		::System::Guid* _Id_k__BackingField; // 0x10
		::System::String* _Tag_k__BackingField; // 0x20
		::System::Int64 _RequestedSize_k__BackingField; // 0x28
		::System::Int64 _ActualSize_k__BackingField; // 0x30

		::System::Void .ctor(::System::Guid* arg, ::System::String* str, ::System::Int64 arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::System::Guid*, ::System::String*, ::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + STREAMCREATEDEVENTARGS_.CTOR_OFFSET))(arg, str, arg, arg, nullptr);
		}

	};

