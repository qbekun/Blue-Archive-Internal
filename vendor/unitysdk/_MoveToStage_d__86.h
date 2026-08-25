#pragma once
#include "unitysdk.h"

class UIStageSelect;
class <>c__DisplayClass86_0;
class UIPanel;
namespace UnityEngine { class Vector3; }
class SpringPanel;

#define <MOVETOSTAGE>D__86_.CTOR_OFFSET UNITYSDK_OFFSET(0xB20180)
#define <MOVETOSTAGE>D__86_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0xB24CD0)
#define <MOVETOSTAGE>D__86_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xB24CE0)
#define <MOVETOSTAGE>D__86_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xB25630)
#define <MOVETOSTAGE>D__86_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0xB25640)
#define <MOVETOSTAGE>D__86_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xB25690)

	inline static constexpr unsigned int <MoveToStage>d__86_TypeDefinitionIndex = 8255;

	class <MoveToStage>d__86 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		::System::Int64 stageUniqueId; // 0x20
		UIStageSelect* __4__this; // 0x28
		::System::Boolean immediate; // 0x30
		<>c__DisplayClass86_0* __8__1; // 0x38
		UIPanel* _scrollViewPanel_5__2; // 0x40
		::UnityEngine::Vector3* _targetPosition_5__3; // 0x48
		SpringPanel* _springPanel_5__4; // 0x58
		::System::Single _elapsedTime_5__5; // 0x60

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <MOVETOSTAGE>D__86_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <MOVETOSTAGE>D__86_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <MOVETOSTAGE>D__86_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <MOVETOSTAGE>D__86_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <MOVETOSTAGE>D__86_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <MOVETOSTAGE>D__86_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

