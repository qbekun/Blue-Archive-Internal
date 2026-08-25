#pragma once
#include "unitysdk.h"

#define ATTENDRESULT_.CTOR_OFFSET UNITYSDK_OFFSET(0x1D11010)

	inline static constexpr unsigned int AttendResult_TypeDefinitionIndex = 1612;

	class AttendResult : public Il2CppObject
	{
	public:
		::System::Int64 ZoneId; // 0x10
		::System::Int64 Count; // 0x18
		::System::Boolean LocationRankChanged; // 0x20
		Il2CppObject* VisitorList; // 0x28
		Il2CppObject* FavorRankChangeList; // 0x30
		Il2CppObject* RewardList; // 0x38
		Il2CppObject* ExtraRewardList; // 0x40
		::System::Boolean LocationRefreshed; // 0x48
		Il2CppObject* AddedCollectionList; // 0x50

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ATTENDRESULT_.CTOR_OFFSET))(nullptr);
		}

	};

