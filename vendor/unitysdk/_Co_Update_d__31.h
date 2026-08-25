#pragma once
#include "unitysdk.h"

namespace BoardGame { class UIConcentrationBoard; }
namespace BoardGame { class BoardGameUpdateData; }
class <>c__DisplayClass31_1;
namespace BoardGame { class Concentration_FlipAllRemainCards; }

#define <CO_UPDATE>D__31_.CTOR_OFFSET UNITYSDK_OFFSET(0xE0BB90)
#define <CO_UPDATE>D__31_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0xE0DCE0)
#define <CO_UPDATE>D__31_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xE0DCF0)
#define <CO_UPDATE>D__31_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xE0FBB0)
#define <CO_UPDATE>D__31_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0xE0FBC0)
#define <CO_UPDATE>D__31_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xE0FC10)

	inline static constexpr unsigned int <Co_Update>d__31_TypeDefinitionIndex = 10281;

	class <Co_Update>d__31 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		::BoardGame::UIConcentrationBoard* __4__this; // 0x20
		::BoardGame::BoardGameUpdateData* updateData; // 0x28
		<>c__DisplayClass31_1* __8__1; // 0x30
		::BoardGame::Concentration_FlipAllRemainCards* _flipAllData_5__2; // 0x38

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <CO_UPDATE>D__31_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_UPDATE>D__31_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_UPDATE>D__31_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_UPDATE>D__31_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_UPDATE>D__31_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_UPDATE>D__31_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

