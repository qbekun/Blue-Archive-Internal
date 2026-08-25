#pragma once
#include "../../unitysdk.h"

#define SYSTEM_XML_SECURESTRINGHASHER_.CTOR_OFFSET UNITYSDK_OFFSET(0x995A010)
#define SYSTEM_XML_SECURESTRINGHASHER_EQUALS_OFFSET UNITYSDK_OFFSET(0x995A030)
#define SYSTEM_XML_SECURESTRINGHASHER_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x995A050)
#define SYSTEM_XML_SECURESTRINGHASHER_GETHASHCODEOFSTRING_OFFSET UNITYSDK_OFFSET(0x995A250)
#define SYSTEM_XML_SECURESTRINGHASHER_GETHASHCODEDELEGATE_OFFSET UNITYSDK_OFFSET(0x995A100)

namespace System::Xml
{
	inline static constexpr unsigned int SecureStringHasher_TypeDefinitionIndex = 27660;

	class SecureStringHasher : public Il2CppObject
	{
	public:
		HashCodeOfStringDelegate* hashCodeDelegate; // 0x0
		::System::Int32 hashCodeRandomizer; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SECURESTRINGHASHER_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean Equals(::System::String* str, ::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SECURESTRINGHASHER_EQUALS_OFFSET))(str, str, nullptr);
		}

		::System::Int32 GetHashCode(::System::String* str)
		{
			return (return (::System::Int32(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SECURESTRINGHASHER_GETHASHCODE_OFFSET))(str, nullptr);
		}

		::System::Int32 GetHashCodeOfString(::System::String* str, ::System::Int32 arg, ::System::Int64 arg)
		{
			return (return (::System::Int32(*)(::System::String*, ::System::Int32, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SECURESTRINGHASHER_GETHASHCODEOFSTRING_OFFSET))(str, arg, arg, nullptr);
		}

		HashCodeOfStringDelegate* GetHashCodeDelegate()
		{
			return (return (HashCodeOfStringDelegate*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SECURESTRINGHASHER_GETHASHCODEDELEGATE_OFFSET))(nullptr);
		}

	};
}

