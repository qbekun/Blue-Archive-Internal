#pragma once
#include "unitysdk.h"

namespace MXField::Core { class FieldSceneLoader; }
namespace MXField::Actions { class CoFieldAction; }

#define <EXECUTE>D__40_.CTOR_OFFSET UNITYSDK_OFFSET(0xED86B0)
#define <EXECUTE>D__40_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0xED8D80)
#define <EXECUTE>D__40_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xED8D90)
#define <EXECUTE>D__40_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xED8EA0)
#define <EXECUTE>D__40_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0xED8EB0)
#define <EXECUTE>D__40_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xED8F00)

	inline static constexpr unsigned int <Execute>d__40_TypeDefinitionIndex = 10954;

	class <Execute>d__40 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		::MXField::Core::FieldSceneLoader* __4__this; // 0x20
		::System::Int64 previousSceneId; // 0x28
		::MXField::Actions::CoFieldAction* clientAction; // 0x30
		::System::Action* finishedAction; // 0x38
		::System::Int64 nextSceneId; // 0x40

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <EXECUTE>D__40_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <EXECUTE>D__40_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <EXECUTE>D__40_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <EXECUTE>D__40_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <EXECUTE>D__40_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <EXECUTE>D__40_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

