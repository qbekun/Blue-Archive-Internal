#pragma once
#include "unitysdk.h"

namespace MX::GameLogic::DBModel { class RaidDB; }
namespace MX::GameLogic::DBModel { class ClanAssistUseInfo; }

#define RAIDRETRYINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x1ED3560)

	inline static constexpr unsigned int RaidRetryInfo_TypeDefinitionIndex = 1794;

	class RaidRetryInfo : public Il2CppObject
	{
	public:
		::MX::GameLogic::DBModel::RaidDB* RaidDB; // 0x10
		::System::Int32 EchelonNumber; // 0x18
		::MX::GameLogic::DBModel::ClanAssistUseInfo* assistUseInfo; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RAIDRETRYINFO_.CTOR_OFFSET))(nullptr);
		}

	};

