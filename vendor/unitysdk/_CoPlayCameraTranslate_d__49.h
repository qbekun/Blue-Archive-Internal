#pragma once
#include "unitysdk.h"

class HexaCameraTranslate;
namespace UnityEngine { class Vector3; }

#define <COPLAYCAMERATRANSLATE>D__49_.CTOR_OFFSET UNITYSDK_OFFSET(0xE54AE0)
#define <COPLAYCAMERATRANSLATE>D__49_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0xE54B20)
#define <COPLAYCAMERATRANSLATE>D__49_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xE54B30)
#define <COPLAYCAMERATRANSLATE>D__49_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xE550D0)
#define <COPLAYCAMERATRANSLATE>D__49_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0xE550E0)
#define <COPLAYCAMERATRANSLATE>D__49_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xE55130)

	inline static constexpr unsigned int <CoPlayCameraTranslate>d__49_TypeDefinitionIndex = 770;

	class <CoPlayCameraTranslate>d__49 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		HexaCameraTranslate* __4__this; // 0x20
		::UnityEngine::Vector3* pos; // 0x28
		::System::Boolean isUnit; // 0x34
		::System::Single _duration_5__2; // 0x38
		::System::Single _t_5__3; // 0x3C
		::UnityEngine::Vector3* _start_5__4; // 0x40
		::UnityEngine::Vector3* _gap_5__5; // 0x4C

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <COPLAYCAMERATRANSLATE>D__49_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <COPLAYCAMERATRANSLATE>D__49_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <COPLAYCAMERATRANSLATE>D__49_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <COPLAYCAMERATRANSLATE>D__49_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <COPLAYCAMERATRANSLATE>D__49_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <COPLAYCAMERATRANSLATE>D__49_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

