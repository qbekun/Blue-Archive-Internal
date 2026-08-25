#pragma once
#include "unitysdk.h"

namespace MX::Logic::Data { class BattleTypes; }
namespace MX::Visual::Battles { class ShowResultSubScene; }

#define <COSHOWBATTLERESULT>D__9_.CTOR_OFFSET UNITYSDK_OFFSET(0x1D7C5C0)
#define <COSHOWBATTLERESULT>D__9_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x1D7CFB0)
#define <COSHOWBATTLERESULT>D__9_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1D7CFC0)
#define <COSHOWBATTLERESULT>D__9_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1D7E490)
#define <COSHOWBATTLERESULT>D__9_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x1D7E4A0)
#define <COSHOWBATTLERESULT>D__9_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1D7E4F0)

	inline static constexpr unsigned int <CoShowBattleResult>d__9_TypeDefinitionIndex = 20325;

	class <CoShowBattleResult>d__9 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		::MX::Logic::Data::BattleTypes* battleType; // 0x20
		BattleResultType* battleResultType; // 0x24
		::System::Int64 stageId; // 0x28
		::MX::Visual::Battles::ShowResultSubScene* __4__this; // 0x30
		<>c__DisplayClass9_0* __8__1; // 0x38
		MXBattleTask* _battleTask_5__2; // 0x40

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <COSHOWBATTLERESULT>D__9_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <COSHOWBATTLERESULT>D__9_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <COSHOWBATTLERESULT>D__9_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <COSHOWBATTLERESULT>D__9_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <COSHOWBATTLERESULT>D__9_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <COSHOWBATTLERESULT>D__9_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

