#pragma once
#include "unitysdk.h"

namespace MX::GameLogic::DBModel { class AssistCharacterDB; }

#define <COSTARTBATTLE>D__62_.CTOR_OFFSET UNITYSDK_OFFSET(0x1AD98F0)
#define <COSTARTBATTLE>D__62_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x1ADA1F0)
#define <COSTARTBATTLE>D__62_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1ADA200)
#define <COSTARTBATTLE>D__62_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1ADA3D0)
#define <COSTARTBATTLE>D__62_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x1ADA3E0)
#define <COSTARTBATTLE>D__62_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1ADA430)

	inline static constexpr unsigned int <CoStartBattle>d__62_TypeDefinitionIndex = 1441;

	class <CoStartBattle>d__62 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		::System::Int64 stageId; // 0x20
		::System::Int64 echelonNumber; // 0x28
		::System::Int64 eventContentId; // 0x30
		::MX::GameLogic::DBModel::AssistCharacterDB* assistCharacterDB; // 0x38
		::System::Int64 tileUniqueId; // 0x40
		::System::Boolean useManageEchelon; // 0x48

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <COSTARTBATTLE>D__62_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <COSTARTBATTLE>D__62_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <COSTARTBATTLE>D__62_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <COSTARTBATTLE>D__62_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <COSTARTBATTLE>D__62_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <COSTARTBATTLE>D__62_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

