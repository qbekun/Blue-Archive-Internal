#pragma once
#include "unitysdk.h"

class UIVictory;
class UIRewardPopup;

#define <COSHOWREWARDCONFIRMONSKIP>D__131_.CTOR_OFFSET UNITYSDK_OFFSET(0xBB6250)
#define <COSHOWREWARDCONFIRMONSKIP>D__131_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0xBBB200)
#define <COSHOWREWARDCONFIRMONSKIP>D__131_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xBBB210)
#define <COSHOWREWARDCONFIRMONSKIP>D__131_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xBBB490)
#define <COSHOWREWARDCONFIRMONSKIP>D__131_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0xBBB4A0)
#define <COSHOWREWARDCONFIRMONSKIP>D__131_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xBBB4F0)

	inline static constexpr unsigned int <CoShowRewardConfirmOnSkip>d__131_TypeDefinitionIndex = 8598;

	class <CoShowRewardConfirmOnSkip>d__131 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		UIVictory* __4__this; // 0x20
		::System::Action* afterSkipped; // 0x28
		UIRewardPopup* _rewardPopup_5__2; // 0x30

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <COSHOWREWARDCONFIRMONSKIP>D__131_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <COSHOWREWARDCONFIRMONSKIP>D__131_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <COSHOWREWARDCONFIRMONSKIP>D__131_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <COSHOWREWARDCONFIRMONSKIP>D__131_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <COSHOWREWARDCONFIRMONSKIP>D__131_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <COSHOWREWARDCONFIRMONSKIP>D__131_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

