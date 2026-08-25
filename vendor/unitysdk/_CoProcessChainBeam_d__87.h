#pragma once
#include "unitysdk.h"

namespace MX::Logic::Data { class ChainBeamValue; }
namespace MX::Logic::BattleEntities { class Beam; }
namespace MX::Logic::Skills { class TargetCandidateRule; }
namespace MX::Logic::Skills { class TargetSortRule; }

#define <COPROCESSCHAINBEAM>D__87_.CTOR_OFFSET UNITYSDK_OFFSET(0x119D180)
#define <COPROCESSCHAINBEAM>D__87_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x119DF20)
#define <COPROCESSCHAINBEAM>D__87_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x119DF30)
#define <COPROCESSCHAINBEAM>D__87_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x119EDD0)
#define <COPROCESSCHAINBEAM>D__87_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x119EDE0)
#define <COPROCESSCHAINBEAM>D__87_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x119EE30)

	inline static constexpr unsigned int <CoProcessChainBeam>d__87_TypeDefinitionIndex = 13302;

	class <CoProcessChainBeam>d__87 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		::MX::Logic::Data::ChainBeamValue* chainBeamValue; // 0x20
		::MX::Logic::BattleEntities::Beam* __4__this; // 0x28
		::MX::Logic::Skills::TargetCandidateRule* _candidateRule_5__2; // 0x30
		::MX::Logic::Skills::TargetSortRule* _sortRule_5__3; // 0xF0

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <COPROCESSCHAINBEAM>D__87_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <COPROCESSCHAINBEAM>D__87_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <COPROCESSCHAINBEAM>D__87_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <COPROCESSCHAINBEAM>D__87_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <COPROCESSCHAINBEAM>D__87_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <COPROCESSCHAINBEAM>D__87_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

