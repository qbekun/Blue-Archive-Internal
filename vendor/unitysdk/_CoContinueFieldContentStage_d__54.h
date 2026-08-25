#pragma once
#include "unitysdk.h"

namespace MX::Data { class FieldContentStageInfo; }
namespace MX::GameLogic::DBModel { class ContentSaveDB; }
namespace MXField { class FieldBridge; }
class <>c__DisplayClass54_0;
class EventContentAdventureListNetworkTask;

#define <COCONTINUEFIELDCONTENTSTAGE>D__54_.CTOR_OFFSET UNITYSDK_OFFSET(0xE642B0)
#define <COCONTINUEFIELDCONTENTSTAGE>D__54_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0xE65510)
#define <COCONTINUEFIELDCONTENTSTAGE>D__54_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xE65520)
#define <COCONTINUEFIELDCONTENTSTAGE>D__54_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xE65A30)
#define <COCONTINUEFIELDCONTENTSTAGE>D__54_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0xE65A40)
#define <COCONTINUEFIELDCONTENTSTAGE>D__54_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xE65A90)

	inline static constexpr unsigned int <CoContinueFieldContentStage>d__54_TypeDefinitionIndex = 10485;

	class <CoContinueFieldContentStage>d__54 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		::MX::Data::FieldContentStageInfo* stageInfo; // 0x20
		::MX::GameLogic::DBModel::ContentSaveDB* contentSave; // 0x28
		::MXField::FieldBridge* __4__this; // 0x30
		::System::Int64 eventContentId; // 0x38
		<>c__DisplayClass54_0* __8__1; // 0x40
		EventContentAdventureListNetworkTask* _networkTask_5__2; // 0x48

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <COCONTINUEFIELDCONTENTSTAGE>D__54_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <COCONTINUEFIELDCONTENTSTAGE>D__54_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <COCONTINUEFIELDCONTENTSTAGE>D__54_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <COCONTINUEFIELDCONTENTSTAGE>D__54_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <COCONTINUEFIELDCONTENTSTAGE>D__54_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <COCONTINUEFIELDCONTENTSTAGE>D__54_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

