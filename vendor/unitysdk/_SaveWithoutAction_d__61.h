#pragma once
#include "unitysdk.h"

namespace MXField::Core::Save { class FieldSaveSO; }

#define <SAVEWITHOUTACTION>D__61_.CTOR_OFFSET UNITYSDK_OFFSET(0xEE2650)
#define <SAVEWITHOUTACTION>D__61_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0xEE2840)
#define <SAVEWITHOUTACTION>D__61_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xEE2850)
#define <SAVEWITHOUTACTION>D__61_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xEE2C80)
#define <SAVEWITHOUTACTION>D__61_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0xEE2C90)
#define <SAVEWITHOUTACTION>D__61_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xEE2CE0)

	inline static constexpr unsigned int <SaveWithoutAction>d__61_TypeDefinitionIndex = 11001;

	class <SaveWithoutAction>d__61 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		::MXField::Core::Save::FieldSaveSO* __4__this; // 0x20
		::System::Int64 dateId; // 0x28
		::System::Int64 sceneId; // 0x30
		::System::Boolean savePlayerData; // 0x38
		::System::String* _path_5__2; // 0x40
		::System::Threading::Tasks::Task* _task_5__3; // 0x48

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <SAVEWITHOUTACTION>D__61_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <SAVEWITHOUTACTION>D__61_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <SAVEWITHOUTACTION>D__61_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <SAVEWITHOUTACTION>D__61_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <SAVEWITHOUTACTION>D__61_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <SAVEWITHOUTACTION>D__61_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

