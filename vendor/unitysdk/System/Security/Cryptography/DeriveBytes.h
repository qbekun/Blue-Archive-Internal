#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_SECURITY_CRYPTOGRAPHY_DERIVEBYTES_GETBYTES_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_DERIVEBYTES_RESET_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_DERIVEBYTES_DISPOSE_OFFSET UNITYSDK_OFFSET(0x918E820)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_DERIVEBYTES_DISPOSE_OFFSET UNITYSDK_OFFSET(0x918E880)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_DERIVEBYTES_.CTOR_OFFSET UNITYSDK_OFFSET(0x918E890)

namespace System::Security::Cryptography
{
	inline static constexpr unsigned int DeriveBytes_TypeDefinitionIndex = 24330;

	class DeriveBytes : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* GetBytes(::System::Int32 arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_DERIVEBYTES_GETBYTES_OFFSET))(arg, nullptr);
		}

		::System::Void Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_DERIVEBYTES_RESET_OFFSET))(nullptr);
		}

		::System::Void Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_DERIVEBYTES_DISPOSE_OFFSET))(nullptr);
		}

		::System::Void Dispose(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_DERIVEBYTES_DISPOSE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_DERIVEBYTES_.CTOR_OFFSET))(nullptr);
		}

	};
}

