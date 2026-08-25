#pragma once
#include "unitysdk.h"

class BattlePassData;

#define BATTLEPASSDATACLIENT_TRYGETREWARDEXCELBYID_OFFSET UNITYSDK_OFFSET(0x21503C0)
#define BATTLEPASSDATACLIENT_TRYGETALLREWARDEXCELBYGROUPIDLEVEL_OFFSET UNITYSDK_OFFSET(0x2150500)
#define BATTLEPASSDATACLIENT_TRYGETALLREWARDEXCELBYGROUPID_OFFSET UNITYSDK_OFFSET(0x2150650)
#define BATTLEPASSDATACLIENT_TRYGETALLFLAVORTEXTEXCELBYID_OFFSET UNITYSDK_OFFSET(0x2150710)
#define BATTLEPASSDATACLIENT_.CTOR_OFFSET UNITYSDK_OFFSET(0x214E230)

	inline static constexpr unsigned int BattlePassDataClient_TypeDefinitionIndex = 3962;

	class BattlePassDataClient : public Il2CppObject
	{
	public:
		BattlePassData* data; // 0x10

		::System::Boolean TryGetRewardExcelById(::System::Int64 arg, Il2CppObject&* arg2)
		{
			return ((::System::Boolean(*)(::System::Int64, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + BATTLEPASSDATACLIENT_TRYGETREWARDEXCELBYID_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean TryGetAllRewardExcelByGroupIdLevel(::System::Int64 arg, ::System::Int64 arg2, Il2CppObject&* arg3)
		{
			return ((::System::Boolean(*)(::System::Int64, ::System::Int64, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + BATTLEPASSDATACLIENT_TRYGETALLREWARDEXCELBYGROUPIDLEVEL_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Boolean TryGetAllRewardExcelByGroupId(::System::Int64 arg, Il2CppObject&* arg2)
		{
			return ((::System::Boolean(*)(::System::Int64, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + BATTLEPASSDATACLIENT_TRYGETALLREWARDEXCELBYGROUPID_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean TryGetAllFlavorTextExcelById(::System::Int64 arg, Il2CppObject&* arg2)
		{
			return ((::System::Boolean(*)(::System::Int64, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + BATTLEPASSDATACLIENT_TRYGETALLFLAVORTEXTEXCELBYID_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor(BattlePassData* arg)
		{
			((::System::Void(*)(BattlePassData*, ::PVOID))((::PBYTE)hIl2Cpp + BATTLEPASSDATACLIENT_.CTOR_OFFSET))(arg, nullptr);
		}

	};

