#pragma once
#include "../../unitysdk.h"

namespace Antlr::Runtime { class IIntStream; }

#define ANTLR_RUNTIME_MISMATCHEDRANGEEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x4C4B60)
#define ANTLR_RUNTIME_MISMATCHEDRANGEEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x4C4B80)
#define ANTLR_RUNTIME_MISMATCHEDRANGEEXCEPTION_GET_A_OFFSET UNITYSDK_OFFSET(0x4C4BB0)
#define ANTLR_RUNTIME_MISMATCHEDRANGEEXCEPTION_GET_B_OFFSET UNITYSDK_OFFSET(0x4C4BC0)
#define ANTLR_RUNTIME_MISMATCHEDRANGEEXCEPTION_TOSTRING_OFFSET UNITYSDK_OFFSET(0x4C4BD0)

namespace Antlr::Runtime
{
	inline static constexpr unsigned int MismatchedRangeException_TypeDefinitionIndex = 37386;

	class MismatchedRangeException : public Il2CppObject
	{
	public:
		::System::Int32 a; // 0xC0
		::System::Int32 b; // 0xC4

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANTLR_RUNTIME_MISMATCHEDRANGEEXCEPTION_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Int32 arg, ::System::Int32 arg, ::Antlr::Runtime::IIntStream* arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::Antlr::Runtime::IIntStream*, ::PVOID))((::PBYTE)hIl2Cpp + ANTLR_RUNTIME_MISMATCHEDRANGEEXCEPTION_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 get_A()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ANTLR_RUNTIME_MISMATCHEDRANGEEXCEPTION_GET_A_OFFSET))(nullptr);
		}

		::System::Int32 get_B()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ANTLR_RUNTIME_MISMATCHEDRANGEEXCEPTION_GET_B_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANTLR_RUNTIME_MISMATCHEDRANGEEXCEPTION_TOSTRING_OFFSET))(nullptr);
		}

	};
}

