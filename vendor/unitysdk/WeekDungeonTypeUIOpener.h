#pragma once
#include "unitysdk.h"

namespace FlatData { class WeekDungeonType; }

#define WEEKDUNGEONTYPEUIOPENER_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x26BF410)
#define WEEKDUNGEONTYPEUIOPENER_.CTOR_OFFSET UNITYSDK_OFFSET(0x26BF420)
#define WEEKDUNGEONTYPEUIOPENER_OPENUI_OFFSET UNITYSDK_OFFSET(0x26BF440)
#define WEEKDUNGEONTYPEUIOPENER_ISCONTENTSLOCK_OFFSET UNITYSDK_OFFSET(0x26BF8A0)
#define WEEKDUNGEONTYPEUIOPENER_SET_TYPE_OFFSET UNITYSDK_OFFSET(0x26BF8C0)

	inline static constexpr unsigned int WeekDungeonTypeUIOpener_TypeDefinitionIndex = 6936;

	class WeekDungeonTypeUIOpener : public Il2CppObject
	{
	public:
		::FlatData::WeekDungeonType* _Type_k__BackingField; // 0x18

		::FlatData::WeekDungeonType* get_Type()
		{
			return ((::FlatData::WeekDungeonType*(*)(::PVOID))((::PBYTE)hIl2Cpp + WEEKDUNGEONTYPEUIOPENER_GET_TYPE_OFFSET))(nullptr);
		}

		::System::Void .ctor(::FlatData::WeekDungeonType* arg)
		{
			((::System::Void(*)(::FlatData::WeekDungeonType*, ::PVOID))((::PBYTE)hIl2Cpp + WEEKDUNGEONTYPEUIOPENER_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void OpenUI()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + WEEKDUNGEONTYPEUIOPENER_OPENUI_OFFSET))(nullptr);
		}

		::System::Boolean IsContentsLock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + WEEKDUNGEONTYPEUIOPENER_ISCONTENTSLOCK_OFFSET))(nullptr);
		}

		::System::Void set_Type(::FlatData::WeekDungeonType* arg)
		{
			((::System::Void(*)(::FlatData::WeekDungeonType*, ::PVOID))((::PBYTE)hIl2Cpp + WEEKDUNGEONTYPEUIOPENER_SET_TYPE_OFFSET))(arg, nullptr);
		}

	};

