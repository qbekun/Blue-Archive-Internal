#pragma once
#include "../unitysdk.h"

#define SYSTEM_RESOLVEEVENTARGS_.CTOR_OFFSET UNITYSDK_OFFSET(0x9371950)
#define SYSTEM_RESOLVEEVENTARGS_.CTOR_OFFSET UNITYSDK_OFFSET(0x93719B0)

namespace System
{
	inline static constexpr unsigned int ResolveEventArgs_TypeDefinitionIndex = 23824;

	class ResolveEventArgs : public Il2CppObject
	{
	public:
		::System::String* _Name_k__BackingField; // 0x10
		::System::Reflection::Assembly* _RequestingAssembly_k__BackingField; // 0x18

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RESOLVEEVENTARGS_.CTOR_OFFSET))(str, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::System::Reflection::Assembly* arg)
		{
			((::System::Void(*)(::System::String*, ::System::Reflection::Assembly*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RESOLVEEVENTARGS_.CTOR_OFFSET))(str, arg, nullptr);
		}

	};
}

