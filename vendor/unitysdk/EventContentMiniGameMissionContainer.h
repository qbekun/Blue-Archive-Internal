#pragma once
#include "unitysdk.h"

namespace MX::Data { class MiniGameMissionInfo; }

#define EVENTCONTENTMINIGAMEMISSIONCONTAINER_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1D11CB0)
#define EVENTCONTENTMINIGAMEMISSIONCONTAINER_.CTOR_OFFSET UNITYSDK_OFFSET(0x1D122C0)
#define EVENTCONTENTMINIGAMEMISSIONCONTAINER__INITIALIZE_B__1_0_OFFSET UNITYSDK_OFFSET(0x1D12450)

	inline static constexpr unsigned int EventContentMiniGameMissionContainer_TypeDefinitionIndex = 1620;

	class EventContentMiniGameMissionContainer : public Il2CppObject
	{
	public:
		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTMINIGAMEMISSIONCONTAINER_INITIALIZE_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTMINIGAMEMISSIONCONTAINER_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Boolean _Initialize_b__1_0(::MX::Data::MiniGameMissionInfo* arg)
		{
			return ((::System::Boolean(*)(::MX::Data::MiniGameMissionInfo*, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTMINIGAMEMISSIONCONTAINER__INITIALIZE_B__1_0_OFFSET))(arg, nullptr);
		}

	};

