#pragma once
#include "unitysdk.h"

class UIDreamMaker_ParameterDisplayElement;

#define <CO_PLAYPARAMETERCHANGEANIMATION>D__26_.CTOR_OFFSET UNITYSDK_OFFSET(0xBA1940)
#define <CO_PLAYPARAMETERCHANGEANIMATION>D__26_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0xBA19F0)
#define <CO_PLAYPARAMETERCHANGEANIMATION>D__26_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xBA1A00)
#define <CO_PLAYPARAMETERCHANGEANIMATION>D__26_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xBA1C30)
#define <CO_PLAYPARAMETERCHANGEANIMATION>D__26_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0xBA1C40)
#define <CO_PLAYPARAMETERCHANGEANIMATION>D__26_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xBA1C90)

	inline static constexpr unsigned int <Co_PlayParameterChangeAnimation>d__26_TypeDefinitionIndex = 603;

	class <Co_PlayParameterChangeAnimation>d__26 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		::System::Int64 current; // 0x20
		::System::Int64 target; // 0x28
		UIDreamMaker_ParameterDisplayElement* __4__this; // 0x30
		::System::Single duration; // 0x38
		::System::Single _currentStat_5__2; // 0x3C
		::System::Single _restStat_5__3; // 0x40
		::System::Boolean _increase_5__4; // 0x44
		::System::Int32 _currentStatInt_5__5; // 0x48

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <CO_PLAYPARAMETERCHANGEANIMATION>D__26_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_PLAYPARAMETERCHANGEANIMATION>D__26_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_PLAYPARAMETERCHANGEANIMATION>D__26_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_PLAYPARAMETERCHANGEANIMATION>D__26_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_PLAYPARAMETERCHANGEANIMATION>D__26_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_PLAYPARAMETERCHANGEANIMATION>D__26_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

