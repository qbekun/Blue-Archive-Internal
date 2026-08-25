#pragma once
#include "unitysdk.h"

#define STREAMDOUBLEDISPOSEDEVENTARGS_.CTOR_OFFSET UNITYSDK_OFFSET(0x90E7610)

	inline static constexpr unsigned int StreamDoubleDisposedEventArgs_TypeDefinitionIndex = 37209;

	class StreamDoubleDisposedEventArgs : public Il2CppObject
	{
	public:
		::System::Guid* _Id_k__BackingField; // 0x10
		::System::String* _Tag_k__BackingField; // 0x20
		::System::String* _AllocationStack_k__BackingField; // 0x28
		::System::String* _DisposeStack1_k__BackingField; // 0x30
		::System::String* _DisposeStack2_k__BackingField; // 0x38

		::System::Void .ctor(::System::Guid* arg, ::System::String* str, ::System::String* str, ::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::Guid*, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + STREAMDOUBLEDISPOSEDEVENTARGS_.CTOR_OFFSET))(arg, str, str, str, str, nullptr);
		}

	};

