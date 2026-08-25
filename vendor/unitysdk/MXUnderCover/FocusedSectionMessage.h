#pragma once
#include "../unitysdk.h"

namespace MXUnderCover { class UCSectionModel; }

#define MXUNDERCOVER_FOCUSEDSECTIONMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0xDB1C80)

namespace MXUnderCover
{
	inline static constexpr unsigned int FocusedSectionMessage_TypeDefinitionIndex = 9953;

	class FocusedSectionMessage : public Il2CppObject
	{
	public:
		::MXUnderCover::UCSectionModel* SectionModel; // 0x10

		::System::Void .ctor(::MXUnderCover::UCSectionModel* arg)
		{
			((::System::Void(*)(::MXUnderCover::UCSectionModel*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_FOCUSEDSECTIONMESSAGE_.CTOR_OFFSET))(arg, nullptr);
		}

	};
}

