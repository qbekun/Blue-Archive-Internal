#pragma once
#include "unitysdk.h"

namespace MXField::Core { class FieldSceneLoader; }
class <>c__DisplayClass42_0;
namespace MXField::Shared::Data { class FieldSceneInfo; }

#define <COEXECUTE>D__42_.CTOR_OFFSET UNITYSDK_OFFSET(0xED8C50)
#define <COEXECUTE>D__42_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0xED9560)
#define <COEXECUTE>D__42_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xED9570)
#define <COEXECUTE>D__42_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xED9B50)
#define <COEXECUTE>D__42_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0xED9B60)
#define <COEXECUTE>D__42_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xED9BB0)

	inline static constexpr unsigned int <CoExecute>d__42_TypeDefinitionIndex = 10959;

	class <CoExecute>d__42 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		::MXField::Core::FieldSceneLoader* __4__this; // 0x20
		::System::Int64 nextSceneId; // 0x28
		<>c__DisplayClass42_0* __8__1; // 0x30
		::MXField::Shared::Data::FieldSceneInfo* _currentSceneInfo_5__2; // 0x38

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <COEXECUTE>D__42_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <COEXECUTE>D__42_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <COEXECUTE>D__42_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <COEXECUTE>D__42_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <COEXECUTE>D__42_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <COEXECUTE>D__42_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

