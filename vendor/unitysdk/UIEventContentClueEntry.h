#pragma once
#include "unitysdk.h"

#define UIEVENTCONTENTCLUEENTRY_OPENEVENTCONTENTCLUE_OFFSET UNITYSDK_OFFSET(0x249A7E0)

	inline static constexpr unsigned int UIEventContentClueEntry_TypeDefinitionIndex = 5760;

	class UIEventContentClueEntry : public Il2CppObject
	{
	public:
		::System::Void OpenEventContentClue(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTCONTENTCLUEENTRY_OPENEVENTCONTENTCLUE_OFFSET))(arg, nullptr);
		}

	};

