#pragma once
#include "unitysdk.h"

class ByNameUIOpener;
class UIPopup_Tooltip;

#define <GETMULTIFLOORRAIDTOOLTIPINFO>D__58_.CTOR_OFFSET UNITYSDK_OFFSET(0x275B340)
#define <GETMULTIFLOORRAIDTOOLTIPINFO>D__58_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x275B370)
#define <GETMULTIFLOORRAIDTOOLTIPINFO>D__58_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x275B380)
#define <GETMULTIFLOORRAIDTOOLTIPINFO>D__58_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_BYNAMEUIOPENER_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x275B450)
#define <GETMULTIFLOORRAIDTOOLTIPINFO>D__58_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x275B460)
#define <GETMULTIFLOORRAIDTOOLTIPINFO>D__58_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x275B4B0)
#define <GETMULTIFLOORRAIDTOOLTIPINFO>D__58_SYSTEM.COLLECTIONS.GENERIC.IENUMERABLE_BYNAMEUIOPENER_.GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x275B4C0)
#define <GETMULTIFLOORRAIDTOOLTIPINFO>D__58_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x275B560)

	inline static constexpr unsigned int <GetMultiFloorRaidTooltipInfo>d__58_TypeDefinitionIndex = 7273;

	class <GetMultiFloorRaidTooltipInfo>d__58 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		ByNameUIOpener* __2__current; // 0x18
		::System::Int32 __l__initialThreadId; // 0x20
		UIPopup_Tooltip* __4__this; // 0x28

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <GETMULTIFLOORRAIDTOOLTIPINFO>D__58_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETMULTIFLOORRAIDTOOLTIPINFO>D__58_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETMULTIFLOORRAIDTOOLTIPINFO>D__58_MOVENEXT_OFFSET))(nullptr);
		}

		ByNameUIOpener* System.Collections.Generic.IEnumerator_ByNameUIOpener_.get_Current()
		{
			return ((ByNameUIOpener*(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETMULTIFLOORRAIDTOOLTIPINFO>D__58_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_BYNAMEUIOPENER_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETMULTIFLOORRAIDTOOLTIPINFO>D__58_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETMULTIFLOORRAIDTOOLTIPINFO>D__58_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

		Il2CppObject* System.Collections.Generic.IEnumerable_ByNameUIOpener_.GetEnumerator()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETMULTIFLOORRAIDTOOLTIPINFO>D__58_SYSTEM.COLLECTIONS.GENERIC.IENUMERABLE_BYNAMEUIOPENER_.GETENUMERATOR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* System.Collections.IEnumerable.GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETMULTIFLOORRAIDTOOLTIPINFO>D__58_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET))(nullptr);
		}

	};

