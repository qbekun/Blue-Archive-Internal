#pragma once
#include "unitysdk.h"

namespace Mono::Security { class ASN1; }

#define ATTRIBUTETYPEANDVALUE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9106F70)
#define ATTRIBUTETYPEANDVALUE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9106FB0)
#define ATTRIBUTETYPEANDVALUE_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x90FF210)
#define ATTRIBUTETYPEANDVALUE_GETASN1_OFFSET UNITYSDK_OFFSET(0x9106FF0)
#define ATTRIBUTETYPEANDVALUE_GETASN1_OFFSET UNITYSDK_OFFSET(0x90FF2D0)
#define ATTRIBUTETYPEANDVALUE_SELECTBESTENCODING_OFFSET UNITYSDK_OFFSET(0x91071F0)

	inline static constexpr unsigned int AttributeTypeAndValue_TypeDefinitionIndex = 35759;

	class AttributeTypeAndValue : public Il2CppObject
	{
	public:
		::System::String* oid; // 0x10
		::System::String* attrValue; // 0x18
		::System::Int32 upperBound; // 0x20
		::System::Byte encoding; // 0x24

		::System::Void .ctor(::System::String* str, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::String*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ATTRIBUTETYPEANDVALUE_.CTOR_OFFSET))(str, arg, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::System::Int32 arg, ::System::Byte arg)
		{
			((::System::Void(*)(::System::String*, ::System::Int32, ::System::Byte, ::PVOID))((::PBYTE)hIl2Cpp + ATTRIBUTETYPEANDVALUE_.CTOR_OFFSET))(str, arg, arg, nullptr);
		}

		::System::Void set_Value(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + ATTRIBUTETYPEANDVALUE_SET_VALUE_OFFSET))(str, nullptr);
		}

		::Mono::Security::ASN1* GetASN1(::System::Byte arg)
		{
			return (return (::Mono::Security::ASN1*(*)(::System::Byte, ::PVOID))((::PBYTE)hIl2Cpp + ATTRIBUTETYPEANDVALUE_GETASN1_OFFSET))(arg, nullptr);
		}

		::Mono::Security::ASN1* GetASN1()
		{
			return (return (::Mono::Security::ASN1*(*)(::PVOID))((::PBYTE)hIl2Cpp + ATTRIBUTETYPEANDVALUE_GETASN1_OFFSET))(nullptr);
		}

		::System::Byte SelectBestEncoding()
		{
			return (return (::System::Byte(*)(::PVOID))((::PBYTE)hIl2Cpp + ATTRIBUTETYPEANDVALUE_SELECTBESTENCODING_OFFSET))(nullptr);
		}

	};

