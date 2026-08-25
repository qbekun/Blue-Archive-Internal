#pragma once
#include "../../../unitysdk.h"

namespace Mono::Security::X509 { class X509Store; }

#define MONO_SECURITY_X509_X509STORES_.CTOR_OFFSET UNITYSDK_OFFSET(0x9106C60)
#define MONO_SECURITY_X509_X509STORES_GET_TRUSTEDROOT_OFFSET UNITYSDK_OFFSET(0x9106D70)
#define MONO_SECURITY_X509_X509STORES_OPEN_OFFSET UNITYSDK_OFFSET(0x9106E50)

namespace Mono::Security::X509
{
	inline static constexpr unsigned int X509Stores_TypeDefinitionIndex = 35758;

	class X509Stores : public Il2CppObject
	{
	public:
		::System::String* _storePath; // 0x10
		::System::Boolean _newFormat; // 0x18
		::Mono::Security::X509::X509Store* _trusted; // 0x20

		::System::Void .ctor(::System::String* str, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::String*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509STORES_.CTOR_OFFSET))(str, arg, nullptr);
		}

		::Mono::Security::X509::X509Store* get_TrustedRoot()
		{
			return (return (::Mono::Security::X509::X509Store*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509STORES_GET_TRUSTEDROOT_OFFSET))(nullptr);
		}

		::Mono::Security::X509::X509Store* Open(::System::String* str, ::System::Boolean arg)
		{
			return (return (::Mono::Security::X509::X509Store*(*)(::System::String*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509STORES_OPEN_OFFSET))(str, arg, nullptr);
		}

	};
}

