#pragma once
#include "../../unitysdk.h"

namespace Antlr::Runtime { class BitSet; }
namespace Antlr::Runtime { class IIntStream; }

#define ANTLR_RUNTIME_MISMATCHEDSETEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x4C4920)
#define ANTLR_RUNTIME_MISMATCHEDSETEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x4C4EB0)
#define ANTLR_RUNTIME_MISMATCHEDSETEXCEPTION_TOSTRING_OFFSET UNITYSDK_OFFSET(0x4C4EF0)

namespace Antlr::Runtime
{
	inline static constexpr unsigned int MismatchedSetException_TypeDefinitionIndex = 37387;

	class MismatchedSetException : public Il2CppObject
	{
	public:
		::Antlr::Runtime::BitSet* expecting; // 0xC0

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANTLR_RUNTIME_MISMATCHEDSETEXCEPTION_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::Antlr::Runtime::BitSet* arg, ::Antlr::Runtime::IIntStream* arg)
		{
			((::System::Void(*)(::Antlr::Runtime::BitSet*, ::Antlr::Runtime::IIntStream*, ::PVOID))((::PBYTE)hIl2Cpp + ANTLR_RUNTIME_MISMATCHEDSETEXCEPTION_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANTLR_RUNTIME_MISMATCHEDSETEXCEPTION_TOSTRING_OFFSET))(nullptr);
		}

	};
}

