#pragma once
#include "../../unitysdk.h"

#define MONO_BTLS_MONOBTLSBIO_.CTOR_OFFSET UNITYSDK_OFFSET(0x96DB730)
#define MONO_BTLS_MONOBTLSBIO_GET_HANDLE_OFFSET UNITYSDK_OFFSET(0x96DB790)
#define MONO_BTLS_MONOBTLSBIO_MONO_BTLS_BIO_FREE_OFFSET UNITYSDK_OFFSET(0x96DB830)

namespace Mono::Btls
{
	inline static constexpr unsigned int MonoBtlsBio_TypeDefinitionIndex = 29091;

	class MonoBtlsBio : public Il2CppObject
	{
	public:
		::System::Void .ctor(BoringBioHandle* arg)
		{
			((::System::Void(*)(BoringBioHandle*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSBIO_.CTOR_OFFSET))(arg, nullptr);
		}

		BoringBioHandle* get_Handle()
		{
			return (return (BoringBioHandle*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSBIO_GET_HANDLE_OFFSET))(nullptr);
		}

		::System::Void mono_btls_bio_free(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSBIO_MONO_BTLS_BIO_FREE_OFFSET))(arg, nullptr);
		}

	};
}

