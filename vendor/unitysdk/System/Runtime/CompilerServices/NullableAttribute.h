#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_RUNTIME_COMPILERSERVICES_NULLABLEATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9F4C00)
#define SYSTEM_RUNTIME_COMPILERSERVICES_NULLABLEATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9F4C80)

namespace System::Runtime::CompilerServices
{
	inline static constexpr unsigned int NullableAttribute_TypeDefinitionIndex = 8;

	class NullableAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::Il2CppArray<::System::Object*>* NullableFlags; // 0x10

		::System::Void .ctor(::System::Byte arg)
		{
			((::System::Void(*)(::System::Byte, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_NULLABLEATTRIBUTE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_NULLABLEATTRIBUTE_.CTOR_OFFSET))(arg, nullptr);
		}

	};
}

