#pragma once
#include "../../unitysdk.h"

#define ANTLR_RUNTIME_MISMATCHEDNOTSETEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x4C4900)
#define ANTLR_RUNTIME_MISMATCHEDNOTSETEXCEPTION_TOSTRING_OFFSET UNITYSDK_OFFSET(0x4C4940)

namespace Antlr::Runtime
{
	inline static constexpr unsigned int MismatchedNotSetException_TypeDefinitionIndex = 37385;

	class MismatchedNotSetException : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANTLR_RUNTIME_MISMATCHEDNOTSETEXCEPTION_.CTOR_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANTLR_RUNTIME_MISMATCHEDNOTSETEXCEPTION_TOSTRING_OFFSET))(nullptr);
		}

	};
}

