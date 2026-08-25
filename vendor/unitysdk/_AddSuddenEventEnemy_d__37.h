#pragma once
#include "unitysdk.h"

class ConquestTileVisual;
class ConquestTileMapVisual;

#define <ADDSUDDENEVENTENEMY>D__37_.CTOR_OFFSET UNITYSDK_OFFSET(0x1D060A0)
#define <ADDSUDDENEVENTENEMY>D__37_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x1D060C0)
#define <ADDSUDDENEVENTENEMY>D__37_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1D060D0)
#define <ADDSUDDENEVENTENEMY>D__37_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1D06510)
#define <ADDSUDDENEVENTENEMY>D__37_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x1D06520)
#define <ADDSUDDENEVENTENEMY>D__37_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1D06570)

	inline static constexpr unsigned int <AddSuddenEventEnemy>d__37_TypeDefinitionIndex = 1558;

	class <AddSuddenEventEnemy>d__37 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		::System::Int64 unitId; // 0x20
		ConquestTileVisual* tileVisual; // 0x28
		ConquestTileMapVisual* __4__this; // 0x30
		::System::Action* onFinished; // 0x38

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <ADDSUDDENEVENTENEMY>D__37_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <ADDSUDDENEVENTENEMY>D__37_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <ADDSUDDENEVENTENEMY>D__37_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <ADDSUDDENEVENTENEMY>D__37_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <ADDSUDDENEVENTENEMY>D__37_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <ADDSUDDENEVENTENEMY>D__37_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

