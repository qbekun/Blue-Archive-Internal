#pragma once
#include "../../unitysdk.h"

namespace Antlr::Runtime { class IIntStream; }

#define ANTLR_RUNTIME_EARLYEXITEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x4C4660)
#define ANTLR_RUNTIME_EARLYEXITEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x4C46A0)

namespace Antlr::Runtime
{
	inline static constexpr unsigned int EarlyExitException_TypeDefinitionIndex = 37382;

	class EarlyExitException : public Il2CppObject
	{
	public:
		::System::Int32 decisionNumber; // 0xC0

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANTLR_RUNTIME_EARLYEXITEXCEPTION_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Int32 arg, ::Antlr::Runtime::IIntStream* arg)
		{
			((::System::Void(*)(::System::Int32, ::Antlr::Runtime::IIntStream*, ::PVOID))((::PBYTE)hIl2Cpp + ANTLR_RUNTIME_EARLYEXITEXCEPTION_.CTOR_OFFSET))(arg, arg, nullptr);
		}

	};
}

