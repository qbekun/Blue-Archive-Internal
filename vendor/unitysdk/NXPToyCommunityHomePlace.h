#pragma once
#include "unitysdk.h"

#define NXPTOYCOMMUNITYHOMEPLACE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9CD9360)

	inline static constexpr unsigned int NXPToyCommunityHomePlace_TypeDefinitionIndex = 27468;

	class NXPToyCommunityHomePlace : public Il2CppObject
	{
	public:
		Il2CppObject* banners; // 0x10
		Il2CppObject* threads; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NXPTOYCOMMUNITYHOMEPLACE_.CTOR_OFFSET))(nullptr);
		}

	};

