#pragma once
#include "../../unitysdk.h"

namespace MX::MinigameCCG { class CCGGame; }
namespace MX::MinigameCCG { class CCGPlayer; }
namespace MX::MinigameCCG { class ICCGCardData; }
namespace MX::MinigameCCG { class CCGCard; }
namespace MX::MinigameCCG { class CCGTargetCategoryRule; }

#define MX_MINIGAMECCG_CCGZONECARD_.CTOR_OFFSET UNITYSDK_OFFSET(0x1DC6DC0)
#define MX_MINIGAMECCG_CCGZONECARD_.CTOR_OFFSET UNITYSDK_OFFSET(0x1DCB240)
#define MX_MINIGAMECCG_CCGZONECARD_CLONECARD_OFFSET UNITYSDK_OFFSET(0x1DCB270)
#define MX_MINIGAMECCG_CCGZONECARD_CHECKTARGETCATEGORYRULE_OFFSET UNITYSDK_OFFSET(0x1DCB5A0)

namespace MX::MinigameCCG
{
	inline static constexpr unsigned int CCGZoneCard_TypeDefinitionIndex = 20515;

	class CCGZoneCard : public Il2CppObject
	{
	public:
		::System::Void .ctor(::MX::MinigameCCG::CCGGame* arg, ::MX::MinigameCCG::CCGPlayer* arg, ::MX::MinigameCCG::ICCGCardData* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::MX::MinigameCCG::CCGGame*, ::MX::MinigameCCG::CCGPlayer*, ::MX::MinigameCCG::ICCGCardData*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGZONECARD_.CTOR_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Int32 arg, ::MX::MinigameCCG::CCGGame* arg, ::MX::MinigameCCG::CCGPlayer* arg, ::MX::MinigameCCG::ICCGCardData* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::Int32, ::MX::MinigameCCG::CCGGame*, ::MX::MinigameCCG::CCGPlayer*, ::MX::MinigameCCG::ICCGCardData*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGZONECARD_.CTOR_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::MX::MinigameCCG::CCGCard* CloneCard(::MX::MinigameCCG::CCGPlayer* arg, Il2CppObject* arg, Il2CppObject* arg)
		{
			return (return (::MX::MinigameCCG::CCGCard*(*)(::MX::MinigameCCG::CCGPlayer*, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGZONECARD_CLONECARD_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean CheckTargetCategoryRule(::MX::MinigameCCG::CCGTargetCategoryRule* arg)
		{
			return (return (::System::Boolean(*)(::MX::MinigameCCG::CCGTargetCategoryRule*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGZONECARD_CHECKTARGETCATEGORYRULE_OFFSET))(arg, nullptr);
		}

	};
}

