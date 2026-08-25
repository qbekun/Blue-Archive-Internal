#pragma once
#include "unitysdk.h"

namespace Antlr::Runtime { class DFA; }
namespace Antlr::Runtime { class IIntStream; }

#define SPECIALSTATETRANSITIONHANDLER_.CTOR_OFFSET UNITYSDK_OFFSET(0x4C4530)
#define SPECIALSTATETRANSITIONHANDLER_INVOKE_OFFSET UNITYSDK_OFFSET(0x4C4640)

	inline static constexpr unsigned int SpecialStateTransitionHandler_TypeDefinitionIndex = 37380;

	class SpecialStateTransitionHandler : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SPECIALSTATETRANSITIONHANDLER_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 Invoke(::Antlr::Runtime::DFA* arg, ::System::Int32 arg, ::Antlr::Runtime::IIntStream* arg)
		{
			return (return (::System::Int32(*)(::Antlr::Runtime::DFA*, ::System::Int32, ::Antlr::Runtime::IIntStream*, ::PVOID))((::PBYTE)hIl2Cpp + SPECIALSTATETRANSITIONHANDLER_INVOKE_OFFSET))(arg, arg, arg, nullptr);
		}

	};

