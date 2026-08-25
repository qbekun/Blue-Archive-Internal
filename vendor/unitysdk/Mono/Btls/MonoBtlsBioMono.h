#pragma once
#include "../../unitysdk.h"

namespace Mono::Btls { class IMonoBtlsBioMono; }

#define MONO_BTLS_MONOBTLSBIOMONO_.CTOR_OFFSET UNITYSDK_OFFSET(0x96DC580)
#define MONO_BTLS_MONOBTLSBIOMONO_MONO_BTLS_BIO_MONO_NEW_OFFSET UNITYSDK_OFFSET(0x96DC920)
#define MONO_BTLS_MONOBTLSBIOMONO_MONO_BTLS_BIO_MONO_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x96DCC10)
#define MONO_BTLS_MONOBTLSBIOMONO_CONTROL_OFFSET UNITYSDK_OFFSET(0x96DCCC0)
#define MONO_BTLS_MONOBTLSBIOMONO_ONREAD_OFFSET UNITYSDK_OFFSET(0x96DCDB0)
#define MONO_BTLS_MONOBTLSBIOMONO_ONREAD_OFFSET UNITYSDK_OFFSET(0x96DC0F0)
#define MONO_BTLS_MONOBTLSBIOMONO_ONWRITE_OFFSET UNITYSDK_OFFSET(0x96DCF20)
#define MONO_BTLS_MONOBTLSBIOMONO_ONWRITE_OFFSET UNITYSDK_OFFSET(0x96DC290)
#define MONO_BTLS_MONOBTLSBIOMONO_CONTROL_OFFSET UNITYSDK_OFFSET(0x96DC410)
#define MONO_BTLS_MONOBTLSBIOMONO_CLOSE_OFFSET UNITYSDK_OFFSET(0x96DD030)

namespace Mono::Btls
{
	inline static constexpr unsigned int MonoBtlsBioMono_TypeDefinitionIndex = 29098;

	class MonoBtlsBioMono : public Il2CppObject
	{
	public:
		::System::Runtime::InteropServices::GCHandle* handle; // 0x20
		::System::Int32 instance; // 0x28
		BioReadFunc* readFunc; // 0x30
		BioWriteFunc* writeFunc; // 0x38
		BioControlFunc* controlFunc; // 0x40
		::System::Int32 readFuncPtr; // 0x48
		::System::Int32 writeFuncPtr; // 0x50
		::System::Int32 controlFuncPtr; // 0x58
		::Mono::Btls::IMonoBtlsBioMono* backend; // 0x60

		::System::Void .ctor(::Mono::Btls::IMonoBtlsBioMono* arg)
		{
			((::System::Void(*)(::Mono::Btls::IMonoBtlsBioMono*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSBIOMONO_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Int32 mono_btls_bio_mono_new()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSBIOMONO_MONO_BTLS_BIO_MONO_NEW_OFFSET))(nullptr);
		}

		::System::Void mono_btls_bio_mono_initialize(::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSBIOMONO_MONO_BTLS_BIO_MONO_INITIALIZE_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Int64 Control(ControlCommand* arg, ::System::Int64 arg)
		{
			return (return (::System::Int64(*)(ControlCommand*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSBIOMONO_CONTROL_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 OnRead(::System::Int32 arg, ::System::Int32 arg, int32_t&* arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::System::Int32, int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSBIOMONO_ONREAD_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 OnRead(::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, int32_t&* arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::System::Int32, ::System::Int32, int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSBIOMONO_ONREAD_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Int32 OnWrite(::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSBIOMONO_ONWRITE_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 OnWrite(::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSBIOMONO_ONWRITE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int64 Control(::System::Int32 arg, ControlCommand* arg, ::System::Int64 arg)
		{
			return (return (::System::Int64(*)(::System::Int32, ControlCommand*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSBIOMONO_CONTROL_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void Close()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSBIOMONO_CLOSE_OFFSET))(nullptr);
		}

	};
}

