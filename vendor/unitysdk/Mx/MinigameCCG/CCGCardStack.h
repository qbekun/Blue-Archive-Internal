#pragma once
#include "../../unitysdk.h"

namespace MX::MinigameCCG { class CCGCard&; }
namespace MX::Core::Math { class IRandomService; }
namespace MX::MinigameCCG { class CCGCard; }

#define MX_MINIGAMECCG_CCGCARDSTACK_TRYPEEK_OFFSET UNITYSDK_OFFSET(0x1DB9100)
#define MX_MINIGAMECCG_CCGCARDSTACK_.CTOR_OFFSET UNITYSDK_OFFSET(0x1DB9180)
#define MX_MINIGAMECCG_CCGCARDSTACK_SHUFFLE_OFFSET UNITYSDK_OFFSET(0x1DB9200)
#define MX_MINIGAMECCG_CCGCARDSTACK_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x1DB9270)
#define MX_MINIGAMECCG_CCGCARDSTACK_PUSHBOTTOM_OFFSET UNITYSDK_OFFSET(0x1DB92B0)
#define MX_MINIGAMECCG_CCGCARDSTACK_TRYPOP_OFFSET UNITYSDK_OFFSET(0x1DB9330)
#define MX_MINIGAMECCG_CCGCARDSTACK_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1DB93E0)
#define MX_MINIGAMECCG_CCGCARDSTACK_PUSHTOP_OFFSET UNITYSDK_OFFSET(0x1DB9460)
#define MX_MINIGAMECCG_CCGCARDSTACK_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1DB9540)
#define MX_MINIGAMECCG_CCGCARDSTACK_REMOVE_OFFSET UNITYSDK_OFFSET(0x1DB95C0)

namespace MX::MinigameCCG
{
	inline static constexpr unsigned int CCGCardStack_TypeDefinitionIndex = 20445;

	class CCGCardStack : public Il2CppObject
	{
	public:
		Il2CppObject* _cards; // 0x10

		::System::Boolean TryPeek(::MX::MinigameCCG::CCGCard&* arg)
		{
			return (return (::System::Boolean(*)(::MX::MinigameCCG::CCGCard&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGCARDSTACK_TRYPEEK_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGCARDSTACK_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Shuffle(::MX::Core::Math::IRandomService* arg)
		{
			((::System::Void(*)(::MX::Core::Math::IRandomService*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGCARDSTACK_SHUFFLE_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_Count()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGCARDSTACK_GET_COUNT_OFFSET))(nullptr);
		}

		::System::Void PushBottom(::MX::MinigameCCG::CCGCard* arg)
		{
			((::System::Void(*)(::MX::MinigameCCG::CCGCard*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGCARDSTACK_PUSHBOTTOM_OFFSET))(arg, nullptr);
		}

		::System::Boolean TryPop(::MX::MinigameCCG::CCGCard&* arg)
		{
			return (return (::System::Boolean(*)(::MX::MinigameCCG::CCGCard&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGCARDSTACK_TRYPOP_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* System.Collections.IEnumerable.GetEnumerator()
		{
			return (return (::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGCARDSTACK_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET))(nullptr);
		}

		::System::Void PushTop(::MX::MinigameCCG::CCGCard* arg)
		{
			((::System::Void(*)(::MX::MinigameCCG::CCGCard*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGCARDSTACK_PUSHTOP_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetEnumerator()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGCARDSTACK_GETENUMERATOR_OFFSET))(nullptr);
		}

		::System::Boolean Remove(::MX::MinigameCCG::CCGCard* arg)
		{
			return (return (::System::Boolean(*)(::MX::MinigameCCG::CCGCard*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGCARDSTACK_REMOVE_OFFSET))(arg, nullptr);
		}

	};
}

