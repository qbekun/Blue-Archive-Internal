#pragma once
#include "unitysdk.h"

class OpenConditionListObject;
class <>c__DisplayClass29_2;

#define <CHECKEVENTOPENCONDITIONSANDSYNC>D__29_.CTOR_OFFSET UNITYSDK_OFFSET(0x1EC7880)
#define <CHECKEVENTOPENCONDITIONSANDSYNC>D__29_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x1EC8BD0)
#define <CHECKEVENTOPENCONDITIONSANDSYNC>D__29_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1EC8BE0)
#define <CHECKEVENTOPENCONDITIONSANDSYNC>D__29_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1EC9E00)
#define <CHECKEVENTOPENCONDITIONSANDSYNC>D__29_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x1EC9E10)
#define <CHECKEVENTOPENCONDITIONSANDSYNC>D__29_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1EC9E60)

	inline static constexpr unsigned int <CheckEventOpenConditionsAndSync>d__29_TypeDefinitionIndex = 1772;

	class <CheckEventOpenConditionsAndSync>d__29 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		OpenConditionListObject* __4__this; // 0x20
		<>c__DisplayClass29_2* __8__1; // 0x28

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <CHECKEVENTOPENCONDITIONSANDSYNC>D__29_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <CHECKEVENTOPENCONDITIONSANDSYNC>D__29_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <CHECKEVENTOPENCONDITIONSANDSYNC>D__29_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <CHECKEVENTOPENCONDITIONSANDSYNC>D__29_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <CHECKEVENTOPENCONDITIONSANDSYNC>D__29_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <CHECKEVENTOPENCONDITIONSANDSYNC>D__29_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

