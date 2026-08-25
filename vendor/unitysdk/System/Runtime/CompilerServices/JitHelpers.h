#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_RUNTIME_COMPILERSERVICES_JITHELPERS_UNSAFECAST_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_RUNTIME_COMPILERSERVICES_JITHELPERS_UNSAFEENUMCAST_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_RUNTIME_COMPILERSERVICES_JITHELPERS_UNSAFEENUMCASTLONG_OFFSET UNITYSDK_OFFSET(0x000000)

namespace System::Runtime::CompilerServices
{
	inline static constexpr unsigned int JitHelpers_TypeDefinitionIndex = 24798;

	class JitHelpers : public Il2CppObject
	{
	public:
		Il2CppObject* UnsafeCast(::System::Object* arg)
		{
			return (return (Il2CppObject*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_JITHELPERS_UNSAFECAST_OFFSET))(arg, nullptr);
		}

		::System::Int32 UnsafeEnumCast(Il2CppObject* arg)
		{
			return (return (::System::Int32(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_JITHELPERS_UNSAFEENUMCAST_OFFSET))(arg, nullptr);
		}

		::System::Int64 UnsafeEnumCastLong(Il2CppObject* arg)
		{
			return (return (::System::Int64(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_JITHELPERS_UNSAFEENUMCASTLONG_OFFSET))(arg, nullptr);
		}

	};
}

