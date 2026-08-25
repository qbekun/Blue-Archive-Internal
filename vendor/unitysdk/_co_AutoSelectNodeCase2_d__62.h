#pragma once
#include "unitysdk.h"

class UICraftDuration;
namespace MX::GameLogic::DBModel { class CraftNodeDB; }
namespace UnityEngine { class WaitForSeconds; }
class UICraftDurationSubNode;

#define <CO_AUTOSELECTNODECASE2>D__62_.CTOR_OFFSET UNITYSDK_OFFSET(0x2386890)
#define <CO_AUTOSELECTNODECASE2>D__62_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x238A950)
#define <CO_AUTOSELECTNODECASE2>D__62_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x238A9B0)
#define <CO_AUTOSELECTNODECASE2>D__62___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0x238B500)
#define <CO_AUTOSELECTNODECASE2>D__62_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x238BA40)
#define <CO_AUTOSELECTNODECASE2>D__62_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x238BA50)
#define <CO_AUTOSELECTNODECASE2>D__62_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x238BAA0)

	inline static constexpr unsigned int <co_AutoSelectNodeCase2>d__62_TypeDefinitionIndex = 5133;

	class <co_AutoSelectNodeCase2>d__62 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		UICraftDuration* __4__this; // 0x20
		::MX::GameLogic::DBModel::CraftNodeDB* _db_5__2; // 0x28
		::UnityEngine::WaitForSeconds* _waitTime_5__3; // 0x30
		Il2CppObject* _waitForSeconds_5__4; // 0x38
		::System::Int32 _leafNodeCount_5__5; // 0x40
		::System::Int32 _gachaIndex_5__6; // 0x44
		::System::Int32 _curIndex_5__7; // 0x48
		Il2CppObject* __7__wrap7; // 0x50
		UICraftDurationSubNode* _node_5__9; // 0x68

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <CO_AUTOSELECTNODECASE2>D__62_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_AUTOSELECTNODECASE2>D__62_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_AUTOSELECTNODECASE2>D__62_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void __m__Finally1()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_AUTOSELECTNODECASE2>D__62___M__FINALLY1_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_AUTOSELECTNODECASE2>D__62_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_AUTOSELECTNODECASE2>D__62_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_AUTOSELECTNODECASE2>D__62_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

