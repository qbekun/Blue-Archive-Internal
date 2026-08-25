#pragma once
#include "unitysdk.h"

namespace MXUnderCover { class UCRuntimeObject; }
namespace MXUnderCover { class UCRuntimeObjectHandler; }
namespace MXUnderCover { class UCRuntimeObjectType; }

#define <CO_RUNTIMEOBJECTLIFECYCLE>D__8_.CTOR_OFFSET UNITYSDK_OFFSET(0xDB40E0)
#define <CO_RUNTIMEOBJECTLIFECYCLE>D__8_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0xDB44E0)
#define <CO_RUNTIMEOBJECTLIFECYCLE>D__8_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xDB44F0)
#define <CO_RUNTIMEOBJECTLIFECYCLE>D__8_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xDB4600)
#define <CO_RUNTIMEOBJECTLIFECYCLE>D__8_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0xDB4610)
#define <CO_RUNTIMEOBJECTLIFECYCLE>D__8_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xDB4660)

	inline static constexpr unsigned int <co_RunTimeObjectLifeCycle>d__8_TypeDefinitionIndex = 9971;

	class <co_RunTimeObjectLifeCycle>d__8 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		::MXUnderCover::UCRuntimeObject* obj; // 0x20
		::MXUnderCover::UCRuntimeObjectHandler* __4__this; // 0x28
		::MXUnderCover::UCRuntimeObjectType* objectType; // 0x30

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <CO_RUNTIMEOBJECTLIFECYCLE>D__8_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_RUNTIMEOBJECTLIFECYCLE>D__8_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_RUNTIMEOBJECTLIFECYCLE>D__8_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_RUNTIMEOBJECTLIFECYCLE>D__8_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_RUNTIMEOBJECTLIFECYCLE>D__8_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_RUNTIMEOBJECTLIFECYCLE>D__8_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

