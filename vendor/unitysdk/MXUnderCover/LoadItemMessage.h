#pragma once
#include "../unitysdk.h"

namespace MXUnderCover { class UCItemModel; }

#define MXUNDERCOVER_LOADITEMMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0xDAABF0)

namespace MXUnderCover
{
	inline static constexpr unsigned int LoadItemMessage_TypeDefinitionIndex = 9958;

	class LoadItemMessage : public Il2CppObject
	{
	public:
		::MXUnderCover::UCItemModel* ItemModel; // 0x10

		::System::Void .ctor(::MXUnderCover::UCItemModel* arg)
		{
			((::System::Void(*)(::MXUnderCover::UCItemModel*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_LOADITEMMESSAGE_.CTOR_OFFSET))(arg, nullptr);
		}

	};
}

