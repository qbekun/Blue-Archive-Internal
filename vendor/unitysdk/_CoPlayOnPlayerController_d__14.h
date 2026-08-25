#pragma once
#include "unitysdk.h"

namespace MXField::UI { class FieldDialogElement; }
namespace FlatData { class FieldDialogType; }

#define <COPLAYONPLAYERCONTROLLER>D__14_.CTOR_OFFSET UNITYSDK_OFFSET(0xE882E0)
#define <COPLAYONPLAYERCONTROLLER>D__14_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0xE88FC0)
#define <COPLAYONPLAYERCONTROLLER>D__14_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xE88FD0)
#define <COPLAYONPLAYERCONTROLLER>D__14_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xE89200)
#define <COPLAYONPLAYERCONTROLLER>D__14_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0xE89210)
#define <COPLAYONPLAYERCONTROLLER>D__14_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xE89260)

	inline static constexpr unsigned int <CoPlayOnPlayerController>d__14_TypeDefinitionIndex = 10658;

	class <CoPlayOnPlayerController>d__14 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		::MXField::UI::FieldDialogElement* __4__this; // 0x20
		::FlatData::FieldDialogType* type; // 0x28

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <COPLAYONPLAYERCONTROLLER>D__14_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <COPLAYONPLAYERCONTROLLER>D__14_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <COPLAYONPLAYERCONTROLLER>D__14_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <COPLAYONPLAYERCONTROLLER>D__14_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <COPLAYONPLAYERCONTROLLER>D__14_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <COPLAYONPLAYERCONTROLLER>D__14_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

