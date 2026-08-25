#pragma once
#include "../../unitysdk.h"

namespace MX::MinigameCCG { class ICCGCardData; }
namespace MX::MinigameCCG { class CCGSkillData; }
namespace MX::MinigameCCG { class CCGGame; }
namespace MX::MinigameCCG { class CCGPlayer; }
namespace MX::MinigameCCG { class CCGCard; }
namespace MX::MinigameCCG { class CCGEntityStatType; }

#define MX_MINIGAMECCG_CCGCARD_GET_DATA_OFFSET UNITYSDK_OFFSET(0x1DC66D0)
#define MX_MINIGAMECCG_CCGCARD_GET_CARDID_OFFSET UNITYSDK_OFFSET(0x1DC5410)
#define MX_MINIGAMECCG_CCGCARD_GET_ACTIVESKILL_OFFSET UNITYSDK_OFFSET(0x1DC66E0)
#define MX_MINIGAMECCG_CCGCARD_GET_PASSIVESKILLS_OFFSET UNITYSDK_OFFSET(0x1DC6780)
#define MX_MINIGAMECCG_CCGCARD_GET_TAGS_OFFSET UNITYSDK_OFFSET(0x1DC6820)
#define MX_MINIGAMECCG_CCGCARD_GET_ISDISPOSAL_OFFSET UNITYSDK_OFFSET(0x1DC68C0)
#define MX_MINIGAMECCG_CCGCARD_GET_ALIVE_OFFSET UNITYSDK_OFFSET(0x1DC68D0)
#define MX_MINIGAMECCG_CCGCARD_.CTOR_OFFSET UNITYSDK_OFFSET(0x1DC6960)
#define MX_MINIGAMECCG_CCGCARD_.CTOR_OFFSET UNITYSDK_OFFSET(0x1DC6B70)
#define MX_MINIGAMECCG_CCGCARD_CREATEENTITY_OFFSET UNITYSDK_OFFSET(0x1DBE680)
#define MX_MINIGAMECCG_CCGCARD_CLONECARD_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_MINIGAMECCG_CCGCARD_GETSTATBASEVALUE_OFFSET UNITYSDK_OFFSET(0x1DC6DE0)
#define MX_MINIGAMECCG_CCGCARD_GETFIELD_OFFSET UNITYSDK_OFFSET(0x1DC6F20)

namespace MX::MinigameCCG
{
	inline static constexpr unsigned int CCGCard_TypeDefinitionIndex = 20501;

	class CCGCard : public Il2CppObject
	{
	public:
		::MX::MinigameCCG::ICCGCardData* _Data_k__BackingField; // 0x38
		::System::Boolean _IsDisposal_k__BackingField; // 0x40

		::MX::MinigameCCG::ICCGCardData* get_Data()
		{
			return (return (::MX::MinigameCCG::ICCGCardData*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGCARD_GET_DATA_OFFSET))(nullptr);
		}

		::System::Int64 get_CardId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGCARD_GET_CARDID_OFFSET))(nullptr);
		}

		::MX::MinigameCCG::CCGSkillData* get_ActiveSkill()
		{
			return (return (::MX::MinigameCCG::CCGSkillData*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGCARD_GET_ACTIVESKILL_OFFSET))(nullptr);
		}

		Il2CppObject* get_PassiveSkills()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGCARD_GET_PASSIVESKILLS_OFFSET))(nullptr);
		}

		Il2CppObject* get_Tags()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGCARD_GET_TAGS_OFFSET))(nullptr);
		}

		::System::Boolean get_IsDisposal()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGCARD_GET_ISDISPOSAL_OFFSET))(nullptr);
		}

		::System::Boolean get_Alive()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGCARD_GET_ALIVE_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::MinigameCCG::CCGGame* arg, ::MX::MinigameCCG::CCGPlayer* arg, ::MX::MinigameCCG::ICCGCardData* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::MX::MinigameCCG::CCGGame*, ::MX::MinigameCCG::CCGPlayer*, ::MX::MinigameCCG::ICCGCardData*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGCARD_.CTOR_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Int32 arg, ::MX::MinigameCCG::CCGGame* arg, ::MX::MinigameCCG::CCGPlayer* arg, ::MX::MinigameCCG::ICCGCardData* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::Int32, ::MX::MinigameCCG::CCGGame*, ::MX::MinigameCCG::CCGPlayer*, ::MX::MinigameCCG::ICCGCardData*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGCARD_.CTOR_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::MX::MinigameCCG::CCGCard* CreateEntity(::MX::MinigameCCG::CCGGame* arg, ::MX::MinigameCCG::CCGPlayer* arg, ::MX::MinigameCCG::ICCGCardData* arg)
		{
			return (return (::MX::MinigameCCG::CCGCard*(*)(::MX::MinigameCCG::CCGGame*, ::MX::MinigameCCG::CCGPlayer*, ::MX::MinigameCCG::ICCGCardData*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGCARD_CREATEENTITY_OFFSET))(arg, arg, arg, nullptr);
		}

		::MX::MinigameCCG::CCGCard* CloneCard(::MX::MinigameCCG::CCGPlayer* arg, Il2CppObject* arg, Il2CppObject* arg)
		{
			return (return (::MX::MinigameCCG::CCGCard*(*)(::MX::MinigameCCG::CCGPlayer*, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGCARD_CLONECARD_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 GetStatBaseValue(::MX::MinigameCCG::CCGEntityStatType* arg)
		{
			return (return (::System::Int32(*)(::MX::MinigameCCG::CCGEntityStatType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGCARD_GETSTATBASEVALUE_OFFSET))(arg, nullptr);
		}

		::System::Object* GetField(::System::String* str)
		{
			return (return (::System::Object*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGCARD_GETFIELD_OFFSET))(str, nullptr);
		}

	};
}

