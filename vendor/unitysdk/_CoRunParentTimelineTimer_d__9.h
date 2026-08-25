#pragma once
#include "unitysdk.h"

class CharacterAnimationEventEffect;
namespace UnityEngine::Playables { class PlayableDirector; }

#define <CORUNPARENTTIMELINETIMER>D__9_.CTOR_OFFSET UNITYSDK_OFFSET(0x20B18B0)
#define <CORUNPARENTTIMELINETIMER>D__9_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x20B1E80)
#define <CORUNPARENTTIMELINETIMER>D__9_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x20B1E90)
#define <CORUNPARENTTIMELINETIMER>D__9_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x20B2040)
#define <CORUNPARENTTIMELINETIMER>D__9_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x20B2050)
#define <CORUNPARENTTIMELINETIMER>D__9_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x20B20A0)

	inline static constexpr unsigned int <CoRunParentTimelineTimer>d__9_TypeDefinitionIndex = 3583;

	class <CoRunParentTimelineTimer>d__9 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		CharacterAnimationEventEffect* __4__this; // 0x20
		::UnityEngine::Playables::PlayableDirector* _playableDirector_5__2; // 0x28
		::System::Single _threshold_5__3; // 0x30

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <CORUNPARENTTIMELINETIMER>D__9_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <CORUNPARENTTIMELINETIMER>D__9_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <CORUNPARENTTIMELINETIMER>D__9_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <CORUNPARENTTIMELINETIMER>D__9_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <CORUNPARENTTIMELINETIMER>D__9_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <CORUNPARENTTIMELINETIMER>D__9_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

