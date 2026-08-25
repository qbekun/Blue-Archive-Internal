#pragma once
#include "unitysdk.h"

class UIBattlePassRandomText;
class UILabel;
namespace UnityEngine { class Transform; }
namespace UnityEngine { class Vector3; }

#define <MOVELABEL>D__14_.CTOR_OFFSET UNITYSDK_OFFSET(0x2243AC0)
#define <MOVELABEL>D__14_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x2244C20)
#define <MOVELABEL>D__14_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x2244C30)
#define <MOVELABEL>D__14_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x2244F00)
#define <MOVELABEL>D__14_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x2244F10)
#define <MOVELABEL>D__14_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x2244F60)

	inline static constexpr unsigned int <MoveLabel>d__14_TypeDefinitionIndex = 4496;

	class <MoveLabel>d__14 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		UIBattlePassRandomText* __4__this; // 0x20
		UILabel* activeLabel; // 0x28
		UILabel* inactiveLabel; // 0x30
		::UnityEngine::Transform* _activeLabelTrans_5__2; // 0x38
		::UnityEngine::Transform* _inactiveLabelTrans_5__3; // 0x40
		::System::Single _elapsedTime_5__4; // 0x48
		::UnityEngine::Vector3* _startPos_5__5; // 0x4C
		::UnityEngine::Vector3* _endPos_5__6; // 0x58
		::UnityEngine::Vector3* _inactiveStartPos_5__7; // 0x64

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <MOVELABEL>D__14_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <MOVELABEL>D__14_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <MOVELABEL>D__14_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <MOVELABEL>D__14_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <MOVELABEL>D__14_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <MOVELABEL>D__14_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

