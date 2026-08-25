#pragma once
#include "unitysdk.h"

class UIStageSelect;

#define <COWAITFORCREATESTAGELIST>D__80_.CTOR_OFFSET UNITYSDK_OFFSET(0xB1D700)
#define <COWAITFORCREATESTAGELIST>D__80_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0xB23040)
#define <COWAITFORCREATESTAGELIST>D__80_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xB23050)
#define <COWAITFORCREATESTAGELIST>D__80_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xB23130)
#define <COWAITFORCREATESTAGELIST>D__80_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0xB23140)
#define <COWAITFORCREATESTAGELIST>D__80_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xB23190)

	inline static constexpr unsigned int <CoWaitForCreateStageList>d__80_TypeDefinitionIndex = 8246;

	class <CoWaitForCreateStageList>d__80 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		UIStageSelect* __4__this; // 0x20

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <COWAITFORCREATESTAGELIST>D__80_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <COWAITFORCREATESTAGELIST>D__80_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <COWAITFORCREATESTAGELIST>D__80_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <COWAITFORCREATESTAGELIST>D__80_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <COWAITFORCREATESTAGELIST>D__80_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <COWAITFORCREATESTAGELIST>D__80_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

