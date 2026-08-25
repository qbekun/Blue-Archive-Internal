#pragma once
#include "../unitysdk.h"

namespace MXUnderCover { class UCSectionVisual; }

#define MXUNDERCOVER_LOADEDSECTIONMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0xDB1B20)

namespace MXUnderCover
{
	inline static constexpr unsigned int LoadedSectionMessage_TypeDefinitionIndex = 9946;

	class LoadedSectionMessage : public Il2CppObject
	{
	public:
		::MXUnderCover::UCSectionVisual* Section; // 0x10

		::System::Void .ctor(::MXUnderCover::UCSectionVisual* arg)
		{
			((::System::Void(*)(::MXUnderCover::UCSectionVisual*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_LOADEDSECTIONMESSAGE_.CTOR_OFFSET))(arg, nullptr);
		}

	};
}

