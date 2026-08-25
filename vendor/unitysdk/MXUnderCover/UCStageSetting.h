#pragma once
#include "../unitysdk.h"

namespace MXUnderCover { class EventBlackboardAsset; }
namespace MXUnderCover { class ItemContainerAsset; }

#define MXUNDERCOVER_UCSTAGESETTING_.CTOR_OFFSET UNITYSDK_OFFSET(0xDBD8B0)

namespace MXUnderCover
{
	inline static constexpr unsigned int UCStageSetting_TypeDefinitionIndex = 9998;

	class UCStageSetting : public Il2CppObject
	{
	public:
		Il2CppObject* Players; // 0x10
		Il2CppObject* SectionSettings; // 0x18
		::MXUnderCover::EventBlackboardAsset* EventBlackboardAsset; // 0x20
		::MXUnderCover::ItemContainerAsset* ItemContainerAsset; // 0x28

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCSTAGESETTING_.CTOR_OFFSET))(nullptr);
		}

	};
}

