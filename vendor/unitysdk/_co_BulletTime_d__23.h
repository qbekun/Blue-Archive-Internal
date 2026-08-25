#pragma once
#include "unitysdk.h"

namespace MXUnderCover { class UCStageTimeHandler; }
namespace UnityEngine { class Vector3; }

#define <CO_BULLETTIME>D__23_.CTOR_OFFSET UNITYSDK_OFFSET(0xDBDAA0)
#define <CO_BULLETTIME>D__23_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0xDBF670)
#define <CO_BULLETTIME>D__23_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xDBF680)
#define <CO_BULLETTIME>D__23_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xDBFB90)
#define <CO_BULLETTIME>D__23_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0xDBFBA0)
#define <CO_BULLETTIME>D__23_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xDBFBF0)

	inline static constexpr unsigned int <co_BulletTime>d__23_TypeDefinitionIndex = 10006;

	class <co_BulletTime>d__23 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		::System::Boolean fromDragOut; // 0x20
		::MXUnderCover::UCStageTimeHandler* __4__this; // 0x28
		::System::Boolean _isRePressed_5__2; // 0x30
		::UnityEngine::Vector3* _inputWorldPos_5__3; // 0x34

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <CO_BULLETTIME>D__23_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_BULLETTIME>D__23_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_BULLETTIME>D__23_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_BULLETTIME>D__23_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_BULLETTIME>D__23_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_BULLETTIME>D__23_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

