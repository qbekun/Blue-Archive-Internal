#pragma once
#include "../../unitysdk.h"

#define MONO_BTLS_MONOBTLSBIOMEMORY_MONO_BTLS_BIO_MEM_NEW_OFFSET UNITYSDK_OFFSET(0x96DB9B0)
#define MONO_BTLS_MONOBTLSBIOMEMORY_MONO_BTLS_BIO_MEM_GET_DATA_OFFSET UNITYSDK_OFFSET(0x96DBA30)
#define MONO_BTLS_MONOBTLSBIOMEMORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x96DBAC0)
#define MONO_BTLS_MONOBTLSBIOMEMORY_GETDATA_OFFSET UNITYSDK_OFFSET(0x96DBBA0)

namespace Mono::Btls
{
	inline static constexpr unsigned int MonoBtlsBioMemory_TypeDefinitionIndex = 29092;

	class MonoBtlsBioMemory : public Il2CppObject
	{
	public:
		::System::Int32 mono_btls_bio_mem_new()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSBIOMEMORY_MONO_BTLS_BIO_MEM_NEW_OFFSET))(nullptr);
		}

		::System::Int32 mono_btls_bio_mem_get_data(::System::Int32 arg, int32_t&* arg)
		{
			return (return (::System::Int32(*)(::System::Int32, int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSBIOMEMORY_MONO_BTLS_BIO_MEM_GET_DATA_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSBIOMEMORY_.CTOR_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* GetData()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSBIOMEMORY_GETDATA_OFFSET))(nullptr);
		}

	};
}

