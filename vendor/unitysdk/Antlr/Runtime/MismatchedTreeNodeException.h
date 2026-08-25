#pragma once
#include "../../unitysdk.h"

#define ANTLR_RUNTIME_MISMATCHEDTREENODEEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x4C53B0)
#define ANTLR_RUNTIME_MISMATCHEDTREENODEEXCEPTION_TOSTRING_OFFSET UNITYSDK_OFFSET(0x4C53D0)

namespace Antlr::Runtime
{
	inline static constexpr unsigned int MismatchedTreeNodeException_TypeDefinitionIndex = 37389;

	class MismatchedTreeNodeException : public Il2CppObject
	{
	public:
		::System::Int32 expecting; // 0xC0

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANTLR_RUNTIME_MISMATCHEDTREENODEEXCEPTION_.CTOR_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANTLR_RUNTIME_MISMATCHEDTREENODEEXCEPTION_TOSTRING_OFFSET))(nullptr);
		}

	};
}

