#pragma once
#include "unitysdk.h"

class UIScenarioMode_MainVolume;

#define <<TRYADDSHOWLASTVOLUMESEQUENCE>G__WAITOPENANI|59_2>D_.CTOR_OFFSET UNITYSDK_OFFSET(0x2803150)
#define <<TRYADDSHOWLASTVOLUMESEQUENCE>G__WAITOPENANI|59_2>D_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x2808E10)
#define <<TRYADDSHOWLASTVOLUMESEQUENCE>G__WAITOPENANI|59_2>D_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x2808E20)
#define <<TRYADDSHOWLASTVOLUMESEQUENCE>G__WAITOPENANI|59_2>D_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x2808E90)
#define <<TRYADDSHOWLASTVOLUMESEQUENCE>G__WAITOPENANI|59_2>D_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x2808EA0)
#define <<TRYADDSHOWLASTVOLUMESEQUENCE>G__WAITOPENANI|59_2>D_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x2808EF0)

	inline static constexpr unsigned int <<TryAddShowLastVolumeSequence>g__WaitOpenAni|59_2>d_TypeDefinitionIndex = 7771;

	class <<TryAddShowLastVolumeSequence>g__WaitOpenAni|59_2>d : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		UIScenarioMode_MainVolume* __4__this; // 0x20

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <<TRYADDSHOWLASTVOLUMESEQUENCE>G__WAITOPENANI|59_2>D_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <<TRYADDSHOWLASTVOLUMESEQUENCE>G__WAITOPENANI|59_2>D_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <<TRYADDSHOWLASTVOLUMESEQUENCE>G__WAITOPENANI|59_2>D_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <<TRYADDSHOWLASTVOLUMESEQUENCE>G__WAITOPENANI|59_2>D_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <<TRYADDSHOWLASTVOLUMESEQUENCE>G__WAITOPENANI|59_2>D_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <<TRYADDSHOWLASTVOLUMESEQUENCE>G__WAITOPENANI|59_2>D_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

