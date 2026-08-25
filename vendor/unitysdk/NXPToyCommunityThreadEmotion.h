#pragma once
#include "unitysdk.h"

#define NXPTOYCOMMUNITYTHREADEMOTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9CD97B0)

	inline static constexpr unsigned int NXPToyCommunityThreadEmotion_TypeDefinitionIndex = 27471;

	class NXPToyCommunityThreadEmotion : public Il2CppObject
	{
	public:
		::System::Int64 threadId; // 0x10
		::System::String* emotion; // 0x18
		::System::Int64 userId; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NXPTOYCOMMUNITYTHREADEMOTION_.CTOR_OFFSET))(nullptr);
		}

	};

