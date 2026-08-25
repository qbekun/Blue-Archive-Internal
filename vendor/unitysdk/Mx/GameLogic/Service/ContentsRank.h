#pragma once
#include "../../../unitysdk.h"

namespace MX::GameLogic::Service { class ContentsRank; }

#define MX_GAMELOGIC_SERVICE_CONTENTSRANK_GET_CONDITION01_OFFSET UNITYSDK_OFFSET(0xF60560)
#define MX_GAMELOGIC_SERVICE_CONTENTSRANK_GET_CONDITION02_OFFSET UNITYSDK_OFFSET(0xF60570)
#define MX_GAMELOGIC_SERVICE_CONTENTSRANK_GET_CONDITION03_OFFSET UNITYSDK_OFFSET(0xF60580)
#define MX_GAMELOGIC_SERVICE_CONTENTSRANK_GET_RANKCOUNT_OFFSET UNITYSDK_OFFSET(0xF60590)
#define MX_GAMELOGIC_SERVICE_CONTENTSRANK_.CTOR_OFFSET UNITYSDK_OFFSET(0xF60630)
#define MX_GAMELOGIC_SERVICE_CONTENTSRANK_.CTOR_OFFSET UNITYSDK_OFFSET(0xF60640)
#define MX_GAMELOGIC_SERVICE_CONTENTSRANK_.CCTOR_OFFSET UNITYSDK_OFFSET(0xF608B0)

namespace MX::GameLogic::Service
{
	inline static constexpr unsigned int ContentsRank_TypeDefinitionIndex = 12244;

	class ContentsRank : public Il2CppObject
	{
	public:
		::MX::GameLogic::Service::ContentsRank* Empty; // 0x0
		::System::Boolean _Condition01_k__BackingField; // 0x10
		::System::Boolean _Condition02_k__BackingField; // 0x11
		::System::Boolean _Condition03_k__BackingField; // 0x12

		::System::Boolean get_Condition01()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_CONTENTSRANK_GET_CONDITION01_OFFSET))(nullptr);
		}

		::System::Boolean get_Condition02()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_CONTENTSRANK_GET_CONDITION02_OFFSET))(nullptr);
		}

		::System::Boolean get_Condition03()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_CONTENTSRANK_GET_CONDITION03_OFFSET))(nullptr);
		}

		::System::Int32 get_RankCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_CONTENTSRANK_GET_RANKCOUNT_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Boolean arg, ::System::Boolean arg2, ::System::Boolean arg3)
		{
			((::System::Void(*)(::System::Boolean, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_CONTENTSRANK_.CTOR_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void .ctor(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_CONTENTSRANK_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_CONTENTSRANK_.CCTOR_OFFSET))(nullptr);
		}

	};
}

