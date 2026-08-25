#pragma once
#include "../../unitysdk.h"

namespace Unity::Mathematics { class uint4&; }

#define UNITY_COLLECTIONS_HASH128LONG_00000794$POSTFIXBURSTDELEGATE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9E3C540)
#define UNITY_COLLECTIONS_HASH128LONG_00000794$POSTFIXBURSTDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x9E3C610)

namespace Unity::Collections
{
	inline static constexpr unsigned int Hash128Long_00000794$PostfixBurstDelegate_TypeDefinitionIndex = 37050;

	class Hash128Long_00000794$PostfixBurstDelegate : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_HASH128LONG_00000794$POSTFIXBURSTDELEGATE_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Invoke(::System::Object** arg, ::System::Object** arg, ::System::Int64 arg, ::System::Object** arg, ::Unity::Mathematics::uint4&* arg)
		{
			((::System::Void(*)(::System::Object**, ::System::Object**, ::System::Int64, ::System::Object**, ::Unity::Mathematics::uint4&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_HASH128LONG_00000794$POSTFIXBURSTDELEGATE_INVOKE_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

	};
}

