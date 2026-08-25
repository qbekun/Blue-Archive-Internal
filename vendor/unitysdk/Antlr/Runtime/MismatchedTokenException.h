#pragma once
#include "../../unitysdk.h"

namespace Antlr::Runtime { class IIntStream; }

#define ANTLR_RUNTIME_MISMATCHEDTOKENEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x4C5110)
#define ANTLR_RUNTIME_MISMATCHEDTOKENEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x4C5130)
#define ANTLR_RUNTIME_MISMATCHEDTOKENEXCEPTION_GET_EXPECTING_OFFSET UNITYSDK_OFFSET(0x4C5160)
#define ANTLR_RUNTIME_MISMATCHEDTOKENEXCEPTION_TOSTRING_OFFSET UNITYSDK_OFFSET(0x4C5170)

namespace Antlr::Runtime
{
	inline static constexpr unsigned int MismatchedTokenException_TypeDefinitionIndex = 37388;

	class MismatchedTokenException : public Il2CppObject
	{
	public:
		::System::Int32 expecting; // 0xC0

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANTLR_RUNTIME_MISMATCHEDTOKENEXCEPTION_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Int32 arg, ::Antlr::Runtime::IIntStream* arg)
		{
			((::System::Void(*)(::System::Int32, ::Antlr::Runtime::IIntStream*, ::PVOID))((::PBYTE)hIl2Cpp + ANTLR_RUNTIME_MISMATCHEDTOKENEXCEPTION_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 get_Expecting()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ANTLR_RUNTIME_MISMATCHEDTOKENEXCEPTION_GET_EXPECTING_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANTLR_RUNTIME_MISMATCHEDTOKENEXCEPTION_TOSTRING_OFFSET))(nullptr);
		}

	};
}

