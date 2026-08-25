#pragma once
#include "unitysdk.h"

class UICraftNode;
namespace UnityEngine { class Vector3; }

#define <CO_LERPINCREMENTGAGE>D__16_.CTOR_OFFSET UNITYSDK_OFFSET(0x23926E0)
#define <CO_LERPINCREMENTGAGE>D__16_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x2392720)
#define <CO_LERPINCREMENTGAGE>D__16_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x2392730)
#define <CO_LERPINCREMENTGAGE>D__16_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x2392AE0)
#define <CO_LERPINCREMENTGAGE>D__16_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x2392AF0)
#define <CO_LERPINCREMENTGAGE>D__16_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x2392B40)

	inline static constexpr unsigned int <co_LerpIncrementGage>d__16_TypeDefinitionIndex = 5156;

	class <co_LerpIncrementGage>d__16 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		UICraftNode* __4__this; // 0x20
		::System::Action* callback; // 0x28
		::System::Single ratio; // 0x30
		::UnityEngine::Vector3* _vec_Angles_5__2; // 0x34
		::System::Single _to_5__3; // 0x40

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <CO_LERPINCREMENTGAGE>D__16_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_LERPINCREMENTGAGE>D__16_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_LERPINCREMENTGAGE>D__16_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_LERPINCREMENTGAGE>D__16_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_LERPINCREMENTGAGE>D__16_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_LERPINCREMENTGAGE>D__16_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

