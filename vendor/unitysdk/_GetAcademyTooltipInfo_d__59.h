#pragma once
#include "unitysdk.h"

class AcademyUIOpener;

#define <GETACADEMYTOOLTIPINFO>D__59_.CTOR_OFFSET UNITYSDK_OFFSET(0x275B570)
#define <GETACADEMYTOOLTIPINFO>D__59_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x275B5A0)
#define <GETACADEMYTOOLTIPINFO>D__59_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x275B5B0)
#define <GETACADEMYTOOLTIPINFO>D__59_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_ACADEMYUIOPENER_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x275B660)
#define <GETACADEMYTOOLTIPINFO>D__59_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x275B670)
#define <GETACADEMYTOOLTIPINFO>D__59_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x275B6C0)
#define <GETACADEMYTOOLTIPINFO>D__59_SYSTEM.COLLECTIONS.GENERIC.IENUMERABLE_ACADEMYUIOPENER_.GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x275B6D0)
#define <GETACADEMYTOOLTIPINFO>D__59_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x275B770)

	inline static constexpr unsigned int <GetAcademyTooltipInfo>d__59_TypeDefinitionIndex = 7274;

	class <GetAcademyTooltipInfo>d__59 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		AcademyUIOpener* __2__current; // 0x18
		::System::Int32 __l__initialThreadId; // 0x20
		::System::Int64 locationId; // 0x28
		::System::Int64 __3__locationId; // 0x30
		::System::Int64 scheduleId; // 0x38
		::System::Int64 __3__scheduleId; // 0x40
		::System::Int64 zoneId; // 0x48
		::System::Int64 __3__zoneId; // 0x50

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <GETACADEMYTOOLTIPINFO>D__59_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETACADEMYTOOLTIPINFO>D__59_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETACADEMYTOOLTIPINFO>D__59_MOVENEXT_OFFSET))(nullptr);
		}

		AcademyUIOpener* System.Collections.Generic.IEnumerator_AcademyUIOpener_.get_Current()
		{
			return ((AcademyUIOpener*(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETACADEMYTOOLTIPINFO>D__59_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_ACADEMYUIOPENER_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETACADEMYTOOLTIPINFO>D__59_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETACADEMYTOOLTIPINFO>D__59_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

		Il2CppObject* System.Collections.Generic.IEnumerable_AcademyUIOpener_.GetEnumerator()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETACADEMYTOOLTIPINFO>D__59_SYSTEM.COLLECTIONS.GENERIC.IENUMERABLE_ACADEMYUIOPENER_.GETENUMERATOR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* System.Collections.IEnumerable.GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETACADEMYTOOLTIPINFO>D__59_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET))(nullptr);
		}

	};

