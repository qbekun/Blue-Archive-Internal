#pragma once
#include "unitysdk.h"

namespace MX::MinigameCCG { class CCGZoneCard; }
namespace MX::MinigameCCG { class CCGEntity; }
namespace Cysharp::Threading::Tasks { class UniTask; }
namespace MX::MinigameCCG::UI { class UICardGame_InGame_Tooltip_Card; }

#define CCGVISUALZONECARD_TRYUSEENTITY_OFFSET UNITYSDK_OFFSET(0x26EB650)
#define CCGVISUALZONECARD_.CTOR_OFFSET UNITYSDK_OFFSET(0x26EB6A0)
#define CCGVISUALZONECARD_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x26EB6B0)
#define CCGVISUALZONECARD_ONCLICKEVENT_OFFSET UNITYSDK_OFFSET(0x26EB980)
#define CCGVISUALZONECARD_REFRESH_OFFSET UNITYSDK_OFFSET(0x26EB800)
#define CCGVISUALZONECARD__ONCLICKEVENT_B__4_0_OFFSET UNITYSDK_OFFSET(0x26EBB40)

	inline static constexpr unsigned int CCGVisualZoneCard_TypeDefinitionIndex = 412;

	class CCGVisualZoneCard : public Il2CppObject
	{
	public:
		::MX::MinigameCCG::CCGZoneCard* card; // 0x68

		::System::Boolean TryUseEntity()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CCGVISUALZONECARD_TRYUSEENTITY_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCGVISUALZONECARD_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Initialize(::MX::MinigameCCG::CCGEntity* arg)
		{
			((::System::Void(*)(::MX::MinigameCCG::CCGEntity*, ::PVOID))((::PBYTE)hIl2Cpp + CCGVISUALZONECARD_INITIALIZE_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickEvent(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + CCGVISUALZONECARD_ONCLICKEVENT_OFFSET))(arg, nullptr);
		}

		::Cysharp::Threading::Tasks::UniTask* Refresh()
		{
			return ((::Cysharp::Threading::Tasks::UniTask*(*)(::PVOID))((::PBYTE)hIl2Cpp + CCGVISUALZONECARD_REFRESH_OFFSET))(nullptr);
		}

		::System::Void _OnClickEvent_b__4_0(::MX::MinigameCCG::UI::UICardGame_InGame_Tooltip_Card* arg)
		{
			((::System::Void(*)(::MX::MinigameCCG::UI::UICardGame_InGame_Tooltip_Card*, ::PVOID))((::PBYTE)hIl2Cpp + CCGVISUALZONECARD__ONCLICKEVENT_B__4_0_OFFSET))(arg, nullptr);
		}

	};

