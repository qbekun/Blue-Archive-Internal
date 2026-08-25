#pragma once
#include "unitysdk.h"

class UIGachaBannerTab;
class <>c__DisplayClass10_0;
class <>c__DisplayClass10_1;
namespace MX::Data { class ManagementBannerData; }

#define <CO_LOADBANNERIMAGE>D__10_.CTOR_OFFSET UNITYSDK_OFFSET(0xA915B0)
#define <CO_LOADBANNERIMAGE>D__10_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0xA91990)
#define <CO_LOADBANNERIMAGE>D__10_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xA919A0)
#define <CO_LOADBANNERIMAGE>D__10_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xA92300)
#define <CO_LOADBANNERIMAGE>D__10_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0xA92310)
#define <CO_LOADBANNERIMAGE>D__10_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xA92360)

	inline static constexpr unsigned int <Co_LoadBannerImage>d__10_TypeDefinitionIndex = 7937;

	class <Co_LoadBannerImage>d__10 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		UIGachaBannerTab* __4__this; // 0x20
		Il2CppObject* onSelected; // 0x28
		<>c__DisplayClass10_0* __8__1; // 0x30
		<>c__DisplayClass10_1* __8__2; // 0x38
		::System::Boolean _isRefTableBannerPath_5__2; // 0x40
		::MX::Data::ManagementBannerData* _banner_5__3; // 0x48
		::Il2CppArray<::System::Object*>* __7__wrap3; // 0x50
		::System::Int32 __7__wrap4; // 0x58

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <CO_LOADBANNERIMAGE>D__10_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_LOADBANNERIMAGE>D__10_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_LOADBANNERIMAGE>D__10_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_LOADBANNERIMAGE>D__10_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_LOADBANNERIMAGE>D__10_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_LOADBANNERIMAGE>D__10_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

