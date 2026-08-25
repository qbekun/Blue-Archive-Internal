#pragma once
#include "../../unitysdk.h"

namespace MX::MinigameCCG { class CCGTargetCategoryRule; }
namespace MX::MinigameCCG { class CCGGame; }
namespace MX::MinigameCCG { class CCGPlayer; }
namespace MX::MinigameCCG { class ICCGCharacterData; }

#define MX_MINIGAMECCG_CCGSPECIAL_CHECKTARGETCATEGORYRULE_OFFSET UNITYSDK_OFFSET(0x1DCA630)
#define MX_MINIGAMECCG_CCGSPECIAL_GET_ALIVE_OFFSET UNITYSDK_OFFSET(0x1DCA640)
#define MX_MINIGAMECCG_CCGSPECIAL_.CTOR_OFFSET UNITYSDK_OFFSET(0x1DBEA30)
#define MX_MINIGAMECCG_CCGSPECIAL_GETFIELD_OFFSET UNITYSDK_OFFSET(0x1DCA650)

namespace MX::MinigameCCG
{
	inline static constexpr unsigned int CCGSpecial_TypeDefinitionIndex = 20512;

	class CCGSpecial : public Il2CppObject
	{
	public:
		::System::Boolean CheckTargetCategoryRule(::MX::MinigameCCG::CCGTargetCategoryRule* arg)
		{
			return (return (::System::Boolean(*)(::MX::MinigameCCG::CCGTargetCategoryRule*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGSPECIAL_CHECKTARGETCATEGORYRULE_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_Alive()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGSPECIAL_GET_ALIVE_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::MinigameCCG::CCGGame* arg, ::MX::MinigameCCG::CCGPlayer* arg, ::MX::MinigameCCG::ICCGCharacterData* arg)
		{
			((::System::Void(*)(::MX::MinigameCCG::CCGGame*, ::MX::MinigameCCG::CCGPlayer*, ::MX::MinigameCCG::ICCGCharacterData*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGSPECIAL_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Object* GetField(::System::String* str)
		{
			return (return (::System::Object*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGSPECIAL_GETFIELD_OFFSET))(str, nullptr);
		}

	};
}

