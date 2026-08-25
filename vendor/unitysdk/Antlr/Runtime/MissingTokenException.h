#pragma once
#include "../../unitysdk.h"

namespace Antlr::Runtime { class IIntStream; }

#define ANTLR_RUNTIME_MISSINGTOKENEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x4C77D0)
#define ANTLR_RUNTIME_MISSINGTOKENEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x4C77F0)
#define ANTLR_RUNTIME_MISSINGTOKENEXCEPTION_GET_MISSINGTYPE_OFFSET UNITYSDK_OFFSET(0x4C7840)
#define ANTLR_RUNTIME_MISSINGTOKENEXCEPTION_TOSTRING_OFFSET UNITYSDK_OFFSET(0x4C7850)

namespace Antlr::Runtime
{
	inline static constexpr unsigned int MissingTokenException_TypeDefinitionIndex = 37397;

	class MissingTokenException : public Il2CppObject
	{
	public:
		::System::Object* inserted; // 0xC8

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANTLR_RUNTIME_MISSINGTOKENEXCEPTION_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Int32 arg, ::Antlr::Runtime::IIntStream* arg, ::System::Object* arg)
		{
			((::System::Void(*)(::System::Int32, ::Antlr::Runtime::IIntStream*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + ANTLR_RUNTIME_MISSINGTOKENEXCEPTION_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 get_MissingType()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ANTLR_RUNTIME_MISSINGTOKENEXCEPTION_GET_MISSINGTYPE_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANTLR_RUNTIME_MISSINGTOKENEXCEPTION_TOSTRING_OFFSET))(nullptr);
		}

	};
}

