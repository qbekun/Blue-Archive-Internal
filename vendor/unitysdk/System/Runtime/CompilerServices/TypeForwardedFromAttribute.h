#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_RUNTIME_COMPILERSERVICES_TYPEFORWARDEDFROMATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9228340)
#define SYSTEM_RUNTIME_COMPILERSERVICES_TYPEFORWARDEDFROMATTRIBUTE_GET_ASSEMBLYFULLNAME_OFFSET UNITYSDK_OFFSET(0x92283D0)

namespace System::Runtime::CompilerServices
{
	inline static constexpr unsigned int TypeForwardedFromAttribute_TypeDefinitionIndex = 24766;

	class TypeForwardedFromAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::String* _AssemblyFullName_k__BackingField; // 0x10

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_TYPEFORWARDEDFROMATTRIBUTE_.CTOR_OFFSET))(str, nullptr);
		}

		::System::String* get_AssemblyFullName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_TYPEFORWARDEDFROMATTRIBUTE_GET_ASSEMBLYFULLNAME_OFFSET))(nullptr);
		}

	};
}

