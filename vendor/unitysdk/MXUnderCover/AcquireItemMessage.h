#pragma once
#include "../unitysdk.h"

namespace MXUnderCover { class UCItemModel; }

#define MXUNDERCOVER_ACQUIREITEMMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0xDB1CF0)

namespace MXUnderCover
{
	inline static constexpr unsigned int AcquireItemMessage_TypeDefinitionIndex = 9956;

	class AcquireItemMessage : public Il2CppObject
	{
	public:
		::MXUnderCover::UCItemModel* ItemModel; // 0x10

		::System::Void .ctor(::MXUnderCover::UCItemModel* arg)
		{
			((::System::Void(*)(::MXUnderCover::UCItemModel*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_ACQUIREITEMMESSAGE_.CTOR_OFFSET))(arg, nullptr);
		}

	};
}

