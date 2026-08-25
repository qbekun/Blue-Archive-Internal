#pragma once
#include "unitysdk.h"

namespace MXField::UI::Inventory { class UIPopup_FieldInventory; }

#define <COPLAYUNLOCKEVIDENCEINVENTORY>D__27_.CTOR_OFFSET UNITYSDK_OFFSET(0xEB0070)
#define <COPLAYUNLOCKEVIDENCEINVENTORY>D__27_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0xEB0950)
#define <COPLAYUNLOCKEVIDENCEINVENTORY>D__27_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xEB0960)
#define <COPLAYUNLOCKEVIDENCEINVENTORY>D__27_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xEB0B30)
#define <COPLAYUNLOCKEVIDENCEINVENTORY>D__27_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0xEB0B40)
#define <COPLAYUNLOCKEVIDENCEINVENTORY>D__27_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xEB0B90)

	inline static constexpr unsigned int <CoPlayUnlockEvidenceInventory>d__27_TypeDefinitionIndex = 10792;

	class <CoPlayUnlockEvidenceInventory>d__27 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		::MXField::UI::Inventory::UIPopup_FieldInventory* __4__this; // 0x20

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <COPLAYUNLOCKEVIDENCEINVENTORY>D__27_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <COPLAYUNLOCKEVIDENCEINVENTORY>D__27_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <COPLAYUNLOCKEVIDENCEINVENTORY>D__27_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <COPLAYUNLOCKEVIDENCEINVENTORY>D__27_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <COPLAYUNLOCKEVIDENCEINVENTORY>D__27_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <COPLAYUNLOCKEVIDENCEINVENTORY>D__27_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

