#pragma once
#include "unitysdk.h"

#define <READREVERSERDNS>D__21_.CTOR_OFFSET UNITYSDK_OFFSET(0x9ACBB70)
#define <READREVERSERDNS>D__21_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x9ACBBA0)
#define <READREVERSERDNS>D__21_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x9ACBBB0)
#define <READREVERSERDNS>D__21_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.COLLECTIONS.GENERIC.KEYVALUEPAIR_SYSTEM.STRING_SYSTEM.STRING__.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x9ACBE60)
#define <READREVERSERDNS>D__21_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x9ACBE70)
#define <READREVERSERDNS>D__21_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x9ACBEC0)
#define <READREVERSERDNS>D__21_SYSTEM.COLLECTIONS.GENERIC.IENUMERABLE_SYSTEM.COLLECTIONS.GENERIC.KEYVALUEPAIR_SYSTEM.STRING_SYSTEM.STRING__.GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x9ACBF10)
#define <READREVERSERDNS>D__21_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x9ACBFB0)

	inline static constexpr unsigned int <ReadReverseRdns>d__21_TypeDefinitionIndex = 29159;

	class <ReadReverseRdns>d__21 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		Il2CppObject* __2__current; // 0x18
		::System::Int32 __l__initialThreadId; // 0x28
		::System::Security::Cryptography::X509Certificates::X500DistinguishedName* name; // 0x30
		::System::Security::Cryptography::X509Certificates::X500DistinguishedName* __3__name; // 0x38
		Il2CppObject* _rdnReaders_5__2; // 0x40
		::System::Security::Cryptography::DerSequenceReader* _rdnReader_5__3; // 0x48

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <READREVERSERDNS>D__21_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <READREVERSERDNS>D__21_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <READREVERSERDNS>D__21_MOVENEXT_OFFSET))(nullptr);
		}

		Il2CppObject* System.Collections.Generic.IEnumerator_System.Collections.Generic.KeyValuePair_System.String_System.String__.get_Current()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + <READREVERSERDNS>D__21_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.COLLECTIONS.GENERIC.KEYVALUEPAIR_SYSTEM.STRING_SYSTEM.STRING__.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <READREVERSERDNS>D__21_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <READREVERSERDNS>D__21_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

		Il2CppObject* System.Collections.Generic.IEnumerable_System.Collections.Generic.KeyValuePair_System.String_System.String__.GetEnumerator()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + <READREVERSERDNS>D__21_SYSTEM.COLLECTIONS.GENERIC.IENUMERABLE_SYSTEM.COLLECTIONS.GENERIC.KEYVALUEPAIR_SYSTEM.STRING_SYSTEM.STRING__.GETENUMERATOR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* System.Collections.IEnumerable.GetEnumerator()
		{
			return (return (::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + <READREVERSERDNS>D__21_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET))(nullptr);
		}

	};

