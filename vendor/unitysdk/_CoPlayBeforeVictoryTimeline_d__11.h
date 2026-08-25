#pragma once
#include "unitysdk.h"

namespace MX::Visual::Battles { class ShowResultSubScene; }

#define <COPLAYBEFOREVICTORYTIMELINE>D__11_.CTOR_OFFSET UNITYSDK_OFFSET(0x1D7C890)
#define <COPLAYBEFOREVICTORYTIMELINE>D__11_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x1D7E850)
#define <COPLAYBEFOREVICTORYTIMELINE>D__11_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1D7E860)
#define <COPLAYBEFOREVICTORYTIMELINE>D__11_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1D7F2A0)
#define <COPLAYBEFOREVICTORYTIMELINE>D__11_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x1D7F2B0)
#define <COPLAYBEFOREVICTORYTIMELINE>D__11_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1D7F300)

	inline static constexpr unsigned int <CoPlayBeforeVictoryTimeline>d__11_TypeDefinitionIndex = 20330;

	class <CoPlayBeforeVictoryTimeline>d__11 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		::MX::Visual::Battles::ShowResultSubScene* __4__this; // 0x20
		<>c__DisplayClass11_0* __8__1; // 0x28
		<>c__DisplayClass11_1* __8__2; // 0x30

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <COPLAYBEFOREVICTORYTIMELINE>D__11_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <COPLAYBEFOREVICTORYTIMELINE>D__11_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <COPLAYBEFOREVICTORYTIMELINE>D__11_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <COPLAYBEFOREVICTORYTIMELINE>D__11_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <COPLAYBEFOREVICTORYTIMELINE>D__11_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <COPLAYBEFOREVICTORYTIMELINE>D__11_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

