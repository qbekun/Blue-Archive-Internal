#pragma once
#include "unitysdk.h"

namespace FlatData { class WeekDungeonType; }
namespace MX::Data { class WeekDungeonData; }
namespace FlatData { class WeekDay; }
namespace MX::Data::Excel { class WeekDungeonOpenScheduleExcel; }

#define <GETOPENWEEKDUNGEONTYPES>D__18_.CTOR_OFFSET UNITYSDK_OFFSET(0x19693E0)
#define <GETOPENWEEKDUNGEONTYPES>D__18_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x196B640)
#define <GETOPENWEEKDUNGEONTYPES>D__18_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x196B650)
#define <GETOPENWEEKDUNGEONTYPES>D__18_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_FLATDATA.WEEKDUNGEONTYPE_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x196B720)
#define <GETOPENWEEKDUNGEONTYPES>D__18_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x196B730)
#define <GETOPENWEEKDUNGEONTYPES>D__18_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x196B780)
#define <GETOPENWEEKDUNGEONTYPES>D__18_SYSTEM.COLLECTIONS.GENERIC.IENUMERABLE_FLATDATA.WEEKDUNGEONTYPE_.GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x196B7D0)
#define <GETOPENWEEKDUNGEONTYPES>D__18_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x196B870)

	inline static constexpr unsigned int <GetOpenWeekDungeonTypes>d__18_TypeDefinitionIndex = 16449;

	class <GetOpenWeekDungeonTypes>d__18 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::FlatData::WeekDungeonType* __2__current; // 0x14
		::System::Int32 __l__initialThreadId; // 0x18
		::MX::Data::WeekDungeonData* __4__this; // 0x20
		::FlatData::WeekDay* weekDay; // 0x28
		::FlatData::WeekDay* __3__weekDay; // 0x2C
		::MX::Data::Excel::WeekDungeonOpenScheduleExcel* _weekDungeonOpenScheduleExcel_5__2; // 0x30
		::System::Int32 _i_5__3; // 0x40

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <GETOPENWEEKDUNGEONTYPES>D__18_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETOPENWEEKDUNGEONTYPES>D__18_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETOPENWEEKDUNGEONTYPES>D__18_MOVENEXT_OFFSET))(nullptr);
		}

		::FlatData::WeekDungeonType* System.Collections.Generic.IEnumerator_FlatData.WeekDungeonType_.get_Current()
		{
			return (return (::FlatData::WeekDungeonType*(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETOPENWEEKDUNGEONTYPES>D__18_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_FLATDATA.WEEKDUNGEONTYPE_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETOPENWEEKDUNGEONTYPES>D__18_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETOPENWEEKDUNGEONTYPES>D__18_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

		Il2CppObject* System.Collections.Generic.IEnumerable_FlatData.WeekDungeonType_.GetEnumerator()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETOPENWEEKDUNGEONTYPES>D__18_SYSTEM.COLLECTIONS.GENERIC.IENUMERABLE_FLATDATA.WEEKDUNGEONTYPE_.GETENUMERATOR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* System.Collections.IEnumerable.GetEnumerator()
		{
			return (return (::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETOPENWEEKDUNGEONTYPES>D__18_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET))(nullptr);
		}

	};

