#pragma once
#include "unitysdk.h"

#define <CO_SHOWREWARDCONFIRM>D__75_.CTOR_OFFSET UNITYSDK_OFFSET(0x1FF82F0)
#define <CO_SHOWREWARDCONFIRM>D__75_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x1FF8310)
#define <CO_SHOWREWARDCONFIRM>D__75_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1FF8320)
#define <CO_SHOWREWARDCONFIRM>D__75_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1FF8430)
#define <CO_SHOWREWARDCONFIRM>D__75_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x1FF8440)
#define <CO_SHOWREWARDCONFIRM>D__75_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1FF8490)

	inline static constexpr unsigned int <Co_ShowRewardConfirm>d__75_TypeDefinitionIndex = 3074;

	class <Co_ShowRewardConfirm>d__75 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		Il2CppObject* parcelInfos; // 0x20
		Il2CppObject* displaySequence; // 0x28
		Il2CppObject* duplicateBonusDictionary; // 0x30

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <CO_SHOWREWARDCONFIRM>D__75_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_SHOWREWARDCONFIRM>D__75_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_SHOWREWARDCONFIRM>D__75_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_SHOWREWARDCONFIRM>D__75_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_SHOWREWARDCONFIRM>D__75_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_SHOWREWARDCONFIRM>D__75_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

