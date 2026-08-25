#pragma once
#include "../../unitysdk.h"

#define MX_MINIGAMESHOOTING_ONSECTIONEND_.CTOR_OFFSET UNITYSDK_OFFSET(0x1472860)

namespace MX::MinigameShooting
{
	inline static constexpr unsigned int OnSectionEnd_TypeDefinitionIndex = 15139;

	class OnSectionEnd : public ::TriInspector::TitleAttribute
	{
	public:
		::System::Int32 SectionIndex; // 0x18

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_ONSECTIONEND_.CTOR_OFFSET))(arg, nullptr);
		}

	};
}

