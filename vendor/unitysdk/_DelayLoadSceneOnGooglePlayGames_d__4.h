#pragma once
#include "unitysdk.h"

class UILogoVideoPlayer;

#define <DELAYLOADSCENEONGOOGLEPLAYGAMES>D__4_.CTOR_OFFSET UNITYSDK_OFFSET(0xC8C1D0)
#define <DELAYLOADSCENEONGOOGLEPLAYGAMES>D__4_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0xC8CB90)
#define <DELAYLOADSCENEONGOOGLEPLAYGAMES>D__4_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xC8CBA0)
#define <DELAYLOADSCENEONGOOGLEPLAYGAMES>D__4_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xC8CC50)
#define <DELAYLOADSCENEONGOOGLEPLAYGAMES>D__4_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0xC8CC60)
#define <DELAYLOADSCENEONGOOGLEPLAYGAMES>D__4_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xC8CCB0)

	inline static constexpr unsigned int <DelayLoadSceneOnGooglePlayGames>d__4_TypeDefinitionIndex = 9097;

	class <DelayLoadSceneOnGooglePlayGames>d__4 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		UILogoVideoPlayer* __4__this; // 0x20

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <DELAYLOADSCENEONGOOGLEPLAYGAMES>D__4_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <DELAYLOADSCENEONGOOGLEPLAYGAMES>D__4_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <DELAYLOADSCENEONGOOGLEPLAYGAMES>D__4_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <DELAYLOADSCENEONGOOGLEPLAYGAMES>D__4_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <DELAYLOADSCENEONGOOGLEPLAYGAMES>D__4_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <DELAYLOADSCENEONGOOGLEPLAYGAMES>D__4_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

