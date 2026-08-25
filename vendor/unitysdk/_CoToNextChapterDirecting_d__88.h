#pragma once
#include "unitysdk.h"

class UIStageSelect;

#define <COTONEXTCHAPTERDIRECTING>D__88_.CTOR_OFFSET UNITYSDK_OFFSET(0xB21EC0)
#define <COTONEXTCHAPTERDIRECTING>D__88_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0xB25CC0)
#define <COTONEXTCHAPTERDIRECTING>D__88_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xB25CD0)
#define <COTONEXTCHAPTERDIRECTING>D__88_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xB25F60)
#define <COTONEXTCHAPTERDIRECTING>D__88_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0xB25F70)
#define <COTONEXTCHAPTERDIRECTING>D__88_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xB25FC0)

	inline static constexpr unsigned int <CoToNextChapterDirecting>d__88_TypeDefinitionIndex = 8258;

	class <CoToNextChapterDirecting>d__88 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		UIStageSelect* __4__this; // 0x20
		::System::Action* onFinished; // 0x28

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <COTONEXTCHAPTERDIRECTING>D__88_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <COTONEXTCHAPTERDIRECTING>D__88_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <COTONEXTCHAPTERDIRECTING>D__88_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <COTONEXTCHAPTERDIRECTING>D__88_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <COTONEXTCHAPTERDIRECTING>D__88_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <COTONEXTCHAPTERDIRECTING>D__88_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

