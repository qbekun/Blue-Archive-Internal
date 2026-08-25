#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_RUNTIME_COMPILERSERVICES_COMPILATIONRELAXATIONSATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x922B100)
#define SYSTEM_RUNTIME_COMPILERSERVICES_COMPILATIONRELAXATIONSATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x922B120)
#define SYSTEM_RUNTIME_COMPILERSERVICES_COMPILATIONRELAXATIONSATTRIBUTE_GET_COMPILATIONRELAXATIONS_OFFSET UNITYSDK_OFFSET(0x922B140)

namespace System::Runtime::CompilerServices
{
	inline static constexpr unsigned int CompilationRelaxationsAttribute_TypeDefinitionIndex = 24794;

	class CompilationRelaxationsAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::Int32 m_relaxations; // 0x10

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_COMPILATIONRELAXATIONSATTRIBUTE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Runtime::CompilerServices::CompilationRelaxations* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::CompilationRelaxations*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_COMPILATIONRELAXATIONSATTRIBUTE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_CompilationRelaxations()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_COMPILATIONRELAXATIONSATTRIBUTE_GET_COMPILATIONRELAXATIONS_OFFSET))(nullptr);
		}

	};
}

