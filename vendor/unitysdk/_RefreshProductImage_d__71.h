#pragma once
#include "unitysdk.h"

class UIShopListElement_Gem;

#define <REFRESHPRODUCTIMAGE>D__71_.CTOR_OFFSET UNITYSDK_OFFSET(0xAB7AD0)
#define <REFRESHPRODUCTIMAGE>D__71_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0xAB96F0)
#define <REFRESHPRODUCTIMAGE>D__71_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xAB9700)
#define <REFRESHPRODUCTIMAGE>D__71_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xAB9980)
#define <REFRESHPRODUCTIMAGE>D__71_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0xAB9990)
#define <REFRESHPRODUCTIMAGE>D__71_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xAB99E0)

	inline static constexpr unsigned int <RefreshProductImage>d__71_TypeDefinitionIndex = 8013;

	class <RefreshProductImage>d__71 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		UIShopListElement_Gem* __4__this; // 0x20

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <REFRESHPRODUCTIMAGE>D__71_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <REFRESHPRODUCTIMAGE>D__71_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <REFRESHPRODUCTIMAGE>D__71_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <REFRESHPRODUCTIMAGE>D__71_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <REFRESHPRODUCTIMAGE>D__71_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <REFRESHPRODUCTIMAGE>D__71_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

