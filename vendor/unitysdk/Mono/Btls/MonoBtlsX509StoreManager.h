#pragma once
#include "../../unitysdk.h"

namespace Mono::Btls { class MonoBtlsX509StoreType; }

#define MONO_BTLS_MONOBTLSX509STOREMANAGER_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x9AC4630)
#define MONO_BTLS_MONOBTLSX509STOREMANAGER_DOINITIALIZE_OFFSET UNITYSDK_OFFSET(0x9AC4840)
#define MONO_BTLS_MONOBTLSX509STOREMANAGER_GETSTOREPATH_OFFSET UNITYSDK_OFFSET(0x9AC4A10)

namespace Mono::Btls
{
	inline static constexpr unsigned int MonoBtlsX509StoreManager_TypeDefinitionIndex = 29145;

	class MonoBtlsX509StoreManager : public Il2CppObject
	{
	public:
		::System::Boolean initialized; // 0x0
		::System::String* machineTrustedRootPath; // 0x8
		::System::String* machineIntermediateCAPath; // 0x10
		::System::String* machineUntrustedPath; // 0x18
		::System::String* userTrustedRootPath; // 0x20
		::System::String* userIntermediateCAPath; // 0x28
		::System::String* userUntrustedPath; // 0x30

		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSX509STOREMANAGER_INITIALIZE_OFFSET))(nullptr);
		}

		::System::Void DoInitialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSX509STOREMANAGER_DOINITIALIZE_OFFSET))(nullptr);
		}

		::System::String* GetStorePath(::Mono::Btls::MonoBtlsX509StoreType* arg)
		{
			return (return (::System::String*(*)(::Mono::Btls::MonoBtlsX509StoreType*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSX509STOREMANAGER_GETSTOREPATH_OFFSET))(arg, nullptr);
		}

	};
}

