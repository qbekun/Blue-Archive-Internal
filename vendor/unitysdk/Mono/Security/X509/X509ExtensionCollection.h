#pragma once
#include "../../../unitysdk.h"

namespace Mono::Security { class ASN1; }
namespace Mono::Security::X509 { class X509Extension; }

#define MONO_SECURITY_X509_X509EXTENSIONCOLLECTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9105C50)
#define MONO_SECURITY_X509_X509EXTENSIONCOLLECTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9100360)
#define MONO_SECURITY_X509_X509EXTENSIONCOLLECTION_INDEXOF_OFFSET UNITYSDK_OFFSET(0x9105C60)
#define MONO_SECURITY_X509_X509EXTENSIONCOLLECTION_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x9105DC0)
#define MONO_SECURITY_X509_X509EXTENSIONCOLLECTION_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x9104C90)

namespace Mono::Security::X509
{
	inline static constexpr unsigned int X509ExtensionCollection_TypeDefinitionIndex = 35755;

	class X509ExtensionCollection : public Il2CppObject
	{
	public:
		::System::Boolean readOnly; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509EXTENSIONCOLLECTION_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::Mono::Security::ASN1* arg)
		{
			((::System::Void(*)(::Mono::Security::ASN1*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509EXTENSIONCOLLECTION_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Int32 IndexOf(::System::String* str)
		{
			return (return (::System::Int32(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509EXTENSIONCOLLECTION_INDEXOF_OFFSET))(str, nullptr);
		}

		::System::Collections::IEnumerator* System.Collections.IEnumerable.GetEnumerator()
		{
			return (return (::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509EXTENSIONCOLLECTION_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET))(nullptr);
		}

		::Mono::Security::X509::X509Extension* get_Item(::System::String* str)
		{
			return (return (::Mono::Security::X509::X509Extension*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509EXTENSIONCOLLECTION_GET_ITEM_OFFSET))(str, nullptr);
		}

	};
}

