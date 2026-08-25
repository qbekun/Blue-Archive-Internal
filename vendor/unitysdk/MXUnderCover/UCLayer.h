#pragma once
#include "../unitysdk.h"

#define MXUNDERCOVER_UCLAYER_.CCTOR_OFFSET UNITYSDK_OFFSET(0xDB1A40)

namespace MXUnderCover
{
	inline static constexpr unsigned int UCLayer_TypeDefinitionIndex = 9944;

	class UCLayer : public Il2CppObject
	{
	public:
		::System::Int32 Default; // 0x0
		::System::Int32 Player; // 0x4
		::System::Int32 Unit; // 0x8
		::System::Int32 Obstacle; // 0xC
		::System::Int32 InGameBackGround; // 0x10
		::System::Int32 Immovable; // 0x14
		::System::Int32 BlockSight; // 0x18

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCLAYER_.CCTOR_OFFSET))(nullptr);
		}

	};
}

