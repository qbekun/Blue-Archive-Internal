#pragma once
#include "unitysdk.h"

class UIGacha;
class CommonNetworkTask;

#define <CO_SHOPPICKUPSELECTIONGACHAGETREQUEST>D__32_.CTOR_OFFSET UNITYSDK_OFFSET(0xA8E7E0)
#define <CO_SHOPPICKUPSELECTIONGACHAGETREQUEST>D__32_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0xA8F440)
#define <CO_SHOPPICKUPSELECTIONGACHAGETREQUEST>D__32_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xA8F450)
#define <CO_SHOPPICKUPSELECTIONGACHAGETREQUEST>D__32_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xA8F620)
#define <CO_SHOPPICKUPSELECTIONGACHAGETREQUEST>D__32_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0xA8F630)
#define <CO_SHOPPICKUPSELECTIONGACHAGETREQUEST>D__32_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xA8F680)

	inline static constexpr unsigned int <Co_ShopPickupSelectionGachaGetRequest>d__32_TypeDefinitionIndex = 7912;

	class <Co_ShopPickupSelectionGachaGetRequest>d__32 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		UIGacha* __4__this; // 0x20
		CommonNetworkTask* _task_5__2; // 0x28

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <CO_SHOPPICKUPSELECTIONGACHAGETREQUEST>D__32_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_SHOPPICKUPSELECTIONGACHAGETREQUEST>D__32_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_SHOPPICKUPSELECTIONGACHAGETREQUEST>D__32_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_SHOPPICKUPSELECTIONGACHAGETREQUEST>D__32_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_SHOPPICKUPSELECTIONGACHAGETREQUEST>D__32_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_SHOPPICKUPSELECTIONGACHAGETREQUEST>D__32_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

