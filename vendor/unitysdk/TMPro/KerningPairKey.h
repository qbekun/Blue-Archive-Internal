#pragma once
#include "../unitysdk.h"

#define TMPRO_KERNINGPAIRKEY_.CTOR_OFFSET UNITYSDK_OFFSET(0xA131950)

namespace TMPro
{
	inline static constexpr unsigned int KerningPairKey_TypeDefinitionIndex = 33663;

	class KerningPairKey : public Il2CppObject
	{
	public:
		::System::UInt32 ascii_Left; // 0x10
		::System::UInt32 ascii_Right; // 0x14
		::System::UInt32 key; // 0x18

		::System::Void .ctor(::System::UInt32 arg, ::System::UInt32 arg)
		{
			((::System::Void(*)(::System::UInt32, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_KERNINGPAIRKEY_.CTOR_OFFSET))(arg, arg, nullptr);
		}

	};
}

