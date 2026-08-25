#pragma once
#include "../../unitysdk.h"

#define UNITY_COLLECTIONS_HASH64LONG_0000078D$POSTFIXBURSTDELEGATE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9E3C1E0)
#define UNITY_COLLECTIONS_HASH64LONG_0000078D$POSTFIXBURSTDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x9E3C2B0)

namespace Unity::Collections
{
	inline static constexpr unsigned int Hash64Long_0000078D$PostfixBurstDelegate_TypeDefinitionIndex = 37048;

	class Hash64Long_0000078D$PostfixBurstDelegate : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_HASH64LONG_0000078D$POSTFIXBURSTDELEGATE_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::UInt64 Invoke(::System::Object** arg, ::System::Object** arg, ::System::Int64 arg, ::System::Object** arg)
		{
			return (return (::System::UInt64(*)(::System::Object**, ::System::Object**, ::System::Int64, ::System::Object**, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_HASH64LONG_0000078D$POSTFIXBURSTDELEGATE_INVOKE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

	};
}

