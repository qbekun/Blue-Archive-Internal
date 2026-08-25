#pragma once
#include "unitysdk.h"

class UIPopup_WeaponInfo;
class CharacterObject;
namespace UnityEngine { class Animation; }

#define <CO_DIRECTING>D__28_.CTOR_OFFSET UNITYSDK_OFFSET(0x22C97C0)
#define <CO_DIRECTING>D__28_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x22CAF50)
#define <CO_DIRECTING>D__28_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x22CAF60)
#define <CO_DIRECTING>D__28_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x22CB570)
#define <CO_DIRECTING>D__28_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x22CB580)
#define <CO_DIRECTING>D__28_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x22CB5D0)

	inline static constexpr unsigned int <co_Directing>d__28_TypeDefinitionIndex = 4818;

	class <co_Directing>d__28 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		UIPopup_WeaponInfo* __4__this; // 0x20
		CharacterObject* _character_5__2; // 0x28
		::System::Boolean _useRepStyleOnCharacterGrowth_5__3; // 0x30
		::UnityEngine::Animation* _anim_5__4; // 0x38

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <CO_DIRECTING>D__28_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_DIRECTING>D__28_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_DIRECTING>D__28_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_DIRECTING>D__28_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_DIRECTING>D__28_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_DIRECTING>D__28_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

