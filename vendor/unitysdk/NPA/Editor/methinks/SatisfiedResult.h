#pragma once
#include "../../../unitysdk.h"

#define NPA_EDITOR_METHINKS_SATISFIEDRESULT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9C2B640)

namespace NPA::Editor::methinks
{
	inline static constexpr unsigned int SatisfiedResult_TypeDefinitionIndex = 26763;

	class SatisfiedResult : public Il2CppObject
	{
	public:
		::System::Int64 Main; // 0x10
		::System::Int64 Sub; // 0x18
		::System::String* Detail; // 0x20

		::System::Void .ctor(::System::Int64 arg, ::System::Int64 arg, ::System::String* str)
		{
			((::System::Void(*)(::System::Int64, ::System::Int64, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_METHINKS_SATISFIEDRESULT_.CTOR_OFFSET))(arg, arg, str, nullptr);
		}

	};
}

