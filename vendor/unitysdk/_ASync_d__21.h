#pragma once
#include "unitysdk.h"

class HexaTileMapVisual;
namespace MX::GameLogic::DBModel { class CampaignMainStageSaveDB; }
class <>c__DisplayClass21_0;
class <>c__DisplayClass21_2;

#define <ASYNC>D__21_.CTOR_OFFSET UNITYSDK_OFFSET(0xF79FE0)
#define <ASYNC>D__21_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0xF7B880)
#define <ASYNC>D__21_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xF7B8E0)
#define <ASYNC>D__21___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0xF7C540)
#define <ASYNC>D__21_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xF7C590)
#define <ASYNC>D__21_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0xF7C5A0)
#define <ASYNC>D__21_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xF7C5F0)

	inline static constexpr unsigned int <ASync>d__21_TypeDefinitionIndex = 834;

	class <ASync>d__21 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		HexaTileMapVisual* __4__this; // 0x20
		::MX::GameLogic::DBModel::CampaignMainStageSaveDB* saveData; // 0x28
		<>c__DisplayClass21_0* __8__1; // 0x30
		<>c__DisplayClass21_2* __8__2; // 0x38
		Il2CppObject* __7__wrap1; // 0x40

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <ASYNC>D__21_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <ASYNC>D__21_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <ASYNC>D__21_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void __m__Finally1()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <ASYNC>D__21___M__FINALLY1_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <ASYNC>D__21_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <ASYNC>D__21_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <ASYNC>D__21_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

