#pragma once
#include "unitysdk.h"

#define NEWLOGCACHER_.CTOR_OFFSET UNITYSDK_OFFSET(0x20AF320)
#define NEWLOGCACHER_.CCTOR_OFFSET UNITYSDK_OFFSET(0x20AF330)

	inline static constexpr unsigned int NewLogCacher_TypeDefinitionIndex = 3570;

	class NewLogCacher : public Il2CppObject
	{
	public:
		Il2CppObject* Logs; // 0x0

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWLOGCACHER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWLOGCACHER_.CCTOR_OFFSET))(nullptr);
		}

	};

