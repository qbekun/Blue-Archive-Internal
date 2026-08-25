#pragma once
#include "unitysdk.h"

class <>c__DisplayClass74_0;

#define <CO_SHOWREWARDUI>D__74_.CTOR_OFFSET UNITYSDK_OFFSET(0x1FF7E90)
#define <CO_SHOWREWARDUI>D__74_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x1FF7EB0)
#define <CO_SHOWREWARDUI>D__74_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1FF7EC0)
#define <CO_SHOWREWARDUI>D__74_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1FF8280)
#define <CO_SHOWREWARDUI>D__74_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x1FF8290)
#define <CO_SHOWREWARDUI>D__74_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1FF82E0)

	inline static constexpr unsigned int <Co_ShowRewardUI>d__74_TypeDefinitionIndex = 3073;

	class <Co_ShowRewardUI>d__74 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		Il2CppObject* parcelInfos; // 0x20
		Il2CppObject* displaySequence; // 0x28
		Il2CppObject* duplicateBonusDictionary; // 0x30
		<>c__DisplayClass74_0* __8__1; // 0x38
		::System::Action* onFinished; // 0x40

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <CO_SHOWREWARDUI>D__74_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_SHOWREWARDUI>D__74_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_SHOWREWARDUI>D__74_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_SHOWREWARDUI>D__74_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_SHOWREWARDUI>D__74_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_SHOWREWARDUI>D__74_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

