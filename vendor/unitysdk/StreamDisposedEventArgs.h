#pragma once
#include "unitysdk.h"

#define STREAMDISPOSEDEVENTARGS_.CTOR_OFFSET UNITYSDK_OFFSET(0x90E7090)

	inline static constexpr unsigned int StreamDisposedEventArgs_TypeDefinitionIndex = 37208;

	class StreamDisposedEventArgs : public Il2CppObject
	{
	public:
		::System::Guid* _Id_k__BackingField; // 0x10
		::System::String* _Tag_k__BackingField; // 0x20
		::System::String* _AllocationStack_k__BackingField; // 0x28
		::System::String* _DisposeStack_k__BackingField; // 0x30
		::System::TimeSpan* _Lifetime_k__BackingField; // 0x38

		::System::Void .ctor(::System::Guid* arg, ::System::String* str, ::System::TimeSpan* arg, ::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::Guid*, ::System::String*, ::System::TimeSpan*, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + STREAMDISPOSEDEVENTARGS_.CTOR_OFFSET))(arg, str, arg, str, str, nullptr);
		}

	};

