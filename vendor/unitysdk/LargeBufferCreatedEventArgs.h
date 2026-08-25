#pragma once
#include "unitysdk.h"

#define LARGEBUFFERCREATEDEVENTARGS_.CTOR_OFFSET UNITYSDK_OFFSET(0x90E6120)

	inline static constexpr unsigned int LargeBufferCreatedEventArgs_TypeDefinitionIndex = 37214;

	class LargeBufferCreatedEventArgs : public Il2CppObject
	{
	public:
		::System::Guid* _Id_k__BackingField; // 0x10
		::System::String* _Tag_k__BackingField; // 0x20
		::System::Boolean _Pooled_k__BackingField; // 0x28
		::System::Int64 _RequiredSize_k__BackingField; // 0x30
		::System::Int64 _LargePoolInUse_k__BackingField; // 0x38
		::System::String* _CallStack_k__BackingField; // 0x40

		::System::Void .ctor(::System::Guid* arg, ::System::String* str, ::System::Int64 arg, ::System::Int64 arg, ::System::Boolean arg, ::System::String* str)
		{
			((::System::Void(*)(::System::Guid*, ::System::String*, ::System::Int64, ::System::Int64, ::System::Boolean, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + LARGEBUFFERCREATEDEVENTARGS_.CTOR_OFFSET))(arg, str, arg, arg, arg, str, nullptr);
		}

	};

