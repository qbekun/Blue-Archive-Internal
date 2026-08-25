#pragma once
#include "unitysdk.h"

namespace BoardGame { class UIConcentrationCard; }
namespace UnityEngine { class Quaternion; }

#define <ANIMATEROTATION>D__39_.CTOR_OFFSET UNITYSDK_OFFSET(0xE12370)
#define <ANIMATEROTATION>D__39_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0xE124A0)
#define <ANIMATEROTATION>D__39_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xE124B0)
#define <ANIMATEROTATION>D__39_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xE12620)
#define <ANIMATEROTATION>D__39_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0xE12630)
#define <ANIMATEROTATION>D__39_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xE12680)

	inline static constexpr unsigned int <AnimateRotation>d__39_TypeDefinitionIndex = 10294;

	class <AnimateRotation>d__39 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		::System::Single duration; // 0x20
		::BoardGame::UIConcentrationCard* __4__this; // 0x28
		::UnityEngine::Quaternion* start; // 0x30
		::UnityEngine::Quaternion* end; // 0x40
		::System::Single _timeElapsed_5__2; // 0x50

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <ANIMATEROTATION>D__39_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <ANIMATEROTATION>D__39_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <ANIMATEROTATION>D__39_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <ANIMATEROTATION>D__39_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <ANIMATEROTATION>D__39_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <ANIMATEROTATION>D__39_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

