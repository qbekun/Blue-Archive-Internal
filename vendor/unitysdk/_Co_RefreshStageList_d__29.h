#pragma once
#include "unitysdk.h"

class UIEventLobbyContentController_StageList;
namespace FlatData { class StageDifficulty; }
namespace MX::SaveData { class OpenedCondition; }

#define <CO_REFRESHSTAGELIST>D__29_.CTOR_OFFSET UNITYSDK_OFFSET(0x244DCB0)
#define <CO_REFRESHSTAGELIST>D__29_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x244E400)
#define <CO_REFRESHSTAGELIST>D__29_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x244E410)
#define <CO_REFRESHSTAGELIST>D__29_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x244FB50)
#define <CO_REFRESHSTAGELIST>D__29_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x244FB60)
#define <CO_REFRESHSTAGELIST>D__29_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x244FBB0)

	inline static constexpr unsigned int <Co_RefreshStageList>d__29_TypeDefinitionIndex = 5547;

	class <Co_RefreshStageList>d__29 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		UIEventLobbyContentController_StageList* __4__this; // 0x20
		::FlatData::StageDifficulty* _currStageDifficulty_5__2; // 0x28
		::MX::SaveData::OpenedCondition* _openConditionSaveData_5__3; // 0x30
		::System::String* _challengeListUnlockConditionKey_5__4; // 0x38
		::System::Boolean _showChallengeListUnlock_5__5; // 0x40
		::System::Boolean _challangeListLocked_5__6; // 0x41

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <CO_REFRESHSTAGELIST>D__29_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_REFRESHSTAGELIST>D__29_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_REFRESHSTAGELIST>D__29_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_REFRESHSTAGELIST>D__29_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_REFRESHSTAGELIST>D__29_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_REFRESHSTAGELIST>D__29_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

