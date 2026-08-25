#pragma once
#include "unitysdk.h"

class UIManager;
namespace UnityEngine { class Color; }

#define <COFADEINOROUTV2>D__148_.CTOR_OFFSET UNITYSDK_OFFSET(0x268E860)
#define <COFADEINOROUTV2>D__148_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x2693E00)
#define <COFADEINOROUTV2>D__148_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x2693E10)
#define <COFADEINOROUTV2>D__148_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x2694140)
#define <COFADEINOROUTV2>D__148_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x2694150)
#define <COFADEINOROUTV2>D__148_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x26941A0)

	inline static constexpr unsigned int <CoFadeInOrOutV2>d__148_TypeDefinitionIndex = 6790;

	class <CoFadeInOrOutV2>d__148 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		UIManager* __4__this; // 0x20
		::UnityEngine::Color* fadeColor; // 0x28
		::System::Int32 outOngoingMs; // 0x38
		::System::Int32 keepMs; // 0x3C
		::System::Int32 inOngoingMs; // 0x40

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <COFADEINOROUTV2>D__148_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <COFADEINOROUTV2>D__148_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <COFADEINOROUTV2>D__148_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <COFADEINOROUTV2>D__148_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <COFADEINOROUTV2>D__148_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <COFADEINOROUTV2>D__148_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

