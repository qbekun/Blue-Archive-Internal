#pragma once
#include "unitysdk.h"

class UIEventFortuneGachaShop;

#define <CO_STARTPURCHASEDINFO>D__42_.CTOR_OFFSET UNITYSDK_OFFSET(0x24A8E20)
#define <CO_STARTPURCHASEDINFO>D__42_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x24AB0F0)
#define <CO_STARTPURCHASEDINFO>D__42_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x24AB100)
#define <CO_STARTPURCHASEDINFO>D__42_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x24AB370)
#define <CO_STARTPURCHASEDINFO>D__42_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x24AB380)
#define <CO_STARTPURCHASEDINFO>D__42_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x24AB3D0)

	inline static constexpr unsigned int <Co_StartPurchasedInfo>d__42_TypeDefinitionIndex = 5825;

	class <Co_StartPurchasedInfo>d__42 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		::System::Int64 fortuneGachaShopUniqueId; // 0x20
		UIEventFortuneGachaShop* __4__this; // 0x28

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <CO_STARTPURCHASEDINFO>D__42_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_STARTPURCHASEDINFO>D__42_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_STARTPURCHASEDINFO>D__42_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_STARTPURCHASEDINFO>D__42_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_STARTPURCHASEDINFO>D__42_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_STARTPURCHASEDINFO>D__42_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

