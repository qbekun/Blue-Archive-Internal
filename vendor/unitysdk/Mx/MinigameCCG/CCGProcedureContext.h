#pragma once
#include "../../unitysdk.h"

namespace MX::MinigameCCG { class CCGGame; }
namespace MX::MinigameCCG { class ICCGProcedureData; }
namespace MX::MinigameCCG { class CCGPlayer; }
namespace MX::Core::Expressions { class Expression; }
namespace MX::Core::Expressions { class ParameterArgs; }

#define MX_MINIGAMECCG_CCGPROCEDURECONTEXT_GET_GAME_OFFSET UNITYSDK_OFFSET(0x1DC55D0)
#define MX_MINIGAMECCG_CCGPROCEDURECONTEXT_GET_PROCEDUREDATA_OFFSET UNITYSDK_OFFSET(0x1DC55E0)
#define MX_MINIGAMECCG_CCGPROCEDURECONTEXT_GET_PLAYER_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_MINIGAMECCG_CCGPROCEDURECONTEXT_GET_STORAGE_OFFSET UNITYSDK_OFFSET(0x1DC55F0)
#define MX_MINIGAMECCG_CCGPROCEDURECONTEXT_.CTOR_OFFSET UNITYSDK_OFFSET(0x1DC5600)
#define MX_MINIGAMECCG_CCGPROCEDURECONTEXT_GET_OFFSET UNITYSDK_OFFSET(0x1DC5A30)
#define MX_MINIGAMECCG_CCGPROCEDURECONTEXT_GET_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_MINIGAMECCG_CCGPROCEDURECONTEXT_STORE_OFFSET UNITYSDK_OFFSET(0x1DC5AC0)
#define MX_MINIGAMECCG_CCGPROCEDURECONTEXT_PARSEEXPRESSION_OFFSET UNITYSDK_OFFSET(0x1DC5B40)
#define MX_MINIGAMECCG_CCGPROCEDURECONTEXT_ONEVALUATEPARAMETERHANDLER_OFFSET UNITYSDK_OFFSET(0x1DC5BF0)

namespace MX::MinigameCCG
{
	inline static constexpr unsigned int CCGProcedureContext_TypeDefinitionIndex = 20495;

	class CCGProcedureContext : public Il2CppObject
	{
	public:
		::MX::MinigameCCG::CCGGame* _Game_k__BackingField; // 0x10
		::MX::MinigameCCG::ICCGProcedureData* _ProcedureData_k__BackingField; // 0x18
		Il2CppObject* _Storage_k__BackingField; // 0x20

		::MX::MinigameCCG::CCGGame* get_Game()
		{
			return (return (::MX::MinigameCCG::CCGGame*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGPROCEDURECONTEXT_GET_GAME_OFFSET))(nullptr);
		}

		::MX::MinigameCCG::ICCGProcedureData* get_ProcedureData()
		{
			return (return (::MX::MinigameCCG::ICCGProcedureData*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGPROCEDURECONTEXT_GET_PROCEDUREDATA_OFFSET))(nullptr);
		}

		::MX::MinigameCCG::CCGPlayer* get_Player()
		{
			return (return (::MX::MinigameCCG::CCGPlayer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGPROCEDURECONTEXT_GET_PLAYER_OFFSET))(nullptr);
		}

		Il2CppObject* get_Storage()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGPROCEDURECONTEXT_GET_STORAGE_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::MinigameCCG::CCGGame* arg, ::MX::MinigameCCG::ICCGProcedureData* arg)
		{
			((::System::Void(*)(::MX::MinigameCCG::CCGGame*, ::MX::MinigameCCG::ICCGProcedureData*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGPROCEDURECONTEXT_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Object* Get(::System::String* str)
		{
			return (return (::System::Object*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGPROCEDURECONTEXT_GET_OFFSET))(str, nullptr);
		}

		Il2CppObject* Get(::System::String* str, Il2CppObject* arg)
		{
			return (return (Il2CppObject*(*)(::System::String*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGPROCEDURECONTEXT_GET_OFFSET))(str, arg, nullptr);
		}

		::System::Void Store(::System::String* str, ::System::Object* arg)
		{
			((::System::Void(*)(::System::String*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGPROCEDURECONTEXT_STORE_OFFSET))(str, arg, nullptr);
		}

		::MX::Core::Expressions::Expression* ParseExpression(::System::String* str)
		{
			return (return (::MX::Core::Expressions::Expression*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGPROCEDURECONTEXT_PARSEEXPRESSION_OFFSET))(str, nullptr);
		}

		::System::Void OnEvaluateParameterHandler(::System::String* str, ::MX::Core::Expressions::ParameterArgs* arg)
		{
			((::System::Void(*)(::System::String*, ::MX::Core::Expressions::ParameterArgs*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGPROCEDURECONTEXT_ONEVALUATEPARAMETERHANDLER_OFFSET))(str, arg, nullptr);
		}

	};
}

