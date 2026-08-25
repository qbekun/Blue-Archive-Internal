#pragma once
#include "unitysdk.h"

class CraftShiftingUIOpener;
namespace MX::Data { class CraftType; }
namespace MX::Data { class ShiftingCraftRecipeExcelInfo; }

#define <GETCRAFTSHIFTINGTOOLTIPINFO>D__57_.CTOR_OFFSET UNITYSDK_OFFSET(0x275B140)
#define <GETCRAFTSHIFTINGTOOLTIPINFO>D__57_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x275B170)
#define <GETCRAFTSHIFTINGTOOLTIPINFO>D__57_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x275B180)
#define <GETCRAFTSHIFTINGTOOLTIPINFO>D__57_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_CRAFTSHIFTINGUIOPENER_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x275B220)
#define <GETCRAFTSHIFTINGTOOLTIPINFO>D__57_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x275B230)
#define <GETCRAFTSHIFTINGTOOLTIPINFO>D__57_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x275B280)
#define <GETCRAFTSHIFTINGTOOLTIPINFO>D__57_SYSTEM.COLLECTIONS.GENERIC.IENUMERABLE_CRAFTSHIFTINGUIOPENER_.GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x275B290)
#define <GETCRAFTSHIFTINGTOOLTIPINFO>D__57_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x275B330)

	inline static constexpr unsigned int <GetCraftShiftingTooltipInfo>d__57_TypeDefinitionIndex = 7272;

	class <GetCraftShiftingTooltipInfo>d__57 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		CraftShiftingUIOpener* __2__current; // 0x18
		::System::Int32 __l__initialThreadId; // 0x20
		::MX::Data::CraftType* openCraftType; // 0x24
		::MX::Data::CraftType* __3__openCraftType; // 0x28
		::MX::Data::ShiftingCraftRecipeExcelInfo* recipe; // 0x30
		::MX::Data::ShiftingCraftRecipeExcelInfo* __3__recipe; // 0x38

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <GETCRAFTSHIFTINGTOOLTIPINFO>D__57_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETCRAFTSHIFTINGTOOLTIPINFO>D__57_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETCRAFTSHIFTINGTOOLTIPINFO>D__57_MOVENEXT_OFFSET))(nullptr);
		}

		CraftShiftingUIOpener* System.Collections.Generic.IEnumerator_CraftShiftingUIOpener_.get_Current()
		{
			return ((CraftShiftingUIOpener*(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETCRAFTSHIFTINGTOOLTIPINFO>D__57_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_CRAFTSHIFTINGUIOPENER_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETCRAFTSHIFTINGTOOLTIPINFO>D__57_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETCRAFTSHIFTINGTOOLTIPINFO>D__57_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

		Il2CppObject* System.Collections.Generic.IEnumerable_CraftShiftingUIOpener_.GetEnumerator()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETCRAFTSHIFTINGTOOLTIPINFO>D__57_SYSTEM.COLLECTIONS.GENERIC.IENUMERABLE_CRAFTSHIFTINGUIOPENER_.GETENUMERATOR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* System.Collections.IEnumerable.GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETCRAFTSHIFTINGTOOLTIPINFO>D__57_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET))(nullptr);
		}

	};

