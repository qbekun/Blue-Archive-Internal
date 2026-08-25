#pragma once
#include "unitysdk.h"

class UIShopContent;
namespace FlatData { class ShopCategoryType; }

#define <WAITANDAUTOREFRESH>D__47_.CTOR_OFFSET UNITYSDK_OFFSET(0xAA9830)
#define <WAITANDAUTOREFRESH>D__47_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0xAB04F0)
#define <WAITANDAUTOREFRESH>D__47_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xAB0500)
#define <WAITANDAUTOREFRESH>D__47_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xAB0730)
#define <WAITANDAUTOREFRESH>D__47_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0xAB0740)
#define <WAITANDAUTOREFRESH>D__47_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xAB0790)

	inline static constexpr unsigned int <WaitAndAutoRefresh>d__47_TypeDefinitionIndex = 7982;

	class <WaitAndAutoRefresh>d__47 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		UIShopContent* __4__this; // 0x20
		::FlatData::ShopCategoryType* shopCategoryType; // 0x28

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <WAITANDAUTOREFRESH>D__47_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <WAITANDAUTOREFRESH>D__47_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <WAITANDAUTOREFRESH>D__47_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <WAITANDAUTOREFRESH>D__47_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <WAITANDAUTOREFRESH>D__47_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <WAITANDAUTOREFRESH>D__47_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

