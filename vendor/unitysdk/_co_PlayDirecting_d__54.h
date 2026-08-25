#pragma once
#include "unitysdk.h"

class UICharacterGrowth_TranscendenceEstimation;
class <>c__DisplayClass54_0;
namespace UnityEngine { class Animation; }

#define <CO_PLAYDIRECTING>D__54_.CTOR_OFFSET UNITYSDK_OFFSET(0x22DDDC0)
#define <CO_PLAYDIRECTING>D__54_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x22DE250)
#define <CO_PLAYDIRECTING>D__54_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x22DE260)
#define <CO_PLAYDIRECTING>D__54_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x22DE920)
#define <CO_PLAYDIRECTING>D__54_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x22DE930)
#define <CO_PLAYDIRECTING>D__54_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x22DE980)

	inline static constexpr unsigned int <co_PlayDirecting>d__54_TypeDefinitionIndex = 4850;

	class <co_PlayDirecting>d__54 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		UICharacterGrowth_TranscendenceEstimation* __4__this; // 0x20
		<>c__DisplayClass54_0* __8__1; // 0x28
		::UnityEngine::Animation* _anim_5__2; // 0x30

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <CO_PLAYDIRECTING>D__54_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_PLAYDIRECTING>D__54_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_PLAYDIRECTING>D__54_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_PLAYDIRECTING>D__54_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_PLAYDIRECTING>D__54_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_PLAYDIRECTING>D__54_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

