#pragma once
#include "unitysdk.h"

class SchoolDungeonUIOpener;
namespace FlatData { class SchoolDungeonType; }

#define <GETSCHOOLDUNGEONTOOLTIPINFO>D__60_.CTOR_OFFSET UNITYSDK_OFFSET(0x275B780)
#define <GETSCHOOLDUNGEONTOOLTIPINFO>D__60_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x275B7B0)
#define <GETSCHOOLDUNGEONTOOLTIPINFO>D__60_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x275B7C0)
#define <GETSCHOOLDUNGEONTOOLTIPINFO>D__60_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SCHOOLDUNGEONUIOPENER_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x275B850)
#define <GETSCHOOLDUNGEONTOOLTIPINFO>D__60_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x275B860)
#define <GETSCHOOLDUNGEONTOOLTIPINFO>D__60_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x275B8B0)
#define <GETSCHOOLDUNGEONTOOLTIPINFO>D__60_SYSTEM.COLLECTIONS.GENERIC.IENUMERABLE_SCHOOLDUNGEONUIOPENER_.GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x275B8C0)
#define <GETSCHOOLDUNGEONTOOLTIPINFO>D__60_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x275B950)

	inline static constexpr unsigned int <GetSchoolDungeonTooltipInfo>d__60_TypeDefinitionIndex = 7275;

	class <GetSchoolDungeonTooltipInfo>d__60 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		SchoolDungeonUIOpener* __2__current; // 0x18
		::System::Int32 __l__initialThreadId; // 0x20
		::FlatData::SchoolDungeonType* type; // 0x24
		::FlatData::SchoolDungeonType* __3__type; // 0x28

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <GETSCHOOLDUNGEONTOOLTIPINFO>D__60_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETSCHOOLDUNGEONTOOLTIPINFO>D__60_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETSCHOOLDUNGEONTOOLTIPINFO>D__60_MOVENEXT_OFFSET))(nullptr);
		}

		SchoolDungeonUIOpener* System.Collections.Generic.IEnumerator_SchoolDungeonUIOpener_.get_Current()
		{
			return ((SchoolDungeonUIOpener*(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETSCHOOLDUNGEONTOOLTIPINFO>D__60_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SCHOOLDUNGEONUIOPENER_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETSCHOOLDUNGEONTOOLTIPINFO>D__60_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETSCHOOLDUNGEONTOOLTIPINFO>D__60_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

		Il2CppObject* System.Collections.Generic.IEnumerable_SchoolDungeonUIOpener_.GetEnumerator()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETSCHOOLDUNGEONTOOLTIPINFO>D__60_SYSTEM.COLLECTIONS.GENERIC.IENUMERABLE_SCHOOLDUNGEONUIOPENER_.GETENUMERATOR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* System.Collections.IEnumerable.GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETSCHOOLDUNGEONTOOLTIPINFO>D__60_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET))(nullptr);
		}

	};

