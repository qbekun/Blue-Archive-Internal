#pragma once
#include "unitysdk.h"

namespace Mono::Security::X509 { class X509CertificateCollection; }
namespace Mono::Security::X509 { class X509Certificate; }

#define X509CERTIFICATEENUMERATOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x9103650)
#define X509CERTIFICATEENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x90F5590)
#define X509CERTIFICATEENUMERATOR_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x91037C0)
#define X509CERTIFICATEENUMERATOR_SYSTEM.COLLECTIONS.IENUMERATOR.MOVENEXT_OFFSET UNITYSDK_OFFSET(0x9103860)
#define X509CERTIFICATEENUMERATOR_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x9103900)
#define X509CERTIFICATEENUMERATOR_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x90F5AB0)

	inline static constexpr unsigned int X509CertificateEnumerator_TypeDefinitionIndex = 35750;

	class X509CertificateEnumerator : public Il2CppObject
	{
	public:
		::System::Collections::IEnumerator* enumerator; // 0x10

		::System::Void .ctor(::Mono::Security::X509::X509CertificateCollection* arg)
		{
			((::System::Void(*)(::Mono::Security::X509::X509CertificateCollection*, ::PVOID))((::PBYTE)hIl2Cpp + X509CERTIFICATEENUMERATOR_.CTOR_OFFSET))(arg, nullptr);
		}

		::Mono::Security::X509::X509Certificate* get_Current()
		{
			return (return (::Mono::Security::X509::X509Certificate*(*)(::PVOID))((::PBYTE)hIl2Cpp + X509CERTIFICATEENUMERATOR_GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + X509CERTIFICATEENUMERATOR_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Boolean System.Collections.IEnumerator.MoveNext()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + X509CERTIFICATEENUMERATOR_SYSTEM.COLLECTIONS.IENUMERATOR.MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + X509CERTIFICATEENUMERATOR_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + X509CERTIFICATEENUMERATOR_MOVENEXT_OFFSET))(nullptr);
		}

	};

