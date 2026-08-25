#pragma once
#include "../../unitysdk.h"

#define SYSTEM_NET_KNOWNHTTPVERB_.CTOR_OFFSET UNITYSDK_OFFSET(0x9BA77F0)
#define SYSTEM_NET_KNOWNHTTPVERB_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9BA7850)
#define SYSTEM_NET_KNOWNHTTPVERB_PARSE_OFFSET UNITYSDK_OFFSET(0x9BA7CE0)

namespace System::Net
{
	inline static constexpr unsigned int KnownHttpVerb_TypeDefinitionIndex = 29689;

	class KnownHttpVerb : public Il2CppObject
	{
	public:
		::System::String* Name; // 0x10
		::System::Boolean RequireContentBody; // 0x18
		::System::Boolean ContentBodyNotAllowed; // 0x19
		::System::Boolean ConnectRequest; // 0x1A
		::System::Boolean ExpectNoContentResponse; // 0x1B
		::System::Collections::Specialized::ListDictionary* NamedHeaders; // 0x0
		::System::Net::KnownHttpVerb* Get; // 0x8
		::System::Net::KnownHttpVerb* Connect; // 0x10
		::System::Net::KnownHttpVerb* Head; // 0x18
		::System::Net::KnownHttpVerb* Put; // 0x20
		::System::Net::KnownHttpVerb* Post; // 0x28
		::System::Net::KnownHttpVerb* MkCol; // 0x30

		::System::Void .ctor(::System::String* str, ::System::Boolean arg, ::System::Boolean arg, ::System::Boolean arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::String*, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_KNOWNHTTPVERB_.CTOR_OFFSET))(str, arg, arg, arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_KNOWNHTTPVERB_.CCTOR_OFFSET))(nullptr);
		}

		::System::Net::KnownHttpVerb* Parse(::System::String* str)
		{
			return (return (::System::Net::KnownHttpVerb*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_KNOWNHTTPVERB_PARSE_OFFSET))(str, nullptr);
		}

	};
}

