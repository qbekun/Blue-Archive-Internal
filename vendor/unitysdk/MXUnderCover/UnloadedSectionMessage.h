#pragma once
#include "../unitysdk.h"

namespace MXUnderCover { class UCSectionVisual; }

#define MXUNDERCOVER_UNLOADEDSECTIONMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0xDB1B50)

namespace MXUnderCover
{
	inline static constexpr unsigned int UnloadedSectionMessage_TypeDefinitionIndex = 9947;

	class UnloadedSectionMessage : public Il2CppObject
	{
	public:
		::MXUnderCover::UCSectionVisual* Section; // 0x10

		::System::Void .ctor(::MXUnderCover::UCSectionVisual* arg)
		{
			((::System::Void(*)(::MXUnderCover::UCSectionVisual*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UNLOADEDSECTIONMESSAGE_.CTOR_OFFSET))(arg, nullptr);
		}

	};
}

