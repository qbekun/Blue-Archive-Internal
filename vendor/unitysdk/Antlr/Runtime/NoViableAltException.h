#pragma once
#include "../../unitysdk.h"

namespace Antlr::Runtime { class IIntStream; }

#define ANTLR_RUNTIME_NOVIABLEALTEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x4C5610)
#define ANTLR_RUNTIME_NOVIABLEALTEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x4C4120)
#define ANTLR_RUNTIME_NOVIABLEALTEXCEPTION_TOSTRING_OFFSET UNITYSDK_OFFSET(0x4C5630)

namespace Antlr::Runtime
{
	inline static constexpr unsigned int NoViableAltException_TypeDefinitionIndex = 37390;

	class NoViableAltException : public Il2CppObject
	{
	public:
		::System::String* grammarDecisionDescription; // 0xC0
		::System::Int32 decisionNumber; // 0xC8
		::System::Int32 stateNumber; // 0xCC

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANTLR_RUNTIME_NOVIABLEALTEXCEPTION_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::String* str, ::System::Int32 arg, ::System::Int32 arg, ::Antlr::Runtime::IIntStream* arg)
		{
			((::System::Void(*)(::System::String*, ::System::Int32, ::System::Int32, ::Antlr::Runtime::IIntStream*, ::PVOID))((::PBYTE)hIl2Cpp + ANTLR_RUNTIME_NOVIABLEALTEXCEPTION_.CTOR_OFFSET))(str, arg, arg, arg, nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANTLR_RUNTIME_NOVIABLEALTEXCEPTION_TOSTRING_OFFSET))(nullptr);
		}

	};
}

