#pragma once
#include "unitysdk.h"

#define QNAME_.CTOR_OFFSET UNITYSDK_OFFSET(0x98497F0)
#define QNAME_SET_OFFSET UNITYSDK_OFFSET(0x98480F0)
#define QNAME_CLEAR_OFFSET UNITYSDK_OFFSET(0x9842F20)
#define QNAME_MATCHNS_OFFSET UNITYSDK_OFFSET(0x9848F40)
#define QNAME_MATCHPREFIX_OFFSET UNITYSDK_OFFSET(0x9848F80)
#define QNAME_CHECKPREFIXNS_OFFSET UNITYSDK_OFFSET(0x98493B0)
#define QNAME_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x984DDD0)
#define QNAME_GETNSHASHCODE_OFFSET UNITYSDK_OFFSET(0x984DE20)
#define QNAME_EQUALS_OFFSET UNITYSDK_OFFSET(0x984DE70)
#define QNAME_TOSTRING_OFFSET UNITYSDK_OFFSET(0x984AA10)
#define QNAME_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x984DF30)

	inline static constexpr unsigned int QName_TypeDefinitionIndex = 27617;

	class QName : public Il2CppObject
	{
	public:
		::System::String* prefix; // 0x10
		::System::String* localname; // 0x18
		::System::String* namespaceUri; // 0x20

		::System::Void .ctor(::System::String* str, ::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + QNAME_.CTOR_OFFSET))(str, str, str, nullptr);
		}

		::System::Void Set(::System::String* str, ::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + QNAME_SET_OFFSET))(str, str, str, nullptr);
		}

		::System::Void Clear()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + QNAME_CLEAR_OFFSET))(nullptr);
		}

		::System::Boolean MatchNs(::System::String* str, ::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + QNAME_MATCHNS_OFFSET))(str, str, nullptr);
		}

		::System::Boolean MatchPrefix(::System::String* str, ::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + QNAME_MATCHPREFIX_OFFSET))(str, str, nullptr);
		}

		::System::Void CheckPrefixNS(::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + QNAME_CHECKPREFIXNS_OFFSET))(str, str, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + QNAME_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Int32 GetNSHashCode(::System::Xml::SecureStringHasher* arg)
		{
			return (return (::System::Int32(*)(::System::Xml::SecureStringHasher*, ::PVOID))((::PBYTE)hIl2Cpp + QNAME_GETNSHASHCODE_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + QNAME_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + QNAME_TOSTRING_OFFSET))(nullptr);
		}

		::System::Boolean op_Equality(QName* arg, QName* arg)
		{
			return (return (::System::Boolean(*)(QName*, QName*, ::PVOID))((::PBYTE)hIl2Cpp + QNAME_OP_EQUALITY_OFFSET))(arg, arg, nullptr);
		}

	};

