#pragma once
#include "../../../unitysdk.h"

#define ICSHARPCODE_SHARPZIPLIB_ENCRYPTION_PKZIPCLASSIC_GENERATEKEYS_OFFSET UNITYSDK_OFFSET(0x904F160)
#define ICSHARPCODE_SHARPZIPLIB_ENCRYPTION_PKZIPCLASSIC_.CTOR_OFFSET UNITYSDK_OFFSET(0x9055AC0)

namespace ICSharpCode::SharpZipLib::Encryption
{
	inline static constexpr unsigned int PkzipClassic_TypeDefinitionIndex = 37131;

	class PkzipClassic : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* GenerateKeys(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ENCRYPTION_PKZIPCLASSIC_GENERATEKEYS_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ENCRYPTION_PKZIPCLASSIC_.CTOR_OFFSET))(nullptr);
		}

	};
}

