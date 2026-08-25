#pragma once
#include "unitysdk.h"

namespace FlatData { class WeekDungeonType; }

#define WEEKCONTENTINFO_SET_OFFSET UNITYSDK_OFFSET(0xBD0800)
#define WEEKCONTENTINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0xBD09E0)

	inline static constexpr unsigned int WeekContentInfo_TypeDefinitionIndex = 8662;

	class WeekContentInfo : public Il2CppObject
	{
	public:
		Il2CppObject* Descriptions; // 0x20

		::System::Void Set(::FlatData::WeekDungeonType* arg)
		{
			((::System::Void(*)(::FlatData::WeekDungeonType*, ::PVOID))((::PBYTE)hIl2Cpp + WEEKCONTENTINFO_SET_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + WEEKCONTENTINFO_.CTOR_OFFSET))(nullptr);
		}

	};

