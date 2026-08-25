#pragma once
#include "../../unitysdk.h"

#define MONO_BTLS_IMONOBTLSBIOMONO_READ_OFFSET UNITYSDK_OFFSET(0x000000)
#define MONO_BTLS_IMONOBTLSBIOMONO_WRITE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MONO_BTLS_IMONOBTLSBIOMONO_FLUSH_OFFSET UNITYSDK_OFFSET(0x000000)
#define MONO_BTLS_IMONOBTLSBIOMONO_CLOSE_OFFSET UNITYSDK_OFFSET(0x000000)

namespace Mono::Btls
{
	inline static constexpr unsigned int IMonoBtlsBioMono_TypeDefinitionIndex = 29093;

	class IMonoBtlsBioMono : public Il2CppObject
	{
	public:
		::System::Int32 Read(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg, bool&* arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, bool&*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_IMONOBTLSBIOMONO_READ_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Boolean Write(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_IMONOBTLSBIOMONO_WRITE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void Flush()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_IMONOBTLSBIOMONO_FLUSH_OFFSET))(nullptr);
		}

		::System::Void Close()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_IMONOBTLSBIOMONO_CLOSE_OFFSET))(nullptr);
		}

	};
}

