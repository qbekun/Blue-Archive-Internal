#pragma once
#include "unitysdk.h"

class BillingPurchaseListByNexonNetworkTask;

#define <CO_REQUESTBILLINGPURCHASELISTBYNEXON>D__30_.CTOR_OFFSET UNITYSDK_OFFSET(0xA86BF0)
#define <CO_REQUESTBILLINGPURCHASELISTBYNEXON>D__30_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0xA8F2B0)
#define <CO_REQUESTBILLINGPURCHASELISTBYNEXON>D__30_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xA8F2C0)
#define <CO_REQUESTBILLINGPURCHASELISTBYNEXON>D__30_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xA8F3D0)
#define <CO_REQUESTBILLINGPURCHASELISTBYNEXON>D__30_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0xA8F3E0)
#define <CO_REQUESTBILLINGPURCHASELISTBYNEXON>D__30_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xA8F430)

	inline static constexpr unsigned int <Co_RequestBillingPurchaseListByNexon>d__30_TypeDefinitionIndex = 7911;

	class <Co_RequestBillingPurchaseListByNexon>d__30 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		::System::Boolean teenage; // 0x20
		BillingPurchaseListByNexonNetworkTask* _task_5__2; // 0x28

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <CO_REQUESTBILLINGPURCHASELISTBYNEXON>D__30_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_REQUESTBILLINGPURCHASELISTBYNEXON>D__30_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_REQUESTBILLINGPURCHASELISTBYNEXON>D__30_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_REQUESTBILLINGPURCHASELISTBYNEXON>D__30_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_REQUESTBILLINGPURCHASELISTBYNEXON>D__30_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_REQUESTBILLINGPURCHASELISTBYNEXON>D__30_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

