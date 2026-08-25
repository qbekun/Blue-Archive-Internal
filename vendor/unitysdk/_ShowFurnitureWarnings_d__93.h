#pragma once
#include "unitysdk.h"

class UICafe;

#define <SHOWFURNITUREWARNINGS>D__93_.CTOR_OFFSET UNITYSDK_OFFSET(0x22757C0)
#define <SHOWFURNITUREWARNINGS>D__93_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x227A560)
#define <SHOWFURNITUREWARNINGS>D__93_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x227A570)
#define <SHOWFURNITUREWARNINGS>D__93_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x227A8C0)
#define <SHOWFURNITUREWARNINGS>D__93_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x227A8D0)
#define <SHOWFURNITUREWARNINGS>D__93_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x227A920)

	inline static constexpr unsigned int <ShowFurnitureWarnings>d__93_TypeDefinitionIndex = 4638;

	class <ShowFurnitureWarnings>d__93 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		UICafe* __4__this; // 0x20

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <SHOWFURNITUREWARNINGS>D__93_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <SHOWFURNITUREWARNINGS>D__93_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <SHOWFURNITUREWARNINGS>D__93_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <SHOWFURNITUREWARNINGS>D__93_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <SHOWFURNITUREWARNINGS>D__93_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <SHOWFURNITUREWARNINGS>D__93_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

