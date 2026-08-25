#pragma once
#include "unitysdk.h"

namespace FlatData { class OpenConditionContent; }
class <>c__DisplayClass20_0;

#define <OPENSHORTCUTUI>D__20_.CTOR_OFFSET UNITYSDK_OFFSET(0x1EC6640)
#define <OPENSHORTCUTUI>D__20_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x1EC8360)
#define <OPENSHORTCUTUI>D__20_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1EC8370)
#define <OPENSHORTCUTUI>D__20_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1EC8AB0)
#define <OPENSHORTCUTUI>D__20_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x1EC8AC0)
#define <OPENSHORTCUTUI>D__20_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1EC8B10)

	inline static constexpr unsigned int <OpenShortcutUI>d__20_TypeDefinitionIndex = 1768;

	class <OpenShortcutUI>d__20 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		::FlatData::OpenConditionContent* content; // 0x20
		<>c__DisplayClass20_0* __8__1; // 0x28
		Il2CppObject* _excel_5__2; // 0x30
		::System::String* _lastUIName_5__3; // 0x48

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <OPENSHORTCUTUI>D__20_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <OPENSHORTCUTUI>D__20_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <OPENSHORTCUTUI>D__20_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <OPENSHORTCUTUI>D__20_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <OPENSHORTCUTUI>D__20_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <OPENSHORTCUTUI>D__20_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

