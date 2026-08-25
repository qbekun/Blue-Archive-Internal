#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_RUNTIME_COMPILERSERVICES_INTERNALSVISIBLETOATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x922B150)
#define SYSTEM_RUNTIME_COMPILERSERVICES_INTERNALSVISIBLETOATTRIBUTE_GET_ASSEMBLYNAME_OFFSET UNITYSDK_OFFSET(0x922B180)
#define SYSTEM_RUNTIME_COMPILERSERVICES_INTERNALSVISIBLETOATTRIBUTE_SET_ALLINTERNALSVISIBLE_OFFSET UNITYSDK_OFFSET(0x922B190)

namespace System::Runtime::CompilerServices
{
	inline static constexpr unsigned int InternalsVisibleToAttribute_TypeDefinitionIndex = 24795;

	class InternalsVisibleToAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::String* _assemblyName; // 0x10
		::System::Boolean _allInternalsVisible; // 0x18

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_INTERNALSVISIBLETOATTRIBUTE_.CTOR_OFFSET))(str, nullptr);
		}

		::System::String* get_AssemblyName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_INTERNALSVISIBLETOATTRIBUTE_GET_ASSEMBLYNAME_OFFSET))(nullptr);
		}

		::System::Void set_AllInternalsVisible(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_INTERNALSVISIBLETOATTRIBUTE_SET_ALLINTERNALSVISIBLE_OFFSET))(arg, nullptr);
		}

	};
}

